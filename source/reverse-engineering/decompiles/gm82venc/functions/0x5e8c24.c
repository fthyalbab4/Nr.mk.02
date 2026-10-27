// rea decompile_all
// name: FUN_005e8c24
// address: 0x5e8c24
// body: available
// range: 0x5e8c24-0x5e8c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e8c41 (push 0x5e8c9b followed by fs-segment stack chaining); handler 0x5e8c9b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8c24(int param_1)

{
  undefined1 *puVar1;
  LPCWSTR lpCaption;
  undefined4 *in_FS_OFFSET;
  UINT uType;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a4;
  undefined4 local_19c;
  WCHAR local_196 [201];

  puStack_1a4 = &stack0xfffffffc;
  local_19c = 0;
  puStack_1a8 = &LAB_005e8c9b;
  uStack_1ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1ac;
  (**(code **)(param_1 + 0x1d0))(param_1,local_196);
  uType = 0x30;
  FUN_0040b9d0(PTR_LAB_006893b0,&local_19c);
  lpCaption = (LPCWSTR)FUN_00408220(local_19c);
  MessageBoxW((HWND)0x0,local_196,lpCaption,uType);
  puVar1 = puStack_1a4;
  *in_FS_OFFSET = uStack_1ac;
  puStack_1a4 = &LAB_005e8ca2;
  puStack_1a8 = (undefined1 *)0x5e8c9a;
  thunk_FUN_004072d8(&local_19c,uStack_1ac,puVar1);
  return;
}
