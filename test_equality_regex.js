let gml = 'if (room=r001 && global.iROOM=false){    instance_create(48,48,obj_link);    }if (room=r002 && global.iROOM=r001){    instance_create(344,656,obj_link);    }';

function fixConditionEqualities(code) {
    // Replace all single = inside if (...) and while (...) with ==
    return code.replace(/\b(if|while)\s*\(([\s\S]*?)\)/g, (match, kw, cond) => {
        // In cond, replace single = with == (unless it's already ==, !=, <=, >=, +=, -=, etc.)
        let fixedCond = cond.replace(/(?<![=<>!+\-*\/%&|^])=(?![=])/g, '==');
        return `${kw} (${fixedCond})`;
    });
}

let fixed = fixConditionEqualities(gml);
console.log('Fixed:\n', fixed);
try {
  new Function('r001', 'r002', 'global', 'room', fixed);
  console.log('SUCCESS! Valid JavaScript Function!');
} catch (e) {
  console.log('FAILED:', e.message);
}
