
const fs = require('fs');
const path = require('path');
const vm = require('vm');

const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');

// Let's create a sandbox to run index.html's converter functions
const sandbox = {
  window: {},
  document: {
    createElement: () => ({ getContext: () => ({}) }),
    getElementById: () => null,
    addEventListener: () => {},
  },
  console: console,
  setTimeout: setTimeout,
  clearTimeout: clearTimeout,
  Uint8Array: Uint8Array,
  ArrayBuffer: ArrayBuffer,
  File: class { constructor(parts, name) { this.parts = parts; this.name = name; } async arrayBuffer() { return Buffer.concat(this.parts.map(p => Buffer.from(p))).buffer; } },
  Blob: class { constructor(parts) { this.parts = parts; } },
  btoa: (str) => Buffer.from(str, 'binary').toString('base64'),
  atob: (str) => Buffer.from(str, 'base64').toString('binary'),
  Math: Math,
  JSON: JSON,
  String: String,
  Number: Number,
  Array: Array,
  Object: Object,
  RegExp: RegExp,
  Set: Set,
  Map: Map
};
sandbox.window = sandbox;
sandbox.global = sandbox;
sandbox.globalThis = sandbox;

console.log('Sandbox initialized');
