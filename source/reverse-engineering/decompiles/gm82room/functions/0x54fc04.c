// rea decompile_all
// name: FUN_0054fc04
// address: 0x54fc04
// body: available
// range: 0x54fc04-0x54fc45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0054fc04(int param_1,char param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 extraout_CL;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_CL;
    cVar2 = extraout_DL;
  }
  *(undefined1 *)(param_1 + 0x54) = param_3;
  *(undefined1 *)(param_1 + 0x55) = 1;
  uVar1 = FUN_0043c790(&PTR_FUN_00430700,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (cVar2 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
