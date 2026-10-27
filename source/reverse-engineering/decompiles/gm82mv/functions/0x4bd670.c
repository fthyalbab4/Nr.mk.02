// rea decompile_all
// name: FUN_004bd670
// address: 0x4bd670
// body: available
// range: 0x4bd670-0x4bd70a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004bd670(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  local_20 = *param_2;
  local_1c = *param_3;
  cVar1 = FUN_004bc9b4(param_1,&local_20,&local_1c);
  if (cVar1 != '\0') {
    local_18 = local_20;
    local_14 = local_1c;
    if (((*(char *)(param_1 + 0x5e) == '\0') ||
        (((cVar1 = FUN_004bc948(param_1,&local_18,&local_14), cVar1 != '\0' &&
          (local_18 == local_20)) && (local_14 == local_1c)))) ||
       (cVar1 = FUN_004bc9b4(param_1,&local_18,&local_14), cVar1 != '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 != '\0') {
      *param_2 = local_18;
      *param_3 = local_14;
    }
    return cVar1;
  }
  return '\0';
}
