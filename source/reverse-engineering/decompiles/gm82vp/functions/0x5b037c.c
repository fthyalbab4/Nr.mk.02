// rea decompile_all
// name: FUN_005b037c
// address: 0x5b037c
// body: available
// range: 0x5b037c-0x5b03f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b037c(int param_1)

{
  int iVar1;
  int *piVar2;

  FUN_005afc50(param_1,0xd8);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x44);
  do {
    if (*piVar2 != 0) {
      FUN_005afc9c(param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x54);
    do {
      if (*piVar2 != 0) {
        FUN_005afd80(param_1,iVar1,0);
      }
      if (piVar2[4] != 0) {
        FUN_005afd80(param_1,iVar1,1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
  }
  FUN_005afc50(param_1,0xd9);
  return;
}
