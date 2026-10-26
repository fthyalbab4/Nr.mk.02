// rea decompile_all
// name: FUN_004535e4
// address: 0x4535e4
// body: available
// range: 0x4535e4-0x453635 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004535e4(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  LPCWSTR lpValueName;
  LSTATUS LVar2;
  undefined4 uVar3;
  LPDWORD lpReserved;
  undefined1 **lpType;
  LPBYTE lpData;
  LPDWORD lpcbData;
  undefined1 *local_10;

  lpType = &local_10;
  local_10 = param_3;
  FUN_00404f38(param_3,8,0);
  lpcbData = (LPDWORD)(param_3 + 4);
  lpData = (LPBYTE)0x0;
  lpReserved = (LPDWORD)0x0;
  lpValueName = (LPCWSTR)FUN_00408220(param_2);
  LVar2 = RegQueryValueExW(*(HKEY *)(param_1 + 4),lpValueName,lpReserved,(LPDWORD)lpType,lpData,
                           lpcbData);
  uVar3 = FUN_00452bec(param_1,LVar2);
  uVar1 = FUN_004529c8(local_10);
  *param_3 = uVar1;
  return uVar3;
}
