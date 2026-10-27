// rea decompile_all
// name: FUN_0054062c
// address: 0x54062c
// body: available
// range: 0x54062c-0x5406f4 inclusive
// range: 0x54071d-0x540852 inclusive
// range: 0x54086f-0x540a92 inclusive
// range: 0x540abb-0x540ac6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x540657 (push 0x540aa4 followed by fs-segment stack chaining); handler 0x540aa4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5406cb (push 0x540a93 followed by fs-segment stack chaining); handler 0x540a93 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054062c(int *param_1,char param_2,undefined1 param_3,undefined4 param_4,byte param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined4 *in_FS_OFFSET;
  HGDIOBJ pvVar11;
  undefined4 uVar12;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined2 local_33;
  undefined1 local_31;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  HGDIOBJ local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;

  puStack_44 = (undefined1 *)0x540649;
  local_9 = param_3;
  local_8 = param_1;
  local_10 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_48 = &LAB_00540aa4;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  if (param_2 == '\0') {
    puStack_50 = (undefined1 *)0x540669;
    puStack_44 = &stack0xfffffffc;
    (**(code **)(*local_10 + 8))(local_10,local_8);
    puStack_50 = (undefined1 *)0x540673;
    FUN_0053b908(local_10,6);
    *in_FS_OFFSET = uStack_4c;
  }
  else {
    puStack_50 = (undefined1 *)0x540688;
    puStack_44 = &stack0xfffffffc;
    iVar4 = (**(code **)(*local_8 + 0x30))();
    puStack_50 = (undefined1 *)0x540692;
    iVar5 = (**(code **)(*local_8 + 0x24))();
    if (500000 < iVar4 * iVar5) {
      puStack_50 = (undefined1 *)0x5406a7;
      FUN_0053b908(local_10,1);
    }
    local_18 = 0;
    local_1c = (int *)0x0;
    local_24 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_14 = (HGDIOBJ)0x0;
    puStack_54 = &LAB_00540a93;
    uStack_58 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_58;
    puStack_50 = &stack0xfffffffc;
    local_28 = (undefined4 *)FUN_0053be18(&PTR_LAB_0053ba74,1,local_8,6);
    switch(param_2) {
    default:
      FUN_0040670c();
      *in_FS_OFFSET = uStack_4c;
      return local_10;
    case '\x01':
      local_14 = GetStockObject(0xf);
      break;
    case '\x02':
      local_14 = (HGDIOBJ)FUN_005405d4();
      break;
    case '\x03':
      local_14 = (HGDIOBJ)FUN_00540578();
      break;
    case '\x04':
      local_14 = (HGDIOBJ)FUN_0054051c();
      break;
    case '\x05':
      local_14 = (HGDIOBJ)FUN_005404cc();
      break;
    case '\x06':
      local_14 = (HGDIOBJ)FUN_0053b458();
      break;
    case '\a':
      local_14 = (HGDIOBJ)FUN_00540344(local_28,1 << (param_5 & 0x1f),8,0);
      break;
    case '\b':
      local_14 = (HGDIOBJ)FUN_00540460(local_8,0x100,8,1);
      break;
    case '\t':
      local_14 = (HGDIOBJ)FUN_00461ed4(param_4);
    }
    if (param_2 == '\x04') {
      local_18 = FUN_0053cf80(&LAB_0053caf8,1,local_14);
    }
    else if (param_2 == '\x05') {
      local_18 = FUN_0053cf0c(&PTR_FUN_0053c998,1,local_14);
    }
    else if (param_2 == '\x06') {
      local_18 = FUN_0053ce4c(&PTR_FUN_0053c830,1,local_14);
    }
    else if (param_2 == '\a') {
      local_18 = FUN_0053cc38(&PTR_FUN_0053c664,1,local_14);
    }
    else {
      local_18 = FUN_0053cc38(&PTR_FUN_0053c664,1,local_14);
    }
    if (*(int *)(local_18 + 4) != 0) {
      switch(local_9) {
      case 0:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053e300(&PTR_FUN_0053d06c,1,uVar6,iVar4);
        break;
      case 1:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053e3b8(&PTR_FUN_0053d314,1,uVar6,iVar4);
        break;
      case 2:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053ec74(&PTR_FUN_0053d9ac,1,uVar6,iVar4);
        break;
      case 3:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053ed2c(&PTR_FUN_0053daa8,1,uVar6,iVar4);
        break;
      case 4:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053ede0(&PTR_FUN_0053dba4,1,uVar6,iVar4);
        break;
      case 5:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053eea4(&PTR_FUN_0053dca0,1,uVar6,iVar4);
        break;
      case 6:
        iVar4 = local_18;
        uVar6 = (**(code **)(*local_8 + 0x30))();
        local_1c = (int *)FUN_0053f654(&PTR_FUN_0053e080,1,uVar6,iVar4);
        break;
      default:
        FUN_0040670c();
        *in_FS_OFFSET = uStack_4c;
        return local_10;
      }
      uVar12 = 3;
      uVar6 = (**(code **)(*local_8 + 0x30))();
      uVar7 = (**(code **)(*local_8 + 0x24))();
      pvVar11 = local_14;
      local_24 = (undefined4 *)
                 FUN_0053be98(&PTR_FUN_0053bb90,1,local_10,local_14,uVar7,uVar6,uVar12);
      local_20 = 0;
      while (iVar4 = (**(code **)(*local_8 + 0x24))(), local_20 < iVar4) {
        local_2c = (**(code **)*local_28)(local_28,local_20);
        local_30 = (**(code **)*local_24)(local_24,local_20);
        puVar9 = (undefined2 *)(local_1c[2] * 3 + local_2c);
        puVar10 = (undefined1 *)(local_1c[2] + local_30);
        while ((local_1c[2] < local_1c[4] && (-1 < local_1c[2]))) {
          uVar1 = *puVar9;
          local_31 = *(undefined1 *)(puVar9 + 1);
          local_33._0_1_ = (undefined1)uVar1;
          local_33._1_1_ = (undefined1)((ushort)uVar1 >> 8);
          uVar3 = local_33._1_1_;
          uVar2 = (undefined1)local_33;
          local_33 = uVar1;
          uVar3 = (**(code **)(*local_1c + 4))
                            (local_1c,local_31,uVar3,&local_33,(int)&local_33 + 1,&local_31,uVar2);
          *puVar10 = uVar3;
          puVar9 = (undefined2 *)((int)puVar9 + local_1c[1] * 3);
          puVar10 = puVar10 + local_1c[1];
        }
        local_20 = local_20 + 1;
        (**(code **)(*local_1c + 8))();
      }
      piVar8 = (int *)0x0;
      *in_FS_OFFSET = pvVar11;
      if (local_18 != 0) {
        piVar8 = (int *)FUN_00405a7c(local_18,pvVar11,uVar6,&DAT_00540a9a);
      }
      if (local_1c != (int *)0x0) {
        piVar8 = (int *)FUN_00405a7c(local_1c);
      }
      if (local_24 != (undefined4 *)0x0) {
        piVar8 = (int *)FUN_00405a7c(local_24);
      }
      if (local_28 != (undefined4 *)0x0) {
        piVar8 = (int *)FUN_00405a7c(local_28);
      }
      if (local_14 != (HGDIOBJ)0x0) {
        piVar8 = (int *)DeleteObject(local_14);
      }
      return piVar8;
    }
    FUN_0040670c();
    *in_FS_OFFSET = uStack_4c;
  }
  return local_10;
}
