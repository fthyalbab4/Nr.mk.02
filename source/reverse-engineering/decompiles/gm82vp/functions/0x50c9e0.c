// rea decompile_all
// name: FUN_0050c9e0
// address: 0x50c9e0
// body: available
// range: 0x50c9e0-0x50ca5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50ca13 (push 0x50ca60 followed by fs-segment stack chaining); handler 0x50ca60 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  LPCWSTR lpDirectory;
  LPCWSTR lpParameters;
  LPCWSTR lpFile;
  undefined4 *in_FS_OFFSET;
  INT nShowCmd;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x50c9f8;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_18 = (undefined1 *)0x50ca00;
  thunk_FUN_00407ad0(local_c);
  puStack_18 = (undefined1 *)0x50ca08;
  thunk_FUN_00407ad0(local_10);
  puStack_1c = &LAB_0050ca60;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  nShowCmd = 5;
  puStack_18 = &stack0xfffffffc;
  lpDirectory = (LPCWSTR)FUN_00408220(local_10);
  lpParameters = (LPCWSTR)FUN_00408220(local_c);
  lpFile = (LPCWSTR)FUN_00408220(local_8);
  ShellExecuteW((HWND)0x0,L"open",lpFile,lpParameters,lpDirectory,nShowCmd);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050ca67;
  puStack_1c = (undefined1 *)0x50ca5f;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
