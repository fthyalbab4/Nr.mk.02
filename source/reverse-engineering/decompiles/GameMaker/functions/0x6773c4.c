// rea decompile_all
// name: FUN_006773c4
// address: 0x6773c4
// body: available
// range: 0x6773c4-0x677456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006773c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  FUN_004f8a48(param_1,param_2);
  if (*(int *)(param_1 + 0x278) != 0) {
    iVar1 = FUN_00672300();
    if (0 < *(int *)(*(int *)(iVar1 + 8) + 8)) {
      iVar1 = FUN_00677f4c(param_1);
      uVar2 = (**(code **)(iVar1 + 0x2c))(iVar1,1,*(undefined4 *)(param_1 + 4));
      piVar3 = (int *)FUN_00405cbc(uVar2,&PTR_LAB_0065edf8);
      *(undefined1 *)(piVar3 + 0xb7) = 1;
      FUN_004f3de8(piVar3,*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x170));
      (**(code **)(*piVar3 + 0x78))(piVar3,param_1);
      (**(code **)(*piVar3 + 0x140))(piVar3,*(undefined4 *)(param_1 + 0x278));
      FUN_00663970(piVar3,(int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10));
      FUN_00405a7c(piVar3);
    }
  }
  return;
}
