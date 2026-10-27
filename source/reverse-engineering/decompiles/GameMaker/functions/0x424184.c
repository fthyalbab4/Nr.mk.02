// rea decompile_all
// name: FUN_00424184
// address: 0x424184
// body: available
// range: 0x424184-0x424212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4241a6 (push 0x424213 followed by fs-segment stack chaining); handler 0x424213 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424184(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_2c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_00424213;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  FUN_0042bf68(param_1,&local_18);
  local_14 = local_18;
  local_10 = 0x11;
  FUN_0042bf68(param_2,&local_1c);
  local_c = local_1c;
  local_8 = 0x11;
  puVar3 = &local_14;
  uVar2 = 1;
  FUN_0040b75c(PTR_PTR_00781574,&local_20);
  FUN_0041bef4(&PTR_LAB_00423948,1,local_20,uVar2,puVar3);
  FUN_00406618();
  puVar1 = puStack_34;
  *in_FS_OFFSET = uVar2;
  puStack_34 = &LAB_0042421a;
  thunk_FUN_00406e80(&local_20,3,puVar1);
  return;
}
