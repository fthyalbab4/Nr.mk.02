// rea decompile_all
// name: FUN_004aa550
// address: 0x4aa550
// body: available
// range: 0x4aa550-0x4aa5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004aa550(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_004a5a7c(&PTR_FUN_004a2f30,1,param_1);
  param_1[0xe] = iVar1;
  *(int **)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(*param_1 + 0x3c);
  *(int **)(iVar1 + 0x70) = param_1;
  iVar1 = FUN_00405fac(&DAT_004d20ac,1);
  param_1[0x11] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004ab144;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  FUN_00446094(param_1,0,param_3);
  iVar1 = param_1[0xe];
  *(undefined1 *)(iVar1 + 0x3b) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 0;
  FUN_004ab560(param_1);
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
