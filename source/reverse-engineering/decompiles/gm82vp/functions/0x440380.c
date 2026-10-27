// rea decompile_all
// name: FUN_00440380
// address: 0x440380
// body: available
// range: 0x440380-0x4403fc inclusive
// range: 0x440414-0x440429 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44039e (push 0x44042a followed by fs-segment stack chaining); handler 0x44042a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4403ac (push 0x4403fd followed by fs-segment stack chaining); handler 0x4403fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440380(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0044042a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_004403fd;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  cVar3 = FUN_00440718(param_1);
  if (cVar3 != '\v') {
    FUN_0043e23c();
  }
  iVar4 = FUN_0042ba48(param_2);
  uVar1 = **(undefined4 **)(iVar4 + 1);
  while (FUN_00440460(param_1,&local_8), puVar2 = puStack_1c, local_8 != 0) {
    FUN_0043e274(uVar1,local_8);
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_00440431;
  puStack_20 = (undefined1 *)0x440429;
  thunk_FUN_004072d8(&local_8,local_24,puVar2);
  return;
}
