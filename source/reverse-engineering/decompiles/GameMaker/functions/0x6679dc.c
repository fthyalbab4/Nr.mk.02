// rea decompile_all
// name: FUN_006679dc
// address: 0x6679dc
// body: available
// range: 0x6679dc-0x667a30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006679dc(int *param_1,int *param_2)

{
  char cVar1;
  int local_14;
  int local_10;

  local_14 = *param_2;
  local_10 = param_2[1];
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    if (*(char *)((int)param_1 + 0x1f6) != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0xdc))();
      if (cVar1 == '\0') goto LAB_00667a1f;
    }
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
  }
LAB_00667a1f:
  FUN_00678794(param_1,&local_14);
  return;
}
