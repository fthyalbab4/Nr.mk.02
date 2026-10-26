// rea decompile_all
// name: FUN_006448b4
// address: 0x6448b4
// body: available
// range: 0x6448b4-0x644960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006448b4(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x4dc);
  if (*(char *)(iVar1 + 0x59) == '\0') {
    FUN_004edcac(*(undefined4 *)(param_1 + 0x6ac),
                 *(int *)(*(int *)(param_1 + 0x488) + 0x44) +
                 *(int *)(*(int *)(param_1 + 0x488) + 0x4c) + 6);
  }
  else {
    FUN_004edcac(*(undefined4 *)(param_1 + 0x6ac),
                 *(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) + 6);
  }
  iVar1 = *(int *)(param_1 + 0x6b4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x6b0) + 0x48);
  if (*(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x48) < iVar2) {
    FUN_004edc78(iVar1,iVar2 - *(int *)(iVar1 + 0x48));
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x6b4) + 0x40)) {
    FUN_004edc78(*(int *)(param_1 + 0x6b4),0);
  }
  iVar1 = *(int *)(param_1 + 0x6b4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x6b0) + 0x4c);
  if (*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x4c) < iVar2) {
    FUN_004edcac(iVar1,iVar2 - *(int *)(iVar1 + 0x4c));
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x6b4) + 0x44)) {
    FUN_004edcac(*(int *)(param_1 + 0x6b4),0);
  }
  return;
}
