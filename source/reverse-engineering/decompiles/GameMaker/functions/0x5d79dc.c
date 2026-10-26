// rea decompile_all
// name: FUN_005d79dc
// address: 0x5d79dc
// body: available
// range: 0x5d79dc-0x5d7a4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d79f5 (push 0x5d7a4d followed by fs-segment stack chaining); handler 0x5d7a4d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d79dc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_005d7a4d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_1 == -0x7ffbfeee) {
    FUN_00405954(**(undefined4 **)(param_4 + -4),&local_10);
    local_c = local_10;
    local_8 = 0x11;
    FUN_0041bef4(&PTR_LAB_005b5d34,1,param_2,0,&local_c);
    FUN_00406618();
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  FUN_005b641c();
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005d7a54;
  puStack_1c = (undefined1 *)0x5d7a4c;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  return;
}
