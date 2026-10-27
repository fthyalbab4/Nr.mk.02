// rea decompile_all
// name: FUN_00428b68
// address: 0x428b68
// body: available
// range: 0x428b68-0x428ba0 inclusive
// range: 0x428bf9-0x428e5b inclusive
// range: 0x428e8c-0x429156 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428b88 (push 0x429157 followed by fs-segment stack chaining); handler 0x429157 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428b68(undefined4 param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar5;
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
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = &stack0xfffffffc;
  iVar4 = 0xf;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_00429157;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    local_24 = 0x8c00;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00407dd0(param_1);
    break;
  case 1:
    local_18 = &stack0xfffffffc;
    if (DAT_0067ce6c != '\0') {
      local_24 = 0x8c1b;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00424264(1,8);
    }
    local_24 = 0x8c28;
    uStack_22 = 0x42;
    FUN_00408420(param_1,DAT_0067ce70);
    break;
  case 2:
    local_24 = 0x8c39;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041636c((int)(short)param_2[4],&local_8);
    local_24 = 0x8c43;
    uStack_22 = 0x42;
    FUN_00408420(param_1,local_8);
    break;
  case 3:
    local_24 = 0x8c53;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041636c(*(undefined4 *)(param_2 + 4),&local_c);
    local_24 = 0x8c5d;
    uStack_22 = 0x42;
    FUN_00408420(param_1,local_c);
    break;
  case 4:
    fVar5 = (float10)*(float *)(param_2 + 4);
    uStack_2c = SUB104(fVar5,0);
    local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_30 = 0x428c74;
    local_18 = &stack0xfffffffc;
    FUN_00418e68(&stack0xfffffff0);
    local_24 = 0x8c7e;
    uStack_22 = 0x42;
    FUN_00408420(param_1,unaff_EBX);
    break;
  case 5:
    fVar5 = (float10)*(double *)(param_2 + 4);
    uStack_2c = SUB104(fVar5,0);
    local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_30 = 0x428c95;
    local_18 = &stack0xfffffffc;
    FUN_00418e68(&stack0xffffffec);
    local_24 = 35999;
    uStack_22 = 0x42;
    FUN_00408420(param_1,unaff_ESI);
    break;
  case 6:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428cb2;
    local_18 = &stack0xfffffffc;
    FUN_00427fd8(&local_18);
    local_24 = 0x8cbc;
    uStack_22 = 0x42;
    FUN_00407e0c(param_1,local_18);
    break;
  case 7:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428ccf;
    local_18 = &stack0xfffffffc;
    FUN_00428010(&local_1c);
    local_24 = 0x8cd9;
    uStack_22 = 0x42;
    FUN_00407e0c(param_1,local_1c);
    break;
  case 8:
    local_24 = (undefined2)param_1;
    uStack_22 = (undefined2)((uint)param_1 >> 0x10);
    local_28 = 0x428cf1;
    local_18 = &stack0xfffffffc;
    FUN_00408094(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    break;
  case 9:
  case 0xd:
    local_24 = 0x8dd5;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0042895c(param_2,&local_3c);
    local_24 = 0x8ddf;
    uStack_22 = 0x42;
    FUN_00407e0c(param_1,local_3c);
    break;
  default:
    if (uVar2 == 0x100) {
      local_24 = 0x8e03;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00407f8c(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar2 == 0x101) {
      local_24 = 0x8e21;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00428a28(param_2,&local_40);
      local_24 = 0x8e2b;
      uStack_22 = 0x42;
      FUN_00407e0c(param_1,local_40);
      break;
    }
    if (uVar2 == 0x102) {
      local_24 = 0x8e12;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00408420(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if ((uVar2 & 0x4000) == 0) {
      local_24 = 0x90c0;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      uVar3 = FUN_00407dd0(param_1);
      local_24 = 0x90c9;
      uStack_22 = 0x42;
      cVar1 = FUN_00428a8c(param_2,uVar3);
      if (cVar1 == '\0') {
        local_24 = 0x90d7;
        uStack_22 = 0x42;
        FUN_0042895c(param_2,&local_7c);
        local_24 = 0x90e1;
        uStack_22 = 0x42;
        FUN_00407e0c(param_1,local_7c);
      }
      break;
    }
    uVar2 = uVar2 & 0xbfff;
    if (uVar2 < 0xd) {
      if (uVar2 == 0xc) {
        local_24 = 0x90a1;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_00428b68(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar2) {
      default:
        goto switchD_00428e55_caseD_0;
      case 2:
        local_24 = 0x8eea;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_0041636c((int)**(short **)(param_2 + 4),&local_44);
        local_24 = 0x8ef4;
        uStack_22 = 0x42;
        FUN_00408420(param_1,local_44);
        break;
      case 3:
        local_24 = 0x8f06;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_0041636c(**(undefined4 **)(param_2 + 4),&local_48);
        local_24 = 0x8f10;
        uStack_22 = 0x42;
        FUN_00408420(param_1,local_48);
        break;
      case 4:
        fVar5 = (float10)**(float **)(param_2 + 4);
        uStack_2c = SUB104(fVar5,0);
        local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_30 = 0x428f29;
        local_18 = &stack0xfffffffc;
        FUN_00418e68(&local_4c);
        local_24 = 0x8f33;
        uStack_22 = 0x42;
        FUN_00408420(param_1,local_4c);
        break;
      case 5:
        fVar5 = (float10)**(double **)(param_2 + 4);
        uStack_2c = SUB104(fVar5,0);
        local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_30 = 0x428f4c;
        local_18 = &stack0xfffffffc;
        FUN_00418e68(&local_50);
        local_24 = 0x8f56;
        uStack_22 = 0x42;
        FUN_00408420(param_1,local_50);
        break;
      case 6:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_24 = (undefined2)uVar3;
        uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x428f6b;
        local_18 = &stack0xfffffffc;
        FUN_00427fd8(&local_54);
        local_24 = 0x8f75;
        uStack_22 = 0x42;
        FUN_00407e0c(param_1,local_54);
        break;
      case 7:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_24 = (undefined2)uVar3;
        uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x428f8a;
        local_18 = &stack0xfffffffc;
        FUN_00428010(&local_58);
        local_24 = 0x8f94;
        uStack_22 = 0x42;
        FUN_00407e0c(param_1,local_58);
        break;
      case 8:
        local_24 = 0x8fa5;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_00407f34(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_24 = 0x8fb8;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_00428048(**(undefined2 **)(param_2 + 4),&local_5c);
        local_24 = 0x8fc2;
        uStack_22 = 0x42;
        FUN_00407e0c(param_1,local_5c);
      }
    }
    else {
      if (uVar2 < 0x15) {
        if (uVar2 == 0x14) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_24 = (undefined2)uVar3;
          uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
          local_28 = **(undefined4 **)(param_2 + 4);
          uStack_2c = 0x42904e;
          local_18 = &stack0xfffffffc;
          FUN_004165b0(&local_70);
          local_24 = 0x9058;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_70);
          break;
        }
        if (uVar2 == 0x10) {
          local_24 = 0x8fd5;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041636c((int)**(char **)(param_2 + 4),&local_60);
          local_24 = 0x8fdf;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_60);
          break;
        }
        if (uVar2 == 0x11) {
          local_24 = 0x8ff2;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041636c(**(undefined1 **)(param_2 + 4),&local_64);
          local_24 = 0x8ffc;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_64);
          break;
        }
        if (uVar2 == 0x12) {
          local_24 = 0x900f;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041636c(**(undefined2 **)(param_2 + 4),&local_68);
          local_24 = 0x9019;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_68);
          break;
        }
        if (uVar2 == 0x13) {
          local_28 = **(undefined4 **)(param_2 + 4);
          local_24 = 0;
          uStack_22 = 0;
          uStack_2c = 0x42902f;
          local_18 = &stack0xfffffffc;
          FUN_004165b0(&local_6c);
          local_24 = 0x9039;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_6c);
          break;
        }
      }
      else {
        if (uVar2 == 0x15) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_24 = (undefined2)uVar3;
          uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
          local_28 = **(undefined4 **)(param_2 + 4);
          uStack_2c = 0x42906d;
          local_18 = &stack0xfffffffc;
          FUN_004163c4(&local_74);
          local_24 = 0x9077;
          uStack_22 = 0x42;
          FUN_00408420(param_1,local_74);
          break;
        }
        if (uVar2 == 0x100) {
          local_24 = 0x9085;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_00407f04(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
        if (uVar2 == 0x102) {
          local_24 = 0x9093;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_00407f34(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
      }
switchD_00428e55_caseD_0:
      local_24 = 0x90ad;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_0042895c(param_2,&local_78);
      local_24 = 0x90b7;
      uStack_22 = 0x42;
      FUN_00407e0c(param_1,local_78);
    }
    break;
  case 0xb:
    local_24 = 0x8d02;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00428048(param_2[4],&local_20);
    local_24 = 0x8d0c;
    uStack_22 = 0x42;
    FUN_00407e0c(param_1,local_20);
    break;
  case 0xc:
    local_24 = 0x8dc6;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00428b68(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_24 = 0x8d1d;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041636c((int)(char)param_2[4],&local_24);
    uVar3 = CONCAT22(uStack_22,local_24);
    local_24 = 0x8d27;
    uStack_22 = 0x42;
    FUN_00408420(param_1,uVar3);
    break;
  case 0x11:
    local_24 = 0x8d38;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041636c((char)param_2[4],&local_28);
    local_24 = 0x8d42;
    uStack_22 = 0x42;
    FUN_00408420(param_1,local_28);
    break;
  case 0x12:
    local_24 = 0x8d53;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041636c(param_2[4],&uStack_2c);
    local_24 = 0x8d5d;
    uStack_22 = 0x42;
    FUN_00408420(param_1,uStack_2c);
    break;
  case 0x13:
    local_28 = *(undefined4 *)(param_2 + 4);
    local_24 = 0;
    uStack_22 = 0;
    uStack_2c = 0x428d71;
    local_18 = &stack0xfffffffc;
    FUN_004165b0(&uStack_30);
    local_24 = 0x8d7b;
    uStack_22 = 0x42;
    FUN_00408420(param_1,uStack_30);
    break;
  case 0x14:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428d8e;
    local_18 = &stack0xfffffffc;
    FUN_004165b0(&local_34);
    local_24 = 0x8d98;
    uStack_22 = 0x42;
    FUN_00408420(param_1,local_34);
    break;
  case 0x15:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428dab;
    FUN_004163c4(&local_38);
    local_24 = 0x8db5;
    uStack_22 = 0x42;
    FUN_00408420(param_1,local_38);
  }
  *in_FS_OFFSET = local_1c;
  local_18 = (undefined1 *)0x4290fb;
  FUN_00407de8(&local_7c,2,unaff_ESI);
  local_18 = (undefined1 *)0x429108;
  thunk_FUN_004072fc(&local_74,6);
  local_18 = (undefined1 *)0x429115;
  FUN_00407de8(&local_5c,3);
  local_18 = (undefined1 *)0x429122;
  thunk_FUN_004072fc(&local_50,4);
  local_18 = (undefined1 *)0x42912f;
  FUN_00407de8(&local_40,2);
  local_18 = (undefined1 *)0x42913c;
  thunk_FUN_004072fc(&local_38,6);
  local_18 = (undefined1 *)0x429149;
  FUN_00407de8(&local_20,3);
  local_18 = (undefined1 *)0x429156;
  thunk_FUN_004072fc(&stack0xffffffec,4);
  return;
}
