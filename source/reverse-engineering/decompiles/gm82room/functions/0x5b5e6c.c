// rea decompile_all
// name: FUN_005b5e6c
// address: 0x5b5e6c
// body: available
// range: 0x5b5e6c-0x5b5ed4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5e6c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  if (param_1 != (int *)0x0) {
    piVar2 = *(int **)(*(int *)(DAT_0084f044 + 0x388) + 0x1b0);
    (**(code **)(*piVar2 + 8))(piVar2,param_1);
    iVar1 = (**(code **)(*param_1 + 0x24))();
    iVar1 = FUN_004632a8(param_1,iVar1 + -1);
    FUN_004e77c4(DAT_0084f044,*(ushort *)(iVar1 + 2) < 0x100);
    iVar1 = (**(code **)(*param_1 + 0x24))();
    piVar2 = (int *)FUN_00463124(param_1);
    uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,0,iVar1 + -1);
    FUN_004e77b0(DAT_0084f044,uVar3);
  }
  return;
}
