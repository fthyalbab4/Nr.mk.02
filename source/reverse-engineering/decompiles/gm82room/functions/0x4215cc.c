// rea decompile_all
// name: FUN_004215cc
// address: 0x4215cc
// body: available
// range: 0x4215cc-0x421625 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004215cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_5;

  local_5 = 1;
  iVar1 = FUN_00409c34(param_1);
  iVar2 = FUN_00409c34(param_2);
  if (iVar1 < iVar2) {
    local_5 = 0;
  }
  else {
    iVar1 = FUN_00409c34(param_2);
    if (0 < iVar1) {
      iVar2 = 1;
      do {
        if (*(char *)(param_1 + -1 + iVar2) != *(char *)(param_2 + -1 + iVar2)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return local_5;
}
