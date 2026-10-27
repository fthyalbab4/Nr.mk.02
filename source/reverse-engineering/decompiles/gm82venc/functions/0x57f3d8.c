// rea decompile_all
// name: FUN_0057f3d8
// address: 0x57f3d8
// body: available
// range: 0x57f3d8-0x57f605 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57f402 (push 0x57f606 followed by fs-segment stack chaining); handler 0x57f606 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f3d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_28;
  int local_14;
  undefined4 local_10 [2];
  undefined4 local_8;

  local_14 = 0;
  puStack_44 = (undefined1 *)0x57f3f7;
  local_10[0] = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_2);
  puStack_48 = &LAB_0057f606;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0057ebcc(local_10[0],local_8,&local_14);
  FUN_0057fae0(local_8,local_10[0]);
  iVar2 = local_14;
  if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_14,local_14,0);
  }
  local_28 = 0;
  if (iVar2 != 0) {
    local_28 = *(int *)(iVar2 + -4);
  }
  if (0 < local_28) {
    iVar2 = 1;
    do {
      iVar3 = local_14;
      if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_14,local_14,0);
      }
      uVar4 = FUN_00514868(param_3,param_8);
      iVar5 = local_14;
      if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
        iVar5 = FUN_004074b8(&local_14,local_14,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar5 + -1 + iVar2));
      uVar6 = FUN_00514868(param_3,param_8);
      iVar5 = local_14;
      if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
        iVar5 = FUN_004074b8(&local_14,local_14,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar5 + -1 + iVar2));
      uVar7 = FUN_00514868(param_6,param_7);
      uVar8 = FUN_00514868(param_6,param_7);
      FUN_0057f23c(*(undefined1 *)(iVar3 + -1 + iVar2),uVar4,uVar6,uVar8,uVar7);
      iVar3 = local_14;
      if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_14,local_14,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_14;
      if ((local_14 != 0) && (*(short *)(local_14 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_14,local_14,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar2 = iVar2 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  puVar1 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_0057f60d;
  puStack_48 = (undefined1 *)0x57f5fd;
  FUN_004072d8(&local_14,uStack_4c,puVar1);
  puStack_48 = (undefined1 *)0x57f605;
  thunk_FUN_004072d8(local_10);
  return;
}
