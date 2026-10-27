// rea decompile_all
// name: FUN_1009cbb0
// address: 0x1009cbb0
// body: available
// range: 0x1009cbb0-0x1009d1b0 inclusive
// range: 0x1009d1b5-0x1009d1c2 inclusive
// range: 0x1009d26a-0x1009d27d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1009cbb0(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  byte bVar9;
  int iVar8;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_8c;
  uint local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  byte local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint *local_38;
  undefined4 *local_34;
  uint *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;

  local_6c = 0x30;
  local_70 = 0x30303030;
  local_74 = 0x30303030;
  local_50 = param_6;
  local_48 = param_8;
  uVar2 = param_1[2];
  local_44 = param_9;
  local_58 = 0x1009cbfa;
  local_4c = param_7;
  if (param_4 == 0) {
    uVar13 = 0;
    local_64 = uVar13;
  }
  else {
    uVar13 = (uint)*(ushort *)((int)param_1 + 0xe);
    local_64 = 9;
    if ((uVar2 & 0x10000000) != 0) {
      local_64 = uVar13;
    }
    if (local_64 == 0) {
      local_64 = 0;
      if (param_4 < param_5 * 5) {
        uVar13 = 0;
      }
      else if ((param_2 & 1) != 0 || param_4 != param_5 * 5) {
LAB_1009cdec:
        if ((param_2 & param_3) == 0xffffffff) {
          local_28 = 0;
          bVar15 = false;
          param_3 = 0xffffffff;
          local_8c = param_2;
          goto LAB_1009cfec;
        }
        bVar15 = 0xfffffffe < param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + bVar15;
      }
    }
    else {
      local_88 = param_4 % param_5;
      cVar5 = (char)(param_4 / param_5) + '0';
      local_74 = CONCAT31(0x303030,cVar5);
      local_78 = local_64;
      if (local_88 == 0) {
        uVar13 = 1;
        local_64 = uVar13;
      }
      else {
        uVar10 = param_5 / 10;
        if (local_64 == 1) {
LAB_1009cd79:
          bVar15 = local_88 == uVar10 * 5;
          if (uVar10 * 5 <= local_88) {
LAB_1009cd8e:
            uVar10 = uVar13;
            if ((!bVar15) || ((*(byte *)((int)&local_78 + local_64 + 3) & 1) != 0)) {
              do {
                uVar7 = uVar10 - 1;
                bVar9 = *(byte *)((int)&local_78 + uVar10 + 3);
                cVar5 = bVar9 + 1;
                if (0x38 < bVar9) {
                  cVar5 = '0';
                }
                *(char *)((int)&local_78 + uVar10 + 3) = cVar5;
              } while ((0x38 < bVar9) && (uVar10 = uVar7, uVar7 != 0));
              if (0x38 < bVar9) goto LAB_1009cdec;
            }
          }
        }
        else {
          if (param_5 < 10) {
LAB_1009d272:
            FUN_10136ca0(&PTR_s_C__Users_runneradmin__rustup_too_10149b90);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar7 = local_88 / uVar10;
          local_88 = local_88 % uVar10;
          local_74._0_2_ = CONCAT11((char)uVar7 + '0',cVar5);
          local_74 = CONCAT22(0x3030,(undefined2)local_74);
          if (local_88 == 0) {
            uVar13 = 2;
            local_64 = uVar13;
          }
          else {
            uVar10 = param_5 / 100;
            if (local_64 == 2) goto LAB_1009cd79;
            if (param_5 < 100) goto LAB_1009d272;
            uVar7 = local_88 / uVar10;
            local_88 = local_88 % uVar10;
            local_74._0_3_ = CONCAT12((char)uVar7 + '0',(undefined2)local_74);
            local_74 = CONCAT13(0x30,(undefined3)local_74);
            if (local_88 == 0) {
              uVar13 = 3;
              local_64 = uVar13;
              goto LAB_1009cfd5;
            }
            uVar10 = param_5 / 1000;
            if (local_64 == 3) goto LAB_1009cd79;
            if (param_5 < 1000) goto LAB_1009d272;
            uVar7 = local_88 / uVar10;
            local_88 = local_88 % uVar10;
            local_74 = CONCAT13((char)uVar7 + '0',(undefined3)local_74);
            if (local_88 == 0) {
              uVar13 = 4;
              local_64 = uVar13;
              goto LAB_1009cfd5;
            }
            uVar10 = param_5 / 10000;
            if (local_64 == 4) goto LAB_1009cd79;
            local_68 = uVar10;
            if (param_5 < 10000) goto LAB_1009d272;
            uVar7 = local_88 / uVar10;
            local_88 = local_88 % uVar10;
            cVar5 = (char)uVar7 + '0';
            local_70 = CONCAT31(0x303030,cVar5);
            if (local_88 == 0) {
              uVar13 = 5;
              local_64 = uVar13;
              goto LAB_1009cfd5;
            }
            uVar10 = param_5 / 100000;
            if (local_64 == 5) goto LAB_1009cd79;
            if (param_5 < 100000) goto LAB_1009d272;
            uVar7 = local_88 & 0xffff;
            local_88 = uVar7 % uVar10;
            local_70._0_2_ = CONCAT11((char)(uVar7 / uVar10) + '0',cVar5);
            local_70 = CONCAT22(0x3030,(undefined2)local_70);
            if ((short)local_88 == 0) {
              uVar13 = 6;
              local_64 = uVar13;
              goto LAB_1009cfd5;
            }
            uVar10 = param_5 / 1000000;
            if (local_64 == 6) goto LAB_1009cd79;
            if (param_5 < 1000000) goto LAB_1009d272;
            uVar7 = local_88 / uVar10;
            local_88 = local_88 % uVar10;
            local_70._0_3_ = CONCAT12((char)uVar7 + '0',(undefined2)local_70);
            local_70 = CONCAT13(0x30,(undefined3)local_70);
            if ((ushort)local_88 == 0) {
              uVar13 = 7;
              local_64 = uVar13;
              goto LAB_1009cfd5;
            }
            uVar10 = param_5 / 10000000;
            if (local_64 == 7) goto LAB_1009cd79;
            if (param_5 < 10000000) goto LAB_1009d272;
            uVar6 = (ushort)local_88 & 0xff;
            bVar9 = (byte)(uVar6 % (ushort)(byte)uVar10);
            local_70 = CONCAT13((char)(uVar6 / (byte)uVar10) + '0',(undefined3)local_70);
            if (bVar9 == 0) {
              uVar13 = 8;
              local_64 = uVar13;
            }
            else if (local_64 == 8) {
              bVar4 = (99999999 < param_5) * '\x05';
              bVar15 = bVar9 == bVar4;
              if (bVar4 <= bVar9) goto LAB_1009cd8e;
            }
            else {
              if (param_5 < 100000000) goto LAB_1009d272;
              local_6c = bVar9 | 0x30;
              uVar13 = 9;
              local_64 = uVar13;
            }
          }
        }
      }
    }
  }
LAB_1009cfd5:
  bVar15 = true;
  local_28 = 1;
  local_8c = param_2;
  local_20 = param_2;
  local_1c = param_3;
LAB_1009cfec:
  local_24 = 0;
  uVar10 = uVar13;
  if ((uVar2 & 0x10000000) != 0) {
    uVar6 = 9;
    if (*(ushort *)((int)param_1 + 0xe) < 9) {
      uVar6 = *(ushort *)((int)param_1 + 0xe);
    }
    uVar10 = (uint)uVar6;
  }
  local_40 = &local_28;
  local_2c = &local_48;
  local_3c = &local_50;
  local_38 = &local_54;
  local_34 = &local_74;
  local_30 = &local_64;
  local_54 = uVar10;
  if ((uVar2 & 0x8000000) == 0) {
    FUN_1009d290(&local_40,param_1);
  }
  else {
    local_78 = (uint)*(ushort *)(param_1 + 3);
    iVar14 = 0;
    iVar11 = 0;
    do {
      pcVar1 = (char *)(param_8 + iVar11);
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + (uint)(-0x41 < *pcVar1);
    } while (param_9 != iVar11);
    iVar11 = 0x14;
    local_68 = param_3;
    if (bVar15) {
      if (local_8c == 0 && param_3 == 0) {
        iVar11 = 1;
      }
      else {
        local_5c = param_3 >> 10;
        local_60 = uVar10;
        uVar16 = __aulldiv(local_8c,param_3,0x540be400,2);
        uVar10 = 10;
        if (local_5c == 0 && (uint)(0x9502f8 < (param_3 << 0x16 | local_8c >> 10)) <= -local_5c) {
          uVar10 = 0;
          uVar16 = CONCAT44(param_3,local_8c);
        }
        uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
        uVar7 = (uint)uVar16;
        if ((uVar7 < 100000) <= uVar12) {
          uVar16 = __aulldiv(uVar7,uVar12,100000,0);
          uVar7 = (uint)uVar16;
          uVar10 = uVar10 | 5;
        }
        iVar11 = ((uVar7 + 0x7d8f0 & uVar7 + 0xdfc18 ^ uVar7 + 0x5fff6 & uVar7 + 0x7ff9c) >> 0x11) +
                 1 + uVar10;
        uVar10 = local_60;
      }
    }
    uVar7 = (uint)*(ushort *)((int)param_1 + 0xe);
    if ((uVar2 & 0x10000000) == 0) {
      uVar7 = uVar13;
    }
    iVar8 = uVar7 + 1;
    if (uVar10 == 0) {
      iVar8 = 0;
    }
    if ((uint)(iVar14 + param_7 + iVar8 + iVar11) < local_78) {
                    /* WARNING: Could not recover jumptable at 0x1009d1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(local_58 + *(int *)(&DAT_1009d280 + (uVar2 >> 0x1d & 3) * 4)))();
      return;
    }
    FUN_1009d290(&local_40,param_1);
  }
  return;
}
