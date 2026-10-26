// rea decompile_all
// name: FUN_00518998
// address: 0x518998
// body: available
// range: 0x518998-0x518a02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518998(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  HWND hWnd;

  cVar1 = *(char *)((int)param_1 + 0x29d);
  if ((((cVar1 != '\0') && (*(char *)((int)param_1 + 0x29e) == '\x01')) && (param_2 != 0)) &&
     (param_2 == param_1[0xa4])) {
    cVar2 = FUN_004f7a54(param_2);
    if (cVar2 != '\0') {
      cVar2 = FUN_00405d08(param_2);
      if (cVar2 == '\0') {
        hWnd = (HWND)FUN_004f76a8(param_2);
        SetFocus(hWnd);
      }
    }
  }
  FUN_00518874(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xe8))();
  }
  return;
}
