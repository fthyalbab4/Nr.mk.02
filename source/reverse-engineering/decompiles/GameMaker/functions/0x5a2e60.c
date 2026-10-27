// rea decompile_all
// name: FUN_005a2e60
// address: 0x5a2e60
// body: available
// range: 0x5a2e60-0x5a2edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a2e73 (push 0x5a2edd followed by fs-segment stack chaining); handler 0x5a2edd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2e60(int param_1)

{
  undefined1 *puVar1;
  LPCWSTR lpCaption;
  LPCWSTR lpText;
  undefined4 *in_FS_OFFSET;
  UINT uType;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005a2edd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uType = 0x30;
  FUN_0040b75c(PTR_PTR_007825a4,&local_8);
  lpCaption = (LPCWSTR)FUN_00407f44(local_8);
  FUN_0040b75c(PTR_PTR_007826b0,&local_c);
  lpText = (LPCWSTR)FUN_00407f44(local_c);
  MessageBoxW((HWND)0x0,lpText,lpCaption,uType);
  puVar1 = puStack_14;
  *(undefined **)(param_1 + 0x24c) = &DAT_0077cf74;
  *(undefined4 *)(param_1 + 0x250) = 2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005a2ee4;
  puStack_18 = (undefined1 *)0x5a2edc;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
