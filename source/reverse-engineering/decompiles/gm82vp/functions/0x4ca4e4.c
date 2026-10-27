// rea decompile_all
// name: FUN_004ca4e4
// address: 0x4ca4e4
// body: available
// range: 0x4ca4e4-0x4ca511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca4e4(int param_1)

{
  int iVar1;
  char cVar2;

  iVar1 = (**(code **)PTR_DAT_00688d14)();
  cVar2 = '\x01' - (iVar1 == 0);
  *(char *)(param_1 + 0x20) = cVar2;
  if (cVar2 != '\0') {
    SystemParametersInfoW(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return;
}
