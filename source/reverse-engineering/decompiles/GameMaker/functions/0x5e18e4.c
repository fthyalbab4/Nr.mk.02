// rea decompile_all
// name: FUN_005e18e4
// address: 0x5e18e4
// body: available
// range: 0x5e18e4-0x5e1958 inclusive
// range: 0x5e1963-0x5e1978 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e18ff (push 0x5e1979 followed by fs-segment stack chaining); handler 0x5e1979 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e193a (push 0x5e1959 followed by fs-segment stack chaining); handler 0x5e1959 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e18e4(undefined4 param_1)

{
  undefined1 *puVar1;
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

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_2c = &LAB_005e1979;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_34 = (undefined1 *)0x5e1911;
  FUN_0040810c(&local_8,param_1,0);
  local_18 = 0x1000;
  puStack_34 = (undefined1 *)0x5e1920;
  local_14 = FUN_00407670(local_8);
  local_10 = 0xffffffff;
  local_c = 0;
  puStack_38 = &LAB_005e1959;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  RaiseException(0x406d1388,0,4,&local_18);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_005e1980;
  puStack_2c = (undefined1 *)0x5e1978;
  FUN_00406e5c(&local_8,local_30,puVar1);
  return;
}
