// rea decompile_all
// name: FUN_0042a24c
// address: 0x42a24c
// body: available
// range: 0x42a24c-0x42a333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a268 (push 0x42a334 followed by fs-segment stack chaining); handler 0x42a334 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a24c(short *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_0042a334;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*param_1 == 0x100) {
    puStack_28 = &stack0xfffffffc;
    FUN_0042843c(&local_8,param_1);
    FUN_0042843c(&local_c,param_2);
    FUN_00407254(&local_8,local_c);
    FUN_00429e90(param_1,local_8);
  }
  else if (*param_1 == 0x102) {
    puStack_28 = &stack0xfffffffc;
    FUN_00429418(&local_10,param_1);
    FUN_00429418(&local_14,param_2);
    FUN_004082dc(&local_10,local_14);
    FUN_00429ef4(param_1,local_10);
  }
  else {
    FUN_00428cf0(&local_18,param_1);
    FUN_00428cf0(&local_1c,param_2);
    FUN_00407cb0(&local_18,local_1c);
    FUN_00429ebc(param_1,local_18);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0042a33b;
  puStack_2c = (undefined1 *)0x42a319;
  FUN_00407a90(&local_1c,2,puVar1);
  puStack_2c = (undefined1 *)0x42a326;
  thunk_FUN_00406e80(&local_14,2);
  puStack_2c = (undefined1 *)0x42a333;
  FUN_00406e80(&local_c,2);
  return;
}
