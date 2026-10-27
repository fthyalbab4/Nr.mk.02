// rea decompile_all
// name: FUN_00483710
// address: 0x483710
// body: available
// range: 0x483710-0x48374b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00483710(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  int local_14;
  int local_c;

  iVar2 = *(int *)(param_1 + 0x298);
  cVar1 = FUN_004f7a54(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2a0) == '\0')) {
    FUN_0048374c(param_1,0,auStack_18);
    iVar2 = local_c - local_14;
  }
  return iVar2;
}
