// rea decompile_all
// name: FUN_0064b8a4
// address: 0x64b8a4
// body: available
// range: 0x64b8a4-0x64bb56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64b8c5 (push 0x64bb57 followed by fs-segment stack chaining); handler 0x64bb57 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b8a4(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 *puVar6;
  int *piVar7;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  undefined4 local_8;

  puStack_44 = &stack0xfffffffc;
  local_34 = 0;
  local_8 = 0;
  puStack_48 = &LAB_0064bb57;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  *(undefined4 *)PTR_DAT_00782130 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x715);
  if (*(int *)(param_1 + 0x40) == 1) {
    *(undefined4 *)PTR_DAT_00782130 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x719);
  }
  local_9 = param_2;
  (**(code **)(**(int **)PTR_DAT_00781c70 + 8))
            (*(int **)PTR_DAT_00781c70,*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x734));
  *(undefined4 *)PTR_DAT_00781e5c = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x760);
  FUN_00649ab0();
  piVar7 = &local_18;
  puVar6 = local_30;
  FUN_0064b7a0(param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),puVar6,
               &local_1c,piVar7,*(undefined4 *)(param_1 + 0x3c));
  if (local_9 != '\0') {
    if (-1 < local_18) {
      iVar5 = local_18 + 1;
      uVar4 = 0;
      do {
        uVar1 = uVar4 & 0x80000007;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
        }
        if ((int)uVar1 < 4) {
          local_20 = *(undefined4 *)PTR_DAT_00781bb0;
        }
        else {
          local_20 = *(undefined4 *)PTR_DAT_00781744;
        }
        FUN_00702884(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),
                     *(int *)(param_1 + 0x38) + uVar4,*(undefined4 *)(param_1 + 0x3c),local_20);
        FUN_00702884(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),
                     *(int *)(param_1 + 0x38) + uVar4,*(int *)(param_1 + 0x3c) + local_1c,local_20);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (-1 < local_1c) {
      iVar5 = local_1c + 1;
      uVar4 = 0;
      do {
        uVar1 = uVar4 & 0x80000007;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
        }
        if ((int)uVar1 < 4) {
          local_20 = *(undefined4 *)PTR_DAT_00781bb0;
        }
        else {
          local_20 = *(undefined4 *)PTR_DAT_00781744;
        }
        FUN_00702884(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),
                     *(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x3c) + uVar4,local_20);
        FUN_00702884(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),
                     *(int *)(param_1 + 0x38) + local_18,*(int *)(param_1 + 0x3c) + uVar4,local_20);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  iVar5 = 1;
  local_10 = *(int *)(param_1 + 0x3c);
  while( true ) {
    iVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x34));
    if (iVar3 < iVar5) break;
    FUN_00407f0c(&local_8,0);
    while( true ) {
      iVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x34));
      if ((iVar3 < iVar5) || (*(short *)(*(int *)(param_1 + 0x34) + -2 + iVar5 * 2) == 0x23)) break;
      FUN_00408034(&local_34,*(undefined2 *)(*(int *)(param_1 + 0x34) + -2 + iVar5 * 2));
      FUN_004082dc(&local_8,local_34);
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 + 1;
    local_14 = FUN_00630e74(local_8);
    iVar3 = *(int *)(param_1 + 0x38);
    if (*(int *)(*(int *)PTR_DAT_00781e14 + 0x730) == 1) {
      iVar2 = local_18 - local_14 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((local_18 - local_14 & 1U) != 0);
      }
      iVar3 = iVar3 + iVar2;
    }
    if (*(int *)(*(int *)PTR_DAT_00781e14 + 0x730) == 2) {
      iVar3 = iVar3 + (local_18 - local_14);
    }
    puVar6 = local_30;
    FUN_00630f54(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar3,local_10);
    iVar3 = FUN_00630ee4(local_8);
    local_10 = local_10 + iVar3;
  }
  FUN_00644e28(*(undefined4 *)PTR_DAT_00781e14);
  FUN_004eed28(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc));
  *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x70d) = 1;
  *in_FS_OFFSET = (int)puVar6;
  thunk_FUN_00406e5c(&local_34,puVar6,piVar7,&LAB_0064bb5e);
  thunk_FUN_00406e5c(&local_8);
  return;
}
