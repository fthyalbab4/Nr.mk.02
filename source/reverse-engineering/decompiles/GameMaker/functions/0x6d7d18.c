// rea decompile_all
// name: FUN_006d7d18
// address: 0x6d7d18
// body: available
// range: 0x6d7d18-0x6d7daa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d7d37 (push 0x6d7dc8 followed by fs-segment stack chaining); handler 0x6d7dc8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d7d73 (push 0x6d7dab followed by fs-segment stack chaining); handler 0x6d7dab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d7d18(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6d7d2c;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_18 = &LAB_006d7dc8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x6d7d47;
  puStack_14 = &stack0xfffffffc;
  FUN_004082dc(&DAT_007900f8,local_8);
  puStack_20 = (undefined1 *)0x6d7d5b;
  (**(code **)(**(int **)(local_c + 0x2c0) + 0x2c))(*(int **)(local_c + 0x2c0),DAT_007900f8);
  local_d = *(undefined1 *)(local_c + 0x2d0);
  puStack_24 = &LAB_006d7dab;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004b6a24(local_c,0);
  FUN_004efb90(local_c,0xb7,0,0);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006d7db2;
  puStack_24 = (undefined1 *)0x6d7daa;
  FUN_004b6a24(local_c,local_d,puVar1);
  return;
}
