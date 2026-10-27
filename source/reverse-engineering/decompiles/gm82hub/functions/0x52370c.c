// rea decompile_all
// name: FUN_0052370c
// address: 0x52370c
// body: available
// range: 0x52370c-0x523784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052370c(int param_1,char param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0x1c + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(bool *)(param_1 + 4) = param_3 == param_6;
  if (param_3 == param_6) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *param_5 = *param_5 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + param_3 * 4);
    *(int *)(param_4 + param_3 * 4) = param_1;
  }
  if (cVar1 != '\0') {
    FUN_00406568();
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}
