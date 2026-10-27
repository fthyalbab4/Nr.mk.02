// rea decompile_all
// name: FUN_0062eedc
// address: 0x62eedc
// body: available
// range: 0x62eedc-0x62ef7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62ef07 (push 0x62ef7e followed by fs-segment stack chaining); handler 0x62ef7e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062eedc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x62eef4;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = (undefined1 *)0x62eefc;
  thunk_FUN_00407660(local_c);
  puStack_1c = &LAB_0062ef7e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(DAT_0078a0dc + 0x3a8) = 1;
  puStack_18 = &stack0xfffffffc;
  FUN_004ee6d8(DAT_0078a0dc,local_8);
  FUN_00407eb8(DAT_0078a0dc + 0x3b8,local_c);
  *(undefined4 *)(DAT_0078a0dc + 0x3ac) = *param_3;
  cVar2 = FUN_0062ed84(DAT_0078a0dc);
  puVar1 = puStack_18;
  if (cVar2 != '\0') {
    *param_3 = *(undefined4 *)(DAT_0078a0dc + 0x3ac);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0062ef85;
  puStack_1c = (undefined1 *)0x62ef7d;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
