// rea decompile_all
// name: FUN_006f9974
// address: 0x6f9974
// body: available
// range: 0x6f9974-0x6f9a22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f9974(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  if ((*(int *)(*(int *)PTR_DAT_00781ad8 + 8) != 0) && (*(int *)(param_1 + 0x434) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x394) + 0xec))();
    if (iVar1 < 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x434) + 8);
    }
    iVar4 = *(int *)(*(int *)PTR_DAT_00781ad8 + 8) + -1;
    if (-1 < iVar4) {
      do {
        uVar2 = FUN_005a5250(*(undefined4 *)(param_1 + 0x434),iVar1,0,0);
        uVar3 = FUN_005a502c(*(undefined4 *)PTR_DAT_00781ad8,iVar4);
        FUN_007106d8(uVar2,uVar3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
    FUN_006f8f10(param_1);
    (**(code **)(**(int **)(param_1 + 0x394) + 0xf0))(*(int **)(param_1 + 0x394),iVar1);
    FUN_006fa7b0(*(undefined4 *)(param_1 + 0x430));
    *(undefined1 *)(param_1 + 0x42c) = 1;
  }
  return;
}
