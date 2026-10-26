// rea decompile_all
// name: FUN_00675248
// address: 0x675248
// body: available
// range: 0x675248-0x675312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00675248(int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    cVar3 = extraout_DL;
  }
  FUN_00485c5c(param_1,0);
  *(undefined1 *)(param_1 + 0xa3) = 1;
  uVar1 = FUN_006777b8(param_1);
  (**(code **)(*param_1 + 0x148))(param_1,uVar1);
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  iVar2 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  param_1[0xa1] = iVar2;
  FUN_004ecd38(iVar2,param_1);
  param_1[0x14] = param_1[0x14] | 0xe8;
  FUN_004edd14(param_1,0x32);
  FUN_004edce0(param_1,0x96);
  FUN_004f5ff8(param_1,1);
  param_1[0xaf] = 1;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
