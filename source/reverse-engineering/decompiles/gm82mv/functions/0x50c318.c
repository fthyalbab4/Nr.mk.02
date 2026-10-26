// rea decompile_all
// name: FUN_0050c318
// address: 0x50c318
// body: available
// range: 0x50c318-0x50c411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50c345 (push 0x50c412 followed by fs-segment stack chaining); handler 0x50c412 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c318(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;

  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = (undefined1 *)0x50c33a;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_30 = &LAB_0050c412;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0043d4f4(local_c);
  iVar1 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar1 = FUN_00407488(&local_8,local_8);
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + -4);
  }
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  if (0 < iVar1) {
    iVar3 = 1;
    do {
      puVar6 = &LAB_0050c42c;
      FUN_00408310(&local_18,*(undefined2 *)(local_8 + -4 + iVar3 * 4));
      uVar4 = 0x50c3b4;
      uVar5 = local_18;
      FUN_00408310(&local_1c,*(undefined2 *)(local_8 + -2 + iVar3 * 4));
      uStack_34 = local_1c;
      FUN_0040875c(&local_14,3);
      local_d = FUN_00416600(local_14);
      FUN_0043cac0(local_c,&local_d,1,uVar4,uVar5,puVar6);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0043c854(local_c);
  puVar6 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0050c419;
  puStack_30 = (undefined1 *)0x50c409;
  thunk_FUN_004072fc(&local_1c,3,puVar6);
  puStack_30 = (undefined1 *)0x50c411;
  thunk_FUN_004072d8(&local_8);
  return;
}
