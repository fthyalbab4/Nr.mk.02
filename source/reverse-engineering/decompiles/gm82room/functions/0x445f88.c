// rea decompile_all
// name: FUN_00445f88
// address: 0x445f88
// body: available
// range: 0x445f88-0x445ff8 inclusive
// range: 0x446003-0x446018 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445fa9 (push 0x446019 followed by fs-segment stack chaining); handler 0x446019 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445fda (push 0x445ff9 followed by fs-segment stack chaining); handler 0x445ff9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445f88(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  ULONG_PTR local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = (undefined1 *)0x445f9e;
  local_8 = param_1;
  FUN_00407ad0(param_1);
  puStack_2c = &LAB_00446019;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_34 = (undefined1 *)0x445fb1;
  puStack_28 = &stack0xfffffffc;
  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    local_18 = 0x1000;
    puStack_34 = (undefined1 *)0x445fc4;
    local_14 = FUN_00407ae0(local_8);
    local_c = 0;
    puStack_38 = &LAB_00445ff9;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    local_10 = param_2;
    RaiseException(0x406d1388,0,4,&local_18);
    *in_FS_OFFSET = uStack_3c;
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00446020;
  puStack_2c = (undefined1 *)0x446018;
  FUN_004072d8(&local_8,local_30,puVar1);
  return;
}
