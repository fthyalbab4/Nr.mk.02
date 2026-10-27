// rea decompile_all
// name: FUN_004ba69c
// address: 0x4ba69c
// body: available
// range: 0x4ba69c-0x4ba8ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004ba69c(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    cVar2 = extraout_DL;
  }
  FUN_004fde88(param_1,0);
  param_1[0x14] = param_1[0x14] & 0xfffffffdU | 0x86000;
  FUN_004edce0(param_1,0xfa);
  FUN_004edd14(param_1,0x96);
  FUN_004bb9e0(param_1,1);
  (**(code **)(*param_1 + 0x14c))(param_1,0);
  FUN_004ee8ac(param_1,0);
  FUN_004f7984(param_1,1);
  FUN_004bbe58(param_1,1);
  FUN_004bba64(param_1,1);
  FUN_004bb9f4(param_1,1);
  iVar1 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  param_1[0x9e] = iVar1;
  FUN_004ecd38(iVar1,param_1);
  param_1[0xb5] = -1;
  iVar1 = FUN_004b8154(&LAB_0049f494,1,param_1);
  param_1[0xab] = iVar1;
  iVar1 = FUN_004c83f4(&LAB_0049ef30,1,param_1);
  param_1[0xfe] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0x120))();
  param_1[0xa7] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0x11c))();
  param_1[0xbf] = iVar1;
  *(undefined1 *)(param_1 + 0xff) = 0;
  iVar1 = FUN_004ba544(&PTR_FUN_004a07ac,1,param_1);
  param_1[0xa9] = iVar1;
  iVar1 = FUN_0043d09c(&LAB_004a0610,1,param_1,&LAB_004a03f4);
  param_1[0xc0] = iVar1;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  param_1[0xc5] = 0;
  param_1[0xb9] = -1;
  iVar1 = FUN_00506880(&PTR_FUN_004e7f28,1,0x20,0x20);
  param_1[0xa5] = iVar1;
  iVar1 = FUN_0044a4ac();
  param_1[0x100] = iVar1;
  iVar1 = FUN_0044a4ac();
  param_1[0x101] = iVar1;
  iVar1 = FUN_00405a4c(&DAT_00505230,1);
  param_1[0xba] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004bafc4;
  iVar1 = FUN_00405a4c(&DAT_00505230,1);
  param_1[0xbc] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004bafc4;
  iVar1 = FUN_00405a4c(&DAT_00505230,1);
  param_1[0xbb] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004bafc4;
  iVar1 = FUN_00405a4c(&DAT_00505230,1);
  param_1[0xbd] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004bafc4;
  param_1[0xa1] = -1;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
