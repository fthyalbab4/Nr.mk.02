// rea decompile_all
// name: FUN_00502af4
// address: 0x502af4
// body: available
// range: 0x502af4-0x502b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00502af4(int *param_1,char param_2)

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
  *(undefined1 *)(param_1 + 0xbc) = 0x40;
  FUN_00408d90(0,param_1 + 0xba);
  FUN_00408194(param_1 + 0xbb,&DAT_00502ba8);
  (**(code **)(*param_1 + 0x118))(param_1,0);
  param_1[0xc6] = -1;
  (**(code **)(*param_1 + 300))();
  FUN_0047d000(param_1,1);
  FUN_0047d024(param_1,1);
  FUN_0050371c(param_1);
  if (cVar1 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
