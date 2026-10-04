import re

with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    html = f.read()

# 1. Clean up gmlToJs in index.html
bad_str = "nction gmlToJs(gml) {\n  if (!gml || !gml.trim()) return \"\";\n  gml = gml.replace(//g, '').replace(//g, '');\n  gml = gml.replace(/( if\\s*\\([^\\)]+\\)\\s*[^\\{\\};]+?)\\s+ else /g, '; else');\n  if (!gml || !gml.trim()) return \"\";"
if bad_str not in html:
    # Find start of gmlToJs
    idx = html.find('nction gmlToJs(gml) {')
    idx_end = html.find('let js = gml;', idx)
    html = html[:idx] + 'nction gmlToJs(gml) {\n  if (!gml || !gml.trim()) return "";\n  gml = gml.replace(/\\r\\n/g, "\\n").replace(/\\r/g, "\\n");\n  gml = gml.replace(/(\\bif\\s*\\([^\\)]+\\)\\s*[^\\{\\};\\n]+?)\\s+\\belse\\b/g, "$1; else");\n  ' + html[idx_end:]
else:
    html = html.replace(bad_str, 'nction gmlToJs(gml) {\n  if (!gml || !gml.trim()) return "";\n  gml = gml.replace(/\\r\\n/g, "\\n").replace(/\\r/g, "\\n");\n  gml = gml.replace(/(\\bif\\s*\\([^\\)]+\\)\\s*[^\\{\\};\\n]+?)\\s+\\belse\\b/g, "$1; else");')

# 2. In createEngineHTML, inline gmlToJs and parseGMLBlocks
placeholder = """    // --- Runtime Inlined GML Transpiler ---
    // gmlToJs placeholder
    // parseGMLBlocks placeholder
    window.gmlToJs = typeof gmlToJs === "function" ? gmlToJs : null;
    window.parseGMLBlocks = typeof parseGMLBlocks === "function" ? parseGMLBlocks : null;"""

full_inlined_transpiler = """    // --- Runtime Inlined GML Transpiler ---
    function gmlToJs(gml) {
        if (!gml || !gml.trim()) return "";
        let js = gml.replace(/\\r\\n/g, '\\n').replace(/\\r/g, '\\n');
        js = js.replace(/\\bvar\\s+/g, "let ");
        js = js.replace(/\\btrue\\b/g, "true").replace(/\\bfalse\\b/g, "false");
        js = js.replace(/\\bexit\\b/g, "return;");
        js = js.replace(/<>/g, "!=");
        js = js.replace(/:=/g, "=");
        js = js.replace(/\\bbegin\\b/gi, "{");
        js = js.replace(/\\bend\\b/gi, "}");
        js = js.replace(/\\s+\\bthen\\b\\s+/gi, " ");
        js = js.replace(/\\bnot\\s+/gi, "!");
        js = js.replace(/\\s+\\band\\b\\s+/gi, " && ");
        js = js.replace(/\\s+\\bor\\b\\s+/gi, " || ");
        js = js.replace(/\\s+\\bxor\\b\\s+/gi, " ^ ");
        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, (m, cond) => {
            let fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, "==");
            return `if (${fc}) {`;
        });
        js = js.replace(/(\\bif\\s*\\([^\\)]+\\)\\s*[^\\{\\};\\n]+?)\\s+\\belse\\b/g, '$1; else');
        js = js.replace(/\\brepeat\\s*\\(([^\\)]+)\\)\\s*\\{/g, 'for(let _r=0,_rMax=($1);_r<_rMax;_r++){');
        for (let iter = 0; iter < 4; iter++) {
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bdiv\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "Math.floor(($1)/($2))");
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bmod\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "(($1)%($2))");
        }
        js = js.replace(/(\\b(?:if|while)\\s*\\([^)]*?)(?<![=<>!+\\-*\\/])=(?!=)([^)]*?\\))/g, '$1==$2');
        js = js.replace(/([^\\s;{}])\\s*\\belse\\b/g, '$1; else');
        return js;
    }
    window.gmlToJs = gmlToJs;
    window.parseGMLBlocks = (c) => c;"""

if placeholder in html:
    html = html.replace(placeholder, full_inlined_transpiler)
    print("Inlined transpiler replaced in createEngineHTML!")
else:
    print("Placeholder not found directly, checking partial...")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(html)

print("Patch script finished.")
