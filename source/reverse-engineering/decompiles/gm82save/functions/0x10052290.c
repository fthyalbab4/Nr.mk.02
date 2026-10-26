// rea decompile_all
// name: FUN_10052290
// address: 0x10052290
// body: available
// range: 0x10052290-0x10052435 inclusive
// range: 0x10052440-0x100528bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_10052290(int param_1)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  LPVOID pvVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  int local_420;
  int local_41c;
  uint *local_418 [2];
  undefined8 auStack_410 [128];

  iVar9 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(iVar9 + 0x84);
  iVar11 = iVar2 - *(int *)(iVar9 + 0x80);
  if (0 < iVar11) {
    if (*(char *)(param_1 + 0x9c) == '\x01') {
      *(int *)(iVar9 + 0x84) = iVar2 + -1;
      iVar11 = *(int *)(param_1 + 0x90);
      iVar4 = (iVar2 + -1) - *(int *)(iVar11 + 0x80);
      if (iVar4 < 0) {
        *(int *)(iVar11 + 0x84) = iVar2;
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x98);
        uVar13 = uVar10 - 1 & iVar2 - 1U;
        iVar9 = *(int *)(*(int *)(param_1 + 0x94) + uVar13 * 8);
        iVar15 = *(int *)(*(int *)(param_1 + 0x94) + 4 + uVar13 * 8);
        if (iVar2 + -1 != *(int *)(iVar11 + 0x80)) {
          uVar13 = uVar10 + 3;
          if (-1 < (int)uVar10) {
            uVar13 = uVar10;
          }
          if ((0x40 < uVar10) && (iVar4 < (int)uVar13 >> 2)) {
            FUN_10135f80((int *)(param_1 + 0x90),uVar10 >> 1);
          }
          goto LAB_10052864;
        }
        LOCK();
        bVar16 = iVar2 + -1 == *(int *)(iVar11 + 0x80);
        if (bVar16) {
          *(int *)(iVar11 + 0x80) = iVar2;
        }
        UNLOCK();
        *(int *)(*(int *)(param_1 + 0x90) + 0x84) = iVar2;
        local_420 = iVar4;
        if (bVar16) goto LAB_10052864;
      }
    }
    else {
      LOCK();
      puVar14 = (uint *)(iVar9 + 0x80);
      uVar10 = *puVar14;
      *puVar14 = *puVar14 + 1;
      UNLOCK();
      if ((int)(uVar10 - iVar2) < 0) {
        uVar13 = *(uint *)(param_1 + 0x98);
        uVar10 = uVar13 - 1 & uVar10;
        iVar9 = *(int *)(*(int *)(param_1 + 0x94) + uVar10 * 8);
        iVar15 = *(int *)(*(int *)(param_1 + 0x94) + 4 + uVar10 * 8);
        uVar10 = uVar13 + 3;
        if (-1 < (int)uVar13) {
          uVar10 = uVar13;
        }
        if ((0x40 < uVar13) && (iVar11 <= (int)uVar10 >> 2)) {
          FUN_10135f80((int *)(param_1 + 0x90),uVar13 >> 1);
        }
        if (iVar9 != 0) goto LAB_10052864;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x90) + 0x80) = uVar10;
      }
    }
  }
  do {
    iVar2 = *(int *)(param_1 + 0xa0);
    uVar10 = *(uint *)(iVar2 + 0x80);
    piVar5 = FUN_100bea60();
    piVar6 = DAT_101630cc;
    if (piVar5 != (int *)0x0) {
LAB_1005254b:
      piVar6 = FUN_100bea60();
      if (piVar6 != (int *)0x0) goto LAB_10052558;
LAB_10052600:
      piVar6 = DAT_101630cc;
      if (DAT_101630c8 == 0) {
        LOCK();
        iVar9 = *DAT_101630cc;
        *DAT_101630cc = *DAT_101630cc + 1;
        UNLOCK();
        if (*piVar6 == 0 || SCARRY4(iVar9,1) != *piVar6 < 0) goto LAB_100528bb;
      }
      else {
        FUN_101373c0();
        piVar6 = DAT_101630cc;
        LOCK();
        iVar9 = *DAT_101630cc;
        *DAT_101630cc = *DAT_101630cc + 1;
        UNLOCK();
        if (*piVar6 == 0 || SCARRY4(iVar9,1) != *piVar6 < 0) goto LAB_100528bb;
      }
      iVar9 = -0x400;
      do {
        *(undefined8 *)(&stack0xfffffff0 + iVar9) = 0;
        *(undefined8 *)((int)auStack_410 + iVar9 + 0x3f8) = 0x1009e1b0;
        iVar9 = iVar9 + 0x10;
      } while (iVar9 != 0);
      pvVar7 = FUN_10107380(0,0x4c0);
      if (pvVar7 == (LPVOID)0x0) goto LAB_100528ac;
      uVar12 = (uint)pvVar7 & 0xffffffc0;
      *(LPVOID *)(uVar12 + 0x3c) = pvVar7;
      puVar14 = (uint *)(uVar12 + 0x40);
      *(undefined4 *)(uVar12 + 0x40) = 0;
      *(int **)(uVar12 + 0x44) = piVar6;
      memcpy((void *)(uVar12 + 0x48),local_418,0x400);
      *(undefined4 *)(uVar12 + 0x448) = 0;
      *(undefined4 *)(uVar12 + 0x44c) = 0;
      *(undefined4 *)(uVar12 + 0x450) = 1;
      *(undefined4 *)(uVar12 + 0x454) = 0;
      *(undefined4 *)(uVar12 + 0x480) = 0;
      uVar8 = piVar6[0x40];
      *(uint *)(uVar12 + 0x40) = uVar8;
      LOCK();
      uVar13 = piVar6[0x40];
      bVar16 = uVar8 == uVar13;
      if (bVar16) {
        piVar6[0x40] = (int)puVar14;
        uVar13 = uVar8;
      }
      UNLOCK();
      while (!bVar16) {
        *puVar14 = uVar13;
        LOCK();
        uVar8 = piVar6[0x40];
        bVar16 = uVar13 == uVar8;
        if (bVar16) {
          piVar6[0x40] = (int)puVar14;
          uVar8 = uVar13;
        }
        UNLOCK();
        uVar13 = uVar8;
      }
      iVar9 = *(int *)(uVar12 + 0x44c);
      local_418[0] = puVar14;
      if (iVar9 == -1) goto LAB_1005287e;
      *(int *)(uVar12 + 0x44c) = iVar9 + 1;
      if (iVar9 == 0) {
        LOCK();
        if (*(uint *)(uVar12 + 0x480) == 0) {
          *(uint *)(uVar12 + 0x480) = *(uint *)(*(int *)(uVar12 + 0x44) + 0xc0) | 1;
        }
        UNLOCK();
        uVar13 = *(uint *)(uVar12 + 0x454);
        *(uint *)(uVar12 + 0x454) = uVar13 + 1;
        if ((uVar13 & 0x7f) == 0) {
          FUN_10137010((uint *)(*(int *)(uVar12 + 0x44) + 0x40),(int *)local_418);
        }
      }
      iVar9 = *(int *)(uVar12 + 0x450);
      *(int *)(uVar12 + 0x450) = iVar9 + -1;
      if (iVar9 == 1 && *(int *)(uVar12 + 0x44c) == 0) {
        FUN_10136e40(puVar14);
        if (*(uint *)(iVar2 + 0x84) != uVar10 && -1 < (int)(*(uint *)(iVar2 + 0x84) - uVar10))
        goto LAB_1005275f;
        goto LAB_10052820;
      }
      goto LAB_1005274f;
    }
    if (DAT_101630c8 == 0) {
      LOCK();
      iVar9 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar6 == 0 || SCARRY4(iVar9,1) != *piVar6 < 0) goto LAB_100528bb;
    }
    else {
      FUN_101373c0();
      piVar6 = DAT_101630cc;
      LOCK();
      iVar9 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar6 == 0 || SCARRY4(iVar9,1) != *piVar6 < 0) goto LAB_100528bb;
    }
    iVar9 = -0x400;
    do {
      *(undefined8 *)(&stack0xfffffff0 + iVar9) = 0;
      *(undefined8 *)((int)auStack_410 + iVar9 + 0x3f8) = 0x1009e1b0;
      iVar9 = iVar9 + 0x10;
    } while (iVar9 != 0);
    pvVar7 = FUN_10107380(0,0x4c0);
    if (pvVar7 == (LPVOID)0x0) {
LAB_100528ac:
      FUN_1013679e(0x40,0x480);
LAB_100528bb:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar12 = (uint)pvVar7 & 0xffffffc0;
    *(LPVOID *)(uVar12 + 0x3c) = pvVar7;
    puVar14 = (uint *)(uVar12 + 0x40);
    *(undefined4 *)(uVar12 + 0x40) = 0;
    *(int **)(uVar12 + 0x44) = piVar6;
    memcpy((void *)(uVar12 + 0x48),local_418,0x400);
    *(undefined4 *)(uVar12 + 0x448) = 0;
    *(undefined4 *)(uVar12 + 0x44c) = 0;
    *(undefined4 *)(uVar12 + 0x450) = 1;
    *(undefined4 *)(uVar12 + 0x454) = 0;
    *(undefined4 *)(uVar12 + 0x480) = 0;
    uVar8 = piVar6[0x40];
    *(uint *)(uVar12 + 0x40) = uVar8;
    LOCK();
    uVar13 = piVar6[0x40];
    bVar16 = uVar8 == uVar13;
    if (bVar16) {
      piVar6[0x40] = (int)puVar14;
      uVar13 = uVar8;
    }
    UNLOCK();
    while (!bVar16) {
      *puVar14 = uVar13;
      LOCK();
      uVar8 = piVar6[0x40];
      bVar16 = uVar13 == uVar8;
      if (bVar16) {
        piVar6[0x40] = (int)puVar14;
        uVar8 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar8;
    }
    iVar9 = *(int *)(uVar12 + 0x450);
    *(int *)(uVar12 + 0x450) = iVar9 + -1;
    if (iVar9 != 1 || *(int *)(uVar12 + 0x44c) != 0) goto LAB_1005254b;
    FUN_10136e40(puVar14);
    piVar6 = FUN_100bea60();
    if (piVar6 == (int *)0x0) goto LAB_10052600;
LAB_10052558:
    puVar14 = (uint *)*piVar6;
    uVar13 = puVar14[0x103];
    local_418[0] = puVar14;
    if (uVar13 == 0xffffffff) {
LAB_1005287e:
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151518);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar14[0x103] = uVar13 + 1;
    if (uVar13 == 0) {
      LOCK();
      if (puVar14[0x110] == 0) {
        puVar14[0x110] = *(uint *)(puVar14[1] + 0xc0) | 1;
      }
      UNLOCK();
      uVar13 = puVar14[0x105];
      puVar14[0x105] = uVar13 + 1;
      if ((uVar13 & 0x7f) != 0) goto LAB_1005274f;
      FUN_10137010((uint *)(puVar14[1] + 0x40),(int *)local_418);
      if (*(uint *)(iVar2 + 0x84) != uVar10 && -1 < (int)(*(uint *)(iVar2 + 0x84) - uVar10))
      goto LAB_1005275f;
LAB_10052820:
      iVar11 = 0;
LAB_10052822:
      puVar1 = puVar14 + 0x103;
      *puVar1 = *puVar1 - 1;
      if ((*puVar1 == 0) && (puVar14[0x110] = 0, puVar14[0x104] == 0)) goto LAB_100523f1;
    }
    else {
LAB_1005274f:
      if (*(uint *)(iVar2 + 0x84) == uVar10 || (int)(*(uint *)(iVar2 + 0x84) - uVar10) < 0)
      goto LAB_10052820;
LAB_1005275f:
      piVar6 = (int *)(*(uint *)(iVar2 + 0x40) & 0xfffffffc);
      iVar11 = *piVar6;
      uVar13 = piVar6[1] - 1U & uVar10;
      iVar9 = *(int *)(iVar11 + uVar13 * 8);
      iVar15 = *(int *)(iVar11 + 4 + uVar13 * 8);
      iVar11 = 2;
      if (*(uint *)(iVar2 + 0x40) != *(uint *)(iVar2 + 0x40)) goto LAB_10052822;
      LOCK();
      bVar16 = uVar10 == *(uint *)(iVar2 + 0x80);
      if (bVar16) {
        *(uint *)(iVar2 + 0x80) = uVar10 + 1;
      }
      UNLOCK();
      iVar11 = 2;
      if (!bVar16) goto LAB_10052822;
      puVar1 = puVar14 + 0x103;
      *puVar1 = *puVar1 - 1;
      if ((*puVar1 != 0) || (puVar14[0x110] = 0, puVar14[0x104] != 0)) goto LAB_10052864;
      iVar11 = 1;
      local_420 = iVar15;
      local_41c = iVar9;
LAB_100523f1:
      FUN_10136e40(puVar14);
    }
  } while (iVar11 == 2);
  iVar9 = local_41c;
  iVar15 = local_420;
  if (iVar11 == 0) {
    iVar9 = 0;
  }
LAB_10052864:
  return CONCAT44(iVar15,iVar9);
}
