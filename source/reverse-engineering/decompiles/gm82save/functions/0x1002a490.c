// rea decompile_all
// name: FUN_1002a490
// address: 0x1002a490
// body: available
// range: 0x1002a490-0x1002a509 inclusive
// range: 0x1002a510-0x1002a5ec inclusive
// range: 0x1002a5f0-0x1002a6a8 inclusive
// range: 0x1002a6b0-0x1002a916 inclusive
// range: 0x1002a920-0x1002a9d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1002a490(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int param_6,
            uint param_7,undefined4 param_8,undefined4 *param_9)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int *piVar11;
  HANDLE pvVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  int local_90;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  uint *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 *local_50;
  uint *local_4c;
  uint *local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  uVar14 = param_2 >> 1;
  local_20 = param_5;
  local_2c = param_2;
  if (uVar14 < param_5) {
LAB_1002a4cb:
    local_68 = 0x400000000;
    local_60 = (uint *)0x0;
    if (param_7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    local_30 = (int *)*param_9;
    local_34 = param_9[1];
    iVar13 = param_6 + param_7 * 0x18;
    iVar17 = DAT_10163248;
    do {
      if (iVar17 == 0) {
        iVar17 = 0;
      }
      else if (DAT_10163254 != 0) {
        uVar2 = *(uint *)(param_6 + 0xc);
        uVar25 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,uVar2);
        piVar11 = local_30;
        uVar14 = (uint)uVar25;
        local_90 = 0;
        bVar19 = (byte)((ulonglong)uVar25 >> 0x18) >> 1;
        auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
        auVar20 = pshuflw(auVar20,auVar20,0);
        while( true ) {
          uVar14 = DAT_1016324c & uVar14;
          pcVar1 = (char *)(iVar17 + uVar14);
          auVar23[0] = -(*pcVar1 == auVar20[0]);
          auVar23[1] = -(pcVar1[1] == auVar20[1]);
          auVar23[2] = -(pcVar1[2] == auVar20[2]);
          auVar23[3] = -(pcVar1[3] == auVar20[3]);
          auVar23[4] = -(pcVar1[4] == auVar20[4]);
          auVar23[5] = -(pcVar1[5] == auVar20[5]);
          auVar23[6] = -(pcVar1[6] == auVar20[6]);
          auVar23[7] = -(pcVar1[7] == auVar20[7]);
          auVar23[8] = -(pcVar1[8] == auVar20[0]);
          auVar23[9] = -(pcVar1[9] == auVar20[1]);
          auVar23[10] = -(pcVar1[10] == auVar20[2]);
          auVar23[0xb] = -(pcVar1[0xb] == auVar20[3]);
          auVar23[0xc] = -(pcVar1[0xc] == auVar20[4]);
          auVar23[0xd] = -(pcVar1[0xd] == auVar20[5]);
          auVar23[0xe] = -(pcVar1[0xe] == auVar20[6]);
          auVar23[0xf] = -(pcVar1[0xf] == auVar20[7]);
          uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar23[0xf] >> 7) << 0xf);
          while ((short)uVar16 != 0) {
            iVar5 = 0;
            for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            uVar16 = uVar16 - 1 & uVar16;
            uVar10 = iVar5 + uVar14 & DAT_1016324c;
            if (uVar2 == *(uint *)(iVar17 + -0x28 + uVar10 * -0x28)) {
              if (local_30[3] == 0) goto LAB_1002a512;
              uVar16 = *(uint *)(iVar17 + uVar10 * -0x28 + -8);
              uVar25 = FUN_1002e000(local_30[4],local_30[5],local_30[6],local_30[7],uVar16);
              puVar8 = local_60;
              uVar14 = (uint)uVar25;
              local_6c = piVar11[1];
              iVar5 = *piVar11;
              local_70 = 0;
              bVar19 = (byte)((ulonglong)uVar25 >> 0x18) >> 1;
              auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
              auVar20 = pshuflw(auVar20,auVar20,0);
              goto LAB_1002a647;
            }
          }
          auVar21[0] = -(*pcVar1 == -1);
          auVar21[1] = -(pcVar1[1] == -1);
          auVar21[2] = -(pcVar1[2] == -1);
          auVar21[3] = -(pcVar1[3] == -1);
          auVar21[4] = -(pcVar1[4] == -1);
          auVar21[5] = -(pcVar1[5] == -1);
          auVar21[6] = -(pcVar1[6] == -1);
          auVar21[7] = -(pcVar1[7] == -1);
          auVar21[8] = -(pcVar1[8] == -1);
          auVar21[9] = -(pcVar1[9] == -1);
          auVar21[10] = -(pcVar1[10] == -1);
          auVar21[0xb] = -(pcVar1[0xb] == -1);
          auVar21[0xc] = -(pcVar1[0xc] == -1);
          auVar21[0xd] = -(pcVar1[0xd] == -1);
          auVar21[0xe] = -(pcVar1[0xe] == -1);
          auVar21[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x2f,0) & 1) != 0) || (SUB161(auVar21 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
          uVar14 = uVar14 + 0x10 + local_90;
          local_90 = local_90 + 0x10;
        }
      }
LAB_1002a512:
      puVar9 = &local_68;
LAB_1002a516:
      uVar14 = *(uint *)(puVar9 + 1);
      local_68 = *puVar9;
      param_6 = param_6 + 0x18;
      uVar25 = local_68;
      local_60 = (uint *)uVar14;
      if (param_6 == iVar13) {
        iVar13 = (int)local_68;
        local_68._4_4_ = (LPVOID)((ulonglong)local_68 >> 0x20);
        pvVar4 = local_68._4_4_;
        local_68 = uVar25;
        if (uVar14 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          if ((int)local_68 == 0) {
            return;
          }
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pvVar4);
          return;
        }
        piVar11 = FUN_10107380(0,0x14);
        if (piVar11 != (int *)0x0) {
          *piVar11 = iVar13;
          piVar11[1] = (int)pvVar4;
          piVar11[2] = uVar14;
          piVar11[3] = 0;
          piVar11[4] = 0;
          *param_1 = (int)piVar11;
          param_1[1] = (int)piVar11;
          param_1[2] = 1;
          return;
        }
        FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
    } while( true );
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002a4cb;
    local_24 = param_4 >> 1;
  }
  else {
    piVar11 = FUN_100be180();
    if (piVar11 == (int *)0x0) goto LAB_1002a9ca;
    if (*piVar11 == 0) {
      piVar11 = FUN_100c0800();
    }
    else {
      piVar11 = (int *)(*piVar11 + 0x8c);
    }
    local_24 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar11 + 0x104)) {
      local_24 = *(uint *)(*piVar11 + 0x104);
    }
  }
  local_58 = param_7 - uVar14;
  local_28 = uVar14;
  if (param_7 < uVar14) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar15 = (code *)invalidInstructionException();
    (*pcVar15)();
  }
  local_60 = &local_24;
  local_4c = &local_28;
  local_5c = param_6 + uVar14 * 0x18;
  local_68 = CONCAT44(local_4c,&local_2c);
  local_54 = param_8;
  local_50 = param_9;
  local_44 = param_6;
  local_3c = param_8;
  local_38 = param_9;
  local_48 = local_60;
  local_40 = uVar14;
  piVar11 = FUN_100be180();
  if (piVar11 == (int *)0x0) {
LAB_1002a9ca:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar15 = (code *)invalidInstructionException();
    (*pcVar15)();
  }
  iVar13 = *piVar11;
  if (iVar13 == 0) {
    piVar11 = FUN_100c0800();
    iVar17 = *piVar11;
    piVar11 = FUN_100be180();
    if (piVar11 == (int *)0x0) goto LAB_1002a9ca;
    iVar13 = *piVar11;
    if (iVar13 == 0) {
      FUN_1012f6d0(&local_88,(uint *)(iVar17 + 0x40),&local_68);
      goto LAB_1002a8d0;
    }
    if (*(int *)(iVar13 + 0x8c) != iVar17) {
      FUN_10131cb0(&local_88,(uint *)(iVar17 + 0x40),iVar13,&local_68);
      goto LAB_1002a8d0;
    }
  }
  FUN_10031ab0((undefined4 *)&local_88,&local_68,iVar13,0);
LAB_1002a8d0:
  if (local_88._4_4_ == 0) {
    *param_1 = local_7c;
    param_1[1] = local_78;
    param_1[2] = local_74;
    piVar11 = (int *)local_88;
    pcVar15 = HeapFree_exref;
    while (piVar11 != (int *)0x0) {
      piVar3 = (int *)piVar11[3];
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
      }
      if (*piVar11 != 0) {
        pvVar4 = (LPVOID)piVar11[1];
        pvVar12 = GetProcessHeap();
        pcVar15 = HeapFree_exref;
        HeapFree(pvVar12,0,pvVar4);
      }
      pvVar12 = GetProcessHeap();
      (*pcVar15)(pvVar12,0,piVar11);
      piVar11 = piVar3;
    }
  }
  else {
    if (local_7c != 0) {
      local_80 = local_80 + local_74;
      *(int *)(local_88._4_4_ + 0xc) = local_7c;
      *(int *)(local_7c + 0x10) = local_88._4_4_;
      local_88._4_4_ = local_78;
    }
    *param_1 = (int)(int *)local_88;
    param_1[1] = local_88._4_4_;
    param_1[2] = local_80;
  }
  return;
LAB_1002a647:
  uVar14 = local_6c & uVar14;
  pcVar1 = (char *)(iVar5 + uVar14);
  auVar24[0] = -(*pcVar1 == auVar20[0]);
  auVar24[1] = -(pcVar1[1] == auVar20[1]);
  auVar24[2] = -(pcVar1[2] == auVar20[2]);
  auVar24[3] = -(pcVar1[3] == auVar20[3]);
  auVar24[4] = -(pcVar1[4] == auVar20[4]);
  auVar24[5] = -(pcVar1[5] == auVar20[5]);
  auVar24[6] = -(pcVar1[6] == auVar20[6]);
  auVar24[7] = -(pcVar1[7] == auVar20[7]);
  auVar24[8] = -(pcVar1[8] == auVar20[0]);
  auVar24[9] = -(pcVar1[9] == auVar20[1]);
  auVar24[10] = -(pcVar1[10] == auVar20[2]);
  auVar24[0xb] = -(pcVar1[0xb] == auVar20[3]);
  auVar24[0xc] = -(pcVar1[0xc] == auVar20[4]);
  auVar24[0xd] = -(pcVar1[0xd] == auVar20[5]);
  auVar24[0xe] = -(pcVar1[0xe] == auVar20[6]);
  auVar24[0xf] = -(pcVar1[0xf] == auVar20[7]);
  uVar10 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar24[0xf] >> 7) << 0xf);
  while ((short)uVar10 != 0) {
    iVar6 = 0;
    for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10;
    if (uVar16 == *(uint *)(iVar5 + (iVar6 + uVar14 & local_6c) * -4 + -4)) {
      local_80 = (uint)local_60;
      puVar9 = &local_88;
      local_88 = local_68;
      uVar25 = local_88;
      if (uVar2 != 0) {
        local_88._0_4_ = (int *)local_68;
        bVar18 = local_60 == (uint *)(int *)local_88;
        local_88 = uVar25;
        if (bVar18) {
          FUN_10135e90((uint *)&local_88);
        }
        *(undefined4 *)(local_88._4_4_ + (int)puVar8 * 0xc) = local_34;
        *(uint *)(local_88._4_4_ + 4 + (int)puVar8 * 0xc) = uVar2;
        *(uint *)(local_88._4_4_ + 8 + (int)puVar8 * 0xc) = uVar16;
        puVar9 = &local_88;
        local_80 = (int)puVar8 + 1;
        iVar17 = DAT_10163248;
      }
      goto LAB_1002a516;
    }
  }
  auVar22[0] = -(*pcVar1 == -1);
  auVar22[1] = -(pcVar1[1] == -1);
  auVar22[2] = -(pcVar1[2] == -1);
  auVar22[3] = -(pcVar1[3] == -1);
  auVar22[4] = -(pcVar1[4] == -1);
  auVar22[5] = -(pcVar1[5] == -1);
  auVar22[6] = -(pcVar1[6] == -1);
  auVar22[7] = -(pcVar1[7] == -1);
  auVar22[8] = -(pcVar1[8] == -1);
  auVar22[9] = -(pcVar1[9] == -1);
  auVar22[10] = -(pcVar1[10] == -1);
  auVar22[0xb] = -(pcVar1[0xb] == -1);
  auVar22[0xc] = -(pcVar1[0xc] == -1);
  auVar22[0xd] = -(pcVar1[0xd] == -1);
  auVar22[0xe] = -(pcVar1[0xe] == -1);
  auVar22[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') goto LAB_1002a512;
  uVar14 = uVar14 + 0x10 + local_70;
  local_70 = local_70 + 0x10;
  goto LAB_1002a647;
}
