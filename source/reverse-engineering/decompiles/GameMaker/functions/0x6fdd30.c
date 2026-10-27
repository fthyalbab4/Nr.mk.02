// rea decompile_all
// name: FUN_006fdd30
// address: 0x6fdd30
// body: available
// range: 0x6fdd30-0x6fddf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fdd49 (push 0x6fddf1 followed by fs-segment stack chaining); handler 0x6fddf1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fdd30(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_006fddf1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0041666c(param_1,&local_c);
  FUN_0040839c(&local_8,L"ValueText",local_c);
  uVar2 = FUN_0044959c(DAT_007901a0,local_8);
  FUN_004ee5c0(uVar2,0);
  FUN_0041666c(param_1,&local_14);
  FUN_0040839c(&local_10,L"ValueVal",local_14);
  uVar2 = FUN_0044959c(DAT_007901a0,local_10);
  FUN_004ee5c0(uVar2,0);
  FUN_0041666c(param_1,&local_1c);
  FUN_0040839c(&local_18,L"MenuBtn",local_1c);
  uVar2 = FUN_0044959c(DAT_007901a0,local_18);
  FUN_004ee5c0(uVar2,0);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006fddf8;
  puStack_28 = (undefined1 *)0x6fddf0;
  thunk_FUN_00406e80(&local_1c,6,puVar1);
  return;
}
