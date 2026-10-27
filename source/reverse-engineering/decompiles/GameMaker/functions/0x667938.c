// rea decompile_all
// name: FUN_00667938
// address: 0x667938
// body: available
// range: 0x667938-0x6679a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667938(int *param_1)

{
  char cVar1;
  int *piVar2;
  tagPOINT tStack_10;

  if (((*(byte *)(param_1 + 7) & 8) == 0) && (*(char *)((int)param_1 + 0x1f5) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x5c))();
    if (cVar1 != '\0') {
      GetCursorPos(&tStack_10);
      piVar2 = (int *)FUN_004ec9b4(&tStack_10,1);
      *(bool *)((int)param_1 + 499) = param_1 != piVar2;
      if (param_1 != piVar2) {
        FUN_004efb90(param_1,0xb014,0,0);
      }
      else {
        FUN_004efb90(param_1,0xb013,0,0);
      }
    }
  }
  return;
}
