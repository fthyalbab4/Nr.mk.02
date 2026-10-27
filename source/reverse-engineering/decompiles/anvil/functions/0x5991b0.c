// rea decompile_all
// name: FUN_005991b0
// address: 0x5991b0
// body: available
// range: 0x5991b0-0x599215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005991b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;

  local_10 = param_1[1];
  if (param_2 < local_10) {
    iVar1 = 0;
    iVar2 = param_1[6];
    local_10 = 0;
  }
  else {
    iVar1 = param_1[7];
    iVar2 = param_1[8];
  }
  if (iVar1 <= iVar2 + -1) {
    local_14 = ((iVar2 + -1) - iVar1) + 1;
    do {
      iVar2 = (*(code *)param_1[10])(param_1[0xb],iVar1);
      local_10 = local_10 + iVar2 + *param_1;
      if (param_2 < local_10) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return -1;
}
