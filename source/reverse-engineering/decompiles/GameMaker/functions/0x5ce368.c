// rea decompile_all
// name: FUN_005ce368
// address: 0x5ce368
// body: available
// range: 0x5ce368-0x5ce459 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce39b (push 0x5ce45a followed by fs-segment stack chaining); handler 0x5ce45a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ce368(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_24 = (undefined1 *)0x5ce388;
  local_c = param_2;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_24 = (undefined1 *)0x5ce390;
  FUN_00407660(local_c);
  puStack_28 = &LAB_005ce45a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0040740c(&local_14,4);
  FUN_004080e4(&local_10,local_14);
  uVar4 = *(undefined4 *)PTR_PTR_00781b2c;
  uVar3 = *(undefined4 *)PTR_PTR_007828bc;
  uVar1 = *(undefined4 *)PTR_PTR_007817d0;
  uVar2 = local_c;
  uVar5 = local_8;
  FUN_0040740c(&local_1c,5);
  FUN_004080e4(&local_18,local_1c);
  FUN_004082dc(&local_18,local_10);
  FUN_0040810c(param_3,local_18,0,uVar1,uVar2,uVar3,uVar4,uVar5);
  *in_FS_OFFSET = uVar1;
  FUN_00406e5c(&local_1c,uVar1,uVar3,&LAB_005ce461);
  thunk_FUN_00406e5c(&local_18);
  FUN_00406e5c(&local_14);
  thunk_FUN_00406e5c(&local_10);
  FUN_00406e80(&local_c,2);
  return;
}
