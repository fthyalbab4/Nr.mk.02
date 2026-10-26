// rea decompile_all
// name: FUN_0075a8d4
// address: 0x75a8d4
// body: available
// range: 0x75a8d4-0x75a932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0075a8d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;

  local_14 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = local_14;
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_0075a934(param_1,iVar3);
        if (param_2 == *(int *)(iVar1 + 4)) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
        iVar1 = local_14;
      } while (iVar2 != 0);
    }
    local_14 = iVar1;
    if ((local_14 == 0) && (local_14 = FUN_0075a834(param_1,param_2), local_14 != 0)) {
      FUN_0043ae88(param_1,local_14);
    }
  }
  return local_14;
}
