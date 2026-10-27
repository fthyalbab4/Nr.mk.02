// rea decompile_all
// name: FUN_00448d7c
// address: 0x448d7c
// body: available
// range: 0x448d7c-0x448dec inclusive
// range: 0x448df7-0x448e0c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448d9d (push 0x448e0d followed by fs-segment stack chaining); handler 0x448e0d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448dce (push 0x448ded followed by fs-segment stack chaining); handler 0x448ded lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448d7c(undefined4 param_1,undefined4 param_2)

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

  puStack_28 = (undefined1 *)0x448d92;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_2c = &LAB_00448e0d;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_34 = (undefined1 *)0x448da5;
  puStack_28 = &stack0xfffffffc;
  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    local_18 = 0x1000;
    puStack_34 = (undefined1 *)0x448db8;
    local_14 = FUN_00407670(local_8);
    local_c = 0;
    puStack_38 = &LAB_00448ded;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    local_10 = param_2;
    RaiseException(0x406d1388,0,4,&local_18);
    *in_FS_OFFSET = uStack_3c;
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00448e14;
  puStack_2c = (undefined1 *)0x448e0c;
  FUN_00406e5c(&local_8,local_30,puVar1);
  return;
}
