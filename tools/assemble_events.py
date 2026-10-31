#!/usr/bin/env python3
from pathlib import Path
parts = sorted(Path('tools/ev_chunks').glob('ev_chunk_*.txt'), key=lambda p: int(p.stem.split('_')[-1]))
data = ''.join(p.read_text() for p in parts)
for dest in [Path('app/src/main/cpp/src/gm82_events.c'), Path('NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c')]:
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_text(data)
    print(dest, len(data), data.count('gml_set_other'))
