// rea decompile_all
// name: FUN_006ba4f8
// address: 0x6ba4f8
// body: available
// range: 0x6ba4f8-0x6ba5e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006ba4f8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_004fa24c(param_1,0,param_3);
  (**(code **)(*param_1 + 0x78))(param_1,param_3);
  FUN_004ed948(param_1,5);
  FUN_004f5ff8(param_1,1);
  piVar2 = (int *)FUN_00484abc(&PTR_LAB_0047a978,1,param_3);
  param_1[0x9e] = (int)piVar2;
  (**(code **)(*piVar2 + 0x78))(piVar2,param_3);
  FUN_00484cdc(param_1[0x9e],1);
  FUN_004ed948(param_1[0x9e],4);
  iVar1 = param_1[0x9e];
  *(int **)(iVar1 + 0x294) = param_1;
  *(undefined1 **)(iVar1 + 0x290) = &LAB_006ba05c;
  param_1[0x31] = (int)param_1;
  param_1[0x30] = (int)&LAB_006ba064;
  param_1[0x33] = (int)param_1;
  param_1[0x32] = (int)&LAB_006ba0cc;
  param_1[0x45] = (int)param_1;
  param_1[0x44] = (int)&LAB_006ba140;
  FUN_00407eb8(param_1 + 0xa2,0);
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
