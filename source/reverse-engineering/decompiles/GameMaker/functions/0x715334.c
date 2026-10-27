// rea decompile_all
// name: FUN_00715334
// address: 0x715334
// body: available
// range: 0x715334-0x715368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00715334(undefined4 param_1)

{
  int iVar1;
  int *piVar2;

  FUN_004ee5c0(param_1,0);
  iVar1 = FUN_004aad24(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      piVar2 = (int *)FUN_004aad0c(param_1,iVar1);
      (**(code **)(*piVar2 + -4))(piVar2,1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}
