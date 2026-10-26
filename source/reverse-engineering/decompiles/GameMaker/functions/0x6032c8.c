// rea decompile_all
// name: FUN_006032c8
// address: 0x6032c8
// body: available
// range: 0x6032c8-0x60333b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006032c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;

  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x30))
                      (*(int **)PTR_DAT_007826d0,*(undefined4 *)(param_1 + 4));
    FUN_005e2948(uVar1,param_2);
  }
  else {
    FUN_00409be0(param_2,&DAT_004108f8,1,0x10);
    uVar2 = 0;
    do {
      if (7 < uVar2) {
        thunk_FUN_00404478();
      }
      uVar1 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x2c))
                        (*(int **)PTR_DAT_007826d0,*(undefined2 *)(param_1 + 10 + uVar2 * 2));
      if ((longlong)(int)((longlong)(int)uVar2 * 2) != (longlong)(int)uVar2 * 2) {
        uVar1 = FUN_00405944();
      }
      FUN_005e0778(uVar1,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
  }
  return;
}
