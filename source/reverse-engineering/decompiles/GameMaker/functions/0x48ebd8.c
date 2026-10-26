// rea decompile_all
// name: FUN_0048ebd8
// address: 0x48ebd8
// body: available
// range: 0x48ebd8-0x48ec5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0048ebd8(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00482758(param_1,0,param_3);
  FUN_0043ae88(param_3[0x9e],param_1);
  FUN_004ee5c0(param_1,0);
  uVar1 = (**(code **)(*param_3 + 0x5c))();
  (**(code **)(*param_1 + 0x74))(param_1,uVar1);
  FUN_004ee81c(param_1,0);
  param_1[0x45] = (int)param_3;
  param_1[0x44] = (int)&LAB_0048f024;
  (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
