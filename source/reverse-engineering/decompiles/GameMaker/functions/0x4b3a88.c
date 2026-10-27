// rea decompile_all
// name: FUN_004b3a88
// address: 0x4b3a88
// body: available
// range: 0x4b3a88-0x4b3ad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_004b3a88(int param_1)

{
  char cVar1;
  HWND pHVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 == '\0') {
    LVar3 = *(LRESULT *)(param_1 + 0x27c);
  }
  else {
    if (*(char *)(param_1 + 0x270) == '\0') {
      LVar6 = 0;
      WVar5 = 0;
      UVar4 = 0x403;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      LVar3 = SendMessageW(pHVar2,UVar4,WVar5,LVar6);
      return LVar3;
    }
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x408;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    LVar3 = SendMessageW(pHVar2,UVar4,WVar5,LVar6);
  }
  return LVar3;
}
