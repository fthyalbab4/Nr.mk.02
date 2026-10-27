// rea decompile_all
// name: FUN_004a6160
// address: 0x4a6160
// body: available
// range: 0x4a6160-0x4a61b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6160(int param_1)

{
  char cVar1;
  HMENU pHVar2;

  if (*(int *)(param_1 + 0xac) == 0) {
    cVar1 = FUN_004061f8(*(undefined4 *)(param_1 + 4),&PTR_FUN_004a48d4);
    if (cVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0xac) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0xac) = pHVar2;
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      FUN_004a5024(PTR_LAB_00688a34);
    }
    FUN_004a5eec(param_1);
  }
  return *(undefined4 *)(param_1 + 0xac);
}
