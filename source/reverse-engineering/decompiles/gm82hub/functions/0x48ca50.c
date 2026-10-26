// rea decompile_all
// name: FUN_0048ca50
// address: 0x48ca50
// body: available
// range: 0x48ca50-0x48cab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48ca6f (push 0x48cab3 followed by fs-segment stack chaining); handler 0x48cab3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ca50(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined1 local_62 [90];
  undefined4 local_8;

  puStack_84 = (undefined1 *)0x48ca64;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_88 = &LAB_0048cab3;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  FUN_0048c7d8(param_1,local_7c);
  local_78 = 0x20000000;
  FUN_004177c8(local_62,local_8,0x1f);
  FUN_0048c8f0(param_1,local_7c);
  puVar1 = puStack_84;
  *in_FS_OFFSET = uStack_8c;
  puStack_84 = &LAB_0048caba;
  puStack_88 = (undefined1 *)0x48cab2;
  thunk_FUN_004072d8(&local_8,uStack_8c,puVar1);
  return;
}
