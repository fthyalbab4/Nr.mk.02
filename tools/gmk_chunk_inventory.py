#!/usr/bin/env python3
"""Build a reproducible, evidence-labelled inventory of GMK zlib streams."""
from pathlib import Path
import argparse, hashlib, json, struct, zlib

MAGIC = (0x01, 0x5E, 0x9C, 0xDA)
SPRITE_VERSIONS = {400, 430, 500, 520, 530, 542, 600, 701, 710, 800}

def printable_name(raw):
    if len(raw) < 8: return None
    version, n = struct.unpack_from('<ii', raw, 0)
    if version != 1 or not (1 <= n <= 64) or 8+n > len(raw): return None
    name = raw[8:8+n]
    return name.decode('ascii', 'replace') if all(32 <= b < 127 for b in name) else None

def has_sprite_frame(raw):
    for off in range(0, max(0, len(raw)-16), 4):
        ver, w, h, dlen = struct.unpack_from('<iiii', raw, off)
        if ver in SPRITE_VERSIONS and 1 <= w <= 2048 and 1 <= h <= 2048 and dlen == w*h*4 and off+16+dlen <= len(raw):
            return {'offset': off, 'version': ver, 'width': w, 'height': h, 'pixel_bytes': dlen}
    return None

def object_evidence(raw, name):
    if not name or len(raw) < 28: return None
    off = 8 + len(name) + 8
    if off + 20 > len(raw): return None
    version = struct.unpack_from('<i', raw, off)[0]
    if version not in {400, 430, 800}: return None
    sprite, solid, visible, depth, persistent = struct.unpack_from('<iiiii', raw, off+4)
    if solid not in (0,1) or visible not in (0,1) or not (-1 <= sprite <= 512) or not (-1000000 <= depth <= 1000000): return None
    return {'signature_version': version, 'sprite_index': sprite, 'solid': solid, 'visible': visible, 'depth': depth, 'persistent': persistent}

def room_evidence(raw, name):
    if not name or len(raw) < 40: return None
    off = 8 + len(name) + 8
    if off + 8 > len(raw): return None
    version = struct.unpack_from('<i', raw, off)[0]
    if version not in {520, 541, 800}: return None
    cursor = off + 4
    clen = struct.unpack_from('<i', raw, cursor)[0]; cursor += 4
    if clen < 0 or cursor+clen+20 > len(raw): return None
    cursor += clen
    width, height = struct.unpack_from('<ii', raw, cursor)
    if not (16 <= width <= 10000 and 16 <= height <= 10000): return None
    return {'signature_version': version, 'width': width, 'height': height}

def semantic_type(raw, name):
    low = (name or '').lower()
    obj = object_evidence(raw, name)
    room = room_evidence(raw, name)
    frame = has_sprite_frame(raw)
    is_room_name = low.startswith(('room','rm','r_','r0','r1','r2','level','stage'))
    is_object_name = low.startswith('obj')
    if room and is_room_name:
        return 'room', 'high', {'room': room}
    if obj and is_object_name:
        return 'object', 'high', {'object': obj}
    if frame:
        return 'sprite', 'high', {'sprite_frame': frame}
    if obj and not is_room_name:
        return 'object', 'medium', {'object': obj}
    if low.startswith(('spr','sprite','link_','mario','mini_mario','bloque','background')):
        return 'sprite', 'medium', {'name_prefix': low.split('_',1)[0]}
    return 'unknown', 'low', {}

def classify(raw):
    result = {'kind': 'zlib_payload', 'confidence': 'low'}
    name = printable_name(raw)
    if name is not None:
        result.update(kind='named_v1_resource', confidence='high', name=name, resource_version=1)
        semantic, confidence, evidence = semantic_type(raw, name)
        result.update(semantic_type=semantic, semantic_confidence=confidence, semantic_evidence=evidence)
    return result

def inventory(data):
    chunks=[]; i=12
    while i+2 < len(data):
        if data[i] != 0x78 or data[i+1] not in MAGIC:
            i += 1; continue
        dec=zlib.decompressobj()
        try: raw=dec.decompress(data[i:]) + dec.flush()
        except zlib.error:
            i += 1; continue
        consumed=len(data[i:])-len(dec.unused_data)
        if consumed <= 2:
            i += 1; continue
        item={'offset':i, 'compressed_size':consumed, 'decompressed_size':len(raw), 'sha256':hashlib.sha256(raw).hexdigest()}
        item.update(classify(raw)); chunks.append(item); i += consumed
    return chunks

def main():
    ap=argparse.ArgumentParser(); ap.add_argument('paths', nargs='+', type=Path); ap.add_argument('--pretty', action='store_true'); args=ap.parse_args()
    results=[]
    for path in args.paths:
        data=path.read_bytes(); chunks=inventory(data); counts={}; semantics={}
        for c in chunks:
            counts[c['kind']]=counts.get(c['kind'],0)+1
            if 'semantic_type' in c: semantics[c['semantic_type']]=semantics.get(c['semantic_type'],0)+1
        results.append({'file':str(path), 'bytes':len(data), 'sha256':hashlib.sha256(data).hexdigest(), 'chunk_count':len(chunks), 'kind_counts':counts, 'semantic_counts':semantics, 'chunks':chunks})
    print(json.dumps(results[0] if len(results)==1 else results, ensure_ascii=False, indent=2 if args.pretty else None))

if __name__ == '__main__': main()
