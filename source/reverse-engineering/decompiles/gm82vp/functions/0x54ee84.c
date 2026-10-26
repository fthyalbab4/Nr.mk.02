// rea decompile_all
// name: FUN_0054ee84
// address: 0x54ee84
// body: available
// range: 0x54ee84-0x54eed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054ee84(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00405fac(param_1,0);
  uVar1 = FUN_0054f218(param_3);
  uVar2 = FUN_0054f1f0(param_3);
  FUN_0043d3f4(param_1,uVar2,uVar1);
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
