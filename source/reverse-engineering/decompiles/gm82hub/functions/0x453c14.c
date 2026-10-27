// rea decompile_all
// name: FUN_00453c14
// address: 0x453c14
// body: available
// range: 0x453c14-0x453c84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00453c14(int param_1,undefined4 param_2,BYTE *param_3,undefined1 param_4,DWORD param_5)

{
  char cVar1;
  DWORD dwType;
  LPCWSTR lpValueName;
  LSTATUS LVar2;
  DWORD Reserved;
  BYTE *lpData;
  undefined4 local_10;
  undefined1 local_c;
  BYTE *local_8;

  local_8 = param_3;
  dwType = FUN_00452998(param_4);
  Reserved = 0;
  lpData = local_8;
  lpValueName = (LPCWSTR)FUN_00408220(param_2);
  LVar2 = RegSetValueExW(*(HKEY *)(param_1 + 4),lpValueName,Reserved,dwType,lpData,param_5);
  cVar1 = FUN_00452bec(param_1,LVar2);
  if (cVar1 == '\0') {
    local_c = 0x11;
    local_10 = param_2;
    FUN_0041bf50(&LAB_004517a0,1,PTR_LAB_00689004,0,&local_10);
    FUN_00406ab4();
  }
  return;
}
