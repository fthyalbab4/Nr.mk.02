// rea decompile_all
// name: FUN_004212b8
// address: 0x4212b8
// body: available
// range: 0x4212b8-0x421324 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4212d6 (push 0x421325 followed by fs-segment stack chaining); handler 0x421325 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004212b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  local_8 = 0;
  puStack_14 = (undefined1 *)0x4212cb;
  FUN_00409d44(param_7);
  puStack_18 = &LAB_00421325;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00421cf4(param_2,param_7,param_6,&local_8,param_5);
  FUN_004217ec(param_3,local_8,param_4);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042132c;
  puStack_18 = (undefined1 *)0x421316;
  FUN_00409ce0(&local_8,&DAT_00412fa0,puVar1);
  puStack_18 = (undefined1 *)0x421324;
  FUN_00409ce0(&param_7,&DAT_004108f8);
  return;
}
