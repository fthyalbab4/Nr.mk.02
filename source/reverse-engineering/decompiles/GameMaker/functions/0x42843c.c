// rea decompile_all
// name: FUN_0042843c
// address: 0x42843c
// body: available
// range: 0x42843c-0x428475 inclusive
// range: 0x4284ce-0x428792 inclusive
// range: 0x4287c3-0x428ad5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42845d (push 0x428ad6 followed by fs-segment stack chaining); handler 0x428ad6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042843c(undefined4 param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar4;
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
  local_20 = &LAB_00428ad6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    local_28._0_2_ = 0x84d5;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00406e5c(param_1);
    break;
  case 1:
    local_1c = &stack0xfffffffc;
    if (DAT_00773e50 != '\0') {
      local_28._0_2_ = 0x84f0;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00424184(1,0x100);
    }
    local_28._0_2_ = 0x8502;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,DAT_00773e54,0);
    break;
  case 2:
    local_28._0_2_ = 0x8513;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((int)(short)param_2[4],&local_8);
    local_28._0_2_ = 0x8522;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_8,0);
    break;
  case 3:
    local_28._0_2_ = 0x8532;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c(*(undefined4 *)(param_2 + 4),&local_c);
    local_28._0_2_ = 0x8541;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_c,0);
    break;
  case 4:
    fVar4 = (float10)*(float *)(param_2 + 4);
    uStack_30 = SUB104(fVar4,0);
    local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
    uStack_34 = 0x428558;
    local_1c = &stack0xfffffffc;
    FUN_00419348(&local_10);
    local_28._0_2_ = 0x8567;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_10,0);
    break;
  case 5:
    fVar4 = (float10)*(double *)(param_2 + 4);
    uStack_30 = SUB104(fVar4,0);
    local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
    uStack_34 = 0x42857e;
    local_1c = &stack0xfffffffc;
    FUN_00419348(&stack0xffffffec);
    local_28._0_2_ = 0x858d;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,unaff_EBX,0);
    break;
  case 6:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4285a0;
    local_1c = &stack0xfffffffc;
    FUN_00428160(&stack0xffffffe8);
    local_28._0_2_ = 0x85af;
    local_28._2_2_ = 0x42;
    FUN_004071e4(param_1,unaff_ESI,0);
    break;
  case 7:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4285c2;
    local_1c = &stack0xfffffffc;
    FUN_00428198(&local_1c);
    local_28._0_2_ = 0x85d1;
    local_28._2_2_ = 0x42;
    FUN_004071e4(param_1,local_1c,0);
    break;
  case 8:
    local_28 = &local_20;
    local_2c = 0x4285ec;
    local_1c = &stack0xfffffffc;
    FUN_00407db8(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    local_28._0_2_ = 0x85fb;
    local_28._2_2_ = 0x42;
    FUN_004071e4(param_1,local_20,0);
    break;
  case 9:
  case 0xd:
    local_28._0_2_ = 0x8702;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00428298(param_2,&local_40);
    local_28._0_2_ = 0x8711;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_40,0);
    break;
  default:
    if (uVar2 == 0x100) {
      local_28._0_2_ = 0x8735;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00406eb0(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar2 == 0x101) {
      local_28._0_2_ = 0x8758;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00428350(param_2,&local_44);
      local_28._0_2_ = 0x8762;
      local_28._2_2_ = 0x42;
      FUN_00406eb0(param_1,local_44);
      break;
    }
    if (uVar2 == 0x102) {
      local_28._0_2_ = 0x8749;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_0040810c(param_1,*(undefined4 *)(param_2 + 4),0);
      break;
    }
    if ((uVar2 & 0x4000) == 0) {
      local_28._0_2_ = 0x8a4c;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      uVar3 = FUN_00406e5c(param_1);
      local_28._0_2_ = 0x8a55;
      local_28._2_2_ = 0x42;
      cVar1 = FUN_004283b4(param_2,uVar3);
      if (cVar1 == '\0') {
        local_28._0_2_ = 0x8a63;
        local_28._2_2_ = 0x42;
        FUN_00428298(param_2,&local_80);
        local_28._0_2_ = 0x8a72;
        local_28._2_2_ = 0x42;
        FUN_0040810c(param_1,local_80,0);
      }
      break;
    }
    uVar2 = uVar2 & 0xbfff;
    if (uVar2 < 0xd) {
      if (uVar2 == 0xc) {
        local_28._0_2_ = 0x8a28;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0042843c(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar2) {
      default:
        goto switchD_0042878c_caseD_0;
      case 2:
        local_28._0_2_ = 0x8821;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041666c((int)**(short **)(param_2 + 4),&local_48);
        local_28._0_2_ = 0x8830;
        local_28._2_2_ = 0x42;
        FUN_0040810c(param_1,local_48,0);
        break;
      case 3:
        local_28._0_2_ = 0x8842;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041666c(**(undefined4 **)(param_2 + 4),&local_4c);
        local_28._0_2_ = 0x8851;
        local_28._2_2_ = 0x42;
        FUN_0040810c(param_1,local_4c,0);
        break;
      case 4:
        fVar4 = (float10)**(float **)(param_2 + 4);
        uStack_30 = SUB104(fVar4,0);
        local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
        uStack_34 = 0x42886a;
        local_1c = &stack0xfffffffc;
        FUN_00419348(&local_50);
        local_28._0_2_ = 0x8879;
        local_28._2_2_ = 0x42;
        FUN_0040810c(param_1,local_50,0);
        break;
      case 5:
        fVar4 = (float10)**(double **)(param_2 + 4);
        uStack_30 = SUB104(fVar4,0);
        local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
        uStack_34 = 0x428892;
        local_1c = &stack0xfffffffc;
        FUN_00419348(&local_54);
        local_28._0_2_ = 0x88a1;
        local_28._2_2_ = 0x42;
        FUN_0040810c(param_1,local_54,0);
        break;
      case 6:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar3;
        local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x4288b6;
        local_1c = &stack0xfffffffc;
        FUN_00428160(&local_58);
        local_28._0_2_ = 0x88c5;
        local_28._2_2_ = 0x42;
        FUN_004071e4(param_1,local_58,0);
        break;
      case 7:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar3;
        local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x4288da;
        local_1c = &stack0xfffffffc;
        FUN_00428198(&local_5c);
        local_28._0_2_ = 0x88e9;
        local_28._2_2_ = 0x42;
        FUN_004071e4(param_1,local_5c,0);
        break;
      case 8:
        local_28._0_2_ = 0x88ff;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00407174(param_1,**(undefined4 **)(param_2 + 4),0);
        break;
      case 0xb:
        local_28._0_2_ = 0x8912;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_004281d0(**(undefined2 **)(param_2 + 4),&local_60);
        local_28._0_2_ = 0x8921;
        local_28._2_2_ = 0x42;
        FUN_004071e4(param_1,local_60,0);
      }
    }
    else {
      if (uVar2 < 0x15) {
        if (uVar2 == 0x14) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar3;
          local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x4289c1;
          local_1c = &stack0xfffffffc;
          FUN_004168b0(&local_74);
          local_28._0_2_ = 0x89d0;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_74,0);
          break;
        }
        if (uVar2 == 0x10) {
          local_28._0_2_ = 0x8934;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c((int)**(char **)(param_2 + 4),&local_64);
          local_28._0_2_ = 0x8943;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_64,0);
          break;
        }
        if (uVar2 == 0x11) {
          local_28._0_2_ = 0x8956;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c(**(undefined1 **)(param_2 + 4),&local_68);
          local_28._0_2_ = 0x8965;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_68,0);
          break;
        }
        if (uVar2 == 0x12) {
          local_28._0_2_ = 0x8978;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041666c(**(undefined2 **)(param_2 + 4),&local_6c);
          local_28._0_2_ = 0x8987;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_6c,0);
          break;
        }
        if (uVar2 == 0x13) {
          local_2c = **(undefined4 **)(param_2 + 4);
          local_28._0_2_ = 0;
          local_28._2_2_ = 0;
          uStack_30 = 0x42899d;
          local_1c = &stack0xfffffffc;
          FUN_004168b0(&local_70);
          local_28._0_2_ = 0x89ac;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_70,0);
          break;
        }
      }
      else {
        if (uVar2 == 0x15) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar3;
          local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x4289e5;
          local_1c = &stack0xfffffffc;
          FUN_004166c4(&local_78);
          local_28._0_2_ = 0x89f4;
          local_28._2_2_ = 0x42;
          FUN_0040810c(param_1,local_78,0);
          break;
        }
        if (uVar2 == 0x100) {
          local_28._0_2_ = 0x8a07;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00407140(param_1,**(undefined4 **)(param_2 + 4),0);
          break;
        }
        if (uVar2 == 0x102) {
          local_28._0_2_ = 0x8a1a;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00407174(param_1,**(undefined4 **)(param_2 + 4),0);
          break;
        }
      }
switchD_0042878c_caseD_0:
      local_28._0_2_ = 0x8a34;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00428298(param_2,&local_7c);
      local_28._0_2_ = 0x8a43;
      local_28._2_2_ = 0x42;
      FUN_0040810c(param_1,local_7c,0);
    }
    break;
  case 0xb:
    local_28._0_2_ = 0x860c;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_004281d0(param_2[4],&local_24);
    local_28._0_2_ = 0x861b;
    local_28._2_2_ = 0x42;
    FUN_004071e4(param_1,local_24,0);
    break;
  case 0xc:
    local_28._0_2_ = 0x86f3;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0042843c(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_28._0_2_ = 0x862c;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((int)(char)param_2[4],&local_28);
    uVar3 = CONCAT22(local_28._2_2_,(undefined2)local_28);
    local_28._0_2_ = 0x863b;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,uVar3,0);
    break;
  case 0x11:
    local_28._0_2_ = 0x864c;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c((char)param_2[4],&local_2c);
    local_28._0_2_ = 0x865b;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_2c,0);
    break;
  case 0x12:
    local_28._0_2_ = 0x866c;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041666c(param_2[4],&uStack_30);
    local_28._0_2_ = 0x867b;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,uStack_30,0);
    break;
  case 0x13:
    local_2c = *(undefined4 *)(param_2 + 4);
    local_28._0_2_ = 0;
    local_28._2_2_ = 0;
    uStack_30 = 0x42868f;
    local_1c = &stack0xfffffffc;
    FUN_004168b0(&uStack_34);
    local_28._0_2_ = 0x869e;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,uStack_34,0);
    break;
  case 0x14:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4286b1;
    local_1c = &stack0xfffffffc;
    FUN_004168b0(&local_38);
    local_28._0_2_ = 0x86c0;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_38,0);
    break;
  case 0x15:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x4286d3;
    FUN_004166c4(&local_3c);
    local_28._0_2_ = 0x86e2;
    local_28._2_2_ = 0x42;
    FUN_0040810c(param_1,local_3c,0);
  }
  *in_FS_OFFSET = local_20;
  local_1c = (undefined1 *)0x428a8c;
  thunk_FUN_00406e80(&local_80,8,unaff_ESI);
  local_1c = (undefined1 *)0x428a99;
  FUN_00407a90(&local_60,3);
  local_1c = (undefined1 *)0x428aa6;
  thunk_FUN_00406e80(&local_54,4);
  local_1c = (undefined1 *)0x428aae;
  FUN_00406e5c(&local_44);
  local_1c = (undefined1 *)0x428abb;
  thunk_FUN_00406e80(&local_40,7);
  local_1c = (undefined1 *)0x428ac8;
  FUN_00407a90(&local_24,4);
  local_1c = (undefined1 *)0x428ad5;
  thunk_FUN_00406e80(&stack0xffffffec,4);
  return;
}
