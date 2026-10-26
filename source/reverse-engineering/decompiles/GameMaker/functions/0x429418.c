// rea decompile_all
// name: FUN_00429418
// address: 0x429418
// body: available
// range: 0x429418-0x429451 inclusive
// range: 0x4294aa-0x42971b inclusive
// range: 0x42974c-0x429a11 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x429439 (push 0x429a12 followed by fs-segment stack chaining); handler 0x429a12 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429418(undefined4 param_1,ushort *param_2)

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
  local_20 = &LAB_00429a12;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar3 = *param_2;
  switch(uVar3) {
  case 0:
    local_28._0_2_ = 0x94b3;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00407eb8(param_1,0);
    break;
  case 1:
    local_1c = &stack0xfffffffc;
    if (DAT_00773e50 != '\0') {
      local_28._0_2_ = 0x94ce;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00424184(1,8);
    }
    local_28._0_2_ = 0x94db;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,DAT_00773e54);
    break;
  case 2:
    local_28._0_2_ = 0x94ec;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((int)(short)param_2[4],&local_8);
    local_28._0_2_ = 0x94f6;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_8);
    break;
  case 3:
    local_28._0_2_ = 0x9506;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c(*(undefined4 *)(param_2 + 4),&local_c);
    local_28._0_2_ = 0x9510;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_c);
    break;
  case 4:
    fVar5 = (float10)*(float *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x429527;
    local_1c = &stack0xfffffffc;
    FUN_00419348(&local_10);
    local_28._0_2_ = 0x9531;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_10);
    break;
  case 5:
    fVar5 = (float10)*(double *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x429548;
    local_1c = &stack0xfffffffc;
    FUN_00419348(&stack0xffffffec);
    local_28._0_2_ = 0x9552;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,unaff_EBX);
    break;
  case 6:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x429565;
    local_1c = &stack0xfffffffc;
    FUN_00428160(&stack0xffffffe8);
    local_28._0_2_ = 0x956f;
    local_28._2_2_ = 0x42;
    FUN_00408130(param_1,unaff_ESI);
    break;
  case 7:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x429582;
    local_1c = &stack0xfffffffc;
    FUN_00428198(&local_1c);
    local_28._0_2_ = 0x958c;
    local_28._2_2_ = 0x42;
    FUN_00408130(param_1,local_1c);
    break;
  case 8:
    local_28 = &local_20;
    local_2c = 0x4295a7;
    local_1c = &stack0xfffffffc;
    FUN_00407db8(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    local_28._0_2_ = 0x95b1;
    local_28._2_2_ = 0x42;
    FUN_00408130(param_1,local_20);
    break;
  case 9:
  case 0xd:
    local_28._0_2_ = 0x9695;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00428ae4(param_2,&local_40);
    local_28._0_2_ = 0x969f;
    local_28._2_2_ = 0x42;
    FUN_00408130(param_1,local_40);
    break;
  default:
    if (uVar3 == 0x100) {
      local_28._0_2_ = 0x96c3;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_004080e4(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar3 == 0x101) {
      local_28._0_2_ = 0x96e1;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_004292ec(param_2,&local_44);
      local_28._0_2_ = 0x96eb;
      local_28._2_2_ = 0x42;
      FUN_00407eb8(param_1,local_44);
      break;
    }
    if (uVar3 == 0x102) {
      local_28._0_2_ = 0x96d2;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00407eb8(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if ((uVar3 & 0x4000) == 0) {
      local_28._0_2_ = 0x9980;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      uVar4 = thunk_FUN_00406e5c(param_1);
      local_28._0_2_ = 0x9989;
      local_28._2_2_ = 0x42;
      cVar2 = FUN_00429350(param_2,uVar4);
      if (cVar2 == '\0') {
        local_28._0_2_ = 0x9997;
        local_28._2_2_ = 0x42;
        FUN_00428ae4(param_2,&local_80);
        local_28._0_2_ = 0x99a1;
        local_28._2_2_ = 0x42;
        FUN_00408130(param_1,local_80);
      }
      break;
    }
    uVar3 = uVar3 & 0xbfff;
    if (uVar3 < 0xd) {
      if (uVar3 == 0xc) {
        local_28._0_2_ = 0x9961;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00429418(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar3) {
      default:
        goto switchD_00429715_caseD_0;
      case 2:
        local_28._0_2_ = 0x97aa;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041666c((int)**(short **)(param_2 + 4),&local_48);
        local_28._0_2_ = 0x97b4;
        local_28._2_2_ = 0x42;
        FUN_00407eb8(param_1,local_48);
        break;
      case 3:
        local_28._0_2_ = 0x97c6;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041666c(**(undefined4 **)(param_2 + 4),&local_4c);
        local_28._0_2_ = 0x97d0;
        local_28._2_2_ = 0x42;
        FUN_00407eb8(param_1,local_4c);
        break;
      case 4:
        fVar5 = (float10)**(float **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x4297e9;
        local_1c = &stack0xfffffffc;
        FUN_00419348(&local_50);
        local_28._0_2_ = 0x97f3;
        local_28._2_2_ = 0x42;
        FUN_00407eb8(param_1,local_50);
        break;
      case 5:
        fVar5 = (float10)**(double **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x42980c;
        local_1c = &stack0xfffffffc;
        FUN_00419348(&local_54);
        local_28._0_2_ = 0x9816;
        local_28._2_2_ = 0x42;
        FUN_00407eb8(param_1,local_54);
        break;
      case 6:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar4;
        local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x42982b;
        local_1c = &stack0xfffffffc;
        FUN_00428160(&local_58);
        local_28._0_2_ = 0x9835;
        local_28._2_2_ = 0x42;
        FUN_00408130(param_1,local_58);
        break;
      case 7:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar4;
        local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x42984a;
        local_1c = &stack0xfffffffc;
        FUN_00428198(&local_5c);
        local_28._0_2_ = 0x9854;
        local_28._2_2_ = 0x42;
        FUN_00408130(param_1,local_5c);
        break;
      case 8:
        local_28._0_2_ = 0x9865;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00408074(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_28._0_2_ = 0x9878;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_004281d0(**(undefined2 **)(param_2 + 4),&local_60);
        local_28._0_2_ = 0x9882;
        local_28._2_2_ = 0x42;
        FUN_00408130(param_1,local_60);
      }
    }
    else {
      if (uVar3 < 0x15) {
        if (uVar3 == 0x14) {
          uVar4 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar4;
          local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x42990e;
          local_1c = &stack0xfffffffc;
          FUN_004168b0(&local_74);
          local_28._0_2_ = 0x9918;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_74);
          break;
        }
        if (uVar3 == 0x10) {
          local_28._0_2_ = 0x9895;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c((int)**(char **)(param_2 + 4),&local_64);
          local_28._0_2_ = 0x989f;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_64);
          break;
        }
        if (uVar3 == 0x11) {
          local_28._0_2_ = 0x98b2;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c(**(undefined1 **)(param_2 + 4),&local_68);
          local_28._0_2_ = 0x98bc;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_68);
          break;
        }
        if (uVar3 == 0x12) {
          local_28._0_2_ = 0x98cf;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c(**(undefined2 **)(param_2 + 4),&local_6c);
          local_28._0_2_ = 0x98d9;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_6c);
          break;
        }
        if (uVar3 == 0x13) {
          local_2c = **(undefined4 **)(param_2 + 4);
          local_28._0_2_ = 0;
          local_28._2_2_ = 0;
          uStack_30 = 0x4298ef;
          local_1c = &stack0xfffffffc;
          FUN_004168b0(&local_70);
          local_28._0_2_ = 0x98f9;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_70);
          break;
        }
      }
      else {
        if (uVar3 == 0x15) {
          uVar4 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar4;
          local_28._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x42992d;
          local_1c = &stack0xfffffffc;
          FUN_004166c4(&local_78);
          local_28._0_2_ = 0x9937;
          local_28._2_2_ = 0x42;
          FUN_00407eb8(param_1,local_78);
          break;
        }
        if (uVar3 == 0x100) {
          local_28._0_2_ = 0x9945;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00408044(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
        if (uVar3 == 0x102) {
          local_28._0_2_ = 0x9953;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00408074(param_1,**(undefined4 **)(param_2 + 4));
          break;
        }
      }
switchD_00429715_caseD_0:
      local_28._0_2_ = 0x996d;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00428ae4(param_2,&local_7c);
      local_28._0_2_ = 0x9977;
      local_28._2_2_ = 0x42;
      FUN_00408130(param_1,local_7c);
    }
    break;
  case 0xb:
    local_28._0_2_ = 0x95c2;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_004281d0(param_2[4],&local_24);
    local_28._0_2_ = 0x95cc;
    local_28._2_2_ = 0x42;
    FUN_00408130(param_1,local_24);
    break;
  case 0xc:
    local_28._0_2_ = 0x9686;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00429418(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_28._0_2_ = 0x95dd;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((int)(char)param_2[4],&local_28);
    uVar4 = CONCAT22(local_28._2_2_,(undefined2)local_28);
    local_28._0_2_ = 0x95e7;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,uVar4);
    break;
  case 0x11:
    local_28._0_2_ = 0x95f8;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((char)param_2[4],&local_2c);
    local_28._0_2_ = 0x9602;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_2c);
    break;
  case 0x12:
    local_28._0_2_ = 0x9613;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c(param_2[4],&uStack_30);
    local_28._0_2_ = 0x961d;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,uStack_30);
    break;
  case 0x13:
    local_2c = *(undefined4 *)(param_2 + 4);
    local_28._0_2_ = 0;
    local_28._2_2_ = 0;
    uStack_30 = 0x429631;
    local_1c = &stack0xfffffffc;
    FUN_004168b0(&uStack_34);
    local_28._0_2_ = 0x963b;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,uStack_34);
    break;
  case 0x14:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x42964e;
    local_1c = &stack0xfffffffc;
    FUN_004168b0(&local_38);
    local_28._0_2_ = 0x9658;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_38);
    break;
  case 0x15:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x42966b;
    FUN_004166c4(&local_3c);
    local_28._0_2_ = 0x9675;
    local_28._2_2_ = 0x42;
    FUN_00407eb8(param_1,local_3c);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00429a19;
  local_20 = (undefined1 *)0x4299bb;
  FUN_00407a90(&local_80,2,puVar1);
  local_20 = (undefined1 *)0x4299c8;
  thunk_FUN_00406e80(&local_78,6);
  local_20 = (undefined1 *)0x4299d5;
  FUN_00407a90(&local_60,3);
  local_20 = (undefined1 *)0x4299e2;
  thunk_FUN_00406e80(&local_54,5);
  local_20 = (undefined1 *)0x4299ea;
  FUN_00407a78(&local_40);
  local_20 = (undefined1 *)0x4299f7;
  thunk_FUN_00406e80(&local_3c,6);
  local_20 = (undefined1 *)0x429a04;
  FUN_00407a90(&local_24,4);
  local_20 = (undefined1 *)0x429a11;
  thunk_FUN_00406e80(&stack0xffffffec,4);
  return;
}
