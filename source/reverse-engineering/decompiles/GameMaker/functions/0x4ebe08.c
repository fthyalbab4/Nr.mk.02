// rea decompile_all
// name: FUN_004ebe08
// address: 0x4ebe08
// body: available
// range: 0x4ebe08-0x4ebe67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004ebe08(HWND param_1,undefined4 param_2,DWORD param_3)

{
  ATOM AVar1;
  DWORD DVar2;
  LPCWSTR lpString;
  HANDLE pvVar3;
  int iVar4;
  bool bVar5;
  DWORD local_c;

  bVar5 = false;
  if (param_1 != (HWND)0x0) {
    local_c = param_3;
    DVar2 = GetWindowThreadProcessId(param_1,&local_c);
    if (DVar2 != 0) {
      DVar2 = GetCurrentProcessId();
      if (DVar2 == local_c) {
        lpString = (LPCWSTR)FUN_00407f44(DAT_00788260);
        AVar1 = GlobalFindAtomW(lpString);
        if (AVar1 == DAT_0078825c) {
          pvVar3 = GetPropW(param_1,(LPCWSTR)(uint)DAT_0078825c);
          bVar5 = pvVar3 != (HANDLE)0x0;
        }
        else {
          iVar4 = FUN_004eab68(param_1);
          bVar5 = iVar4 != 0;
        }
      }
    }
  }
  return bVar5;
}
