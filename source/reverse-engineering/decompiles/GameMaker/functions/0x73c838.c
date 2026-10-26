// rea decompile_all
// name: FUN_0073c838
// address: 0x73c838
// body: available
// range: 0x73c838-0x73c8c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73c84c (push 0x73c8ca followed by fs-segment stack chaining); handler 0x73c8ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073c838(undefined4 *param_1)

{
  undefined1 *puVar1;
  LPWSTR pWVar2;
  LPCWSTR pWVar3;
  undefined4 *in_FS_OFFSET;
  DWORD DVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0073c8ca;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00408244(&local_8,1);
  DVar4 = 0;
  pWVar2 = (LPWSTR)FUN_00407f44(local_8);
  pWVar3 = (LPCWSTR)FUN_00407f44(*param_1);
  DVar4 = ExpandEnvironmentStringsW(pWVar3,pWVar2,DVar4);
  FUN_00408244(&local_8,DVar4);
  pWVar2 = (LPWSTR)FUN_00407f44(local_8);
  pWVar3 = (LPCWSTR)FUN_00407f44(*param_1);
  DVar4 = ExpandEnvironmentStringsW(pWVar3,pWVar2,DVar4);
  if (DVar4 != 0) {
    FUN_00740a24(&local_8);
    FUN_00407eb8(param_1,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0073c8d1;
  puStack_18 = (undefined1 *)0x73c8c9;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
