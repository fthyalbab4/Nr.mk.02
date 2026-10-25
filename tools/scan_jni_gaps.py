#!/usr/bin/env python3
"""Find likely JNI stubs, not legitimate constant-return branches.

A hit means a function body is effectively only a constant return or an
obvious placeholder. It is triage; runtime tests remain the authority.
"""
from pathlib import Path
import re, json

ROOT = Path(__file__).resolve().parents[1]
FILES = [ROOT / 'app/src/main/cpp/gm82_jni.c', ROOT / 'app/src/main/cpp/src/gm82_native_bridge.c']
START = re.compile(r'JNIEXPORT\s+[^\n]+\n([A-Za-z0-9_]+)\s*\([^)]*\)\s*\{')
CONST_RETURN = re.compile(r'^return\s+(?:JNI_TRUE|JNI_FALSE|1|0)\s*;$')
PLACEHOLDER = re.compile(r'\b(?:TODO|FIXME|stub|placeholder|not implemented)\b', re.I)

def body_at(text, brace):
    depth=0; quote=None; esc=False
    for i in range(brace, len(text)):
        c=text[i]
        if quote:
            if esc: esc=False
            elif c=='\\': esc=True
            elif c==quote: quote=None
            continue
        if c in "'\"": quote=c; continue
        if c=='{': depth+=1
        elif c=='}':
            depth-=1
            if depth==0: return text[brace+1:i]
    return text[brace+1:]

def clean_lines(body):
    body=re.sub(r'/\*.*?\*/','',body,flags=re.S)
    body=re.sub(r'//.*','',body)
    return [x.strip() for x in body.splitlines() if x.strip()]

def main():
    funcs=[]; hits=[]
    for path in FILES:
        text=path.read_text(errors='replace')
        for m in START.finditer(text):
            body=body_at(text,m.end()-1); lines=clean_lines(body)
            line=text[:m.start()].count('\n')+1
            constant_only=(len(lines)==1 and bool(CONST_RETURN.match(lines[0])))
            placeholder=bool(PLACEHOLDER.search(body))
            item={'file':str(path.relative_to(ROOT)),'line':line,'name':m.group(1),'line_count':len(lines),'constant_only':constant_only,'placeholder':placeholder}
            funcs.append(item)
            if constant_only or placeholder: hits.append(item)
    out={'root':str(ROOT),'likely_stubs':hits,'jni_functions':funcs,'likely_stub_count':len(hits)}
    print(json.dumps(out,ensure_ascii=False,indent=2))
    return 0
if __name__=='__main__': raise SystemExit(main())
