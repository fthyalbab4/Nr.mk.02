with open("app/src/main/assets/www/index.html", "r", encoding="utf-8") as f:
    html = f.read()

target = "const recordKeyUsage = (rawKey, contextStr, snippetStr) => {"
pos = html.find(target)
if pos != -1:
    pos_end = html.find("if (/^\\d+$/.test(normKey)) {", pos)
    if pos_end != -1:
        replacement = """const recordKeyUsage = (rawKey, contextStr, snippetStr) => {
    if (!rawKey) return;
    let normKey = String(rawKey).trim().replace(/^['"\\\\]+|['"\\\\]+$/g, '');
    const ordMatch = normKey.match(/ord\\s*\\(\\s*['"\\\\]*([A-Za-z0-9])['"\\\\]*\\s*\\)/i);
    if (ordMatch) {
      normKey = 'Key' + ordMatch[1].toUpperCase();
    }
    """
        html = html[:pos] + replacement + html[pos_end:]
        with open("app/src/main/assets/www/index.html", "w", encoding="utf-8") as f:
            f.write(html)
        print("Updated recordKeyUsage successfully!")
    else:
        print("pos_end not found")
else:
    print("target not found")
