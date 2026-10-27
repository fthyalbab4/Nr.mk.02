// rea decompile_all
// name: FUN_10113420
// address: 0x10113420
// body: available
// range: 0x10113420-0x10113927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10113420(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  HANDLE pvVar10;
  int iVar11;
  byte bVar12;
  char *pcVar13;
  HANDLE pvVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  int *piStack_98;
  code *pcStack_94;
  char *local_8c;
  undefined4 uStack_88;
  uint uStack_84;
  HANDLE local_80;
  HANDLE local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int iStack_64;
  uint uStack_60;
  undefined8 uStack_5c;
  uint auStack_54 [10];
  undefined8 uStack_2c;
  uint auStack_24 [5];

  LOCK();
  pcVar13 = (char *)(param_1 + 0x18);
  *pcVar13 = *pcVar13 + -1;
  UNLOCK();
  if (*pcVar13 != '\0') {
    pcVar13 = (char *)(param_1 + 0x18);
    local_8c = pcVar13;
    if (DAT_10163390 == (code *)0x0) {
      pvVar14 = DAT_101631bc;
      if (DAT_101631bc == (HANDLE)0xffffffff) {
        local_80 = (HANDLE)0xffffffff;
        iStack_64 = (*(code *)PTR_FUN_101631a4)(&local_80,0xc0000000,0,0);
        if (iStack_64 != 0) {
          piStack_98 = &iStack_64;
          pcStack_94 = FUN_1009c910;
          FUN_101369c0(&DAT_10158e08,&piStack_98,&PTR_s_C__Users_runneradmin__rustup_too_10158ec8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        LOCK();
        bVar22 = DAT_101631bc == (HANDLE)0xffffffff;
        pvVar10 = DAT_101631bc;
        if (bVar22) {
          DAT_101631bc = local_80;
          pvVar10 = (HANDLE)0xffffffff;
        }
        UNLOCK();
        pvVar14 = local_80;
        if (!bVar22) {
          CloseHandle(local_80);
          pvVar14 = pvVar10;
        }
      }
      pcVar13 = local_8c;
      uVar8 = (uint)((ulonglong)param_2 * 1000000000);
      lVar6 = (ulonglong)param_3 * 1000000000 + ((ulonglong)param_2 * 1000000000 >> 0x20);
      uVar16 = uVar8 + param_4;
      uVar8 = (uint)CARRY4(uVar8,param_4);
      lVar7 = lVar6 + (ulonglong)uVar8;
      uVar9 = (uint)((ulonglong)lVar7 >> 0x20);
      uVar8 = (uint)CARRY4((uint)((ulonglong)lVar6 >> 0x20),(uint)CARRY4((uint)lVar6,uVar8));
      pcStack_94 = (code *)0x80000000;
      piStack_98 = (int *)0x0;
      if (uVar8 == 0 &&
          (uint)(0x31 < uVar9 ||
                0x31 - uVar9 < (uint)(-(uint)lVar7 - 1 < (uint)(0xffffff9c < uVar16))) <= -uVar8) {
        uVar18 = uVar16 + 99;
        lVar6 = lVar7 + (ulonglong)(uint)(0xffffff9c < uVar16);
        uVar19 = (uint)lVar6;
        uVar17 = (uint)((ulonglong)lVar6 >> 0x20);
        uVar8 = uVar8 + CARRY4(uVar9,(uint)CARRY4((uint)lVar7,(uint)(0xffffff9c < uVar16)));
        uVar9 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        uVar16 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        uVar16 = uVar16 ^ 0x1f;
        if (uVar8 == 0) {
          uVar16 = uVar9 ^ 0x1f | 0x20;
        }
        uVar9 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        uVar20 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> uVar20 == 0; uVar20 = uVar20 - 1) {
          }
        }
        uVar9 = uVar9 ^ 0x1f | 0x20;
        if (uVar19 != 0) {
          uVar9 = uVar20 ^ 0x1f;
        }
        uVar9 = uVar9 | 0x40;
        if (uVar17 != 0 || uVar8 != 0) {
          uVar9 = uVar16;
        }
        uVar15 = -uVar9 + 0x79;
        uVar16 = (uint)(0x79 < uVar9);
        uVar3 = -uVar16;
        uVar20 = (uint)(uVar16 != 0);
        uVar4 = -uVar20;
        uVar5 = -(uint)(uVar20 != 0);
        if ((uVar5 == 0 &&
            (uint)(uVar4 != 0 || uVar20 < (uVar3 != 0 || uVar16 < (0x7f < uVar15))) <=
            (uint)(uVar20 != 0)) && ((uVar18 != 0 || uVar17 != 0) || (uVar19 != 0 || uVar8 != 0))) {
          if ((uVar3 != 0 || uVar5 != 0) || (uVar15 != 0x7f || uVar4 != 0)) {
            auStack_54[5] = 0;
            auStack_54[6] = 0;
            auStack_54[7] = 0;
            auStack_54[8] = 0;
            auStack_54[9] = uVar18;
            uStack_2c = lVar6;
            auStack_24[0] = uVar8;
            bVar12 = (byte)uVar15 ^ 0x7f;
            iVar11 = (int)(char)-(bVar12 >> 3 & 0xc);
            uVar16 = *(uint *)((int)auStack_24 + iVar11 + -4);
            uVar17 = *(int *)((int)auStack_24 + iVar11) << (bVar12 & 0x1f) |
                     uVar16 >> 0x20 - (bVar12 & 0x1f);
            uStack_a0 = *(uint *)((int)auStack_54 + iVar11 + 0x24);
            uVar19 = *(uint *)((int)auStack_24 + iVar11 + -8);
            uVar16 = uVar16 << (bVar12 & 0x1f) | uVar19 >> 0x20 - (bVar12 & 0x1f);
            uStack_9c = uVar19 << (bVar12 & 0x1f) | uStack_a0 >> 0x20 - (bVar12 & 0x1f);
            uStack_a0 = uStack_a0 << (bVar12 & 0x1f);
            uStack_c0 = -uVar9 + 0x7a;
            iStack_b8 = uVar3 + (0xfffffffe < uVar15);
            uVar9 = (uint)CARRY4(uVar3,(uint)(0xfffffffe < uVar15));
            iStack_b0 = uVar4 + uVar9;
            uVar9 = (uint)CARRY4(uVar4,uVar9);
            iStack_b4 = uVar5 + uVar9;
            if (CARRY4(uVar5,uVar9)) {
              uVar18 = 0;
            }
            else {
              auStack_54[1] = 0;
              auStack_54[2] = 0;
              auStack_54[3] = 0;
              auStack_54[4] = 0;
              uStack_60 = uVar18;
              uStack_5c = lVar6;
              auStack_54[0] = uVar8;
              uVar9 = (uint)((byte)(uStack_c0 >> 3) & 0xc);
              uVar8 = *(uint *)((int)&uStack_5c + uVar9 + 4);
              bVar12 = (byte)uStack_c0;
              uStack_bc = uVar8 >> (bVar12 & 0x1f) |
                          *(uint *)((int)auStack_54 + uVar9) << 0x20 - (bVar12 & 0x1f);
              uStack_c4 = *(uint *)((int)auStack_54 + uVar9) >> (bVar12 & 0x1f);
              uStack_84 = *(uint *)((int)&uStack_5c + uVar9) >> (bVar12 & 0x1f) |
                          uVar8 << 0x20 - (bVar12 & 0x1f);
              uStack_ac = *(uint *)((int)&uStack_60 + uVar9) >> (bVar12 & 0x1f) |
                          *(uint *)((int)&uStack_5c + uVar9) << 0x20 - (bVar12 & 0x1f);
              uStack_6c = 99;
              uStack_70 = 0;
              uStack_74 = 0;
              uStack_78 = 0;
              uVar18 = 0;
              do {
                uStack_68 = uVar18;
                uStack_88 = 0;
                uStack_c4 = uStack_c4 << 1 | uStack_bc >> 0x1f;
                uVar9 = uStack_bc << 1 | uStack_84 >> 0x1f;
                uVar19 = uStack_84 << 1 | uStack_ac >> 0x1f;
                uVar20 = uStack_ac << 1 | uVar17 >> 0x1f;
                uVar17 = uVar17 << 1 | uVar16 >> 0x1f;
                uVar16 = uVar16 << 1 | uStack_9c >> 0x1f;
                uStack_9c = uStack_9c << 1 | uStack_a0 >> 0x1f;
                uStack_a0 = uStack_a0 * 2 | uStack_68;
                uVar18 = (int)(-(uint)(uVar9 != 0 ||
                                      -uVar9 < (uint)(uVar19 != 0 || -uVar19 < (uint)(99 < uVar20)))
                              - uStack_c4) >> 0x1f;
                uVar8 = uVar18 & 100;
                uVar18 = uVar18 & 1;
                uStack_ac = uVar20 - uVar8;
                uVar8 = (uint)(uVar20 < uVar8);
                uStack_84 = uVar19 - uVar8;
                uVar8 = (uint)(uVar19 < uVar8);
                uStack_bc = uVar9 - uVar8;
                uStack_c4 = uStack_c4 - (uVar9 < uVar8);
                bVar22 = uStack_c0 != 0;
                uStack_c0 = uStack_c0 - 1;
                bVar21 = iStack_b8 != 0;
                uVar8 = iStack_b8 - 1;
                iStack_b8 = uVar8 + bVar22;
                uVar8 = (uint)(bVar21 || CARRY4(uVar8,(uint)bVar22));
                bVar22 = iStack_b0 != 0;
                uVar9 = iStack_b0 - 1;
                iStack_b0 = uVar9 + uVar8;
                iStack_b4 = iStack_b4 + -1 + (uint)(bVar22 || CARRY4(uVar9,uVar8));
              } while ((uStack_c0 != 0 || iStack_b0 != 0) || (iStack_b8 != 0 || iStack_b4 != 0));
            }
            uVar19 = uStack_9c << 1 | uStack_a0 >> 0x1f;
            uVar18 = uVar18 + uStack_a0 * 2;
          }
        }
        else {
          uVar18 = 0;
          uVar19 = 0;
        }
        piStack_98 = (int *)-uVar18;
        pcStack_94 = (code *)(-(uint)(uVar18 != 0) - uVar19);
      }
      local_7c = pvVar14;
      iVar11 = (*(code *)PTR_FUN_101631ac)(pvVar14,local_8c,0,&piStack_98);
      LOCK();
      cVar1 = *pcVar13;
      *pcVar13 = '\0';
      UNLOCK();
      if (cVar1 == '\x01' && iVar11 != 0) {
        (*(code *)PTR_FUN_101631ac)(pvVar14,pcVar13,0,0);
      }
    }
    else {
      uVar8 = (uint)((ulonglong)param_3 * 1000);
      uVar16 = (uint)((ulonglong)param_2 * 1000 >> 0x20);
      uVar9 = (uint)((ulonglong)param_2 * 1000);
      uVar19 = uVar16 + uVar8;
      uVar18 = 0xffffffff;
      if (!CARRY4(uVar16,uVar8) && (int)((ulonglong)param_3 * 1000 >> 0x20) == 0) {
        uVar17 = param_4 / 1000000;
        uVar16 = uVar9 + uVar17;
        uVar8 = (uint)CARRY4(uVar9,uVar17);
        uVar9 = uVar19 + uVar8;
        if (!CARRY4(uVar19,uVar8)) {
          uVar19 = (uint)(param_4 != uVar17 * 1000000);
          uVar8 = (uint)CARRY4(uVar16,uVar19);
          if (!CARRY4(uVar9,uVar8)) {
            uVar18 = -(uint)(uVar9 + uVar8 != 0) | uVar16 + uVar19;
          }
        }
      }
      if (DAT_10163390 == (code *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10158cc8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (*DAT_10163390)(pcVar13,&DAT_10157460,1,uVar18);
      LOCK();
      *pcVar13 = '\0';
      UNLOCK();
    }
  }
  return;
}
