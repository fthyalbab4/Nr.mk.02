// rea decompile_all
// name: FUN_005250cc
// address: 0x5250cc
// body: available
// range: 0x5250cc-0x525184 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005250cc(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00523dac(&DAT_0052388c,1);
  param_1[0x6d] = iVar1;
  *(int **)(iVar1 + 0x3c) = param_1;
  *(undefined1 **)(iVar1 + 0x38) = &LAB_00525ab0;
  FUN_004f96ec(param_1,0,param_3);
  uVar3 = 0x16;
  (**(code **)(*param_1 + 0x98))(param_1,0,0,0x16,0x17);
  param_1[0x14] = 0x82;
  FUN_004ee7d4(param_1,1);
  FUN_004ee858(param_1,0xff00000f);
  param_1[0x6f] = 4;
  param_1[0x71] = -1;
  *(undefined1 *)((int)param_1 + 0x1bb) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  _DAT_00778ee0 = _DAT_00778ee0 + 1;
  if (cVar2 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uVar3;
  }
  return param_1;
}
