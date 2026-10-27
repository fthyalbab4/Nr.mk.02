// rea decompile_all
// name: FUN_00428cf0
// address: 0x428cf0
// body: available
// range: 0x428cf0-0x428d28 inclusive
// range: 0x428d81-0x428fe3 inclusive
// range: 0x429014-0x4292de inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428d10 (push 0x4292df followed by fs-segment stack chaining); handler 0x4292df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428cf0(undefined4 param_1,ushort *param_2)

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
  local_1c = &LAB_004292df;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    local_24 = 0x8d88;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00407a78(param_1);
    break;
  case 1:
    local_18 = &stack0xfffffffc;
    if (DAT_00773e50 != '\0') {
      local_24 = 0x8da3;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00424184(1,8);
    }
    local_24 = 0x8db0;
    uStack_22 = 0x42;
    FUN_00408144(param_1,DAT_00773e54);
    break;
  case 2:
    local_24 = 0x8dc1;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041666c((int)(short)param_2[4],&local_8);
    local_24 = 0x8dcb;
    uStack_22 = 0x42;
    FUN_00408144(param_1,local_8);
    break;
  case 3:
    local_24 = 0x8ddb;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041666c(*(undefined4 *)(param_2 + 4),&local_c);
    local_24 = 0x8de5;
    uStack_22 = 0x42;
    FUN_00408144(param_1,local_c);
    break;
  case 4:
    fVar5 = (float10)*(float *)(param_2 + 4);
    uStack_2c = SUB104(fVar5,0);
    local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_30 = 0x428dfc;
    local_18 = &stack0xfffffffc;
    FUN_00419348(&stack0xfffffff0);
    local_24 = 0x8e06;
    uStack_22 = 0x42;
    FUN_00408144(param_1,unaff_EBX);
    break;
  case 5:
    fVar5 = (float10)*(double *)(param_2 + 4);
    uStack_2c = SUB104(fVar5,0);
    local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_30 = 0x428e1d;
    local_18 = &stack0xfffffffc;
    FUN_00419348(&stack0xffffffec);
    local_24 = 0x8e27;
    uStack_22 = 0x42;
    FUN_00408144(param_1,unaff_ESI);
    break;
  case 6:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428e3a;
    local_18 = &stack0xfffffffc;
    FUN_00428160(&local_18);
    local_24 = 0x8e44;
    uStack_22 = 0x42;
    FUN_00407ab4(param_1,local_18);
    break;
  case 7:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428e57;
    local_18 = &stack0xfffffffc;
    FUN_00428198(&local_1c);
    local_24 = 0x8e61;
    uStack_22 = 0x42;
    FUN_00407ab4(param_1,local_1c);
    break;
  case 8:
    local_24 = (undefined2)param_1;
    uStack_22 = (undefined2)((uint)param_1 >> 0x10);
    local_28 = 0x428e79;
    local_18 = &stack0xfffffffc;
    FUN_00407db8(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    break;
  case 9:
  case 0xd:
    local_24 = 0x8f5d;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00428ae4(param_2,&local_3c);
    local_24 = 0x8f67;
    uStack_22 = 0x42;
    FUN_00407ab4(param_1,local_3c);
    break;
  default:
    if (uVar2 == 0x100) {
      local_24 = 0x8f8b;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00407c34(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar2 == 0x101) {
      local_24 = 0x8fa9;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00428bb0(param_2,&local_40);
      local_24 = 0x8fb3;
      uStack_22 = 0x42;
      FUN_00407ab4(param_1,local_40);
      break;
    }
    if (uVar2 == 0x102) {
      local_24 = 0x8f9a;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00408144(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if ((uVar2 & 0x4000) == 0) {
      local_24 = 0x9248;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      uVar3 = FUN_00407a78(param_1);
      local_24 = 0x9251;
      uStack_22 = 0x42;
      cVar1 = FUN_00428c14(param_2,uVar3);
      if (cVar1 == '\0') {
        local_24 = 0x925f;
        uStack_22 = 0x42;
        FUN_00428ae4(param_2,&local_7c);
        local_24 = 0x9269;
        uStack_22 = 0x42;
        FUN_00407ab4(param_1,local_7c);
      }
      break;
    }
    uVar2 = uVar2 & 0xbfff;
    if (uVar2 < 0xd) {
      if (uVar2 == 0xc) {
        local_24 = 0x9229;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_00428cf0(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar2) {
      default:
        goto switchD_00428fdd_caseD_0;
      case 2:
        local_24 = 0x9072;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_0041666c((int)**(short **)(param_2 + 4),&local_44);
        local_24 = 0x907c;
        uStack_22 = 0x42;
        FUN_00408144(param_1,local_44);
        break;
      case 3:
        local_24 = 0x908e;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_0041666c(**(undefined4 **)(param_2 + 4),&local_48);
        local_24 = 0x9098;
        uStack_22 = 0x42;
        FUN_00408144(param_1,local_48);
        break;
      case 4:
        fVar5 = (float10)**(float **)(param_2 + 4);
        uStack_2c = SUB104(fVar5,0);
        local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_30 = 0x4290b1;
        local_18 = &stack0xfffffffc;
        FUN_00419348(&local_4c);
        local_24 = 0x90bb;
        uStack_22 = 0x42;
        FUN_00408144(param_1,local_4c);
        break;
      case 5:
        fVar5 = (float10)**(double **)(param_2 + 4);
        uStack_2c = SUB104(fVar5,0);
        local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_30 = 0x4290d4;
        local_18 = &stack0xfffffffc;
        FUN_00419348(&local_50);
        local_24 = 0x90de;
        uStack_22 = 0x42;
        FUN_00408144(param_1,local_50);
        break;
      case 6:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_24 = (undefined2)uVar3;
        uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x4290f3;
        local_18 = &stack0xfffffffc;
        FUN_00428160(&local_54);
        local_24 = 0x90fd;
        uStack_22 = 0x42;
        FUN_00407ab4(param_1,local_54);
        break;
      case 7:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_24 = (undefined2)uVar3;
        uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x429112;
        local_18 = &stack0xfffffffc;
        FUN_00428198(&local_58);
        local_24 = 0x911c;
        uStack_22 = 0x42;
        FUN_00407ab4(param_1,local_58);
        break;
      case 8:
        local_24 = 0x912d;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_00407bdc(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_24 = 0x9140;
        uStack_22 = 0x42;
        local_18 = &stack0xfffffffc;
        FUN_004281d0(**(undefined2 **)(param_2 + 4),&local_5c);
        local_24 = 0x914a;
        uStack_22 = 0x42;
        FUN_00407ab4(param_1,local_5c);
      }
    }
    else {
      if (uVar2 < 0x15) {
        if (uVar2 == 0x14) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_24 = (undefined2)uVar3;
          uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
          local_28 = **(undefined4 **)(param_2 + 4);
          uStack_2c = 0x4291d6;
          local_18 = &stack0xfffffffc;
          FUN_004168b0(&local_70);
          local_24 = 0x91e0;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_70);
          break;
        }
        if (uVar2 == 0x10) {
          local_24 = 0x915d;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041666c((int)**(char **)(param_2 + 4),&local_60);
          local_24 = 0x9167;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_60);
          break;
        }
        if (uVar2 == 0x11) {
          local_24 = 0x917a;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041666c(**(undefined1 **)(param_2 + 4),&local_64);
          local_24 = 0x9184;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_64);
          break;
        }
        if (uVar2 == 0x12) {
          local_24 = 0x9197;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_0041666c(**(undefined2 **)(param_2 + 4),&local_68);
          local_24 = 0x91a1;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_68);
          break;
        }
        if (uVar2 == 0x13) {
          local_28 = **(undefined4 **)(param_2 + 4);
          local_24 = 0;
          uStack_22 = 0;
          uStack_2c = 0x4291b7;
          local_18 = &stack0xfffffffc;
          FUN_004168b0(&local_6c);
          local_24 = 0x91c1;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_6c);
          break;
        }
      }
      else {
        if (uVar2 == 0x15) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_24 = (undefined2)uVar3;
          uStack_22 = (undefined2)((uint)uVar3 >> 0x10);
          local_28 = **(undefined4 **)(param_2 + 4);
          uStack_2c = 0x4291f5;
          local_18 = &stack0xfffffffc;
          FUN_004166c4(&local_74);
          local_24 = 0x91ff;
          uStack_22 = 0x42;
          FUN_00408144(param_1,local_74);
          break;
        }
        if (uVar2 == 0x100) {
          local_24 = 0x920d;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_00407bac(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
        if (uVar2 == 0x102) {
          local_24 = 0x921b;
          uStack_22 = 0x42;
          local_18 = &stack0xfffffffc;
          FUN_00407bdc(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
      }
switchD_00428fdd_caseD_0:
      local_24 = 0x9235;
      uStack_22 = 0x42;
      local_18 = &stack0xfffffffc;
      FUN_00428ae4(param_2,&local_78);
      local_24 = 0x923f;
      uStack_22 = 0x42;
      FUN_00407ab4(param_1,local_78);
    }
    break;
  case 0xb:
    local_24 = 0x8e8a;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_004281d0(param_2[4],&local_20);
    local_24 = 0x8e94;
    uStack_22 = 0x42;
    FUN_00407ab4(param_1,local_20);
    break;
  case 0xc:
    local_24 = 0x8f4e;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_00428cf0(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_24 = 0x8ea5;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041666c((int)(char)param_2[4],&local_24);
    uVar3 = CONCAT22(uStack_22,local_24);
    local_24 = 0x8eaf;
    uStack_22 = 0x42;
    FUN_00408144(param_1,uVar3);
    break;
  case 0x11:
    local_24 = 0x8ec0;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041666c((char)param_2[4],&local_28);
    local_24 = 0x8eca;
    uStack_22 = 0x42;
    FUN_00408144(param_1,local_28);
    break;
  case 0x12:
    local_24 = 0x8edb;
    uStack_22 = 0x42;
    local_18 = &stack0xfffffffc;
    FUN_0041666c(param_2[4],&uStack_2c);
    local_24 = 0x8ee5;
    uStack_22 = 0x42;
    FUN_00408144(param_1,uStack_2c);
    break;
  case 0x13:
    local_28 = *(undefined4 *)(param_2 + 4);
    local_24 = 0;
    uStack_22 = 0;
    uStack_2c = 0x428ef9;
    local_18 = &stack0xfffffffc;
    FUN_004168b0(&uStack_30);
    local_24 = 0x8f03;
    uStack_22 = 0x42;
    FUN_00408144(param_1,uStack_30);
    break;
  case 0x14:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428f16;
    local_18 = &stack0xfffffffc;
    FUN_004168b0(&local_34);
    local_24 = 0x8f20;
    uStack_22 = 0x42;
    FUN_00408144(param_1,local_34);
    break;
  case 0x15:
    local_24 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_22 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x428f33;
    FUN_004166c4(&local_38);
    local_24 = 0x8f3d;
    uStack_22 = 0x42;
    FUN_00408144(param_1,local_38);
  }
  *in_FS_OFFSET = local_1c;
  local_18 = (undefined1 *)0x429283;
  FUN_00407a90(&local_7c,2,unaff_ESI);
  local_18 = (undefined1 *)0x429290;
  thunk_FUN_00406e80(&local_74,6);
  local_18 = (undefined1 *)0x42929d;
  FUN_00407a90(&local_5c,3);
  local_18 = (undefined1 *)0x4292aa;
  thunk_FUN_00406e80(&local_50,4);
  local_18 = (undefined1 *)0x4292b7;
  FUN_00407a90(&local_40,2);
  local_18 = (undefined1 *)0x4292c4;
  thunk_FUN_00406e80(&local_38,6);
  local_18 = (undefined1 *)0x4292d1;
  FUN_00407a90(&local_20,3);
  local_18 = (undefined1 *)0x4292de;
  thunk_FUN_00406e80(&stack0xffffffec,4);
  return;
}
