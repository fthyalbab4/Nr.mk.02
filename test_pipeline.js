
const fs = require('fs');
const path = require('path');

// Read index.html to extract GmkParser and GmkConverter and runtime
const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');
console.log('Index HTML size:', html.length);
