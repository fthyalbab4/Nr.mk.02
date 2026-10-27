// rea decompile_all
// name: FUN_004211cc
// address: 0x4211cc
// body: available
// range: 0x4211cc-0x421406 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4211f8 (push 0x421407 followed by fs-segment stack chaining); handler 0x421407 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004211cc(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_8;

  puStack_24 = (undefined1 *)0x4211e5;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_24 = (undefined1 *)0x4211ed;
  thunk_FUN_00407ad0(param_4);
  puStack_28 = &LAB_00421407;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = param_4;
  puStack_24 = &stack0xfffffffc;
  if ((param_4 != 0) && (puStack_24 = &stack0xfffffffc, *(short *)(param_4 + -10) != 2)) {
    puStack_24 = &stack0xfffffffc;
    iVar2 = FUN_00407488(&param_4,param_4);
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  iVar5 = iVar5 - iVar3;
  if (iVar5 == 0) {
    iVar2 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      iVar2 = FUN_00407488(&param_4,param_4);
    }
    iVar5 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      iVar5 = FUN_00407488(&param_4,param_4);
    }
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + -4);
    }
    FUN_00404514(iVar2,*(int *)(param_1 + 4) + param_2 * 2,iVar3 * 2);
  }
  else {
    if (0 < iVar5) {
      FUN_00420094(param_1);
      FUN_00420fb4(param_1,*(int *)(param_1 + 8) + iVar5);
      FUN_00420094(param_1);
    }
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    local_14 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      local_14 = FUN_00407488(&param_4,param_4);
    }
    if (local_14 != 0) {
      local_14 = *(int *)(local_14 + -4);
    }
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4);
    }
    FUN_00404514(*(int *)(param_1 + 4) + (iVar3 + param_2) * 2,
                 *(int *)(param_1 + 4) + (param_2 + local_14) * 2,
                 (*(int *)(param_1 + 8) - (iVar4 + param_2)) * 2);
    iVar2 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      iVar2 = FUN_00407488(&param_4,param_4);
    }
    iVar3 = param_4;
    if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
      iVar3 = FUN_00407488(&param_4,param_4);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    FUN_00404514(iVar2,*(int *)(param_1 + 4) + param_2 * 2,iVar4 * 2);
    if (iVar5 < 0) {
      FUN_00420fb4(param_1,*(int *)(param_1 + 8) + iVar5);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0042140e;
  puStack_28 = (undefined1 *)0x4213fe;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x421406;
  thunk_FUN_004072d8(&param_4);
  return;
}
