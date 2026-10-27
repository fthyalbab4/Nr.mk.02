// rea decompile_all
// name: FUN_00453d38
// address: 0x453d38
// body: available
// range: 0x453d38-0x453dbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x453d54 (push 0x453dbe followed by fs-segment stack chaining); handler 0x453dbe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00453d38(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCWSTR lpSubKey;
  HKEY hKey;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  HKEY local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00453dbe;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004081e8(&local_8,param_2);
  uVar2 = FUN_00452924(local_8);
  if ((char)uVar2 == '\0') {
    FUN_00408a54(&local_8,1,1);
  }
  local_c = (HKEY)0x0;
  phkResult = &local_c;
  samDesired = *(REGSAM *)(param_1 + 0x18);
  ulOptions = 0;
  lpSubKey = (LPCWSTR)FUN_00408220(local_8);
  hKey = (HKEY)FUN_00452c78(param_1,uVar2);
  RegOpenKeyExW(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00453dc5;
  puStack_1c = (undefined1 *)0x453dbd;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
