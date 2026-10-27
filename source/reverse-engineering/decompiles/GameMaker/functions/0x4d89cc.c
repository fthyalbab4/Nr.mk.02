// rea decompile_all
// name: FUN_004d89cc
// address: 0x4d89cc
// body: available
// range: 0x4d89cc-0x4d8a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004d89cc(int param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar3 = extraout_DL;
  }
  FUN_00448e88(param_1,0);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined1 *)(param_1 + 0x3b) = 2;
  *(undefined1 *)(param_1 + 0x3c) = 2;
  uVar1 = FUN_004d8444();
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_00407eb8(param_1 + 0x58,0);
  iVar2 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x78) = iVar2;
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004dc784;
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}
