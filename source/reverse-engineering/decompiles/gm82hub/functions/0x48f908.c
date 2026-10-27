// rea decompile_all
// name: FUN_0048f908
// address: 0x48f908
// body: available
// range: 0x48f908-0x48f982 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048f908(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar2 = extraout_DL;
  }
  FUN_004c65d8(param_1,0);
  iVar1 = FUN_004d08e8();
  if (*(char *)(iVar1 + 5) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0x2a;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0x28;
  }
  FUN_004bac98(param_1,0x17);
  FUN_004baccc(param_1,0x16);
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
