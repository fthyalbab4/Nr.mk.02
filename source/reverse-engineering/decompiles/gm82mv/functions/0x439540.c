// rea decompile_all
// name: FUN_00439540
// address: 0x439540
// body: available
// range: 0x439540-0x43957e inclusive
// range: 0x439597-0x439738 inclusive
// range: 0x439740-0x4397f8 inclusive
// range: 0x439800-0x439808 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43966b (push 0x439739 followed by fs-segment stack chaining); handler 0x439739 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x439790 (push 0x4397f9 followed by fs-segment stack chaining); handler 0x4397f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439540(int *param_1,int param_2,undefined1 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  int local_10;

  if (param_4 != 0) {
    uStack_20 = 0;
    puStack_24 = (undefined1 *)0x439567;
    FUN_00439540(param_1,param_2,0);
    param_2 = param_4;
  }
  switch(param_3) {
  case 0:
    puStack_24 = (undefined1 *)0x43959e;
    (**(code **)(*param_1 + 8))();
    puStack_24 = (undefined1 *)0x4395a8;
    FUN_00439168(param_1,*(undefined4 *)(param_2 + 0xc));
    local_10 = *(int *)(param_2 + 8);
    if (-1 < local_10 + -1) {
      iVar6 = 0;
      do {
        puStack_24 = (undefined1 *)0x4395c3;
        uVar3 = FUN_00438ec4(param_2,iVar6);
        puStack_24 = (undefined1 *)0x4395cc;
        FUN_00438d04(param_1,uVar3);
        iVar6 = iVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    break;
  case 1:
    iVar6 = param_1[2] + -1;
    if (-1 < iVar6) {
      do {
        puStack_24 = (undefined1 *)0x4395ed;
        uVar3 = FUN_00438ec4(param_1,iVar6);
        puStack_24 = (undefined1 *)0x4395f6;
        iVar5 = FUN_00438f2c(param_2,uVar3);
        if (iVar5 == -1) {
          puStack_24 = (undefined1 *)0x439602;
          FUN_00438d5c(param_1,iVar6);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
    break;
  case 2:
    local_10 = *(int *)(param_2 + 8);
    if (-1 < local_10 + -1) {
      iVar6 = 0;
      do {
        puStack_24 = (undefined1 *)0x439628;
        uVar3 = FUN_00438ec4(param_2,iVar6);
        puStack_24 = (undefined1 *)0x439631;
        iVar5 = FUN_00438f2c(param_1,uVar3);
        if (iVar5 == -1) {
          puStack_24 = (undefined1 *)0x43963d;
          uVar3 = FUN_00438ec4(param_2,iVar6);
          puStack_24 = (undefined1 *)0x439646;
          FUN_00438d04(param_1,uVar3);
        }
        iVar6 = iVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    break;
  case 3:
    puStack_24 = (undefined1 *)0x43965d;
    iVar6 = FUN_00405fac(&PTR_LAB_0042e000,1);
    puStack_28 = &LAB_00439739;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    FUN_00439168(iVar6,*(undefined4 *)(param_2 + 8));
    local_10 = *(int *)(param_2 + 8);
    if (-1 < local_10 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_00438ec4(param_2,iVar5);
        iVar2 = FUN_00438f2c(param_1,uVar3);
        if (iVar2 == -1) {
          uVar3 = FUN_00438ec4(param_2,iVar5);
          FUN_00438d04(iVar6,uVar3);
        }
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    iVar5 = param_1[2] + -1;
    if (-1 < iVar5) {
      do {
        uVar3 = FUN_00438ec4(param_1,iVar5);
        iVar2 = FUN_00438f2c(param_2,uVar3);
        if (iVar2 != -1) {
          FUN_00438d5c(param_1,iVar5);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    iVar5 = param_1[2] + *(int *)(iVar6 + 8);
    if (param_1[3] < iVar5) {
      FUN_00439168(param_1,iVar5);
    }
    local_10 = *(int *)(iVar6 + 8);
    if (-1 < local_10 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_00438ec4(iVar6,iVar5);
        FUN_00438d04(param_1,uVar3);
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    puVar1 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x439800;
    puStack_28 = (undefined1 *)0x439738;
    FUN_00405fdc(iVar6,uStack_2c,puVar1);
    return;
  case 4:
    iVar6 = param_1[2] + -1;
    if (-1 < iVar6) {
      do {
        puStack_24 = (undefined1 *)0x439756;
        uVar3 = FUN_00438ec4(param_1,iVar6);
        puStack_24 = (undefined1 *)0x43975f;
        iVar5 = FUN_00438f2c(param_2,uVar3);
        if (iVar5 != -1) {
          puStack_24 = (undefined1 *)0x43976b;
          FUN_00438d5c(param_1,iVar6);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
    break;
  case 5:
    puStack_24 = (undefined1 *)0x439782;
    uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
    puStack_28 = &LAB_004397f9;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    FUN_00439168(uVar3,*(undefined4 *)(param_2 + 8));
    iVar6 = *(int *)(param_2 + 8) + -1;
    if (-1 < iVar6) {
      do {
        uVar4 = FUN_00438ec4(param_2,iVar6);
        iVar5 = FUN_00438f2c(param_1,uVar4);
        if (iVar5 == -1) {
          uVar4 = FUN_00438ec4(param_2,iVar6);
          FUN_00438d04(uVar3,uVar4);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
    FUN_00439540(param_1,uVar3,0);
    puVar1 = puStack_28;
    *in_FS_OFFSET = 0;
    puStack_28 = (undefined1 *)0x439800;
    uStack_2c = 0x4397f8;
    FUN_00405fdc(uVar3,0,puVar1);
    return;
  }
  return;
}
