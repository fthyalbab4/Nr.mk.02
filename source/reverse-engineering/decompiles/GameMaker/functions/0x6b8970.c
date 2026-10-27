// rea decompile_all
// name: FUN_006b8970
// address: 0x6b8970
// body: available
// range: 0x6b8970-0x6b8c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b898f (push 0x6b8c58 followed by fs-segment stack chaining); handler 0x6b8c58 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b8970(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;

  local_1c = &stack0xfffffffc;
  iVar8 = 7;
  do {
    local_8 = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_20 = &LAB_006b8c58;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)0x6b8999;
  cVar2 = FUN_006b8960(param_1);
  if (cVar2 != '\0') {
    local_28 = (undefined4 *)0x186a0;
    local_2c = (undefined1 *)0x0;
    local_30 = 100000;
    local_34 = 0x6b89bb;
    FUN_006b1018(param_1,4,0);
    local_28 = (undefined4 *)0x6b89c2;
    cVar2 = FUN_006b288c(param_1);
    if (cVar2 != '\0') {
      local_28 = (undefined4 *)0x6b89cd;
      FUN_006b2a38(param_1);
    }
    local_28 = &local_c;
    local_2c = (undefined1 *)0x6b89e1;
    FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_1c);
    local_2c = (undefined1 *)0x6b89f4;
    FUN_004086a8(local_1c,1,*(undefined4 *)(param_1 + 0x2f0));
    local_2c = &stack0xfffffff0;
    local_30 = 0x6b8a08;
    FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_20);
    local_30 = 0x6b8a1c;
    FUN_004086a8(local_20,*(int *)(param_1 + 0x2f0) + 1,100000);
    local_30 = 0x6b8a21;
    uVar3 = FUN_004895b4();
    local_30 = 0x6b8a29;
    FUN_00488ff8(uVar3,&local_8);
    local_30 = 0x6b8a35;
    piVar4 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    local_30 = 0x6b8a41;
    (**(code **)(*piVar4 + 0x2c))(piVar4,local_8);
    iVar8 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      local_30 = 0x6b8a5e;
      iVar8 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      local_30 = 0x6b8a7d;
      iVar5 = FUN_00407048(&local_8,local_8);
    }
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + -4);
    }
    if (*(short *)(iVar8 + -2 + iVar6 * 2) == 10) {
      bVar9 = true;
    }
    else {
      iVar8 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        local_30 = 0x6b8aaf;
        iVar8 = FUN_00407048(&local_8,local_8);
      }
      iVar5 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        local_30 = 0x6b8ace;
        iVar5 = FUN_00407048(&local_8,local_8);
      }
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + -4);
      }
      bVar9 = *(short *)(iVar8 + -2 + iVar6 * 2) == 0xd;
    }
    if (bVar9) {
      local_30 = 0x6b8aed;
      (**(code **)(*piVar4 + 0x38))(piVar4,0);
    }
    local_30 = 0x6b8af9;
    (**(code **)(*piVar4 + 0xc))(piVar4,0,&local_28);
    local_30 = 0x6b8b07;
    FUN_0040839c(&local_24,local_c,local_28);
    local_30 = 0x6b8b13;
    (**(code **)(*piVar4 + 0x20))(piVar4,0,local_24);
    local_30 = 0x6b8b1a;
    iVar8 = (**(code **)(*piVar4 + 0x14))();
    local_30 = 0x6b8b27;
    (**(code **)(*piVar4 + 0xc))(piVar4,iVar8 + -1,&local_2c);
    uVar3 = 0;
    if (local_2c != (undefined1 *)0x0) {
      uVar3 = *(undefined4 *)(local_2c + -4);
    }
    *(undefined4 *)(param_1 + 0x2f0) = uVar3;
    local_30 = 0x6b8b46;
    iVar8 = (**(code **)(*piVar4 + 0x14))();
    local_30 = 0x6b8b53;
    (**(code **)(*piVar4 + 0xc))(piVar4,iVar8 + -1,&local_34);
    local_30 = 0x6b8b5e;
    FUN_004082dc(&local_34,unaff_EBX);
    local_30 = local_34;
    local_34 = 0x6b8b69;
    iVar8 = (**(code **)(*piVar4 + 0x14))();
    uVar3 = local_30;
    local_30 = 0x6b8b74;
    (**(code **)(*piVar4 + 0x20))(piVar4,iVar8 + -1,uVar3);
    local_30 = 0x6b8b80;
    (**(code **)(*piVar4 + 0xc))(piVar4,0,&local_38);
    local_30 = 0x6b8b90;
    FUN_006b7a68(param_1,*(undefined4 *)(param_1 + 0x2ec),local_38);
    local_30 = 0x6b8b97;
    iVar8 = (**(code **)(*piVar4 + 0x14))();
    iVar8 = iVar8 + -1;
    if (0 < iVar8) {
      iVar5 = 1;
      do {
        local_28 = (undefined4 *)0x6b8bb3;
        (**(code **)(*piVar4 + 0xc))(piVar4,iVar5,&local_3c);
        local_28 = (undefined4 *)0x6b8bc4;
        FUN_006b7c40(param_1,*(int *)(param_1 + 0x2ec) + 1,local_3c);
        *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_28 = (undefined4 *)0x6b8bd9;
    FUN_00405a7c(piVar4);
    local_28 = (undefined4 *)0x6b8be0;
    FUN_006b2a1c(param_1);
    uVar3 = *(undefined4 *)(param_1 + 0x2d8);
    local_28 = (undefined4 *)0x6b8bed;
    uVar7 = FUN_00409a20(uVar3);
    local_28 = (undefined4 *)0x6b8bf6;
    FUN_006ab1d0(uVar3,uVar7);
    local_28 = (undefined4 *)0x6b8bfd;
    FUN_006b30f0(param_1);
    if (*(short *)(param_1 + 0x2d2) != 0) {
      local_28 = (undefined4 *)0x6b8c15;
      (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
    }
    local_28 = (undefined4 *)0x6b8c1c;
    FUN_006b281c(param_1);
    local_28 = (undefined4 *)0x6b8c23;
    FUN_004eed28(param_1);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006b8c5f;
  local_20 = (undefined1 *)0x6b8c3d;
  thunk_FUN_00406e80(&local_3c,3,puVar1);
  local_20 = (undefined1 *)0x6b8c4a;
  thunk_FUN_00406e80(&local_2c,5);
  local_20 = (undefined1 *)0x6b8c57;
  thunk_FUN_00406e80(&stack0xfffffff0,3);
  return;
}
