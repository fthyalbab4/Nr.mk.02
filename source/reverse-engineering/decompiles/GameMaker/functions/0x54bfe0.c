// rea decompile_all
// name: FUN_0054bfe0
// address: 0x54bfe0
// body: available
// range: 0x54bfe0-0x54c071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054bfe0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_0054c55c(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,0);
  iVar1 = FUN_005415b8(param_1[0xb]);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_00548da8(param_1[0xb],iVar3);
      FUN_0054557c(uVar2,0);
      uVar2 = FUN_00548da8(param_1[0xb],iVar3);
      FUN_0054481c(uVar2,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(int *)(*(int *)(param_1[0xc] + 0x10) + 8) < 1) {
    iVar1 = FUN_005415b8(param_1[0xb]);
    if (iVar1 == 1) {
      iVar1 = FUN_00548da8(param_1[0xb],0);
      (**(code **)(**(int **)(param_1[0xc] + 0x10) + 8))
                (*(int **)(param_1[0xc] + 0x10),*(undefined4 *)(iVar1 + 0x20));
      iVar1 = FUN_00548da8(param_1[0xb],0);
      FUN_00540b44(*(undefined4 *)(iVar1 + 0x20));
    }
  }
  return;
}
