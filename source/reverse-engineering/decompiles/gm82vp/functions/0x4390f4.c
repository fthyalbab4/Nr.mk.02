// rea decompile_all
// name: FUN_004390f4
// address: 0x4390f4
// body: available
// range: 0x4390f4-0x439164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004390f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = 0;
    iVar1 = 0;
    do {
      for (; (iVar1 < *(int *)(param_1 + 8) && (*(int *)(*(int *)(param_1 + 4) + iVar1 * 4) == 0));
          iVar1 = iVar1 + 1) {
      }
      iVar2 = iVar1;
      if (iVar1 < *(int *)(param_1 + 8)) {
        for (; (iVar2 < *(int *)(param_1 + 8) && (*(int *)(*(int *)(param_1 + 4) + iVar2 * 4) != 0))
            ; iVar2 = iVar2 + 1) {
        }
        if (iVar3 < iVar1) {
          FUN_00404514(*(int *)(param_1 + 4) + iVar1 * 4,*(int *)(param_1 + 4) + iVar3 * 4,
                       (((iVar2 + -1) - iVar1) + 1) * 4);
        }
        iVar3 = iVar3 + ((iVar2 + -1) - iVar1) + 1;
      }
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 8));
    *(int *)(param_1 + 8) = iVar3;
  }
  return;
}
