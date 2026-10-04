with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# Locate parseGMLBlocks
pos = text.find('function parseGMLBlocks(')
pos_end = text.find('function gmlToJs(', pos)
if pos_end == -1:
    pos_end = pos + 3000

print("Found parseGMLBlocks block between", pos, pos_end)

# Let's clean parseGMLBlocks implementation with zero backticks / zero template literals
clean_parse_gml = """function parseGMLBlocks(str) {
  let result = "";
  let i = 0;
  const findBalancedBlock = (startIdx) => {
    let p = startIdx;
    while (p < str.length && /\\s/.test(str[p])) p++;
    if (str[p] === "{") {
      let blockStart = p;
      let depth = 0;
      let blockEnd = -1;
      for (let j = blockStart; j < str.length; j++) {
        if (str[j] === "{") depth++;
        else if (str[j] === "}") {
          depth--;
          if (depth === 0) {
            blockEnd = j;
            break;
          }
        }
      }
      if (blockEnd === -1) blockEnd = str.length;
      return { block: str.substring(blockStart + 1, blockEnd), endIdx: blockEnd + 1 };
    } else {
      let semi = str.indexOf(";", p);
      if (semi === -1) semi = str.length;
      return { block: str.substring(p, semi + 1), endIdx: semi + 1 };
    }
  };
  while (i < str.length) {
    const matchWith = str.substring(i).match(/^\\bwith\\s*\\(/);
    const matchRepeat = str.substring(i).match(/^\\brepeat\\s*\\(/);
    if (matchWith || matchRepeat) {
      const type = matchWith ? "with" : "repeat";
      const keywordLen = (matchWith ? matchWith[0] : matchRepeat[0]).length;
      const condStart = i + keywordLen;
      let depth = 1;
      let condEnd = -1;
      for (let j = condStart; j < str.length; j++) {
        if (str[j] === "(") depth++;
        else if (str[j] === ")") {
          depth--;
          if (depth === 0) {
            condEnd = j;
            break;
          }
        }
      }
      if (condEnd !== -1) {
        const condition = str.substring(condStart, condEnd).trim();
        const resBlock = findBalancedBlock(condEnd + 1);
        const block = resBlock.block;
        const endIdx = resBlock.endIdx;
        const body = parseGMLBlocks(block);
        if (type === "with") {
          result += "((_t) => { const _insts = (function(t){ if(!t || t===\\\"__all__\\\" || t===-1) return (window.instances||[]).filter(i=>!i.dead); if(t===\\\"__other__\\\" || t===-2 || (this && t===this._other)) return (this && this._other)?[this._other]:[]; if(t===\\\"__self__\\\" || t===-3 || (this && t===this)) return [this]; if(typeof t===\\\"object\\\"&&t&&t.dead!==undefined) return t.dead?[]:[t]; const s=String(t).replace(/^[\\\\x27\\\\x22]|[\\\\x27\\\\x22]$/g, \\\"\\\"); return (window.instances||[]).filter(i=>!i.dead&&((i.def && i.def.name===s)||(i.def && i.def.id===s)||i.objectId===s||String(i.instance_id)===s)); }).call(this, _t); _insts.forEach(i => { i._other = this; (function(){ " + body + " }).call(i); }); })((()=>{ try{ return " + condition + "; }catch(e){ return \\\"" + condition + "\\\"; } })());";
        } else {
          result += "for (let _r = 0, _rMax = (" + condition + "); _r < _rMax; _r++) { " + body + " }";
        }
        i = endIdx;
        continue;
      }
    }
    result += str[i];
    i++;
  }
  return result;
}"""

# Find end of parseGMLBlocks
idx_next = text.find('function gmlToJs(', pos)
if idx_next == -1:
    idx_next = text.find('function ', pos + 30)

text = text[:pos] + clean_parse_gml + "\n\n" + text[idx_next:]

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("parseGMLBlocks updated cleanly.")
