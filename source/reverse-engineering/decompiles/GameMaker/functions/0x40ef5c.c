// rea decompile_all
// name: FUN_0040ef5c
// address: 0x40ef5c
// body: available
// range: 0x40ef5c-0x40efa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40ef7b (push 0x40efa7 followed by fs-segment stack chaining); handler 0x40efa7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ef5c(HWND param_1,UINT param_2,WPARAM param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  LPARAM lParam;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x40ef70;
  thunk_FUN_00407660(param_4);
  puStack_18 = &LAB_0040efa7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  lParam = FUN_00407f44(param_4);
  SendMessageW(param_1,param_2,param_3,lParam);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040efae;
  puStack_18 = (undefined1 *)0x40efa6;
  thunk_FUN_00406e5c(&param_4,uStack_1c,puVar1);
  return;
}
