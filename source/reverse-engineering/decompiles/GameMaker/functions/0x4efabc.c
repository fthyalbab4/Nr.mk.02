// rea decompile_all
// name: FUN_004efabc
// address: 0x4efabc
// body: available
// range: 0x4efabc-0x4efb8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004efabc(int *param_1,int *param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

  local_1c = *(int *)(param_1[0x1c] + 0x14);
  if (local_1c == 0) {
    local_1c = 0;
  }
  local_18 = *(int *)(param_1[0x1c] + 0x10);
  if (local_18 == 0) {
    local_18 = 0;
  }
  local_14 = *(int *)(param_1[0x1c] + 0xc);
  if (local_14 == 0) {
    local_14 = 0;
  }
  local_10 = *(int *)(param_1[0x1c] + 8);
  if (local_10 == 0) {
    local_10 = 0;
  }
  (**(code **)(*param_1 + 0x3c))(param_1,&local_1c,&local_18);
  if ((local_1c < 1) || (*param_2 <= local_1c)) {
    if ((0 < (int)&local_10) && (*param_2 < (int)&local_10)) {
      *param_2 = (int)&local_10;
    }
  }
  else {
    *param_2 = local_1c;
  }
  if ((local_18 < 1) || (*param_3 <= local_18)) {
    if ((0 < (int)&local_14) && (*param_3 < (int)&local_14)) {
      *param_3 = (int)&local_14;
    }
  }
  else {
    *param_3 = local_18;
  }
  return;
}
