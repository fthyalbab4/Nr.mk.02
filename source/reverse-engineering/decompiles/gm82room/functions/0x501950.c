// rea decompile_all
// name: FUN_00501950
// address: 0x501950
// body: available
// range: 0x501950-0x5019c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00501950(int *param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00406510();
    cVar1 = extraout_DL;
  }
  FUN_0047c868(param_1,0);
  FUN_004bac98(param_1,0x91);
  FUN_0047d024(param_1,1);
  FUN_0047d000(param_1,0);
  (**(code **)(*param_1 + 0x134))();
  FUN_00408d90(0,param_1 + 0xc1);
  FUN_005027b0(param_1);
  if (cVar1 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
