// rea decompile_all
// name: FUN_100f1350
// address: 0x100f1350
// body: available
// range: 0x100f1350-0x100f1e2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f1350(uint *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  void *_Src;
  SIZE_T SVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  LPVOID pvVar12;
  undefined8 local_148;
  uint local_140;
  undefined8 local_13c;
  uint local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  void *local_104;
  int local_100;
  uint local_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 local_c7;
  uint uStack_c0;
  undefined8 local_bc;
  uint local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_4c;
  undefined4 uStack_40;
  undefined8 local_3c;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined8 local_18;

  local_fc = FUN_100f0c40(param_2);
  if (local_fc != 0x5c) {
    FUN_1013bbfd(&local_fc,"\\",&PTR_s_C__Users_runneradmin__cargo_regi_10154234);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar2 = *param_2;
  local_140 = *(uint *)(iVar2 + 0x58);
  puVar1 = (uint *)(iVar2 + 0x50);
  local_148 = *(undefined8 *)(iVar2 + 0x50);
  uVar6 = FUN_100f1250(param_2);
  if ((char)uVar6 == '\0') {
    uStack_e8 = *(undefined4 *)(iVar2 + 0x58);
    SVar3 = param_2[2];
    uStack_f0 = (undefined4)*(undefined8 *)puVar1;
    uStack_ec = (undefined4)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
    uStack_f4 = local_140;
    local_fc = (uint)local_148;
    uStack_f8 = (undefined4)((ulonglong)local_148 >> 0x20);
    if (SVar3 == 0) {
      pvVar12 = (LPVOID)0x1;
    }
    else {
      _Src = (void *)param_2[1];
      pvVar12 = FUN_10107380(0,SVar3);
      if (pvVar12 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      memcpy(pvVar12,_Src,SVar3);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_e8,uStack_ec);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_f0,uStack_f4);
    *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_f8,local_fc);
    *param_1 = 10;
    param_1[7] = SVar3;
    param_1[8] = (uint)pvVar12;
    param_1[9] = SVar3;
    return;
  }
  uVar7 = FUN_100f0c40(param_2);
  if ((uVar7 & 0xfffffff8) == 0x30) {
    if (*(char *)(iVar2 + 0x65) == '\0') {
LAB_100f1552:
      uVar7 = *puVar1;
      uVar8 = FUN_100f0c40(param_2);
      uVar10 = 1;
      if ((0x7f < uVar8) && (uVar10 = 2, 0x7ff < uVar8)) {
        uVar10 = 4 - (uVar8 < 0x10000);
      }
      if (!CARRY4(uVar10,uVar7)) {
        if (*(int *)(iVar2 + 0x58) == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_100 = *(int *)(iVar2 + 0x54);
        uVar11 = *(int *)(iVar2 + 0x58) + 1;
        uVar8 = FUN_100f0c40(param_2);
        SVar3 = param_2[2];
        pvVar12 = (LPVOID)0x1;
        if (uVar8 == 10) {
          uVar11 = 1;
        }
        if (SVar3 != 0) {
          local_104 = (void *)param_2[1];
          pvVar12 = FUN_10107380(0,SVar3);
          if (pvVar12 == (LPVOID)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          memcpy(pvVar12,local_104,SVar3);
        }
        param_1[0xc] = local_140;
        *(undefined8 *)(param_1 + 10) = local_148;
        *param_1 = 0x20;
        param_1[7] = SVar3;
        param_1[8] = (uint)pvVar12;
        param_1[9] = SVar3;
        param_1[0xd] = uVar10 + uVar7;
        param_1[0xe] = local_100 + (uint)(uVar8 == 10);
        param_1[0xf] = uVar11;
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    FUN_100fce40(&local_30,param_2);
    param_1[1] = 0x80000002;
    uStack_2c = (undefined4)local_148;
    uStack_28 = (undefined4)((ulonglong)local_148 >> 0x20);
    *(ulonglong *)(param_1 + 4) = CONCAT44(local_140,uStack_28);
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_2c,local_30);
    *(undefined8 *)(param_1 + 6) = local_20;
    *(undefined8 *)(param_1 + 8) = local_18;
    goto LAB_100f16a8;
  }
  if ((uVar7 & 0xfffffffe) == 0x38) {
    if (*(char *)(iVar2 + 0x65) != '\x01') goto LAB_100f1552;
switchD_100f1643_caseD_45:
    FUN_100f1250(param_2);
    uStack_128 = *(undefined4 *)(iVar2 + 0x58);
    uStack_130 = (undefined4)*(undefined8 *)puVar1;
    uStack_12c = (undefined4)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
    local_134 = local_140;
    local_13c = local_148;
    switch(uVar7) {
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x3f:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
      *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
      *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_140);
      *(undefined8 *)(param_1 + 3) = local_148;
      param_1[1] = 0x80000002;
      param_1[2] = uVar7;
      *(undefined1 *)(param_1 + 9) = 1;
      break;
    default:
      bVar5 = FUN_100fc720(uVar7);
      if (bVar5) {
        *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
        *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
        *(undefined8 *)(param_1 + 3) = local_13c;
        param_1[1] = 0x80000002;
        param_1[2] = uVar7;
        *(undefined1 *)(param_1 + 9) = 2;
      }
      else {
        switch(uVar7) {
        case 0x3c:
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 2) = local_13c;
          param_1[1] = 0x80000003;
          *(undefined1 *)(param_1 + 8) = 8;
          break;
        default:
          FUN_1002c180(&local_fc,(void *)param_2[1],param_2[2]);
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_130,local_134);
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_128,uStack_12c);
          *(undefined8 *)(param_1 + 10) = local_13c;
          *param_1 = 0xb;
          param_1[9] = uStack_f4;
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_f8,local_fc);
          return;
        case 0x3e:
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 2) = local_13c;
          param_1[1] = 0x80000003;
          *(undefined1 *)(param_1 + 8) = 9;
          break;
        case 0x41:
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 2) = local_13c;
          param_1[1] = 0x80000003;
          *(undefined1 *)(param_1 + 8) = 2;
          break;
        case 0x42:
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 2) = local_13c;
          param_1[1] = 0x80000003;
          *(undefined1 *)(param_1 + 8) = 5;
          break;
        case 0x61:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 7;
          *(undefined2 *)(param_1 + 9) = 6;
          break;
        case 0x62:
          local_ac = uStack_12c;
          uStack_a8 = uStack_128;
          local_b4 = local_134;
          uStack_b0 = uStack_130;
          local_bc = local_13c;
          cVar9 = '\x04';
          if (*puVar1 != param_2[2]) {
            uVar7 = FUN_100f0c40(param_2);
            if (uVar7 == 0x7b) {
              FUN_100fc8f0(&local_fc,param_2,&local_148);
              if (local_fc != 0xffffffff) {
                *(ulonglong *)((int)param_1 + 0x2d) = CONCAT17(uStack_c8,local_cf);
                *(ulonglong *)((int)param_1 + 0x25) = CONCAT17(uStack_d0,local_d7);
                param_1[0xf] = uStack_c0;
                *(ulonglong *)((int)param_1 + 0x35) = CONCAT17((undefined1)uStack_c0,local_c7);
                *(ulonglong *)((int)param_1 + 0x1d) = CONCAT17(uStack_d8,local_df);
                *(ulonglong *)((int)param_1 + 0x15) =
                     CONCAT17(uStack_e0,CONCAT43(uStack_e4,uStack_e8._1_3_));
                *(ulonglong *)((int)param_1 + 0xd) =
                     CONCAT17((undefined1)uStack_e8,CONCAT43(uStack_ec,uStack_f0._1_3_));
                *(ulonglong *)((int)param_1 + 5) =
                     CONCAT17((undefined1)uStack_f0,CONCAT43(uStack_f4,uStack_f8._1_3_));
                *param_1 = local_fc;
                *(char *)(param_1 + 1) = (char)uStack_f8;
                return;
              }
              cVar9 = '\x04';
              if ((char)uStack_f8 != -1) {
                uStack_a8 = *(undefined4 *)(iVar2 + 0x58);
                uStack_b0 = (undefined4)*(undefined8 *)puVar1;
                local_ac = (undefined4)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
                cVar9 = (char)uStack_f8;
              }
            }
            else {
              cVar9 = '\x04';
            }
          }
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_a8,local_ac);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_b0,local_b4);
          *(undefined8 *)(param_1 + 2) = local_bc;
          param_1[1] = 0x80000003;
          *(char *)(param_1 + 8) = cVar9;
          break;
        case 0x66:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 0xc;
          *(undefined2 *)(param_1 + 9) = 0x106;
          break;
        case 0x6e:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 10;
          *(undefined2 *)(param_1 + 9) = 0x306;
          break;
        case 0x72:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 0xd;
          *(undefined2 *)(param_1 + 9) = 0x406;
          break;
        case 0x74:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 9;
          *(undefined2 *)(param_1 + 9) = 0x206;
          break;
        case 0x76:
          *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 3) = local_13c;
          param_1[1] = 0x80000002;
          param_1[2] = 0xb;
          *(undefined2 *)(param_1 + 9) = 0x506;
          break;
        case 0x7a:
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_128,uStack_12c);
          *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_130,local_134);
          *(undefined8 *)(param_1 + 2) = local_13c;
          param_1[1] = 0x80000003;
          *(undefined1 *)(param_1 + 8) = 3;
        }
      }
    }
  }
  else {
    switch(uVar7) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 100:
    case 0x73:
    case 0x77:
      FUN_100fc4f0(&local_4c,param_2);
      param_1[1] = 0x80000005;
      param_1[8] = local_34;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_40,local_140);
      *(undefined8 *)(param_1 + 2) = local_148;
      *(undefined8 *)(param_1 + 6) = local_3c;
      break;
    default:
      goto switchD_100f1643_caseD_45;
    case 0x50:
    case 0x70:
      FUN_100fb6e0(&local_fc,param_2);
      if (local_fc != 0xffffffff) {
        *(ulonglong *)(param_1 + 0xb) = CONCAT71(local_cf,uStack_d0);
        *(ulonglong *)(param_1 + 9) = CONCAT71(local_d7,uStack_d8);
        *(ulonglong *)(param_1 + 0xd) = CONCAT71(local_c7,uStack_c8);
        *(ulonglong *)(param_1 + 7) = CONCAT71(local_df,uStack_e0);
        *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_e4,uStack_e8);
        *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_ec,uStack_f0);
        *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_f4,uStack_f8);
        *param_1 = local_fc;
        param_1[0xf] = uStack_c0;
        return;
      }
      local_6c = (undefined4)CONCAT71(local_df,uStack_e0);
      uStack_68 = (undefined4)local_148;
      local_64 = (undefined4)((ulonglong)local_148 >> 0x20);
      *(ulonglong *)(param_1 + 0xb) = CONCAT71(local_cf,uStack_d0);
      *(ulonglong *)(param_1 + 9) = CONCAT44(local_140,local_64);
      *(ulonglong *)(param_1 + 0xd) = CONCAT71(local_c7,uStack_c8);
      *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_68,local_6c);
      *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_e4,uStack_e8);
      *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_ec,uStack_f0);
      *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_f4,uStack_f8);
      break;
    case 0x55:
    case 0x75:
    case 0x78:
      FUN_100fb580(&local_fc,param_2);
      if (local_fc != 0xffffffff) {
        *(ulonglong *)(param_1 + 0xb) = CONCAT71(local_cf,uStack_d0);
        param_1[0xf] = uStack_c0;
        *(ulonglong *)(param_1 + 0xd) = CONCAT71(local_c7,uStack_c8);
        *(ulonglong *)(param_1 + 9) = CONCAT71(local_d7,uStack_d8);
        *(ulonglong *)(param_1 + 7) = CONCAT71(local_df,uStack_e0);
        *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_e4,uStack_e8);
        *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_f4,uStack_f8);
        *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_ec,uStack_f0);
        *param_1 = local_fc;
        return;
      }
      param_1[1] = 0x80000002;
      uStack_a0 = (undefined4)local_148;
      local_9c = (undefined4)((ulonglong)local_148 >> 0x20);
      *(ulonglong *)(param_1 + 4) = CONCAT44(local_140,local_9c);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_a0,uStack_f8);
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_e4,uStack_e8);
      *(ulonglong *)(param_1 + 8) = CONCAT71(local_df,uStack_e0);
    }
  }
LAB_100f16a8:
  *param_1 = 0xffffffff;
  return;
}
