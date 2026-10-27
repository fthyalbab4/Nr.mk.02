// rea decompile_all
// name: FUN_0040bfa8
// address: 0x40bfa8
// body: available
// range: 0x40bfa8-0x40c057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040bfa8(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  *param_3 = local_14;
  param_3[1] = local_10;
  param_3[2] = local_c;
  param_3[3] = local_8;
  if (param_2 == '\0') {
    FUN_0040c130(&local_14);
    iVar1 = FUN_00404884();
    param_3[2] = iVar1 + local_14;
  }
  else if (param_2 == '\x01') {
    FUN_0040c130(&local_14);
    iVar1 = FUN_00404884();
    *param_3 = local_c - iVar1;
  }
  else if (param_2 == '\x02') {
    FUN_0040c138(&local_14);
    iVar1 = FUN_00404884();
    param_3[3] = iVar1 + local_10;
  }
  else if (param_2 == '\x03') {
    FUN_0040c138(&local_14);
    iVar1 = FUN_00404884();
    param_3[1] = local_8 - iVar1;
  }
  return;
}
