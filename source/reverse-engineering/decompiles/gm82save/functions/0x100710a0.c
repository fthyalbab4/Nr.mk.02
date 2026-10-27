// rea decompile_all
// name: FUN_100710a0
// address: 0x100710a0
// body: available
// range: 0x100710a0-0x10071233 inclusive
// range: 0x10071240-0x1007127b inclusive
// range: 0x10071280-0x10071322 inclusive
// range: 0x10071330-0x10071465 inclusive
// range: 0x10071470-0x10071534 inclusive
// range: 0x10071540-0x100719d9 inclusive
// range: 0x100719e0-0x10071c87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100710a0(byte *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int *_Size;
  SIZE_T _Size_00;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined6 uVar6;
  undefined4 uVar7;
  undefined7 uVar8;
  byte *lpMem;
  undefined4 *puVar9;
  bool bVar10;
  LPVOID pvVar11;
  undefined4 *puVar12;
  HANDLE pvVar13;
  int iVar14;
  undefined4 *puVar15;
  byte bVar16;
  uint extraout_EDX;
  byte *pbVar17;
  int iVar18;
  uint extraout_EDX_00;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte local_bc;
  undefined2 uStack_bb;
  int iStack_b9;
  undefined1 uStack_b5;
  undefined1 local_b4;
  undefined2 uStack_b3;
  uint uStack_b1;
  undefined1 uStack_ad;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  undefined8 local_88;
  uint local_80;
  uint *local_78;
  undefined4 *local_74;
  byte *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_58;
  undefined2 uStack_57;
  int iStack_55;
  uint uStack_51;
  uint uStack_4d;
  undefined1 uStack_49;
  undefined4 local_48;
  byte local_40;
  undefined2 uStack_3f;
  int iStack_3d;
  undefined4 uStack_39;
  uint uStack_35;
  undefined4 uStack_31;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_1c;
  byte *local_18;

  FUN_10111020(param_2,&DAT_101402ca,8);
  local_70 = (byte *)param_2[1];
  _Size = (int *)param_2[2];
  FUN_101126e0((char *)&local_bc,local_70,_Size);
  pbVar17 = _DAT_0077f3f8;
  if (local_bc == 0xff) {
    puVar12 = (undefined4 *)&DAT_00000004;
    if (_DAT_0077f3f4 != (undefined4 *)0x0) {
      puVar12 = _DAT_0077f3f4;
    }
    local_78 = param_2;
    if ((int)_DAT_0077f3f8 < 0) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (_DAT_0077f3f8 == (byte *)0x0) {
      local_90 = (byte *)0x1;
    }
    else {
      local_90 = FUN_10107380(0,(SIZE_T)_DAT_0077f3f8);
      if (local_90 == (byte *)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    local_94 = pbVar17;
    local_8c = (byte *)0x0;
    local_74 = puVar12;
    puVar12 = FUN_10093010();
    if (puVar12 == (undefined4 *)0x0) {
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_70 = (byte *)*puVar12;
    uStack_6c = puVar12[1];
    uStack_68 = puVar12[2];
    uStack_64 = puVar12[3];
    puVar12[1] = puVar12[1] + (uint)((byte *)0xfffffffe < local_70);
    *puVar12 = local_70 + 1;
    FUN_10003280((undefined8 *)&local_bc,0x10,(uint)pbVar17);
    local_18 = (byte *)((int)pbVar17 * 4);
    local_98 = pbVar17;
    uStack_35 = uStack_b1;
    local_40 = local_bc;
    uStack_3f = uStack_bb;
    iStack_3d = iStack_b9;
    uStack_39 = CONCAT31(CONCAT21(uStack_b3,local_b4),uStack_b5);
    uStack_31 = CONCAT31((int3)local_70,uStack_ad);
    uStack_2d._1_3_ = (undefined3)uStack_6c;
    uStack_2d = CONCAT31(uStack_2d._1_3_,(char)((uint)local_70 >> 0x18));
    uStack_29 = (undefined1)((uint)uStack_6c >> 0x18);
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
    if (pbVar17 != (byte *)0x0) {
      iVar14 = (int)pbVar17 * 4;
      puVar12 = local_74;
      do {
        pbVar17 = (byte *)*puVar12;
        if (pbVar17 != (byte *)0x0) {
          local_70 = pbVar17;
          FUN_10049460(&local_bc,*(ushort **)(pbVar17 + 4));
          if (local_bc == 0xff) {
            local_80 = CONCAT13(uStack_ad,uStack_b1._1_3_);
            iStack_55 = CONCAT13(uStack_b5,iStack_b9._1_3_);
            local_bc = (byte)&local_88;
            uStack_bb = (undefined2)((uint)&local_88 >> 8);
            iStack_b9 = CONCAT31(0x922c0,(char)((uint)&local_88 >> 0x18));
            uStack_b5 = 0x10;
            uStack_51 = (uint)(CONCAT17((undefined1)uStack_b1,
                                        CONCAT25(uStack_b3,CONCAT14(local_b4,iStack_55))) >> 0x20);
            local_88 = CONCAT44(uStack_51,iStack_55);
            uStack_4d = local_80;
            FUN_10092720((undefined8 *)&local_58,(uint *)&local_94,(uint)&local_bc);
            uVar23 = local_80;
            pbVar17 = local_88._4_4_;
            if (local_58 == 0xff) {
              uVar24 = FUN_10072df0(local_88._4_4_,local_80);
              uStack_b5 = (undefined1)((ulonglong)local_88 >> 0x20);
              local_b4 = uStack_b5;
              if ((uVar24 & 1) == 0) {
                if (*(int *)(local_70 + 4) == 0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = *(uint *)(*(int *)(local_70 + 4) + -4);
                }
                local_bc = uVar23 != uVar22;
                uStack_bb = 0;
                iStack_b9 = (int)local_88 << 8;
                uStack_b5 = (undefined1)((ulonglong)local_88 >> 0x18);
                uStack_b3 = (undefined2)((ulonglong)local_88 >> 0x28);
                uStack_b1._1_3_ = (undefined3)uVar23;
                uStack_b1 = CONCAT31(uStack_b1._1_3_,(char)((ulonglong)local_88 >> 0x38));
                uStack_ad = (undefined1)(uVar23 >> 0x18);
                bVar10 = FUN_1004bc40((undefined4 *)&local_40,&local_bc);
                if (!bVar10) goto joined_r0x1007125d;
                pbVar17 = &local_bc;
                FUN_10049460(pbVar17,*(ushort **)(local_70 + 4));
                if (local_bc == 0xff) {
                  uStack_4d = CONCAT13(uStack_ad,uStack_b1._1_3_);
                  uVar1 = CONCAT17((undefined1)uStack_b1,
                                   CONCAT25(uStack_b3,
                                            CONCAT14(local_b4,CONCAT13(uStack_b5,iStack_b9._1_3_))))
                  ;
                  uStack_b1 = uStack_4d;
                  bVar16 = 0xe;
                  iStack_55 = CONCAT13(uStack_b5,iStack_b9._1_3_);
                  uStack_51 = (uint)((ulonglong)uVar1 >> 0x20);
                  uStack_b5 = local_b4;
                  local_b4 = (undefined1)uStack_b3;
                  uStack_b3 = (undefined2)((ulonglong)uVar1 >> 0x30);
                  iStack_b9 = iStack_55;
                }
                else {
                  uVar8 = CONCAT43(uStack_b1,CONCAT21(uStack_b3,local_b4));
                  uStack_4d = (uint)(CONCAT17(uStack_ad,uVar8) >> 0x20);
                  local_58 = (byte)uStack_bb;
                  uStack_57 = (undefined2)(CONCAT42(iStack_b9,uStack_bb) >> 8);
                  iStack_55 = (int)(CONCAT16(uStack_b5,CONCAT42(iStack_b9,uStack_bb)) >> 0x18);
                  uStack_51._1_3_ = (undefined3)((uint7)uVar8 >> 8);
                  uStack_51 = CONCAT31(uStack_51._1_3_,local_b4);
                  *(undefined4 *)(param_1 + 0x20) = local_9c;
                  *(undefined8 *)(param_1 + 0x18) = local_a4;
                  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
                  pbVar17 = &local_58;
                  bVar16 = local_bc;
                }
                uVar1 = *(undefined8 *)pbVar17;
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar17 + 7);
                *(undefined8 *)(param_1 + 1) = uVar1;
                *param_1 = bVar16;
              }
              else {
                uStack_b1 = local_80;
                local_b4 = (undefined1)((ulonglong)local_88 >> 0x28);
                uStack_b3 = (undefined2)((ulonglong)local_88 >> 0x30);
                *param_1 = 0x11;
                *(ulonglong *)(param_1 + 1) =
                     CONCAT17(uStack_b5,CONCAT43((int)local_88,CONCAT21(uStack_bb,local_bc)));
                *(ulonglong *)(param_1 + 8) = CONCAT44(local_80,(int)((ulonglong)local_88 >> 0x20));
                *(uint *)(param_1 + 0x10) = (uint)(uVar24 >> 0x20) & 0xff;
                iStack_b9 = (int)local_88;
              }
            }
            else {
              *param_1 = 0;
              *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_51,iStack_55._1_3_);
              *(uint *)(param_1 + 4) = CONCAT13((undefined1)iStack_55,CONCAT21(uStack_57,local_58));
              if ((int)local_88 != 0) {
                pvVar13 = GetProcessHeap();
                HeapFree(pvVar13,0,pbVar17);
              }
            }
          }
          else {
            uVar8 = CONCAT43(uStack_b1,CONCAT21(uStack_b3,local_b4));
            uVar6 = CONCAT42(iStack_b9,uStack_bb);
            uStack_4d = (uint)(CONCAT17(uStack_ad,uVar8) >> 0x20);
            local_58 = (byte)uStack_bb;
            uStack_57 = (undefined2)((uint6)uVar6 >> 8);
            iStack_55 = (int)(CONCAT16(uStack_b5,uVar6) >> 0x18);
            uStack_51._1_3_ = (undefined3)((uint7)uVar8 >> 8);
            uStack_51 = CONCAT31(uStack_51._1_3_,local_b4);
            *(undefined8 *)(param_1 + 0x18) = local_a4;
            *(undefined4 *)(param_1 + 0x20) = local_9c;
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
            *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_4d,uStack_51);
            *(ulonglong *)(param_1 + 1) = CONCAT17(local_b4,CONCAT43(iStack_55,(int3)uVar6));
            *param_1 = local_bc;
          }
          iVar14 = CONCAT13((undefined1)uStack_39,iStack_3d._1_3_);
          if (iVar14 != 0) {
            iVar18 = CONCAT13((undefined1)uStack_31,uStack_35._1_3_);
            if (iVar18 != 0) {
              pauVar19 = (undefined1 (*) [16])
                         CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40));
              auVar2 = *pauVar19;
              pauVar20 = pauVar19 + 1;
              uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
              do {
                if ((short)uVar23 == 0) {
                  do {
                    auVar2 = *pauVar20;
                    pauVar19 = pauVar19 + -0x10;
                    pauVar20 = pauVar20 + 1;
                    uVar23 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar23 == 0);
                }
                iVar4 = 0;
                for (uVar22 = uVar23; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
                  iVar4 = iVar4 + 1;
                }
                if (*(int *)(pauVar19[-1 - iVar4] + 4) != 0) {
                  local_70 = *(byte **)(pauVar19[-1 - iVar4] + 8);
                  pvVar13 = GetProcessHeap();
                  HeapFree(pvVar13,0,local_70);
                }
                uVar23 = uVar23 - 1 & uVar23;
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
            }
            if (iVar14 * 0x11 != -0x21) {
              pvVar11 = *(LPVOID *)
                         (CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40)) +
                          iVar14 * -0x10 + -0x14);
              pvVar13 = GetProcessHeap();
              HeapFree(pvVar13,0,pvVar11);
            }
          }
          pbVar17 = local_90;
          if (local_94 == (byte *)0x0) {
            return;
          }
          goto LAB_10071a79;
        }
        if (local_94 == local_8c) {
          FUN_101359e0((uint *)&local_94,(uint)local_8c,1,(LPVOID)0x1,1);
        }
        local_90[(int)local_8c] = 10;
        local_8c = local_8c + 1;
joined_r0x1007125d:
        iVar14 = iVar14 + -4;
        puVar12 = puVar12 + 1;
      } while (iVar14 != 0);
    }
    puVar21 = local_78;
    FUN_10111020(local_78,&DAT_1013f4f5,9);
    lpMem = local_90;
    pbVar17 = local_94;
    local_70 = (byte *)puVar21[1];
    _Size_00 = puVar21[2];
    FUN_1011d090((char *)&local_bc,(int)local_70,_Size_00,(int *)local_90,(int *)local_8c);
    if (pbVar17 != (byte *)0x0) {
      pvVar13 = GetProcessHeap();
      HeapFree(pvVar13,0,lpMem);
    }
    pbVar17 = local_98;
    if (local_bc == 0xff) {
      iVar14 = FUN_10110f10(local_70,_Size_00);
      if (iVar14 != 0) {
        FUN_10110e70((int)local_78,extraout_EDX);
      }
      iVar14 = CONCAT13((undefined1)uStack_39,iStack_3d._1_3_);
      puVar21 = local_78;
      puVar12 = local_74;
      if (iVar14 != 0) {
        pbVar17 = (byte *)CONCAT13((undefined1)uStack_31,uStack_35._1_3_);
        local_1c = iVar14;
        if (pbVar17 != (byte *)0x0) {
          pauVar19 = (undefined1 (*) [16])
                     CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40));
          auVar2 = *pauVar19;
          pauVar20 = pauVar19 + 1;
          uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar23 == 0) {
              do {
                auVar2 = *pauVar20;
                pauVar19 = pauVar19 + -0x10;
                pauVar20 = pauVar20 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar23 == 0);
            }
            iVar14 = 0;
            for (uVar22 = uVar23; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
              iVar14 = iVar14 + 1;
            }
            if (*(int *)(pauVar19[-1 - iVar14] + 4) != 0) {
              pvVar11 = *(LPVOID *)(pauVar19[-1 - iVar14] + 8);
              local_70 = pbVar17;
              pvVar13 = GetProcessHeap();
              HeapFree(pvVar13,0,pvVar11);
              pbVar17 = local_70;
            }
            uVar23 = uVar23 - 1 & uVar23;
            pbVar17 = pbVar17 + -1;
          } while (pbVar17 != (byte *)0x0);
        }
        pbVar17 = local_98;
        puVar21 = local_78;
        puVar12 = local_74;
        if (local_1c * 0x11 != -0x21) {
          pvVar11 = *(LPVOID *)
                     (CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40)) +
                      local_1c * -0x10 + -0x14);
          pvVar13 = GetProcessHeap();
          HeapFree(pvVar13,0,pvVar11);
          puVar21 = local_78;
          puVar12 = local_74;
        }
      }
      while (puVar9 = local_74, puVar15 = local_74, pbVar17 != (byte *)0x0) {
        pbVar17 = (byte *)*puVar15;
        local_74 = puVar15;
        if (pbVar17 != (byte *)0x0) {
          FUN_10049460(&local_bc,*(ushort **)(pbVar17 + 4));
          if (local_bc != 0xff) {
            param_1[3] = (byte)iStack_b9;
            *(undefined2 *)(param_1 + 1) = uStack_bb;
            *(undefined8 *)(param_1 + 0x18) = local_a4;
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
            *(undefined4 *)(param_1 + 0x20) = local_9c;
            *param_1 = local_bc;
            *(uint *)(param_1 + 4) = CONCAT13(uStack_b5,iStack_b9._1_3_);
            *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_b1,CONCAT21(uStack_b3,local_b4));
            *(uint *)(param_1 + 0xc) = CONCAT13(uStack_ad,uStack_b1._1_3_);
            return;
          }
          iVar14 = CONCAT13(uStack_b5,iStack_b9._1_3_);
          local_98 = (byte *)CONCAT13((undefined1)uStack_b1,CONCAT21(uStack_b3,local_b4));
          FUN_10111020(puVar21,local_98,CONCAT13(uStack_ad,uStack_b1._1_3_));
          FUN_10110c70(puVar21,"txt",3);
          FUN_100759c0(&local_bc,(void *)puVar21[1],puVar21[2]);
          if (local_bc == 0xff) {
            iStack_3d = CONCAT13(uStack_b5,iStack_b9._1_3_);
            uStack_35 = CONCAT13(uStack_ad,uStack_b1._1_3_);
            uStack_2d = uStack_a8;
            uStack_31 = local_ac;
            uStack_39 = (undefined4)
                        (CONCAT17((undefined1)uStack_b1,
                                  CONCAT25(uStack_b3,CONCAT14(local_b4,iStack_3d))) >> 0x20);
            local_58 = (byte)((uint)iStack_b9 >> 8);
            uStack_57 = (undefined2)((uint)iStack_b9 >> 0x10);
            iStack_55 = (int)(CONCAT44(uStack_39,iStack_3d) >> 0x18);
            uStack_51 = uStack_b1;
            uStack_4d = (uint)(CONCAT44(local_ac,uStack_35) >> 0x18);
            uStack_49 = (undefined1)((uint)local_ac >> 0x18);
            local_48 = uStack_a8;
            local_70 = pbVar17;
            FUN_10049460(&local_bc,*(ushort **)(pbVar17 + 0xc));
            if (local_bc == 0xff) {
              local_80 = CONCAT13(uStack_ad,uStack_b1._1_3_);
              iStack_3d = CONCAT13(uStack_b5,iStack_b9._1_3_);
              local_bc = (byte)&local_88;
              uStack_bb = (undefined2)((uint)&local_88 >> 8);
              iStack_b9 = CONCAT31(0x922c0,(char)((uint)&local_88 >> 0x18));
              uStack_b5 = 0x10;
              uStack_39 = (undefined4)
                          (CONCAT17((undefined1)uStack_b1,
                                    CONCAT25(uStack_b3,CONCAT14(local_b4,iStack_3d))) >> 0x20);
              local_88 = CONCAT44(uStack_39,iStack_3d);
              uStack_35 = local_80;
              FUN_10092aa0((undefined8 *)&local_94,(int *)&local_58,(ushort *)&DAT_10142580,
                           (uint)&local_bc);
              pvVar11 = local_88._4_4_;
              if ((char)local_94 == -1) {
                if ((int)local_88 != 0) {
                  pvVar13 = GetProcessHeap();
                  HeapFree(pvVar13,0,pvVar11);
                }
                pbVar17 = local_70 + 0x10;
                local_bc = (byte)pbVar17;
                uStack_bb = (undefined2)((uint)pbVar17 >> 8);
                iStack_b9 = CONCAT31(0x96fc0,(char)((uint)pbVar17 >> 0x18));
                uStack_b5 = 0x10;
                FUN_10092aa0((undefined8 *)&local_40,(int *)&local_58,(ushort *)&DAT_10142133,
                             (uint)&local_bc);
                if (local_40 == 0xff) {
                  FUN_10053090((undefined8 *)&local_bc,(int)&local_58);
                  if (local_bc != 0xff) {
                    if (local_bc != 0xff) {
                      *param_1 = 0;
                      *(uint *)(param_1 + 4) =
                           CONCAT13((byte)iStack_b9,CONCAT21(uStack_bb,local_bc));
                      *(uint *)(param_1 + 8) = CONCAT13(uStack_b5,iStack_b9._1_3_);
                      goto LAB_10071c4a;
                    }
                  }
                  FUN_10005aa0((int *)&local_58);
                  puVar21 = local_78;
                  FUN_10110c70(local_78,"gml",3);
                  pbVar17 = (byte *)puVar21[1];
                  uVar23 = puVar21[2];
                  FUN_100758a0((char *)&local_bc,pbVar17,uVar23,*(ushort **)(local_70 + 8));
                  if (local_bc == 0xff) {
                    iVar18 = FUN_10110f10(pbVar17,uVar23);
                    puVar21 = local_78;
                    if (iVar18 != 0) {
                      FUN_10110e70((int)local_78,extraout_EDX_00);
                    }
                    if (iVar14 != 0) {
                      pvVar13 = GetProcessHeap();
                      HeapFree(pvVar13,0,local_98);
                    }
                    goto LAB_10071619;
                  }
                  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
                  *(undefined4 *)(param_1 + 0x20) = local_9c;
                  *(undefined8 *)(param_1 + 0x18) = local_a4;
                  *(ulonglong *)param_1 =
                       CONCAT17(uStack_b5,CONCAT43(iStack_b9,CONCAT21(uStack_bb,local_bc)));
                  *(ulonglong *)(param_1 + 8) =
                       CONCAT17(uStack_ad,CONCAT43(uStack_b1,CONCAT21(uStack_b3,local_b4)));
                  goto LAB_10071c53;
                }
                *param_1 = 0;
                *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_39,iStack_3d._1_3_);
                *(uint *)(param_1 + 4) =
                     CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40));
              }
              else {
                *param_1 = 0;
                *(byte **)(param_1 + 8) = local_90;
                *(byte **)(param_1 + 4) = local_94;
                if ((int)local_88 != 0) {
                  pvVar13 = GetProcessHeap();
                  HeapFree(pvVar13,0,pvVar11);
                }
              }
            }
            else {
              uVar8 = CONCAT43(uStack_b1,CONCAT21(uStack_b3,local_b4));
              uVar6 = CONCAT42(iStack_b9,uStack_bb);
              uStack_35 = (uint)(CONCAT17(uStack_ad,uVar8) >> 0x20);
              local_40 = (byte)uStack_bb;
              uStack_3f = (undefined2)((uint6)uVar6 >> 8);
              iStack_3d = (int)(CONCAT16(uStack_b5,uVar6) >> 0x18);
              uStack_39._1_3_ = (undefined3)((uint7)uVar8 >> 8);
              uStack_39 = CONCAT31(uStack_39._1_3_,local_b4);
              *(undefined8 *)(param_1 + 0x18) = local_a4;
              *(undefined4 *)(param_1 + 0x20) = local_9c;
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
              *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_35,uStack_39);
              *(ulonglong *)(param_1 + 1) = CONCAT17(local_b4,CONCAT43(iStack_3d,(int3)uVar6));
              *param_1 = local_bc;
            }
LAB_10071c4a:
            FUN_10005aa0((int *)&local_58);
          }
          else {
            uVar6 = CONCAT42(iStack_b9,uStack_bb);
            uStack_2d = uStack_a8;
            uStack_39._1_3_ = (undefined3)CONCAT42(uStack_b1,uStack_b3);
            uStack_35 = (uint)(CONCAT16(uStack_ad,CONCAT42(uStack_b1,uStack_b3)) >> 0x18);
            uStack_31 = local_ac;
            local_40 = (byte)uStack_bb;
            uStack_3f = (undefined2)((uint6)uVar6 >> 8);
            iStack_3d = (int)(CONCAT16(uStack_b5,uVar6) >> 0x18);
            uStack_39 = CONCAT31(uStack_39._1_3_,local_b4);
            *(undefined8 *)(param_1 + 0x18) = local_a4;
            *(undefined4 *)(param_1 + 0x20) = local_9c;
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a8,local_ac);
            *(ulonglong *)(param_1 + 1) = CONCAT17(local_b4,CONCAT43(iStack_3d,(int3)uVar6));
            *(ulonglong *)(param_1 + 9) =
                 CONCAT17((undefined1)local_ac,CONCAT43(uStack_35,uStack_39._1_3_));
            *param_1 = local_bc;
          }
LAB_10071c53:
          if (iVar14 == 0) {
            return;
          }
          pvVar13 = GetProcessHeap();
          pbVar17 = local_98;
          goto LAB_10071a80;
        }
LAB_10071619:
        puVar15 = local_74 + 1;
        local_18 = local_18 + -4;
        puVar12 = local_74;
        local_74 = puVar9;
        pbVar17 = local_18;
      }
      local_74 = puVar12;
      FUN_1011b820((int)puVar21);
      *param_1 = 0xff;
    }
    else {
      uVar5 = CONCAT13((byte)iStack_b9,CONCAT21(uStack_bb,local_bc));
      uVar7 = CONCAT13(uStack_b5,iStack_b9._1_3_);
      if (_Size_00 == 0) {
        pvVar11 = (LPVOID)0x1;
      }
      else {
        pvVar11 = FUN_10107380(0,_Size_00);
        if (pvVar11 == (LPVOID)0x0) goto LAB_10071c6e;
        memcpy(pvVar11,local_70,_Size_00);
      }
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = uVar5;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(SIZE_T *)(param_1 + 0xc) = _Size_00;
      *(LPVOID *)(param_1 + 0x10) = pvVar11;
      *(SIZE_T *)(param_1 + 0x14) = _Size_00;
      param_1[0x18] = 0;
      iVar14 = CONCAT13((undefined1)uStack_39,iStack_3d._1_3_);
      if (iVar14 != 0) {
        iVar18 = CONCAT13((undefined1)uStack_31,uStack_35._1_3_);
        if (iVar18 != 0) {
          pauVar19 = (undefined1 (*) [16])
                     CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40));
          auVar2 = *pauVar19;
          pauVar20 = pauVar19 + 1;
          uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar23 == 0) {
              do {
                auVar2 = *pauVar20;
                pauVar19 = pauVar19 + -0x10;
                pauVar20 = pauVar20 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar23 == 0);
            }
            iVar4 = 0;
            for (uVar22 = uVar23; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
              iVar4 = iVar4 + 1;
            }
            if (*(int *)(pauVar19[-1 - iVar4] + 4) != 0) {
              local_70 = *(byte **)(pauVar19[-1 - iVar4] + 8);
              pvVar13 = GetProcessHeap();
              HeapFree(pvVar13,0,local_70);
            }
            uVar23 = uVar23 - 1 & uVar23;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        if (iVar14 * 0x11 != -0x21) {
          pbVar17 = *(byte **)(CONCAT13((undefined1)iStack_3d,CONCAT21(uStack_3f,local_40)) +
                               iVar14 * -0x10 + -0x14);
LAB_10071a79:
          pvVar13 = GetProcessHeap();
LAB_10071a80:
          HeapFree(pvVar13,0,pbVar17);
        }
      }
    }
  }
  else {
    uVar5 = CONCAT13((byte)iStack_b9,CONCAT21(uStack_bb,local_bc));
    uVar7 = CONCAT13(uStack_b5,iStack_b9._1_3_);
    if (_Size == (int *)0x0) {
      pvVar11 = (LPVOID)0x1;
    }
    else {
      pvVar11 = FUN_10107380(0,(SIZE_T)_Size);
      if (pvVar11 == (LPVOID)0x0) {
LAB_10071c6e:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(pvVar11,local_70,(size_t)_Size);
    }
    *param_1 = 2;
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar7;
    *(int **)(param_1 + 0xc) = _Size;
    *(LPVOID *)(param_1 + 0x10) = pvVar11;
    *(int **)(param_1 + 0x14) = _Size;
    param_1[0x18] = 0;
  }
  return;
}
