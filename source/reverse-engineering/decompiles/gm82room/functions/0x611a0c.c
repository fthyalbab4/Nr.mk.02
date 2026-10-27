// rea decompile_all
// name: FUN_00611a0c
// address: 0x611a0c
// body: available
// range: 0x611a0c-0x611a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x611a3c (push 0x611a85 followed by fs-segment stack chaining); handler 0x611a85 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00611a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x611a23;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = (undefined1 *)0x611a31;
  FUN_00408ff8(&local_14,&DAT_00611918);
  puStack_24 = &LAB_00611a85;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  local_14 = param_1;
  FUN_004081e8(local_10,local_8);
  local_c = param_3;
  FUN_00409360(param_4,&local_14,&DAT_00611918);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00611a8c;
  puStack_24 = (undefined1 *)0x611a7c;
  FUN_004090d0(&local_14,&DAT_00611918,puVar1);
  puStack_24 = (undefined1 *)0x611a84;
  thunk_FUN_004072d8(&local_8);
  return;
}
