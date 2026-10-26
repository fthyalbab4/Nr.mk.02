// rea decompile_all
// name: FUN_0054ff90
// address: 0x54ff90
// body: available
// range: 0x54ff90-0x55004b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ff90(int param_1)

{
  undefined4 uVar1;
  char cVar2;

  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00405fdc(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_00405fdc(uVar1);
  if (*(char *)(param_1 + 4) == '\0') {
    cVar2 = FUN_005513cc(param_1);
    if (cVar2 != '\0') {
      FUN_00533924();
    }
  }
  FUN_0053aabc(param_1 + 0x1c,0x30);
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}
