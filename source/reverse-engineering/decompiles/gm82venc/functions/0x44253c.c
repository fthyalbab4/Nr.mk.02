// rea decompile_all
// name: FUN_0044253c
// address: 0x44253c
// body: available
// range: 0x44253c-0x442593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044253c(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;

  local_c = *param_1;
  uStack_8 = param_1[1];
  FUN_00408194(param_2,0);
  if (*(short *)(param_4 + 10) != 0) {
    (**(code **)(param_4 + 8))
              (*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + -0x1c),&local_c,param_2);
  }
  if (*param_2 == 0) {
    FUN_00406428(**(undefined4 **)(param_4 + -0x20),local_c,param_2);
  }
  return;
}
