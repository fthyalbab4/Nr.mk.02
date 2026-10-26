// rea decompile_all
// name: FUN_0073fea4
// address: 0x73fea4
// body: available
// range: 0x73fea4-0x73ff07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73febb (push 0x73ff08 followed by fs-segment stack chaining); handler 0x73ff08 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073fea4(LCID param_1)

{
  undefined1 *puVar1;
  UINT UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  WCHAR local_12 [7];

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0073ff08;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  GetLocaleInfoW(param_1,0x1004,local_12,6);
  FUN_004080c8(&local_18,local_12,7);
  uVar3 = local_18;
  UVar2 = GetACP();
  FUN_0041693c(uVar3,UVar2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0073ff0f;
  puStack_24 = (undefined1 *)0x73ff07;
  thunk_FUN_00406e5c(&local_18,uStack_28,puVar1);
  return;
}
