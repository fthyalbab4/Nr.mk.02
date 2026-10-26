// rea decompile_all
// name: FUN_00405ae0
// address: 0x405ae0
// body: available
// range: 0x405ae0-0x405b06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405ae0(int *param_1)

{
  int iVar1;
  int *piVar2;

  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = *(int **)(iVar1 + -0x30);
    if (*(int *)(iVar1 + -0x4c) != 0) {
      FUN_00408df4(param_1);
    }
  } while (piVar2 != (int *)0x0);
  FUN_00406068(param_1);
  return;
}
