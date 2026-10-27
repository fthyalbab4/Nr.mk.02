// rea decompile_all
// name: FUN_10106a19
// address: 0x10106a19
// body: available
// range: 0x10106a19-0x10106fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10106a19(undefined4 param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  HANDLE pvVar11;
  uint *puVar12;
  undefined4 *puVar13;
  DWORD dwTlsIndex;
  LPVOID pvVar14;
  undefined4 *puVar15;
  char cVar16;
  HANDLE pvVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  int *piVar20;
  uint uVar21;
  undefined8 **ppuVar22;
  code *pcVar23;
  char *pcVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  byte bStack_62;
  undefined1 uStack_61;
  undefined1 local_60 [5];
  char cStack_5b;
  char acStack_5a [2];
  undefined8 uStack_58;
  ushort local_50;
  HANDLE pvStack_38;
  undefined1 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined8 *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined8 local_1c;

  local_30 = param_1;
  local_2c = param_2;
  uVar7 = FUN_10106fe0(1);
  puVar8 = DAT_10163300;
  if ((char)uVar7 != '\x02') {
    if ((uVar7 & 0xff) == 0) {
      local_1c._0_4_ = (undefined *)0x0;
      stack0xffffffa4 = (int *)&LAB_10107020;
      local_60._0_4_ = &param_3;
      local_1c._4_4_ = local_1c._4_4_ & 0xffffff00;
      uStack_58._0_4_ = &local_30;
      uStack_58._4_4_ = (int *)&LAB_10093d50;
      FUN_10107090((undefined8 *)&local_28,(byte *)&local_1c,(ushort *)&DAT_10158110,(uint)local_60)
      ;
    }
    else {
      local_1c = (**(code **)(param_2 + 0x18))(param_1);
      if ((int)local_1c == 0) {
        local_1c = 1;
      }
      pvStack_38 = (HANDLE)0x0;
      uStack_34 = 0;
      stack0xffffffa4 = (int *)&LAB_10107020;
      local_60._0_4_ = &param_3;
      uStack_58._0_4_ = &local_1c;
      uStack_58._4_4_ = (int *)&LAB_10093d10;
      FUN_10107090((undefined8 *)&local_28,(byte *)&pvStack_38,(ushort *)&DAT_10158132,
                   (uint)local_60);
    }
    FUN_10003b60((char)local_28,(int *)local_24);
    pcVar23 = (code *)swi(0x29);
    (*pcVar23)();
                    /* WARNING: Does not return */
    pcVar23 = (code *)invalidInstructionException();
    (*pcVar23)();
  }
  do {
    if ((((undefined1 *)0xffffffef < puVar8) || (puVar8 == (undefined1 *)0x1)) ||
       (((uint)puVar8 & 2) != 0)) {
      _local_60 = (undefined1  [16])0x0;
      local_50 = 0;
      do {
        uVar7 = 0;
        puVar8 = DAT_10163300;
        do {
          while( true ) {
            while( true ) {
              while (puVar19 = puVar8,
                    (puVar19 < (undefined1 *)0xfffffff0 && puVar19 != (undefined1 *)0x1) &&
                    (char)(((uint)puVar19 & 2) >> 1) == '\0') {
                LOCK();
                bVar25 = puVar19 == DAT_10163300;
                puVar8 = (undefined1 *)(((uint)puVar19 | 1) + 0x10);
                if (!bVar25) {
                  puVar19 = DAT_10163300;
                  puVar8 = DAT_10163300;
                }
                DAT_10163300 = puVar8;
                UNLOCK();
                puVar8 = puVar19;
                if (bVar25) {
                  if (uStack_58._4_4_ != (int *)0x0) {
                    LOCK();
                    *uStack_58._4_4_ = *uStack_58._4_4_ + -1;
                    UNLOCK();
                    if (*uStack_58._4_4_ == 0) {
                      FUN_10107640(uStack_58._4_4_);
                    }
                  }
                  goto LAB_10106c72;
                }
              }
              if (6 < uVar7 || ((uint)puVar19 & 2) != 0) break;
              uVar9 = 1;
              do {
                uVar21 = uVar9 >> ((byte)uVar7 & 0x1f);
                uVar9 = uVar9 + 1;
              } while (uVar21 == 0);
              uVar7 = uVar7 + 1;
              puVar8 = DAT_10163300;
            }
            if (uStack_58._4_4_ == (int *)0x0) {
              FUN_1013c100((int *)(local_60 + 0xc));
            }
            auVar26 = _local_60;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uStack_58;
            _local_60 = auVar3 << 0x40;
            local_50 = local_50 & 0xff00;
            local_60._0_4_ = (uint)puVar19 & 0xfffffff0;
            auVar3 = _local_60;
            uStack_58._4_4_ = auVar26._12_4_;
            _local_60 = auVar3._0_8_;
            if (((uint)puVar19 & 2) == 0) break;
            uStack_58._0_4_ = 0;
            LOCK();
            bVar25 = puVar19 != DAT_10163300;
            puVar8 = puVar19;
            puVar6 = local_60 + ((uint)puVar19 & 9) + 6;
            if (bVar25) {
              puVar8 = DAT_10163300;
              puVar6 = DAT_10163300;
            }
            DAT_10163300 = puVar6;
            UNLOCK();
            if (!bVar25) {
              if (((uint)puVar19 & 4) == 0) {
                FUN_10107750((uint)(local_60 + ((uint)puVar19 & 9) + 6));
              }
              goto LAB_10106b5f;
            }
          }
          uStack_58._0_4_ = local_60;
          LOCK();
          bVar25 = puVar19 != DAT_10163300;
          puVar8 = local_60 + ((uint)puVar19 & 9) + 2;
          if (bVar25) {
            puVar19 = DAT_10163300;
            puVar8 = DAT_10163300;
          }
          DAT_10163300 = puVar8;
          UNLOCK();
          puVar8 = puVar19;
        } while (bVar25);
LAB_10106b5f:
        while ((char)local_50 == '\0') {
          if (uStack_58._4_4_ == (int *)0x0) {
            ppuVar18 = &PTR_s_C__Users_runneradmin__rustup_too_10157edc;
LAB_10106c29:
            FUN_10136b20(ppuVar18);
                    /* WARNING: Does not return */
            pcVar23 = (code *)invalidInstructionException();
            (*pcVar23)();
          }
          LOCK();
          pcVar24 = (char *)((int)uStack_58._4_4_ + 0x18);
          *pcVar24 = *pcVar24 + -1;
          UNLOCK();
          if (*pcVar24 != '\0') {
            pcVar24 = (char *)((int)uStack_58._4_4_ + 0x18);
            if (DAT_10163390 == (code *)0x0) {
              pvVar17 = DAT_101631bc;
              if (DAT_101631bc == (HANDLE)0xffffffff) {
                pvStack_38 = (HANDLE)0xffffffff;
                iVar10 = (*(code *)PTR_FUN_101631a4)(&pvStack_38,0xc0000000,0,0);
                if (iVar10 != 0) {
                  local_28 = &local_1c;
                  local_24 = FUN_1009c910;
                  local_1c._0_4_ = (undefined *)iVar10;
                  FUN_101369c0(&DAT_10158e08,&local_28,
                               &PTR_s_C__Users_runneradmin__rustup_too_10158ec8);
                    /* WARNING: Does not return */
                  pcVar23 = (code *)invalidInstructionException();
                  (*pcVar23)();
                }
                LOCK();
                bVar25 = DAT_101631bc == (HANDLE)0xffffffff;
                pvVar11 = DAT_101631bc;
                if (bVar25) {
                  DAT_101631bc = pvStack_38;
                  pvVar11 = (HANDLE)0xffffffff;
                }
                UNLOCK();
                pvVar17 = pvStack_38;
                if (!bVar25) {
                  CloseHandle(pvStack_38);
                  pvVar17 = pvVar11;
                }
              }
              (*(code *)PTR_FUN_101631ac)(pvVar17,pcVar24,0,0);
              LOCK();
              *pcVar24 = '\0';
              UNLOCK();
            }
            else {
              do {
                if (DAT_10163390 == (code *)0x0) {
                  ppuVar18 = &PTR_s_C__Users_runneradmin__rustup_too_10158cc8;
                  goto LAB_10106c29;
                }
                (*DAT_10163390)(pcVar24,&DAT_10157460,1,0xffffffff);
                LOCK();
                cVar16 = *pcVar24;
                if (cVar16 == '\x01') {
                  *pcVar24 = '\0';
                }
                UNLOCK();
              } while (cVar16 != '\x01');
            }
          }
        }
      } while( true );
    }
    LOCK();
    bVar25 = puVar8 != DAT_10163300;
    puVar19 = (undefined1 *)(((uint)puVar8 | 1) + 0x10);
    if (bVar25) {
      puVar8 = DAT_10163300;
      puVar19 = DAT_10163300;
    }
    DAT_10163300 = puVar19;
    UNLOCK();
  } while (bVar25);
LAB_10106c72:
  if (DAT_10163304 != 0) {
    _local_60 = (**(code **)(local_2c + 0x14))(local_30);
    auVar3 = _local_60;
    uStack_58._0_4_ = param_3;
    uStack_58._4_1_ = param_4;
    uStack_58._6_2_ = auVar3._14_2_;
    uStack_58._5_1_ = param_5;
    (**(code **)(DAT_10163308 + 0x14))(DAT_10163304,local_60);
    puVar8 = DAT_10163300;
    goto LAB_10106e5a;
  }
  uVar28 = (**(code **)(local_2c + 0x14))(local_30);
  uVar5 = param_3;
  puVar15 = (undefined4 *)uVar28;
  if (param_5 == '\0') {
    puVar12 = FUN_101072c0();
    if (puVar12 == (uint *)0x0) {
LAB_10106eae:
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar23 = (code *)invalidInstructionException();
      (*pcVar23)();
    }
    bStack_62 = 1;
    if (*puVar12 < 2) {
      bStack_62 = FUN_101079b0();
    }
  }
  else {
    bStack_62 = 0xff;
  }
  uStack_20 = uVar5;
  pcVar23 = *(code **)((int)((ulonglong)uVar28 >> 0x20) + 0xc);
  (*pcVar23)(local_60,puVar15);
  auVar26[0] = -(local_60[0] == '\\');
  auVar26[1] = -(local_60[1] == -10);
  auVar26[2] = -(local_60[2] == -0x17);
  auVar26[3] = -(local_60[3] == '_');
  auVar26[4] = -(local_60[4] == -0x24);
  auVar26[5] = -(cStack_5b == '\x02');
  auVar26[6] = -(acStack_5a[0] == -10);
  auVar26[7] = -(acStack_5a[1] == -0x47);
  auVar26[8] = -((char)uStack_58 == -0xf);
  auVar26[9] = -(uStack_58._1_1_ == -0x3f);
  auVar26[10] = -(uStack_58._2_1_ == 'p');
  auVar26[0xb] = -(uStack_58._3_1_ == 'l');
  auVar26[0xc] = -(uStack_58._4_1_ == -0xe);
  auVar26[0xd] = -(uStack_58._5_1_ == 'a');
  auVar26[0xe] = -(uStack_58._6_1_ == -0x3f);
  auVar26[0xf] = -(uStack_58._7_1_ == '$');
  if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf)
      == 0xffff) {
    iVar10 = 4;
    puVar13 = puVar15;
LAB_10106d5d:
    local_1c._0_4_ = (undefined *)*puVar13;
    local_1c._4_4_ = *(uint *)((int)puVar15 + iVar10);
  }
  else {
    (*pcVar23)(local_60,puVar15);
    auVar27[0] = -(local_60[0] == '@');
    auVar27[1] = -(local_60[1] == -0x19);
    auVar27[2] = -(local_60[2] == -0x1d);
    auVar27[3] = -(local_60[3] == -0x4c);
    auVar27[4] = -(local_60[4] == 'u');
    auVar27[5] = -(cStack_5b == -0x22);
    auVar27[6] = -(acStack_5a[0] == '\x12');
    auVar27[7] = -(acStack_5a[1] == 'p');
    auVar27[8] = -((char)uStack_58 == -0x2c);
    auVar27[9] = -(uStack_58._1_1_ == -0x4d);
    auVar27[10] = -(uStack_58._2_1_ == -0x27);
    auVar27[0xb] = -(uStack_58._3_1_ == -0x4c);
    auVar27[0xc] = -(uStack_58._4_1_ == -0x51);
    auVar27[0xd] = -(uStack_58._5_1_ == '%');
    auVar27[0xe] = -(uStack_58._6_1_ == '\'');
    auVar27[0xf] = -(uStack_58._7_1_ == -0x13);
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
                ) == 0xffff) {
      puVar13 = puVar15 + 1;
      iVar10 = 8;
      goto LAB_10106d5d;
    }
    local_1c._0_4_ = &DAT_10158104;
    local_1c._4_4_ = 0xc;
  }
  pvStack_38 = (HANDLE)0x0;
  uStack_34 = 0;
  FUN_10107a70();
  stack0xffffffa4 = (int *)&local_1c;
  local_60._0_4_ = &uStack_20;
  uStack_58._0_4_ = &pvStack_38;
  uStack_58._4_4_ = (int *)&DAT_1015807c;
  if (DAT_10163350 == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_10163350);
  }
  else {
    dwTlsIndex = DAT_10163350 - 1;
  }
  pvVar14 = TlsGetValue(dwTlsIndex);
  if (pvVar14 < (LPVOID)0x3) {
    ppuVar22 = (undefined8 **)0x0;
  }
  else {
    local_28 = (undefined8 *)((int)pvVar14 + -8);
    ppuVar22 = &local_28;
  }
  FUN_10107a80((undefined4 *)local_60,(int *)ppuVar22);
  cVar16 = DAT_10163128;
  if (bStack_62 == 0) {
    uStack_61 = 0;
LAB_10106e20:
    stack0xffffffa4 = (int *)FUN_10107e20;
    local_60._0_4_ = &uStack_61;
    FUN_10107090((undefined8 *)&local_28,(byte *)&pvStack_38,(ushort *)&DAT_10157158,(uint)local_60)
    ;
    cVar16 = (char)local_28;
    pcVar23 = local_24;
LAB_10106e45:
    FUN_10003b60(cVar16,(int *)pcVar23);
  }
  else {
    if (bStack_62 == 1) {
      uStack_61 = 1;
      goto LAB_10106e20;
    }
    if (bStack_62 == 2) {
      LOCK();
      DAT_10163128 = '\0';
      UNLOCK();
      if (cVar16 == '\0') goto LAB_10106e4a;
      FUN_10107090((undefined8 *)local_60,(byte *)&pvStack_38,
                   (ushort *)
                   "note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace\n"
                   ,0x9d);
      cVar16 = local_60[0];
      pcVar23 = (code *)stack0xffffffa4;
      goto LAB_10106e45;
    }
  }
LAB_10106e4a:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_101633ac);
  puVar8 = DAT_10163300;
LAB_10106e5a:
  do {
    if (((uint)puVar8 & 2) == 0) {
      puVar19 = (undefined1 *)((uint)(puVar8 + -0x11) | 1);
      if (puVar8 + -0x11 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)0x0;
      }
    }
    else {
      if (((uint)puVar8 & 8) == 0) {
        piVar20 = (int *)((uint)puVar8 & 0xfffffff0);
        piVar1 = (int *)piVar20[2];
        piVar4 = piVar20;
        while (piVar1 == (int *)0x0) {
          piVar2 = (int *)*piVar4;
          piVar2[1] = (int)piVar4;
          piVar4 = piVar2;
          piVar1 = (int *)piVar2[2];
        }
        piVar20[2] = (int)piVar1;
        LOCK();
        *piVar1 = *piVar1 + -0x10;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_1013bf80((uint)puVar8);
        }
LAB_10106ea5:
        puVar15 = FUN_101072c0();
        if (puVar15 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar15 + 1) = 0;
          if (param_4 != '\0') {
            FUN_101072b0();
                    /* WARNING: Does not return */
            pcVar23 = (code *)invalidInstructionException();
            (*pcVar23)();
          }
          local_28 = (undefined8 *)0x0;
          local_24 = (code *)((uint)local_24 & 0xffffff00);
          FUN_10107090((undefined8 *)local_60,(byte *)&local_28,
                       (ushort *)"thread caused non-unwinding panic. aborting.\n",0x5b);
          FUN_10003b60(local_60[0],stack0xffffffa4);
          pcVar23 = (code *)swi(0x29);
          (*pcVar23)();
                    /* WARNING: Does not return */
          pcVar23 = (code *)invalidInstructionException();
          (*pcVar23)();
        }
        goto LAB_10106eae;
      }
      puVar19 = (undefined1 *)((uint)puVar8 & 0xfffffff6);
    }
    LOCK();
    bVar25 = puVar8 != DAT_10163300;
    if (bVar25) {
      puVar8 = DAT_10163300;
      puVar19 = DAT_10163300;
    }
    DAT_10163300 = puVar19;
    UNLOCK();
    if (!bVar25) goto LAB_10106ea5;
  } while( true );
}
