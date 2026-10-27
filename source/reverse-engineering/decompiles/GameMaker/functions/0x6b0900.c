// rea decompile_all
// name: FUN_006b0900
// address: 0x6b0900
// body: available
// range: 0x6b0900-0x6b09f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0900(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  piVar2 = (int *)FUN_0048e230(&PTR_LAB_0048b0f0,1,param_2);
  *(int **)(param_1 + 0x294) = piVar2;
  (**(code **)(*piVar2 + 0x78))(piVar2,param_2);
  FUN_004edd14(*(undefined4 *)(param_1 + 0x294),0x16);
  FUN_0048e6fc(*(undefined4 *)(param_1 + 0x294),1);
  FUN_004ed948(*(undefined4 *)(param_1 + 0x294),2);
  piVar2 = (int *)FUN_005250cc(&PTR_FUN_00521cf0,1,param_2);
  *(int **)(param_1 + 0x298) = piVar2;
  (**(code **)(*piVar2 + 0x78))(piVar2,*(undefined4 *)(param_1 + 0x294));
  FUN_004ed948(*(undefined4 *)(param_1 + 0x298),5);
  iVar1 = *(int *)(param_1 + 0x298);
  *(int *)(iVar1 + 0x114) = param_1;
  *(undefined1 **)(iVar1 + 0x110) = &LAB_006b0c00;
  FUN_00525c18(iVar1,1);
  FUN_00525c5c(*(undefined4 *)(param_1 + 0x298),8);
  uVar3 = FUN_00525a4c(*(undefined4 *)(param_1 + 0x298));
  FUN_00506fbc(*(undefined4 *)(*(int *)PTR_DAT_00781eb8 + 0x38c),0x74,uVar3);
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x298),0);
  return;
}
