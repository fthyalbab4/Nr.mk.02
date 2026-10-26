// rea decompile_all
// name: FUN_0058bab4
// address: 0x58bab4
// body: available
// range: 0x58bab4-0x58bc7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058bab4(int param_1)

{
  int iVar1;
  char cVar2;

  cVar2 = FUN_0058ba8c(param_1);
  if (cVar2 != '\0') {
    iVar1 = DAT_00686b28 + param_1 * 0x120;
    *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    *(undefined1 *)(iVar1 + 8) = 1;
    *(undefined1 *)(iVar1 + 9) = 0;
    *(undefined1 *)(iVar1 + 10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x40) = 100;
    *(undefined4 *)(iVar1 + 0x44) = 100;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    *(undefined4 *)(iVar1 + 0xac) = 0;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(undefined1 *)(iVar1 + 200) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0x4070e000;
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    *(undefined4 *)(iVar1 + 0xd0) = 0xe0000000;
    *(undefined4 *)(iVar1 + 0xd4) = 0x416fffff;
    *(undefined4 *)(iVar1 + 0xd8) = 0xe0000000;
    *(undefined4 *)(iVar1 + 0xdc) = 0x416fffff;
    *(undefined4 *)(iVar1 + 0xe0) = 0xe0000000;
    *(undefined4 *)(iVar1 + 0xe4) = 0x416fffff;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    *(undefined4 *)(iVar1 + 0x104) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x10c) = 0x3ff00000;
    *(undefined4 *)(iVar1 + 0x110) = 0;
    *(undefined4 *)(iVar1 + 0x114) = 0x3ff00000;
  }
  return;
}
