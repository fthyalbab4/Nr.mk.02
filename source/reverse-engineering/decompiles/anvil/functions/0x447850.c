// rea decompile_all
// name: FUN_00447850
// address: 0x447850
// body: available
// range: 0x447850-0x4478fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00447850(void)

{
  BOOL BVar1;
  HWND hWnd;
  LONG dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSW local_2c;

  _DAT_0067d0f8 = DAT_0068cc40;
  BVar1 = GetClassInfoW(DAT_0068cc40,(LPCWSTR)PTR_PTR_0067d10c,&local_2c);
  if ((BVar1 == 0) || (local_2c.lpfnWndProc != DefWindowProcW)) {
    if (BVar1 != 0) {
      UnregisterClassW((LPCWSTR)PTR_PTR_0067d10c,DAT_0068cc40);
    }
    RegisterClassW((WNDCLASSW *)&DAT_0067d0e8);
  }
  hWnd = (HWND)FUN_0040ec30(0x80,PTR_PTR_0067d10c,&DAT_00447900,0,DAT_0068cc40,0,0,0,0,0,0,
                            0x80000000);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_004476b8();
    SetWindowLongW(hWnd,-4,dwNewLong);
  }
  return hWnd;
}
