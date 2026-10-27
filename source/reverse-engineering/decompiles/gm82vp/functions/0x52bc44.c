// rea decompile_all
// name: FUN_0052bc44
// address: 0x52bc44
// body: available
// range: 0x52bc44-0x52bc9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052bc44(undefined4 param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar1 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  FUN_0052bcec(param_1,&DAT_006845ac,&LAB_0051d110);
  FUN_0052bcec(param_1,&DAT_006845b7,&LAB_0051d110);
  if (cVar1 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
