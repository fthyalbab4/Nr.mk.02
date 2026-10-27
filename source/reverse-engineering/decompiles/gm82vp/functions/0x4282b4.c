// rea decompile_all
// name: FUN_004282b4
// address: 0x4282b4
// body: available
// range: 0x4282b4-0x4282ed inclusive
// range: 0x428346-0x42860a inclusive
// range: 0x42863b-0x42894d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4282d5 (push 0x42894e followed by fs-segment stack chaining); handler 0x42894e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004282b4(undefined4 param_1,ushort *param_2)

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
  local_20 = &LAB_0042894e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    local_28._0_2_ = 0x834d;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_004072d8(param_1);
    break;
  case 1:
    local_1c = &stack0xfffffffc;
    if (DAT_0067ce6c != '\0') {
      local_28._0_2_ = 0x8368;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00424264(1,0x100);
    }
    local_28._0_2_ = 0x837a;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,DAT_0067ce70,0);
    break;
  case 2:
    local_28._0_2_ = 0x838b;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((int)(short)param_2[4],&local_8);
    local_28._0_2_ = 0x839a;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_8,0);
    break;
  case 3:
    local_28._0_2_ = 0x83aa;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c(*(undefined4 *)(param_2 + 4),&local_c);
    local_28._0_2_ = 0x83b9;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_c,0);
    break;
  case 4:
    fVar4 = (float10)*(float *)(param_2 + 4);
    uStack_30 = SUB104(fVar4,0);
    local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
    uStack_34 = 0x4283d0;
    local_1c = &stack0xfffffffc;
    FUN_00418e68(&local_10);
    local_28._0_2_ = 0x83df;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_10,0);
    break;
  case 5:
    fVar4 = (float10)*(double *)(param_2 + 4);
    uStack_30 = SUB104(fVar4,0);
    local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
    uStack_34 = 0x4283f6;
    local_1c = &stack0xfffffffc;
    FUN_00418e68(&stack0xffffffec);
    local_28._0_2_ = 0x8405;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,unaff_EBX,0);
    break;
  case 6:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x428418;
    local_1c = &stack0xfffffffc;
    FUN_00427fd8(&stack0xffffffe8);
    local_28._0_2_ = 0x8427;
    local_28._2_2_ = 0x42;
    FUN_00407654(param_1,unaff_ESI,0);
    break;
  case 7:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x42843a;
    local_1c = &stack0xfffffffc;
    FUN_00428010(&local_1c);
    local_28._0_2_ = 0x8449;
    local_28._2_2_ = 0x42;
    FUN_00407654(param_1,local_1c,0);
    break;
  case 8:
    local_28 = &local_20;
    local_2c = 0x428464;
    local_1c = &stack0xfffffffc;
    FUN_00408094(*(undefined4 *)(param_2 + 4),1,0x7fffffff);
    local_28._0_2_ = 0x8473;
    local_28._2_2_ = 0x42;
    FUN_00407654(param_1,local_20,0);
    break;
  case 9:
  case 0xd:
    local_28._0_2_ = 0x857a;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00428110(param_2,&local_40);
    local_28._0_2_ = 0x8589;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_40,0);
    break;
  default:
    if (uVar2 == 0x100) {
      local_28._0_2_ = 0x85ad;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_0040732c(param_1,*(undefined4 *)(param_2 + 4));
      break;
    }
    if (uVar2 == 0x101) {
      local_28._0_2_ = 0x85d0;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_004281c8(param_2,&local_44);
      local_28._0_2_ = 0x85da;
      local_28._2_2_ = 0x42;
      FUN_0040732c(param_1,local_44);
      break;
    }
    if (uVar2 == 0x102) {
      local_28._0_2_ = 0x85c1;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_004083e8(param_1,*(undefined4 *)(param_2 + 4),0);
      break;
    }
    if ((uVar2 & 0x4000) == 0) {
      local_28._0_2_ = 0x88c4;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      uVar3 = FUN_004072d8(param_1);
      local_28._0_2_ = 0x88cd;
      local_28._2_2_ = 0x42;
      cVar1 = FUN_0042822c(param_2,uVar3);
      if (cVar1 == '\0') {
        local_28._0_2_ = 0x88db;
        local_28._2_2_ = 0x42;
        FUN_00428110(param_2,&local_80);
        local_28._0_2_ = 0x88ea;
        local_28._2_2_ = 0x42;
        FUN_004083e8(param_1,local_80,0);
      }
      break;
    }
    uVar2 = uVar2 & 0xbfff;
    if (uVar2 < 0xd) {
      if (uVar2 == 0xc) {
        local_28._0_2_ = 0x88a0;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_004282b4(param_1,*(undefined4 *)(param_2 + 4));
        break;
      }
      switch(uVar2) {
      default:
        goto switchD_00428604_caseD_0;
      case 2:
        local_28._0_2_ = 0x8699;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041636c((int)**(short **)(param_2 + 4),&local_48);
        local_28._0_2_ = 0x86a8;
        local_28._2_2_ = 0x42;
        FUN_004083e8(param_1,local_48,0);
        break;
      case 3:
        local_28._0_2_ = 0x86ba;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_0041636c(**(undefined4 **)(param_2 + 4),&local_4c);
        local_28._0_2_ = 0x86c9;
        local_28._2_2_ = 0x42;
        FUN_004083e8(param_1,local_4c,0);
        break;
      case 4:
        fVar4 = (float10)**(float **)(param_2 + 4);
        uStack_30 = SUB104(fVar4,0);
        local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
        uStack_34 = 0x4286e2;
        local_1c = &stack0xfffffffc;
        FUN_00418e68(&local_50);
        local_28._0_2_ = 0x86f1;
        local_28._2_2_ = 0x42;
        FUN_004083e8(param_1,local_50,0);
        break;
      case 5:
        fVar4 = (float10)**(double **)(param_2 + 4);
        uStack_30 = SUB104(fVar4,0);
        local_2c = (undefined4)((unkuint10)fVar4 >> 0x20);
        local_28._0_2_ = (undefined2)((unkuint10)fVar4 >> 0x40);
        uStack_34 = 0x42870a;
        local_1c = &stack0xfffffffc;
        FUN_00418e68(&local_54);
        local_28._0_2_ = 0x8719;
        local_28._2_2_ = 0x42;
        FUN_004083e8(param_1,local_54,0);
        break;
      case 6:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar3;
        local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x42872e;
        local_1c = &stack0xfffffffc;
        FUN_00427fd8(&local_58);
        local_28._0_2_ = 0x873d;
        local_28._2_2_ = 0x42;
        FUN_00407654(param_1,local_58,0);
        break;
      case 7:
        uVar3 = (*(undefined4 **)(param_2 + 4))[1];
        local_28._0_2_ = (undefined2)uVar3;
        local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x428752;
        local_1c = &stack0xfffffffc;
        FUN_00428010(&local_5c);
        local_28._0_2_ = 0x8761;
        local_28._2_2_ = 0x42;
        FUN_00407654(param_1,local_5c,0);
        break;
      case 8:
        local_28._0_2_ = 0x8777;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_004075c4(param_1,**(undefined4 **)(param_2 + 4),0);
        break;
      case 0xb:
        local_28._0_2_ = 0x878a;
        local_28._2_2_ = 0x42;
        local_1c = &stack0xfffffffc;
        FUN_00428048(**(undefined2 **)(param_2 + 4),&local_60);
        local_28._0_2_ = 0x8799;
        local_28._2_2_ = 0x42;
        FUN_00407654(param_1,local_60,0);
      }
    }
    else {
      if (uVar2 < 0x15) {
        if (uVar2 == 0x14) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar3;
          local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x428839;
          local_1c = &stack0xfffffffc;
          FUN_004165b0(&local_74);
          local_28._0_2_ = 0x8848;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_74,0);
          break;
        }
        if (uVar2 == 0x10) {
          local_28._0_2_ = 0x87ac;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c((int)**(char **)(param_2 + 4),&local_64);
          local_28._0_2_ = 0x87bb;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_64,0);
          break;
        }
        if (uVar2 == 0x11) {
          local_28._0_2_ = 0x87ce;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c(**(undefined1 **)(param_2 + 4),&local_68);
          local_28._0_2_ = 0x87dd;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_68,0);
          break;
        }
        if (uVar2 == 0x12) {
          local_28._0_2_ = 0x87f0;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_0041636c(**(undefined2 **)(param_2 + 4),&local_6c);
          local_28._0_2_ = 0x87ff;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_6c,0);
          break;
        }
        if (uVar2 == 0x13) {
          local_2c = **(undefined4 **)(param_2 + 4);
          local_28._0_2_ = 0;
          local_28._2_2_ = 0;
          uStack_30 = 0x428815;
          local_1c = &stack0xfffffffc;
          FUN_004165b0(&local_70);
          local_28._0_2_ = 0x8824;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_70,0);
          break;
        }
      }
      else {
        if (uVar2 == 0x15) {
          uVar3 = (*(undefined4 **)(param_2 + 4))[1];
          local_28._0_2_ = (undefined2)uVar3;
          local_28._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
          local_2c = **(undefined4 **)(param_2 + 4);
          uStack_30 = 0x42885d;
          local_1c = &stack0xfffffffc;
          FUN_004163c4(&local_78);
          local_28._0_2_ = 0x886c;
          local_28._2_2_ = 0x42;
          FUN_004083e8(param_1,local_78,0);
          break;
        }
        if (uVar2 == 0x100) {
          local_28._0_2_ = 0x887f;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_00407590(param_1,**(undefined4 **)(param_2 + 4),0);
          break;
        }
        if (uVar2 == 0x102) {
          local_28._0_2_ = 0x8892;
          local_28._2_2_ = 0x42;
          local_1c = &stack0xfffffffc;
          FUN_004075c4(param_1,**(undefined4 **)(param_2 + 4),0);
          break;
        }
      }
switchD_00428604_caseD_0:
      local_28._0_2_ = 0x88ac;
      local_28._2_2_ = 0x42;
      local_1c = &stack0xfffffffc;
      FUN_00428110(param_2,&local_7c);
      local_28._0_2_ = 0x88bb;
      local_28._2_2_ = 0x42;
      FUN_004083e8(param_1,local_7c,0);
    }
    break;
  case 0xb:
    local_28._0_2_ = 0x8484;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_00428048(param_2[4],&local_24);
    local_28._0_2_ = 0x8493;
    local_28._2_2_ = 0x42;
    FUN_00407654(param_1,local_24,0);
    break;
  case 0xc:
    local_28._0_2_ = 0x856b;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_004282b4(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_28._0_2_ = 0x84a4;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((int)(char)param_2[4],&local_28);
    uVar3 = CONCAT22(local_28._2_2_,(undefined2)local_28);
    local_28._0_2_ = 0x84b3;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,uVar3,0);
    break;
  case 0x11:
    local_28._0_2_ = 0x84c4;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c((char)param_2[4],&local_2c);
    local_28._0_2_ = 0x84d3;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_2c,0);
    break;
  case 0x12:
    local_28._0_2_ = 0x84e4;
    local_28._2_2_ = 0x42;
    local_1c = &stack0xfffffffc;
    FUN_0041636c(param_2[4],&uStack_30);
    local_28._0_2_ = 0x84f3;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,uStack_30,0);
    break;
  case 0x13:
    local_2c = *(undefined4 *)(param_2 + 4);
    local_28._0_2_ = 0;
    local_28._2_2_ = 0;
    uStack_30 = 0x428507;
    local_1c = &stack0xfffffffc;
    FUN_004165b0(&uStack_34);
    local_28._0_2_ = 0x8516;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,uStack_34,0);
    break;
  case 0x14:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x428529;
    local_1c = &stack0xfffffffc;
    FUN_004165b0(&local_38);
    local_28._0_2_ = 0x8538;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_38,0);
    break;
  case 0x15:
    local_28._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_28._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x42854b;
    FUN_004163c4(&local_3c);
    local_28._0_2_ = 0x855a;
    local_28._2_2_ = 0x42;
    FUN_004083e8(param_1,local_3c,0);
  }
  *in_FS_OFFSET = local_20;
  local_1c = (undefined1 *)0x428904;
  thunk_FUN_004072fc(&local_80,8,unaff_ESI);
  local_1c = (undefined1 *)0x428911;
  FUN_00407de8(&local_60,3);
  local_1c = (undefined1 *)0x42891e;
  thunk_FUN_004072fc(&local_54,4);
  local_1c = (undefined1 *)0x428926;
  FUN_004072d8(&local_44);
  local_1c = (undefined1 *)0x428933;
  thunk_FUN_004072fc(&local_40,7);
  local_1c = (undefined1 *)0x428940;
  FUN_00407de8(&local_24,4);
  local_1c = (undefined1 *)0x42894d;
  thunk_FUN_004072fc(&stack0xffffffec,4);
  return;
}
