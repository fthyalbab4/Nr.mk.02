with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# Fix all problematic backtick patterns inside gmlToJs
# 1. replace `${kw} (${cond...})` with string concatenation
bad_kw = '`${kw} (${cond.replace(/(?<![=<>!+\\-*\\/%&|^])=(?![=])/g, "==")})`'
good_kw = '(kw + " (" + cond.replace(/(?<![=<>!+\\-*\\/%&|^])=(?![=])/g, "==") + ")")'
if bad_kw in text:
    text = text.replace(bad_kw, good_kw)
    print("Replaced bad_kw!")

# 2. replace `if (${fc}) {`
bad_fc = '`if (${fc}) {`'
good_fc = "('if (' + fc + ') {')"
if bad_fc in text:
    text = text.replace(bad_fc, good_fc)
    print("Replaced bad_fc!")

# Also check for unescaped ${ in gmlToJs
# Let's inspect gmlToJs function directly
idx = text.find('function gmlToJs(gml) {')
if idx != -1:
    idx_end = text.find('window.ACTION_LIBRARY =', idx)
    if idx_end == -1:
        idx_end = idx + 4000
    chunk = text[idx:idx_end]
    print("gmlToJs chunk preview:\n", chunk[:800])

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

# Also sync to app/src/main/assets/index.html
with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("fix_all_template_escapes finished.")
