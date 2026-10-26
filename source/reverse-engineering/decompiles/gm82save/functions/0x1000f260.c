// rea decompile_all
// name: FUN_1000f260
// address: 0x1000f260
// body: available
// range: 0x1000f260-0x1000f3e8 inclusive
// range: 0x1000f3f0-0x1000f493 inclusive
// range: 0x1000f4a0-0x1000f4c3 inclusive
// range: 0x1000f4d0-0x1000f64c inclusive
// range: 0x1000f650-0x1000f91b inclusive
// range: 0x1000f920-0x1000fe11 inclusive
// range: 0x1000fe20-0x1000ffe4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1000f260(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4,SIZE_T param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8,uint *param_9)

{
  undefined1 auVar1 [16];
  SIZE_T _Size;
  code *pcVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  bool bVar6;
  char cVar7;
  LPVOID pvVar8;
  uint *puVar9;
  HANDLE pvVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  BOOL BVar13;
  uint uVar14;
  DWORD DVar15;
  byte bVar16;
  uint extraout_EDX;
  void *pvVar17;
  int *piVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 uVar27;
  undefined1 local_fd;
  int local_fc;
  LARGE_INTEGER local_f8;
  int *local_f0;
  byte local_e8;
  undefined2 uStack_e7;
  int iStack_e5;
  undefined1 uStack_e1;
  undefined1 local_e0;
  undefined2 uStack_df;
  uint uStack_dd;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b0;
  uint local_a8;
  byte local_a0;
  undefined2 uStack_9f;
  int iStack_9d;
  uint uStack_99;
  uint uStack_95;
  undefined1 uStack_91;
  undefined1 **local_90;
  uint *local_8c;
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 local_78;
  void *pvStack_74;
  void *local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined3 uStack_60;
  uint uStack_58;
  int local_54;
  void *local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  int *local_3c;
  SIZE_T local_38;
  int *piStack_34;
  int iStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  local_2c = &LAB_100762b0;
  local_28 = &LAB_100732a0;
  local_3c = param_4;
  local_1c = param_6;
  local_fd = param_8;
  local_20 = param_3;
  local_18 = param_7;
  local_38 = param_5;
  local_24 = param_2;
  FUN_10111020(param_9,&DAT_1013f3df,5);
  pbVar21 = (byte *)param_9[1];
  piVar18 = (int *)param_9[2];
  FUN_101126e0((char *)&local_e8,pbVar21,piVar18);
  if (local_e8 != 0xff) {
    local_50 = (void *)CONCAT13((undefined1)iStack_e5,CONCAT21(uStack_e7,local_e8));
    uVar12 = CONCAT13(uStack_e1,iStack_e5._1_3_);
    if (piVar18 == (int *)0x0) {
      pvVar8 = (LPVOID)0x1;
    }
    else {
      pvVar8 = FUN_10107380(0,(SIZE_T)piVar18);
      if (pvVar8 == (LPVOID)0x0) {
LAB_1000ffac:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(pvVar8,pbVar21,(size_t)piVar18);
    }
    *param_1 = 2;
    *(void **)(param_1 + 4) = local_50;
    *(undefined4 *)(param_1 + 8) = uVar12;
    *(int **)(param_1 + 0xc) = piVar18;
    *(LPVOID *)(param_1 + 0x10) = pvVar8;
    *(int **)(param_1 + 0x14) = piVar18;
    param_1[0x18] = 0;
    return;
  }
  puVar9 = FUN_10093010();
  if (puVar9 == (uint *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_50 = (void *)*puVar9;
  uStack_4c = puVar9[1];
  uStack_48 = puVar9[2];
  uStack_44 = puVar9[3];
  puVar9[1] = puVar9[1] + (uint)((void *)0xfffffffe < local_50);
  *puVar9 = (int)local_50 + 1;
  FUN_10003280((undefined8 *)&local_e8,0x10,param_5);
  uVar5 = CONCAT43(uStack_dd,CONCAT21(uStack_df,local_e0));
  local_80 = CONCAT17(uStack_e1,CONCAT43(iStack_e5,CONCAT21(uStack_e7,local_e8)));
  local_78 = (undefined4)uVar5;
  pvStack_74 = (void *)(CONCAT17(uStack_d9,uVar5) >> 0x20);
  local_70 = local_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  if (param_5 == 0) {
    local_f8.s.LowPart = 0;
    local_f8.s.HighPart = 1;
    local_f0 = (int *)0x0;
    local_fc = 0;
  }
  else {
    local_fc = 0;
    local_f8.s.HighPart = (LONG)FUN_10107380(0,param_5);
    if ((int *)local_f8.s.HighPart == (int *)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_f8.s.LowPart = param_5;
    iVar22 = param_5 << 2;
    local_f0 = (int *)0x0;
    piVar18 = local_3c;
    do {
      FUN_10049460(&local_e8,(ushort *)*piVar18);
      if (local_e8 != 0xff) {
        uVar5 = CONCAT43(uStack_dd,CONCAT21(uStack_df,local_e0));
        uVar3 = CONCAT42(iStack_e5,uStack_e7);
        uStack_95 = (uint)(CONCAT17(uStack_d9,uVar5) >> 0x20);
        local_a0 = (byte)uStack_e7;
        uStack_9f = (undefined2)((uint6)uVar3 >> 8);
        iStack_9d = (int)(CONCAT16(uStack_e1,uVar3) >> 0x18);
        uStack_99._1_3_ = (undefined3)((uint7)uVar5 >> 8);
        uStack_99 = CONCAT31(uStack_99._1_3_,local_e0);
        *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_cf,uStack_d0);
        *(undefined4 *)(param_1 + 0x20) = local_c8;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_95,uStack_99);
        *(ulonglong *)(param_1 + 1) = CONCAT17(local_e0,CONCAT43(iStack_9d,(int3)uVar3));
        *param_1 = local_e8;
LAB_1000fdbf:
        uVar12 = local_f8.s.HighPart;
        if (local_f8.s.LowPart != 0) {
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,(LPVOID)uVar12);
        }
        goto LAB_1000fdda;
      }
      local_a8 = CONCAT13(uStack_d9,uStack_dd._1_3_);
      iStack_9d = CONCAT13(uStack_e1,iStack_e5._1_3_);
      local_e8 = (byte)&local_b0;
      uStack_e7 = (undefined2)((uint)&local_b0 >> 8);
      iStack_e5 = CONCAT31(0x922c0,(char)((uint)&local_b0 >> 0x18));
      uStack_e1 = 0x10;
      uStack_99 = (uint)(CONCAT17((undefined1)uStack_dd,
                                  CONCAT25(uStack_df,CONCAT14(local_e0,iStack_9d))) >> 0x20);
      local_b0 = CONCAT44(uStack_99,iStack_9d);
      uStack_95 = local_a8;
      FUN_10092720((undefined8 *)&local_a0,(uint *)&local_f8,(uint)&local_e8);
      uVar23 = local_a8;
      pbVar21 = local_b0._4_4_;
      if (local_a0 != 0xff) {
        *param_1 = 0;
        *(uint *)(param_1 + 8) = CONCAT13((undefined1)uStack_99,iStack_9d._1_3_);
        *(uint *)(param_1 + 4) = CONCAT13((undefined1)iStack_9d,CONCAT21(uStack_9f,local_a0));
        if ((int)local_b0 != 0) {
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pbVar21);
        }
        goto LAB_1000fdbf;
      }
      if (local_a8 != 0) {
        uVar24 = FUN_10072df0(local_b0._4_4_,local_a8);
        uStack_e1 = (undefined1)((ulonglong)local_b0 >> 0x20);
        local_e0 = uStack_e1;
        if ((uVar24 & 1) == 0) {
          if (*piVar18 == 0) {
            local_e8 = true;
          }
          else {
            local_e8 = uVar23 != *(uint *)(*piVar18 + -4);
          }
          uStack_e7 = 0;
          iStack_e5._1_3_ = (uint3)local_b0;
          iStack_e5 = (uint)iStack_e5._1_3_ << 8;
          uStack_e1 = (undefined1)((ulonglong)local_b0 >> 0x18);
          uStack_df = (undefined2)((ulonglong)local_b0 >> 0x28);
          uStack_dd._1_3_ = (undefined3)uVar23;
          uStack_dd = CONCAT31(uStack_dd._1_3_,(char)((ulonglong)local_b0 >> 0x38));
          uStack_d9 = (undefined1)(uVar23 >> 0x18);
          bVar6 = FUN_1004bc40((undefined4 *)&local_80,&local_e8);
          if (!bVar6) {
            local_fc = local_fc + 1;
            goto joined_r0x1000f3fa;
          }
          pbVar21 = &local_e8;
          FUN_10049460(pbVar21,(ushort *)*piVar18);
          if (local_e8 == 0xff) {
            uStack_95 = CONCAT13(uStack_d9,uStack_dd._1_3_);
            uVar27 = CONCAT17((undefined1)uStack_dd,
                              CONCAT25(uStack_df,
                                       CONCAT14(local_e0,CONCAT13(uStack_e1,iStack_e5._1_3_))));
            uStack_dd = uStack_95;
            bVar16 = 0xc;
            iStack_9d = CONCAT13(uStack_e1,iStack_e5._1_3_);
            uStack_99 = (uint)((ulonglong)uVar27 >> 0x20);
            uStack_e1 = local_e0;
            local_e0 = (undefined1)uStack_df;
            uStack_df = (undefined2)((ulonglong)uVar27 >> 0x30);
            iStack_e5 = iStack_9d;
          }
          else {
            uVar5 = CONCAT43(uStack_dd,CONCAT21(uStack_df,local_e0));
            pbVar21 = &local_a0;
            uStack_95 = (uint)(CONCAT17(uStack_d9,uVar5) >> 0x20);
            local_a0 = (byte)uStack_e7;
            uStack_9f = (undefined2)(CONCAT42(iStack_e5,uStack_e7) >> 8);
            iStack_9d = (int)(CONCAT16(uStack_e1,CONCAT42(iStack_e5,uStack_e7)) >> 0x18);
            uStack_99._1_3_ = (undefined3)((uint7)uVar5 >> 8);
            uStack_99 = CONCAT31(uStack_99._1_3_,local_e0);
            *(undefined4 *)(param_1 + 0x20) = local_c8;
            *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_cf,uStack_d0);
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
            bVar16 = local_e8;
          }
          uVar27 = *(undefined8 *)pbVar21;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar21 + 7);
          *(undefined8 *)(param_1 + 1) = uVar27;
          *param_1 = bVar16;
        }
        else {
          uStack_dd = local_a8;
          local_e0 = (undefined1)((ulonglong)local_b0 >> 0x28);
          uStack_df = (undefined2)((ulonglong)local_b0 >> 0x30);
          *param_1 = 0xf;
          *(ulonglong *)(param_1 + 1) =
               CONCAT17(uStack_e1,CONCAT43((int)local_b0,CONCAT21(uStack_e7,local_e8)));
          *(ulonglong *)(param_1 + 8) = CONCAT44(local_a8,(int)((ulonglong)local_b0 >> 0x20));
          *(uint *)(param_1 + 0x10) = (uint)(uVar24 >> 0x20) & 0xff;
          iStack_e5 = (int)local_b0;
        }
        goto LAB_1000fdbf;
      }
      if ((int)local_b0 != 0) {
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,pbVar21);
      }
joined_r0x1000f3fa:
      iVar22 = iVar22 + -4;
      piVar18 = piVar18 + 1;
    } while (iVar22 != 0);
  }
  FUN_10111020(param_9,&DAT_1013f4f5,9);
  uVar4 = local_f8.s.HighPart;
  uVar12 = local_f8.s.LowPart;
  local_50 = (void *)param_9[1];
  _Size = param_9[2];
  FUN_1011d090((char *)&local_e8,(int)local_50,_Size,(int *)local_f8.s.HighPart,local_f0);
  if (uVar12 != 0) {
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,(LPVOID)uVar4);
  }
  if (local_e8 != 0xff) {
    uVar12 = CONCAT13((undefined1)iStack_e5,CONCAT21(uStack_e7,local_e8));
    uVar4 = CONCAT13(uStack_e1,iStack_e5._1_3_);
    if (_Size == 0) {
      pvVar8 = (LPVOID)0x1;
    }
    else {
      pvVar8 = FUN_10107380(0,_Size);
      if (pvVar8 == (LPVOID)0x0) goto LAB_1000ffac;
      memcpy(pvVar8,local_50,_Size);
    }
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = uVar12;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(SIZE_T *)(param_1 + 0xc) = _Size;
    *(LPVOID *)(param_1 + 0x10) = pvVar8;
    *(SIZE_T *)(param_1 + 0x14) = _Size;
    param_1[0x18] = 0;
LAB_1000fdda:
    if (local_80._4_4_ == (LPVOID)0x0) {
      return;
    }
    local_fc = (int)local_80._4_4_;
    if (pvStack_74 != (void *)0x0) {
      auVar1 = *(undefined1 (*) [16])local_80;
      pauVar20 = (undefined1 (*) [16])local_80 + 1;
      uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      pvVar17 = pvStack_74;
      pauVar19 = (undefined1 (*) [16])local_80;
      do {
        if ((short)uVar23 == 0) {
          do {
            auVar1 = *pauVar20;
            pauVar19 = pauVar19 + -0x10;
            pauVar20 = pauVar20 + 1;
            uVar23 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar23 == 0);
        }
        iVar22 = 0;
        for (uVar14 = uVar23; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          iVar22 = iVar22 + 1;
        }
        if (*(int *)(pauVar19[-1 - iVar22] + 4) != 0) {
          pvVar8 = *(LPVOID *)(pauVar19[-1 - iVar22] + 8);
          local_50 = pvVar17;
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
          pvVar17 = local_50;
        }
        uVar23 = uVar23 - 1 & uVar23;
        pvVar17 = (void *)((int)pvVar17 - 1);
      } while (pvVar17 != (void *)0x0);
    }
    if (local_fc * 0x11 == -0x21) {
      return;
    }
    pvVar8 = *(LPVOID *)((int)(undefined1 (*) [16])local_80 + local_fc * -0x10 + -0x14);
    pvVar10 = GetProcessHeap();
    HeapFree(pvVar10,0,pvVar8);
    return;
  }
  iVar22 = FUN_10110f10((byte *)param_9[1],param_9[2]);
  if (iVar22 != 0) {
    FUN_10110e70((int)param_9,extraout_EDX);
  }
  if (local_80._4_4_ != (LPVOID)0x0) {
    local_54 = (int)local_80._4_4_;
    if (pvStack_74 != (void *)0x0) {
      auVar1 = *(undefined1 (*) [16])local_80;
      pauVar20 = (undefined1 (*) [16])local_80 + 1;
      uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      pvVar17 = pvStack_74;
      pauVar19 = (undefined1 (*) [16])local_80;
      do {
        if ((short)uVar23 == 0) {
          do {
            auVar1 = *pauVar20;
            pauVar19 = pauVar19 + -0x10;
            pauVar20 = pauVar20 + 1;
            uVar23 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar23 == 0);
        }
        iVar22 = 0;
        for (uVar14 = uVar23; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          iVar22 = iVar22 + 1;
        }
        local_50 = pvVar17;
        if (*(int *)(pauVar19[-1 - iVar22] + 4) != 0) {
          pvVar8 = *(LPVOID *)(pauVar19[-1 - iVar22] + 8);
          pvVar10 = GetProcessHeap();
          HeapFree(pvVar10,0,pvVar8);
        }
        uVar23 = uVar23 - 1 & uVar23;
        pvVar17 = (void *)((int)local_50 - 1);
      } while (pvVar17 != (void *)0x0);
    }
    if (local_54 * 0x11 != -0x21) {
      pvVar8 = *(LPVOID *)((int)(undefined1 (*) [16])local_80 + local_54 * -0x10 + -0x14);
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,pvVar8);
    }
  }
  local_a0 = (byte)&local_24;
  uStack_9f = (undefined2)((uint)&local_24 >> 8);
  iStack_9d._1_3_ = SUB43(&local_3c,0);
  iStack_9d = CONCAT31(iStack_9d._1_3_,(char)((uint)&local_24 >> 0x18));
  uStack_99._1_3_ = SUB43(&local_1c,0);
  uStack_99 = CONCAT31(uStack_99._1_3_,(char)((uint)&local_3c >> 0x18));
  local_90 = &local_28;
  uStack_95._1_3_ = SUB43(&local_fd,0);
  uStack_95 = CONCAT31(uStack_95._1_3_,(char)((uint)&local_1c >> 0x18));
  uStack_91 = (undefined1)((uint)&local_fd >> 0x18);
  local_88 = &local_2c;
  local_8c = param_9;
  if (local_fc != 0) {
    pvVar8 = FUN_10107380(0,0x140);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_1013679e(0x40,0x100);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    iVar22 = 0;
    uVar23 = (uint)pvVar8 & 0xffffffc0;
    *(LPVOID *)(uVar23 + 0x3c) = pvVar8;
    *(undefined4 *)(uVar23 + 0x40) = 0;
    *(undefined4 *)(uVar23 + 0x44) = 0;
    *(undefined4 *)(uVar23 + 0x80) = 0;
    *(undefined4 *)(uVar23 + 0x84) = 0;
    *(undefined4 *)(uVar23 + 0xc0) = 0;
    *(undefined4 *)(uVar23 + 0xc4) = 0;
    *(undefined4 *)(uVar23 + 200) = 4;
    *(undefined4 *)(uVar23 + 0xcc) = 0;
    *(undefined4 *)(uVar23 + 0xd0) = 0;
    *(undefined4 *)(uVar23 + 0xd4) = 4;
    *(undefined4 *)(uVar23 + 0xd8) = 0;
    *(undefined1 *)(uVar23 + 0xdc) = 1;
    *(undefined4 *)(uVar23 + 0x100) = 1;
    *(undefined4 *)(uVar23 + 0x104) = 1;
    *(undefined1 *)(uVar23 + 0x108) = 0;
    puVar11 = FUN_10107380(0,0xc);
    if (puVar11 == (undefined4 *)0x0) {
      FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar9 = (uint *)(uVar23 + 0x40);
    *puVar11 = 1;
    puVar11[1] = puVar9;
    puVar11[2] = &local_a0;
    FUN_100190a0((undefined4 *)&local_b0,puVar11,&PTR_LAB_1013f1ac);
    local_40 = puVar9;
    while( true ) {
      while( true ) {
        local_c0 = 0;
        local_c8 = 0;
        uStack_c4 = 0;
        uVar12 = FUN_1004e150(puVar9,(int)&local_e8);
        if ((char)uVar12 != '\0') break;
        (*(code *)0x6ca2ac)();
        local_50 = (void *)(int)DAT_101633b8;
        uVar27 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
        if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
          uVar27 = FUN_1013c290();
        }
        uVar23 = (uint)((ulonglong)uVar27 >> 0x20);
        local_50 = (void *)uVar27;
        local_f8.s.HighPart = 0;
        local_f8.s.LowPart = 0;
        local_54 = iVar22;
        BVar13 = QueryPerformanceCounter(&local_f8);
        pvVar17 = local_50;
        lVar26 = CONCAT44(uVar23,local_50);
        if (BVar13 == 0) {
          DVar15 = GetLastError();
          uStack_e1 = (undefined1)(DVar15 >> 0x18);
          local_e8 = 0;
          uStack_e7 = 0;
          iStack_e5 = DVar15 << 8;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_e8,
                       &PTR_FUN_101569a8,&PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uStack_58 = local_f8.s.LowPart;
        piStack_34 = (int *)local_f8.s.HighPart;
        uVar24 = __aulldiv(local_f8.s.LowPart,local_f8.s.HighPart,(uint)local_50,uVar23);
        iStack_30 = (int)(uVar24 >> 0x20) * 1000000000;
        lVar26 = uVar24 * lVar26;
        uVar14 = (uint)lVar26;
        bVar6 = uStack_58 < uVar14;
        uVar14 = uStack_58 - uVar14;
        lVar25 = (uVar24 & 0xffffffff) * 1000000000;
        uStack_58 = (uint)lVar25;
        iVar22 = (int)((ulonglong)lVar25 >> 0x20) + iStack_30;
        lVar25 = (ulonglong)uVar14 * 1000000000;
        local_50 = pvVar17;
        lVar25 = __aulldiv((uint)lVar25,
                           (int)((ulonglong)lVar25 >> 0x20) +
                           ((int)piStack_34 + (-(uint)bVar6 - (int)((ulonglong)lVar26 >> 0x20))) *
                           1000000000,(uint)pvVar17,uVar23);
        lVar25 = lVar25 + CONCAT44(iVar22,uStack_58);
        lVar26 = lVar25 + 0x3fffffffffffffff;
        uVar14 = (uint)lVar26;
        lVar26 = __aulldiv(uVar14,(uint)((ulonglong)lVar26 >> 0x20),1000000000,0);
        puVar9 = local_40;
        uVar14 = uVar14 + (int)lVar26 * -1000000000;
        uVar23 = (int)lVar25 + 19999999 + (int)lVar26 * -1000000000;
        if (979999999 < uVar14) {
          uVar23 = uVar14 + 0xc5966300;
        }
        lVar26 = lVar26 + (ulonglong)(979999999 < uVar14);
        cVar7 = FUN_1004e780(local_40,(uint)lVar26,(uint)((ulonglong)lVar26 >> 0x20),uVar23);
        iVar22 = local_54 + (uint)(cVar7 == '\x02');
      }
      bVar6 = FUN_1004e300((LPVOID)local_c0,local_c0._4_4_);
      if (bVar6) break;
      iVar22 = iVar22 + 1;
    }
    FUN_1004ec40((char *)&local_e8,(undefined4 *)&local_b0);
    bVar16 = local_e8;
    if (local_e8 == 0xfe) {
      local_f8.s.LowPart = CONCAT13(uStack_e1,iStack_e5._1_3_);
      local_f8.s.HighPart = CONCAT13((undefined1)uStack_dd,CONCAT21(uStack_df,local_e0));
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_f8,&PTR_LAB_1013f0dc,
                   &PTR_s_src_lib_rs_1013f0ec);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_80 = CONCAT17(local_e0,CONCAT16(uStack_e1,CONCAT42(iStack_e5,uStack_e7)));
    local_70 = (void *)CONCAT43(uStack_d4,uStack_d8._1_3_);
    uStack_6c = (uint)(CONCAT17(uStack_d0,CONCAT43(uStack_d4,uStack_d8._1_3_)) >> 0x20);
    uStack_60 = (undefined3)((uint)local_c8 >> 8);
    uStack_68 = (uint)uStack_cf;
    uStack_64 = (uint)(CONCAT17((undefined1)local_c8,uStack_cf) >> 0x20);
    local_78 = (undefined4)CONCAT42(uStack_dd,uStack_df);
    pvStack_74 = (void *)(CONCAT17((undefined1)uStack_d8,
                                   CONCAT16(uStack_d9,CONCAT42(uStack_dd,uStack_df))) >> 0x20);
    FUN_10004630(local_40);
    if (bVar16 != 0xff) {
      *(ulonglong *)(param_1 + 0x11) = CONCAT44(uStack_6c,local_70);
      *(uint *)(param_1 + 0x20) = CONCAT31(uStack_60,uStack_64._3_1_);
      *(ulonglong *)(param_1 + 0x19) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(param_1 + 1) = local_80;
      *(ulonglong *)(param_1 + 9) = CONCAT44(pvStack_74,local_78);
      *param_1 = bVar16;
      return;
    }
  }
  FUN_10111020(param_9,&DAT_1013f4fe,8);
  FUN_100759c0(&local_e8,(void *)param_9[1],param_9[2]);
  if (local_e8 != 0xff) {
    local_70 = (void *)(CONCAT44(uStack_d4,uStack_d8) >> 8);
    local_78 = (undefined4)CONCAT42(uStack_dd,uStack_df);
    pvStack_74 = (void *)(CONCAT17((undefined1)uStack_d8,
                                   CONCAT16(uStack_d9,CONCAT42(uStack_dd,uStack_df))) >> 0x20);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_cf,uStack_d0);
    *(undefined4 *)(param_1 + 0x20) = local_c8;
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT35((int3)((uint)uStack_d4 >> 8),CONCAT41(local_70,(undefined1)uStack_d8));
    *(ulonglong *)(param_1 + 1) =
         CONCAT17(local_e0,CONCAT16(uStack_e1,CONCAT42(iStack_e5,uStack_e7)));
    *(ulonglong *)(param_1 + 9) = CONCAT44(pvStack_74,local_78);
    *param_1 = local_e8;
    return;
  }
  iStack_9d = CONCAT22(uStack_df,CONCAT11(local_e0,uStack_e1));
  local_90 = (undefined1 **)uStack_d4;
  local_a0 = (byte)((uint)iStack_e5 >> 8);
  uStack_9f = (undefined2)((uint)iStack_e5 >> 0x10);
  uStack_99 = uStack_dd;
  uStack_95 = (uint)CONCAT41(uStack_d8,uStack_d9);
  uStack_91 = (undefined1)((uint)uStack_d8 >> 0x18);
  local_80 = 0x100000000;
  local_78 = 0;
  FUN_100143e0((char *)&local_e8,_DAT_0079a9c4,(int)local_3c,local_38,(uint *)&local_80,
               (int *)&local_a0);
  pvVar8 = local_80._4_4_;
  if (local_e8 == 0xff) {
    if ((undefined1 (*) [16])local_80 != (undefined1 (*) [16])0x0) {
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,pvVar8);
    }
    FUN_10053090((undefined8 *)&local_e8,(int)&local_a0);
    if (local_e8 != 0xff) {
      if (local_e8 != 0xff) {
        *param_1 = 0;
        *(uint *)(param_1 + 4) = CONCAT13((undefined1)iStack_e5,CONCAT21(uStack_e7,local_e8));
        *(uint *)(param_1 + 8) = CONCAT13(uStack_e1,iStack_e5._1_3_);
        goto LAB_1000ff03;
      }
    }
    FUN_10005aa0((int *)&local_a0);
    FUN_1011b820((int)param_9);
    FUN_1011b820((int)param_9);
    *param_1 = 0xff;
  }
  else {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
    *(undefined4 *)(param_1 + 0x20) = local_c8;
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_cf,uStack_d0);
    *(ulonglong *)param_1 = CONCAT17(uStack_e1,CONCAT43(iStack_e5,CONCAT21(uStack_e7,local_e8)));
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(uStack_d9,CONCAT43(uStack_dd,CONCAT21(uStack_df,local_e0)));
    if ((undefined1 (*) [16])local_80 != (undefined1 (*) [16])0x0) {
      pvVar10 = GetProcessHeap();
      HeapFree(pvVar10,0,pvVar8);
    }
LAB_1000ff03:
    FUN_10005aa0((int *)&local_a0);
  }
  return;
}
