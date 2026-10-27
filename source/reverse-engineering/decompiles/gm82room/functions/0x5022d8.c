// rea decompile_all
// name: FUN_005022d8
// address: 0x5022d8
// body: available
// range: 0x5022d8-0x502341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5022ec (push 0x502342 followed by fs-segment stack chaining); handler 0x502342 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005022d8(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00502342;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = *(int *)(param_1 + 0x2e8);
  puVar2 = &stack0xfffffffc;
  if (iVar1 != 0) {
    FUN_005027e8(param_1,&local_8);
    FUN_005035fc(iVar1,local_8);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  FUN_00502a64(param_1);
  if (*(short *)(param_1 + 0x30a) != 0) {
    (**(code **)(param_1 + 0x308))(*(undefined4 *)(param_1 + 0x30c),param_1);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00502349;
  puStack_18 = (undefined1 *)0x502341;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar2);
  return;
}
