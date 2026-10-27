// rea decompile_all
// name: FUN_004b7b58
// address: 0x4b7b58
// body: available
// range: 0x4b7b58-0x4b7bb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HANDLE FUN_004b7b58(HWND param_1,undefined4 param_2,DWORD param_3)

{
  ATOM AVar1;
  DWORD DVar2;
  LPCWSTR lpString;
  HANDLE pvVar3;
  DWORD local_c;

  pvVar3 = (HANDLE)0x0;
  if (param_1 != (HWND)0x0) {
    local_c = param_3;
    DVar2 = GetWindowThreadProcessId(param_1,&local_c);
    if (DVar2 != 0) {
      DVar2 = GetCurrentProcessId();
      if (DVar2 == local_c) {
        lpString = (LPCWSTR)FUN_00408220(DAT_0068f260);
        AVar1 = GlobalFindAtomW(lpString);
        if (AVar1 == DAT_0068f25a) {
          pvVar3 = GetPropW(param_1,(LPCWSTR)(uint)DAT_0068f25a);
        }
        else {
          pvVar3 = (HANDLE)FUN_004b7b24(param_1);
        }
      }
    }
  }
  return pvVar3;
}
