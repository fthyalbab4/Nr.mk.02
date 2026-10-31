#!/usr/bin/env python3
"""Static regression checks for the Android runner's APK-matched visual identity."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HTML = ROOT / "app/src/main/assets/www/index.html"
CSS = ROOT / "app/src/main/assets/www/runner-emu-ref.css"

html = HTML.read_text(encoding="utf-8")
css = CSS.read_text(encoding="utf-8")
head = html.split("</head>", 1)[0]

assert 'href="./runner-emu-ref.css"' in head, "Runner identity CSS must load in the parent WebView document"
assert head.count('href="./runner-emu-ref.css"') == 1, "Runner identity CSS must be linked once in the active page head"
assert 'className: "nm-emu-ref' in html, "ConsoleViewer root must match the reference CSS selector"
assert "nm-emu-chassis" in html and "nm-emu-screen" in html and "nm-emu-controls" in html, "Runner markup must retain the reference chassis, screen and control classes"
assert "@media (orientation: landscape)" in css, "Landscape layout rules are missing"
assert ".nm-emu-ref.is-landscape" in css, "In-app landscape toggle styling is missing"
assert ".nm-emu-ref.is-game-fullscreen" in css, "Fullscreen Runner styling is missing"
assert "SELECT / START" in css and "Right action pad" in css, "Reference button groups are missing"
print("PASS: APK runner identity is linked to the active WebView and matches the current Runner markup.")
