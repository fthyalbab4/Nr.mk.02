// rea decompile_all
// name: FUN_006b7ff0
// address: 0x6b7ff0
// body: available
// range: 0x6b7ff0-0x6b8269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006b7ff0(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_004fa24c(param_1,0,param_3);
  (**(code **)(*param_1 + 0x78))(param_1,param_3);
  FUN_004ed948(param_1,5);
  FUN_004f5ff8(param_1,1);
  FUN_004ee8f4(param_1,CONCAT22(extraout_var,0xfffc));
  param_1[0x87] = (int)param_1;
  param_1[0x86] = (int)&LAB_006b5ec4;
  param_1[0x89] = (int)param_1;
  param_1[0x88] = (int)&LAB_006b6f18;
  param_1[0x31] = (int)param_1;
  param_1[0x30] = (int)&LAB_006b715c;
  param_1[0x33] = (int)param_1;
  param_1[0x32] = (int)FUN_006b7358;
  param_1[0x35] = (int)param_1;
  param_1[0x34] = (int)FUN_006b7564;
  param_1[0x55] = (int)param_1;
  param_1[0x54] = (int)&LAB_006b7664;
  param_1[0x53] = (int)param_1;
  param_1[0x52] = (int)FUN_006b771c;
  param_1[0x47] = (int)param_1;
  param_1[0x46] = (int)&LAB_006b77f8;
  FUN_006b3ff8(param_1);
  *(undefined1 *)((int)param_1 + 0x32f) = 0;
  *(undefined1 *)((int)param_1 + 0x32e) = 1;
  DAT_00790020 = 1;
  FUN_006b2134(param_1,param_3);
  FUN_006b0900(param_1,param_3);
  FUN_006b25a8(param_1,param_3);
  FUN_006b1368(param_1,param_3);
  FUN_006b539c(param_1,param_3);
  FUN_006b589c(param_1,param_3);
  iVar1 = FUN_0048e048(&PTR_FUN_0048ab50,1,param_3);
  param_1[0xa0] = iVar1;
  FUN_0048e204(iVar1);
  iVar1 = FUN_004cece0(&PTR_FUN_004c8c88,1,param_3);
  param_1[0xa2] = iVar1;
  FUN_00407eb8(iVar1 + 0x84,&DAT_006b8278);
  FUN_00407eb8(param_1[0xa2] + 0x70,L"Text Files (*.txt) |*.txt|All Files|*.*");
  iVar1 = param_1[0xa2];
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) | 0x200;
  FUN_00407eb8(iVar1 + 0x80,L"Load Code from a Text File");
  iVar1 = FUN_004cece0(&PTR_FUN_004c92c4,1,param_3);
  param_1[0xa3] = iVar1;
  FUN_00407eb8(iVar1 + 0x84,&DAT_006b8278);
  FUN_00407eb8(param_1[0xa3] + 0x70,L"Text Files (*.txt) |*.txt|All Files|*.*");
  iVar1 = param_1[0xa3];
  *(uint *)(iVar1 + 0x6c) = *(uint *)(param_1[0xa2] + 0x6c) | 2;
  FUN_00407eb8(iVar1 + 0x80,L"Save Code to a Text File");
  iVar1 = FUN_004ce04c(&PTR_FUN_004c9cf4,1,param_3);
  param_1[0xa4] = iVar1;
  FUN_00407eb8(param_1 + 0xc9,0);
  *(undefined1 *)(param_1 + 0xcb) = 1;
  *(undefined1 *)((int)param_1 + 0x32d) = 0;
  FUN_00409be0(param_1 + 0xb6,&DAT_006aef44,1,0);
  FUN_006b79cc(param_1);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  FUN_006b0f68(param_1);
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
