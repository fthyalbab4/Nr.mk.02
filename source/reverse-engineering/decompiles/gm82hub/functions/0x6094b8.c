// rea decompile_all
// name: FUN_006094b8
// address: 0x6094b8
// body: available
// range: 0x6094b8-0x609653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006094b8(int param_1)

{
  int iVar1;
  int iVar2;

  FUN_00408194(param_1 + 4,0);
  *(undefined4 *)(param_1 + 0xc) = 0x280;
  *(undefined4 *)(param_1 + 0x10) = 0x1e0;
  *(undefined4 *)(param_1 + 8) = 0x1e;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  FUN_00408194(param_1 + 100,0);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x20 + iVar1 * 4);
    *(undefined1 *)(iVar2 + 4) = 0;
    *(undefined1 *)(iVar2 + 5) = 0;
    *(undefined4 *)(iVar2 + 8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0x20) = 1;
    *(undefined1 *)(iVar2 + 0x21) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0x3ff00000;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0x3ff00000;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0xffffff;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0x3ff00000;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x44 + iVar1 * 4);
    *(undefined1 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0x280;
    *(undefined4 *)(iVar2 + 0x14) = 0x1e0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0x280;
    *(undefined4 *)(iVar2 + 0x24) = 0x1e0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0x20;
    *(undefined4 *)(iVar2 + 0x34) = 0x20;
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  iVar1 = *(int *)(param_1 + 0x68);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00405fdc(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00409e08(param_1 + 0x6c,&DAT_006080a4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00405fdc(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00409e08(param_1 + 0x74,&DAT_006080d4);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  FUN_006090f8(param_1);
  FUN_0060929c(param_1);
  return;
}
