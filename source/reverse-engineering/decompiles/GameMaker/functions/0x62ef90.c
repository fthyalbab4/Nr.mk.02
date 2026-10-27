// rea decompile_all
// name: FUN_0062ef90
// address: 0x62ef90
// body: available
// range: 0x62ef90-0x62f072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62efc7 (push 0x62f073 followed by fs-segment stack chaining); handler 0x62f073 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062ef90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x62efac;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = (undefined1 *)0x62efb4;
  thunk_FUN_00407660(local_c);
  puStack_1c = (undefined1 *)0x62efbc;
  thunk_FUN_00407660(param_5);
  puStack_20 = &LAB_0062f073;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined4 *)(DAT_0078a0dc + 0x3a8) = 2;
  puStack_1c = &stack0xfffffffc;
  FUN_004ee6d8(DAT_0078a0dc,local_8);
  FUN_00407eb8(DAT_0078a0dc + 0x3b8,local_c);
  *(undefined4 *)(DAT_0078a0dc + 0x3ac) = *param_3;
  FUN_00407eb8(DAT_0078a0dc + 0x3bc,param_5);
  *(undefined4 *)(DAT_0078a0dc + 0x3b0) = *param_4;
  cVar2 = FUN_0062ed84(DAT_0078a0dc);
  puVar1 = puStack_1c;
  if (cVar2 != '\0') {
    *param_3 = *(undefined4 *)(DAT_0078a0dc + 0x3ac);
    *param_4 = *(undefined4 *)(DAT_0078a0dc + 0x3b0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0062f07a;
  puStack_20 = (undefined1 *)0x62f06a;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  puStack_20 = (undefined1 *)0x62f072;
  thunk_FUN_00406e5c(&param_5);
  return;
}
