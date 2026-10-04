const fs = require('fs');

const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');

// Let's write the complete inlined transpiler code
const inlinedTranspiler = `
    function gmlToJs(gml) {
        if (!gml || !gml.trim()) return "";
        let js = gml.replace(/\\r\\n/g, '\\n').replace(/\\r/g, '\\n');
        // Comments & Basic keywords
        js = js.replace(/\\bvar\\s+/g, "let ");
        js = js.replace(/\\btrue\\b/g, "true").replace(/\\bfalse\\b/g, "false");
        js = js.replace(/\\bexit\\b/g, "return;");
        js = js.replace(/<>/g, "!=");
        js = js.replace(/:=/g, "=");
        js = js.replace(/\\bbegin\\b/gi, "{");
        js = js.replace(/\\bend\\b/gi, "}");
        js = js.replace(/\\s+\\bthen\\b\\s+/gi, " ");
        // Logical operators
        js = js.replace(/\\bnot\\s+/gi, "!");
        js = js.replace(/\\s+\\band\\b\\s+/gi, " && ");
        js = js.replace(/\\s+\\bor\\b\\s+/gi, " || ");
        js = js.replace(/\\s+\\bxor\\b\\s+/gi, " ^ ");
        // Wrap unparenthesized if conditions: if cond { -> if (cond) {
        js = js.replace(/\\bif\\s+(?!\\()([^\\{\\n;]+?)\\s*\\{/g, (m, cond) => {
            let fc = cond.trim().replace(/(?<![=<>!+\\-*\\/])=(?!=)/g, "==");
            return \`if (\${fc}) {\`;
        });
        // Semicolon before else for single-line statements
        js = js.replace(/(\\bif\\s*\\([^\\)]+\\)\\s*[^\\{\\};\\n]+?)\\s+\\belse\\b/g, '$1; else');
        // Repeat loop: repeat(n) { ... } -> for (let _r=0, _rMax=(n); _r<_rMax; _r++) { ... }
        js = js.replace(/\\brepeat\\s*\\(([^\\)]+)\\)\\s*\\{/g, 'for(let _r=0,_rMax=($1);_r<_rMax;_r++){');
        // Div and Mod operators
        for (let iter = 0; iter < 4; iter++) {
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bdiv\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "Math.floor(($1)/($2))");
            js = js.replace(/(\\([^()]+\\)|[a-zA-Z0-9_\\]\\.]+)\\s+\\bmod\\b\\s+(\\([^()]+\\)|[a-zA-Z0-9_\\[\\.]+)/g, "(($1)%($2))");
        }
        // Fix single = comparisons inside if/while: if (a = b) -> if (a == b)
        js = js.replace(/(\\b(?:if|while)\\s*\\([^)]*?)(?<![=<>!+\\-*\\/])=(?!=)([^)]*?\\))/g, '$1==$2');
        // Post-fix any remaining else without preceding ; or }
        js = js.replace(/([^\\s;{}])\\s*\\belse\\b/g, '$1; else');
        return js;
    }
    window.gmlToJs = gmlToJs;
`;

console.log('Inlined transpiler prepared, size:', inlinedTranspiler.length);
