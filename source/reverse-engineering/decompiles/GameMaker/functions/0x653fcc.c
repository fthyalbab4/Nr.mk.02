// rea decompile_all
// name: FUN_00653fcc
// address: 0x653fcc
// body: available
// range: 0x653fcc-0x65409f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x653fe4 (push 0x6540a0 followed by fs-segment stack chaining); handler 0x6540a0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653fcc(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  uVar3 = 1;
  puStack_24 = &LAB_006540a0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00655b40(*(undefined4 *)(param_1 + 0x430),&local_8);
  uVar2 = local_8;
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3bc),&local_c);
  FUN_00408640(uVar2,local_c);
  if (!(bool)uVar3) {
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3bc),&local_14);
    FUN_0040839c(&local_10,L"Script Properties: ",local_14);
    FUN_004ee6d8(param_1,local_10);
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3bc),&local_18);
    FUN_00655ba0(*(undefined4 *)(param_1 + 0x430),local_18);
    FUN_0071c3e0();
    FUN_00655ce8(*(undefined4 *)(param_1 + 0x430));
    *(undefined1 *)(param_1 + 0x42c) = 1;
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006540a7;
  puStack_24 = (undefined1 *)0x654087;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_24 = (undefined1 *)0x65408f;
  thunk_FUN_00406e5c(&local_10);
  puStack_24 = (undefined1 *)0x654097;
  thunk_FUN_00406e5c(&local_c);
  puStack_24 = (undefined1 *)0x65409f;
  thunk_FUN_00406e5c(&local_8);
  return;
}
