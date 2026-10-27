// rea decompile_all
// name: FUN_004c7170
// address: 0x4c7170
// body: available
// range: 0x4c7170-0x4c71a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c7170(int param_1)

{
  char cVar1;
  HWND pHVar2;
  undefined4 uVar3;

  uVar3 = 0;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    pHVar2 = GetFocus();
    if (((pHVar2 == *(HWND *)(param_1 + 0x2b0)) || (pHVar2 == *(HWND *)(param_1 + 0x2b4))) ||
       (pHVar2 == *(HWND *)(param_1 + 0x2e0))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
