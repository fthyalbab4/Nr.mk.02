// rea decompile_all
// name: FUN_004485a4
// address: 0x4485a4
// body: available
// range: 0x4485a4-0x448649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004485a4(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD DVar4;
  HWND pHVar5;
  HWND hWndParent;
  LPDWORD lpdwProcessId;

  iVar1 = FUN_0040bfac();
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar1 = FUN_0040bfac();
    BVar2 = IsWindow(*(HWND *)(iVar1 + 0x14));
    if (BVar2 != 0) goto LAB_0044863b;
  }
  if ((*(int *)PTR_DAT_0068966c == 2) && (4 < *(int *)PTR_DAT_00688cd4)) {
    hWndParent = (HWND)0xfffffffd;
  }
  else {
    hWndParent = (HWND)0x0;
  }
  pHVar5 = (HWND)0x0;
  do {
    pHVar5 = FindWindowExW(hWndParent,pHVar5,(LPCWSTR)&PTR_DAT_0044864c,(LPCWSTR)0x0);
    iVar1 = FUN_0040bfac();
    *(HWND *)(iVar1 + 0x14) = pHVar5;
    iVar1 = FUN_0040bfac();
    pHVar5 = *(HWND *)(iVar1 + 0x14);
    iVar1 = FUN_0040bfac();
    if (*(int *)(iVar1 + 0x14) == 0) break;
    lpdwProcessId = (LPDWORD)0x0;
    iVar1 = FUN_0040bfac();
    DVar3 = GetWindowThreadProcessId(*(HWND *)(iVar1 + 0x14),lpdwProcessId);
    DVar4 = GetCurrentThreadId();
  } while (DVar3 != DVar4);
LAB_0044863b:
  iVar1 = FUN_0040bfac();
  return *(undefined4 *)(iVar1 + 0x14);
}
