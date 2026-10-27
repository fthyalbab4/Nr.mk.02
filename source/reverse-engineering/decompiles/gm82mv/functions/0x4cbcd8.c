// rea decompile_all
// name: FUN_004cbcd8
// address: 0x4cbcd8
// body: available
// range: 0x4cbcd8-0x4cbd5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004cbcd8(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00445244(param_1,0,0);
  uVar1 = FUN_00448c30(&PTR_LAB_00448224,1,0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  iVar2 = FUN_0043980c(&DAT_0042e714,1);
  *(int *)(param_1 + 0x40) = iVar2;
  *(undefined1 *)(iVar2 + 0x20) = 1;
  FUN_004cc3cc(param_1,param_3);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
