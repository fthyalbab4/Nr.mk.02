import re

def move_gml_compiler_before_scripts():
    with open("app/src/main/assets/www/index.html", "r", encoding="utf-8") as f:
        html = f.read()

    print("Initial length:", len(html))

    # Find where gmlToJs is defined currently
    p_current = html.find("// --- Runtime Inlined Full GML Compiler ---")
    assert p_current != -1, "Current gmlToJs not found"
    p_current_end = html.find("window.gmlToJs = function", p_current)
    p_current_end = html.find("};", p_current_end) + 2

    compiler_code = html[p_current:p_current_end]
    # Remove from current location
    html = html[:p_current] + html[p_current_end:]

    # Place right before 'const Scripts = {};'
    p_scripts = html.find("const Scripts = {};")
    assert p_scripts != -1, "const Scripts not found"

    html = html[:p_scripts] + compiler_code + "\n    " + html[p_scripts:]

    with open("app/src/main/assets/www/index.html", "w", encoding="utf-8") as f:
        f.write(html)

    print("Successfully moved gmlToJs before Scripts definition! Length:", len(html))

if __name__ == "__main__":
    move_gml_compiler_before_scripts()
