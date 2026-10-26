// rea decompile_all
// name: FUN_004454b4
// address: 0x4454b4
// body: available
// range: 0x4454b4-0x4454ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004454b4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char cVar4;

  iVar2 = GetThreadPriority(*(HANDLE *)(param_1 + 4));
  FUN_00445474(param_1,iVar2 != 0x7fffffff);
  cVar1 = '\x03';
  cVar4 = '\0';
  piVar3 = &DAT_0067d0c8;
  do {
    if (iVar2 == *piVar3) {
      cVar1 = cVar4;
    }
    cVar4 = cVar4 + '\x01';
    piVar3 = piVar3 + 1;
  } while (cVar4 != '\a');
  return cVar1;
}
