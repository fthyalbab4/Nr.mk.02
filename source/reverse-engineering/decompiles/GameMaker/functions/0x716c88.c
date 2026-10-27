// rea decompile_all
// name: FUN_00716c88
// address: 0x716c88
// body: available
// range: 0x716c88-0x716d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x716caf (push 0x716d13 followed by fs-segment stack chaining); handler 0x716d13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00716c88(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x716c9c;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_10 = (undefined1 *)0x716ca4;
  thunk_FUN_00407660(local_c);
  puStack_14 = &LAB_00716d13;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (DAT_0077f5e4 == 0) {
    puStack_10 = &stack0xfffffffc;
    DAT_0077f5e4 = FUN_00452480(&DAT_004512d4,1);
  }
  FUN_004526b0(DAT_0077f5e4,DAT_0079a9a8,1);
  FUN_00452fc8(DAT_0077f5e4,local_8,local_c);
  FUN_00452538(DAT_0077f5e4);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00716d1a;
  puStack_14 = (undefined1 *)0x716d12;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
