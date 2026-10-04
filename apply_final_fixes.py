with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    html = f.read()

# 1. Update inlined transpiler inside createEngineHTML
old_inlined = """    // --- Runtime Inlined GML Transpiler ---
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
        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, function(m, cond) {
            var fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, '==');
            return 'if (' + fc + ') {';
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

new_inlined = """    // --- Runtime Inlined GML Transpiler ---
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
        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, function(m, cond) {
            var fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, '==');
            return 'if (' + fc + ') {';
        });
        js = js.replace(/\\b(if|while)\\s*\\(([\\s\\S]*?)\\)/g, function(match, kw, cond) {
            var fixedCond = cond.replace(/(?<![=<>!+\\-*\\/%&|^])=(?![=])/g, '==');
            return kw + ' (' + fixedCond + ')';
        });
        js = js.replace(/(\\bif\\s*\\([^\\)]+\\)\\s*[^\\{\\};\\n]+?)\\s+\\belse\\b/g, '$1; else');
        js = js.replace(/\\brepeat\\s*\\(([^\\)]+)\\)\\s*\\{/g, 'for(let _r=0,_rMax=($1);_r<_rMax;_r++){');
        for (let iter = 0; iter < 4; iter++) {
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bdiv\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "Math.floor(($1)/($2))");
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bmod\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "(($1)%($2))");
        }
        js = js.replace(/([^\\s;{}])\\s*\\belse\\b/g, '$1; else');
        return js;
    }
    window.gmlToJs = gmlToJs;
    window.parseGMLBlocks = (c) => c;"""

if old_inlined in html:
    html = html.replace(old_inlined, new_inlined)
    print("Updated inlined transpiler in createEngineHTML!")
else:
    print("Warning: old_inlined not found directly")

# 2. Update outer gmlToJs
outer_start = html.find('nction gmlToJs(gml) {')
outer_end = html.find('const ACTION_LIBRARY =', outer_start)
if outer_start != -1 and outer_end != -1:
    # Update outer gmlToJs to also include fixConditionEqualities
    equality_target = 'js = fixConditionParens(js, "while");'
    equality_insert = 'js = fixConditionParens(js, "while");\n  js = js.replace(/\\b(if|while)\\s*\\(([\\s\\S]*?)\\)/g, (m, kw, cond) => `${kw} (${cond.replace(/(?<![=<>!+\\-*\\/%&|^])=(?![=])/g, \"==\")})`);'
    if equality_target in html:
        html = html.replace(equality_target, equality_insert, 1)
        print("Updated outer gmlToJs with fixConditionEqualities!")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(html)

print("Applied final fixes to index.html!")
