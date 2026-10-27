// rea decompile_all
// name: FUN_00429290
// address: 0x429290
// body: available
// range: 0x429290-0x4292c9 inclusive
// range: 0x429322-0x429593 inclusive
// range: 0x4295c4-0x429889 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4292b1 (push 0x42988a followed by fs-segment stack chaining); handler 0x42988a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429290(undefined4 param_1,ushort *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  local_10 = 0xf;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_0042988a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar3 = *param_2;
  switch(uVar3) {
  case 0:
    local_28._0_2_ = 0x932b;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00408194(param_1,0);
    break;
  case 1:
    local_1c = &stack0xfffffffc;
    if (DAT_0067ce6c != '\0') {
      local_28._0_2_ = 0x9346;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00424264(1,8);
    }
    local_28._0_2_ = 0x9353;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,DAT_0067ce70);
    break;
  case 2:
    local_28._0_2_ = 0x9364;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((int)(short)param_2[4],&local_8);
    local_28._0_2_ = 0x936e;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_8);
    break;
  case 3:
    local_28._0_2_ = 0x937e;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c(*(undefined4 *)(param_2 + 4),&local_c);
    local_28._0_2_ = 0x9388;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_c);
    break;
  case 4:
    fVar5 = (float10)*(float *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x42939f;
    local_1c = &stack0xfffffffc;
    FUN_00418e68(&local_10);
    local_28._0_2_ = 0x93a9;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_10);
    break;
  case 5:
    fVar5 = (float10)*(double *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x4293c0;
    local_1c = &stack0xfffffffc;
    FUN_00418e68(&stack0xffffffec);
    local_28._0_2_ = 0x93ca;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,unaff_EBX);
    break;
  case 6:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4293dd;
    local_1c = &stack0xfffffffc;
    FUN_00427fd8(&stack0xffffffe8);
    local_28._0_2_ = 0x93e7;
    local_28._2_2_ = 0x42;
    FUN_0040840c(param_1,unaff_ESI);
    break;
  case 7:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4293fa;
    local_1c = &stack0xfffffffc;
    FUN_00428010(&local_1c);
    local_28._0_2_ = 0x9404;
    local_28._2_2_ = 0x42;
    FUN_0040840c(param_1,local_1c);
    break;
  case 8:
    local_28 = &local_20;
    local_2c = 0x42941f;
    local_1c = &stack0xfffffffc;
    FUN_00408094(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    local_28._0_2_ = 0x9429;
    local_28._2_2_ = 0x42;
    FUN_0040840c(param_1,local_20);
    break;
  case 9:
  case 0xd:
    local_28._0_2_ = 0x950d;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0042895c(param_2,&local_40);
    local_28._0_2_ = 0x9517;
    local_28._2_2_ = 0x42;
    FUN_0040840c(param_1,local_40);
    break;
  default:
    if (uVar3 == 0x100) {
      local_28._0_2_ = 0x953b;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_004083c0(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar3 == 0x101) {
      local_28._0_2_ = 0x9559;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00429164(param_2,&local_44);
      local_28._0_2_ = 0x9563;
      local_28._2_2_ = 0x42;
      FUN_00408194(param_1,local_44);
      break;
    }
    if (uVar3 == 0x102) {
      local_28._0_2_ = 0x954a;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00408194(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if ((uVar3 & 0x4000) == 0) {
      local_28._0_2_ = 0x97f8;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      uVar4 = thunk_FUN_004072d8(param_1);
      local_28._0_2_ = 0x9801;
      local_28._2_2_ = 0x42;
      cVar2 = FUN_004291c8(param_2,uVar4);
      if (cVar2 == '\0') {
        local_28._0_2_ = 0x980f;
        local_28._2_2_ = 0x42;
        FUN_0042895c(param_2,&local_80);
        local_28._0_2_ = 0x9819;
        local_28._2_2_ = 0x42;
        FUN_0040840c(param_1,local_80);
      }
      break;
    }
    uVar3 = uVar3 & 0xbfff;
    if (uVar3 < 0xd) {
      if (uVar3 == 0xc) {
        local_28._0_2_ = 0x97d9;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00429290(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar3) {
      default:
        goto switchD_0042958d_caseD_0;
      case 2:
        local_28._0_2_ = 0x9622;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041636c((int)**(short **)(param_2 + 4),&local_48);
        local_28._0_2_ = 0x962c;
        local_28._2_2_ = 0x42;
        FUN_00408194(param_1,local_48);
        break;
      case 3:
        local_28._0_2_ = 0x963e;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041636c(**(undefined4 **)(param_2 + 4),&local_4c);
        local_28._0_2_ = 0x9648;
        local_28._2_2_ = 0x42;
        FUN_00408194(param_1,local_4c);
        break;
      case 4:
        fVar5 = (float10)**(float **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x429661;
        local_1c = &stack0xfffffffc;
        FUN_00418e68(&local_50);
        local_28._0_2_ = 0x966b;
        local_28._2_2_ = 0x42;
        FUN_00408194(param_1,local_50);
        break;
      case 5:
        fVar5 = (float10)**(double **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x429684;
        local_1c = &stack0xfffffffc;
        FUN_00418e68(&local_54);
        local_28._0_2_ = 0x968e;
        local_28._2_2_ = 0x42;
        FUN_00408194(param_1,local_54);
        break;
      case 6:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar4;
        local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x4296a3;
        local_1c = &stack0xfffffffc;
        FUN_00427fd8(&local_58);
        local_28._0_2_ = 0x96ad;
        local_28._2_2_ = 0x42;
        FUN_0040840c(param_1,local_58);
        break;
      case 7:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar4;
        local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x4296c2;
        local_1c = &stack0xfffffffc;
        FUN_00428010(&local_5c);
        local_28._0_2_ = 0x96cc;
        local_28._2_2_ = 0x42;
        FUN_0040840c(param_1,local_5c);
        break;
      case 8:
        local_28._0_2_ = 0x96dd;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00408350(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_28._0_2_ = 0x96f0;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00428048(**(undefined2 **)(param_2 + 4),&local_60);
        local_28._0_2_ = 0x96fa;
        local_28._2_2_ = 0x42;
        FUN_0040840c(param_1,local_60);
      }
    }
    else {
      if (uVar3 < 0x15) {
        if (uVar3 == 0x14) {
          uVar4 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar4;
          local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x429786;
          local_1c = &stack0xfffffffc;
          FUN_004165b0(&local_74);
          local_28._0_2_ = 0x9790;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_74);
          break;
        }
        if (uVar3 == 0x10) {
          local_28._0_2_ = 0x970d;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c((int)**(char **)(param_2 + 4),&local_64);
          local_28._0_2_ = 0x9717;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_64);
          break;
        }
        if (uVar3 == 0x11) {
          local_28._0_2_ = 0x972a;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c(**(undefined1 **)(param_2 + 4),&local_68);
          local_28._0_2_ = 0x9734;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_68);
          break;
        }
        if (uVar3 == 0x12) {
          local_28._0_2_ = 0x9747;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c(**(undefined2 **)(param_2 + 4),&local_6c);
          local_28._0_2_ = 0x9751;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_6c);
          break;
        }
        if (uVar3 == 0x13) {
          local_2c = **(undefined4 **)(param_2 + 4);
          local_28._0_2_ = 0;
          local_28._2_2_ = 0;
          uStack_30 = 0x429767;
          local_1c = &stack0xfffffffc;
          FUN_004165b0(&local_70);
          local_28._0_2_ = 0x9771;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_70);
          break;
        }
      }
      else {
        if (uVar3 == 0x15) {
          uVar4 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar4;
          local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x4297a5;
          local_1c = &stack0xfffffffc;
          FUN_004163c4(&local_78);
          local_28._0_2_ = 0x97af;
          local_28._2_2_ = 0x42;
          FUN_00408194(param_1,local_78);
          break;
        }
        if (uVar3 == 0x100) {
          local_28._0_2_ = 0x97bd;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00408320(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
        if (uVar3 == 0x102) {
          local_28._0_2_ = 0x97cb;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00408350(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
      }
switchD_0042958d_caseD_0:
      local_28._0_2_ = 0x97e5;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_0042895c(param_2,&local_7c);
      local_28._0_2_ = 0x97ef;
      local_28._2_2_ = 0x42;
      FUN_0040840c(param_1,local_7c);
    }
    break;
  case 0xb:
    local_28._0_2_ = 0x943a;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00428048(param_2[4],&local_24);
    local_28._0_2_ = 0x9444;
    local_28._2_2_ = 0x42;
    FUN_0040840c(param_1,local_24);
    break;
  case 0xc:
    local_28._0_2_ = 0x94fe;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00429290(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_28._0_2_ = 0x9455;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((int)(char)param_2[4],&local_28);
    uVar4 = CONCAT22(local_28._2_2_,(undefined2)local_28);
    local_28._0_2_ = 0x945f;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,uVar4);
    break;
  case 0x11:
    local_28._0_2_ = 38000;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((char)param_2[4],&local_2c);
    local_28._0_2_ = 0x947a;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_2c);
    break;
  case 0x12:
    local_28._0_2_ = 0x948b;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c(param_2[4],&uStack_30);
    local_28._0_2_ = 0x9495;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,uStack_30);
    break;
  case 0x13:
    local_2c = *(undefined4 *)(param_2 + 4);
    local_28._0_2_ = 0;
    local_28._2_2_ = 0;
    uStack_30 = 0x4294a9;
    local_1c = &stack0xfffffffc;
    FUN_004165b0(&uStack_34);
    local_28._0_2_ = 0x94b3;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,uStack_34);
    break;
  case 0x14:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4294c6;
    local_1c = &stack0xfffffffc;
    FUN_004165b0(&local_38);
    local_28._0_2_ = 0x94d0;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_38);
    break;
  case 0x15:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4294e3;
    FUN_004163c4(&local_3c);
    local_28._0_2_ = 0x94ed;
    local_28._2_2_ = 0x42;
    FUN_00408194(param_1,local_3c);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00429891;
  local_20 = (undefined1 *)0x429833;
  FUN_00407de8(&local_80,2,puVar1);
  local_20 = (undefined1 *)0x429840;
  thunk_FUN_004072fc(&local_78,6);
  local_20 = (undefined1 *)0x42984d;
  FUN_00407de8(&local_60,3);
  local_20 = (undefined1 *)0x42985a;
  thunk_FUN_004072fc(&local_54,5);
  local_20 = (undefined1 *)0x429862;
  FUN_00407dd0(&local_40);
  local_20 = (undefined1 *)0x42986f;
  thunk_FUN_004072fc(&local_3c,6);
  local_20 = (undefined1 *)0x42987c;
  FUN_00407de8(&local_24,4);
  local_20 = (undefined1 *)0x429889;
  thunk_FUN_004072fc(&stack0xffffffec,4);
  return;
}
