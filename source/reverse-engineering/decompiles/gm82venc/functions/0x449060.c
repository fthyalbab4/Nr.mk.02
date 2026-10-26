// rea decompile_all
// name: FUN_00449060
// address: 0x449060
// body: available
// range: 0x449060-0x4490c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x449080 (push 0x4490c7 followed by fs-segment stack chaining); handler 0x4490c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449060(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;

  puStack_18 = (undefined1 *)0x449072;
  local_c = param_1;
  local_10 = FUN_00448df4(param_1);
  puStack_1c = &LAB_004490c7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_00448dd8(local_c,&local_10);
  puVar1 = puStack_18;
  while (iVar2 != 0) {
    puStack_18 = puVar1;
    SetEvent(*(HANDLE *)(iVar2 + 8));
    iVar2 = FUN_00448dd8(local_c,&local_10);
    puVar1 = puStack_18;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004490ce;
  puStack_1c = (undefined1 *)0x4490c6;
  FUN_00449044(local_c,local_10,puVar1);
  return;
}
