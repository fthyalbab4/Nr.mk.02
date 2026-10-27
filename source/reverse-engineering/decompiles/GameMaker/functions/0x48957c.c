// rea decompile_all
// name: FUN_0048957c
// address: 0x48957c
// body: available
// range: 0x48957c-0x4895b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048957c(undefined4 param_1,ushort param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;

  BVar2 = IsClipboardFormatAvailable((uint)param_2);
  if (BVar2 == 0) {
    if (param_2 == DAT_00788178) {
      cVar1 = FUN_004894fc();
      if (cVar1 != '\0') goto LAB_004895ab;
    }
    uVar3 = 0;
  }
  else {
LAB_004895ab:
    uVar3 = 1;
  }
  return uVar3;
}
