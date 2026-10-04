with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    html = f.read()

# Locate the inlined transpiler in createEngineHTML
inlined_bad = """        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, (m, cond) => {
            let fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, "==");
            return `if (${fc}) {`;
        });"""

inlined_good = """        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, function(m, cond) {
            var fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, '==');
            return 'if (' + fc + ') {';
        });"""

if inlined_bad in html:
    html = html.replace(inlined_bad, inlined_good)
    print("Fixed inlined_bad in createEngineHTML!")
else:
    # Try direct find
    idx = html.find('return `if (${fc}) {`;')
    if idx != -1:
        print("Found at", idx)
        html = html[:idx] + "return 'if (' + fc + ') {';" + html[idx+22:]
        print("Replaced backtick return!")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(html)

print("Template escaping fixed.")
