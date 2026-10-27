// rea decompile_all
// name: FUN_00516fc4
// address: 0x516fc4
// body: available
// range: 0x516fc4-0x517019 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516fc4(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;

  if (param_2 != param_1[0x24]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x60))();
      if (cVar1 == '\0') goto LAB_0051700b;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x299) = (char)param_1[0xb9];
    }
    else {
      *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)((int)param_1 + 0x299);
      *(undefined1 *)((int)param_1 + 0x299) = 0;
    }
  }
LAB_0051700b:
  FUN_004ede78(param_1,param_2,param_3);
  return;
}
