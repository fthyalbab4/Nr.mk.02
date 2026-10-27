// rea decompile_all
// name: FUN_00595a00
// address: 0x595a00
// body: available
// range: 0x595a00-0x595cfe inclusive
// range: 0x595d17-0x596019 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x595a24 (push 0x59601a followed by fs-segment stack chaining); handler 0x59601a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595a00(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  short local_2c;
  ushort local_2a;
  int local_28;
  int local_24;
  int local_20;
  byte local_19;
  ushort local_18;
  undefined1 local_15;
  int local_14;
  int *local_10;
  undefined1 *local_c;
  int local_8;

  puStack_3c = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined1 *)0x0;
  puStack_40 = &LAB_0059601a;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_14 = param_3;
  local_10 = param_2;
  local_15 = FUN_00593104(param_1,param_2,param_3);
  FUN_0043f254(local_10);
  FUN_0043f488(local_10,&local_2c,8);
  if (local_2c == 0x4d4d) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
    local_2a = CONCAT11((char)local_2a,(char)(local_2a >> 8));
    local_28 = FUN_00592f20(local_28);
  }
  *(uint *)(param_1 + 0x44) = (uint)local_2a;
  *(int *)(param_1 + 0x6c) = local_28;
  if (*(uint *)(param_1 + 0x44) == 0x2a) {
    local_24 = local_28;
    do {
      FUN_0043f254(local_10);
      FUN_0043f488(local_10,&local_18,2);
      if (local_2c == 0x4d4d) {
        local_18 = CONCAT11((char)local_18,(char)(local_18 >> 8));
      }
      if (local_14 == 0) {
        FUN_00409be0(param_1 + 200,&DAT_00590ab0,1,local_18);
        FUN_0043f488(local_10,*(undefined4 *)(param_1 + 200),(uint)local_18 * 0xc);
        if (local_2c == 0x4d4d) {
          FUN_00594f10(param_1);
        }
        FUN_00594eec(param_1);
        uVar4 = FUN_00594ca4(param_1,0x100,0);
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
        uVar4 = FUN_00594ca4(param_1,0x101,0);
        *(undefined4 *)(param_1 + 0x50) = uVar4;
        if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x50) != 0)) {
          FUN_005944c4(param_1,local_10,0x116,param_1 + 0x84);
          iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 0x84));
          if ((iVar5 == 0) || (**(int **)(param_1 + 0x84) == -1)) {
            FUN_00409be0(param_1 + 0x84,&DAT_0058fbec,1,1);
            **(undefined4 **)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x50);
          }
          uVar1 = FUN_00594ca4(param_1,0x115,1);
          *(undefined1 *)(param_1 + 0x56) = uVar1;
          FUN_005944c4(param_1,local_10,0x102,&local_c);
          iVar5 = FUN_00409a18(local_c);
          if (iVar5 == 0) {
            *(undefined1 *)(param_1 + 0x55) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x55) = *local_c;
          }
          uVar4 = FUN_00594ca4(param_1,0x142,0);
          *(undefined4 *)(param_1 + 0x78) = uVar4;
          uVar4 = FUN_00594ca4(param_1,0x143,0);
          *(undefined4 *)(param_1 + 0x7c) = uVar4;
          if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
            *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
          }
          local_19 = FUN_00594ca4(param_1,0x106,0);
          FUN_005944c4(param_1,local_10,0x152,&local_8);
          iVar5 = FUN_00409a18(local_8);
          *(bool *)(param_1 + 0x69) = 0 < iVar5;
          if (*(char *)(param_1 + 0x69) == '\0') goto LAB_00595cbc;
          iVar5 = FUN_00409a20(local_8);
          iVar5 = iVar5 + 1;
          local_20 = 0;
          goto LAB_00595ca4;
        }
        break;
      }
      local_14 = local_14 + -1;
      (**(code **)(*local_10 + 0x14))(local_10,(uint)local_18 * 0xc,CONCAT22(extraout_var,1));
      FUN_0043f488(local_10,&local_24,4);
    } while (local_24 != 0);
  }
  goto LAB_00595ff9;
  while( true ) {
    local_20 = local_20 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
LAB_00595ca4:
    if (2 < *(uint *)(local_8 + local_20 * 4)) {
      *(undefined1 *)(param_1 + 0x69) = 0;
      break;
    }
  }
LAB_00595cbc:
  *(char *)(param_1 + 0x57) = *(char *)(param_1 + 0x55) * *(char *)(param_1 + 0x56);
  uVar3 = FUN_00594ca4(param_1,0x103,0);
  if (uVar3 < 0x8006) {
    if (uVar3 == 0x8005) {
      *(undefined1 *)(param_1 + 0x58) = 3;
    }
    else if (uVar3 < 7) {
      if (uVar3 == 6) {
        *(undefined1 *)(param_1 + 0x58) = 0xb;
      }
      else {
        switch(uVar3) {
        default:
          goto switchD_00595cf8_caseD_0;
        case 1:
          *(undefined1 *)(param_1 + 0x58) = 1;
          break;
        case 2:
          *(undefined1 *)(param_1 + 0x58) = 6;
          break;
        case 3:
          *(undefined1 *)(param_1 + 0x58) = 5;
          break;
        case 4:
          *(undefined1 *)(param_1 + 0x58) = 7;
          break;
        case 5:
          *(undefined1 *)(param_1 + 0x58) = 4;
        }
      }
    }
    else if (uVar3 == 7) {
      *(undefined1 *)(param_1 + 0x58) = 10;
    }
    else {
      if (uVar3 == 8) goto LAB_00595df4;
      if (uVar3 == 0x7ffe) {
        *(undefined1 *)(param_1 + 0x58) = 0xd;
      }
      else {
        if (uVar3 != 0x8003) goto switchD_00595cf8_caseD_0;
        *(undefined1 *)(param_1 + 0x58) = 8;
      }
    }
  }
  else if (uVar3 < 0x808d) {
    if (uVar3 == 0x808c) {
      *(undefined1 *)(param_1 + 0x58) = 0x12;
    }
    else if (uVar3 < 0x8081) {
      if (uVar3 == 0x8080) {
        *(undefined1 *)(param_1 + 0x58) = 0xf;
      }
      else if (uVar3 == 0x8029) {
        *(undefined1 *)(param_1 + 0x58) = 0xc;
      }
      else {
        if (uVar3 != 0x807f) goto switchD_00595cf8_caseD_0;
        *(undefined1 *)(param_1 + 0x58) = 0xe;
      }
    }
    else if (uVar3 == 0x8081) {
      *(undefined1 *)(param_1 + 0x58) = 0x10;
    }
    else if (uVar3 == 0x8082) {
      *(undefined1 *)(param_1 + 0x58) = 0x11;
    }
    else {
switchD_00595cf8_caseD_0:
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  else if (uVar3 == 0x808d) {
    *(undefined1 *)(param_1 + 0x58) = 0x13;
  }
  else if (uVar3 == 0x80b2) {
LAB_00595df4:
    *(undefined1 *)(param_1 + 0x58) = 9;
  }
  else if (uVar3 == 0x80b3) {
    *(undefined1 *)(param_1 + 0x58) = 0x14;
  }
  else {
    if (uVar3 != 0x8765) goto switchD_00595cf8_caseD_0;
    *(undefined1 *)(param_1 + 0x58) = 0x15;
  }
  if (local_19 < 9) {
    *(undefined *)(param_1 + 0x54) = (&DAT_0077c768)[local_19];
    if ((local_19 == 2) && (*(byte *)(param_1 + 0x56) < 4)) {
      *(undefined1 *)(param_1 + 0x54) = 4;
    }
    if (local_19 == 0) {
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 4;
    }
    if (local_19 == 6) {
      cVar2 = FUN_005941c4(param_1,0x212,&local_20);
      if (cVar2 == '\0') {
        FUN_00409be0(param_1 + 0x88,&DAT_0058fc20,1,2);
        **(undefined1 **)(param_1 + 0x88) = 2;
        *(undefined1 *)(*(int *)(param_1 + 0x88) + 1) = 2;
      }
      else {
        FUN_00594230(param_1,local_10,0x212,param_1 + 0x88);
      }
      cVar2 = FUN_005941c4(param_1,0x213,&local_20);
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x6f4) = 1;
      }
      else {
        uVar4 = FUN_00594ca4(param_1,0x213,0);
        *(undefined4 *)(param_1 + 0x6f4) = uVar4;
      }
      cVar2 = FUN_005941c4(param_1,0x211,&local_20);
      if (cVar2 == '\0') {
        FUN_00409be0(param_1 + 0x6f8,&DAT_0058fc50,1,3);
        **(undefined4 **)(param_1 + 0x6f8) = 0x3e991687;
        *(undefined4 *)(*(int *)(param_1 + 0x6f8) + 4) = 0x3f1645a2;
        *(undefined4 *)(*(int *)(param_1 + 0x6f8) + 8) = 0x3de978d5;
      }
      else {
        FUN_00594718(param_1,local_10,0x211,param_1 + 0x6f8);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  uVar4 = FUN_00594ca4(param_1,0x10002,0);
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  uVar4 = FUN_00594ca4(param_1,0x10003,3);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar4 = FUN_00594ca4(param_1,0x11c,0);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  FUN_00594ac8(param_1,local_10,0x11a,0);
  *(float *)(param_1 + 0x60) = (float)in_ST0;
  FUN_00594ac8(param_1,local_10,0x11b,0);
  *(float *)(param_1 + 100) = (float)in_ST1;
  iVar5 = FUN_00594ca4(param_1,0x128,2);
  if (iVar5 == 3) {
    *(float *)(param_1 + 0x60) = (float)(_DAT_00596030 * (float10)*(float *)(param_1 + 0x60));
    *(float *)(param_1 + 100) = (float)(_DAT_00596030 * (float10)*(float *)(param_1 + 100));
  }
  uVar4 = FUN_00594ca4(param_1,0x13d,0);
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  iVar5 = FUN_00594ca4(param_1,0x10a,1);
  if (iVar5 == 2) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 8;
  }
  local_15 = 1;
LAB_00595ff9:
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00596021;
  puStack_40 = (undefined1 *)0x596019;
  FUN_00408e44(&local_c,&DAT_0058fbec,2);
  return;
}
