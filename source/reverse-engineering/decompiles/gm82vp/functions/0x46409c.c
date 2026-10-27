// rea decompile_all
// name: FUN_0046409c
// address: 0x46409c
// body: available
// range: 0x46409c-0x464109 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046409c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short local_70 [7];
  undefined1 local_62 [86];

  FUN_004635b0(param_1);
  if (param_3 == 0) {
    FUN_00404f38(local_62,0x54,0);
    FUN_004639e4(param_1,0,0,0,0,local_62);
  }
  else {
    FUN_0043ca88(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_0045d7a4();
    }
    FUN_00463b0c(param_1,param_2,param_3 + -0xe,local_70);
  }
  return;
}
