// rea decompile_all
// name: FUN_004de56c
// address: 0x4de56c
// body: available
// range: 0x4de56c-0x4de5c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de56c(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  char cVar1;

  if (*(int *)(param_1 + 0x3c) != 0) {
    cVar1 = FUN_004ddedc(param_1);
    if (param_3 == 0) {
      SendMessageW(*(HWND *)(param_1 + 0x3c),0xb015,0,0);
    }
    if (cVar1 != '\0') {
      DrawMenuBar(*(HWND *)(param_1 + 0x3c));
    }
  }
  FUN_004de058(param_1,param_2,param_3,param_4);
  return;
}
