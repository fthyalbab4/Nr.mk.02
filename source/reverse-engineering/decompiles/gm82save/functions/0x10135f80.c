// rea decompile_all
// name: FUN_10135f80
// address: 0x10135f80
// body: available
// range: 0x10135f80-0x10136304 inclusive
// range: 0x10136310-0x10136451 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10135f80(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  LPVOID pvVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  uint *local_81c;
  uint *local_818 [2];
  undefined8 auStack_810 [127];
  undefined1 local_414 [8];
  undefined8 auStack_40c [127];

  uVar13 = param_2 * 8;
  uVar8 = *(uint *)(*param_1 + 0x84);
  uVar14 = *(uint *)(*param_1 + 0x80);
  if (0x1fffffff < param_2 || 0x7ffffffc < uVar13) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar10 = param_1[2];
  iVar2 = param_1[1];
  if (uVar13 == 0) {
    puVar6 = &DAT_00000004;
  }
  else {
    puVar6 = FUN_10107380(0,uVar13);
    if (puVar6 == (undefined1 *)0x0) {
      FUN_101366bc(4);
      goto LAB_1013643f;
    }
  }
  if (uVar14 != uVar8) {
    do {
      uVar13 = uVar14 + 1;
      *(undefined8 *)(puVar6 + (uVar14 & param_2 - 1) * 8) =
           *(undefined8 *)(iVar2 + (uVar14 & iVar10 - 1U) * 8);
      uVar14 = uVar13;
    } while (uVar8 != uVar13);
  }
  piVar7 = FUN_100bea60();
  piVar12 = DAT_101630cc;
  if (piVar7 == (int *)0x0) {
    if (DAT_101630c8 == 0) {
      LOCK();
      iVar10 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar12 == 0 || SCARRY4(iVar10,1) != *piVar12 < 0) {
LAB_1013643f:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    else {
      FUN_101373c0();
      piVar12 = DAT_101630cc;
      LOCK();
      iVar10 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar12 == 0 || SCARRY4(iVar10,1) != *piVar12 < 0) goto LAB_1013643f;
    }
    iVar10 = -0x400;
    do {
      *(undefined8 *)((int)auStack_40c + iVar10 + -4) = 0;
      *(undefined8 *)(&stack0xfffffbe8 + iVar10) = 0x1009e1b0;
      iVar10 = iVar10 + 0x10;
    } while (iVar10 != 0);
    pvVar11 = FUN_10107380(0,0x4c0);
    if (pvVar11 == (LPVOID)0x0) {
      FUN_1013679e(0x40,0x480);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = (uint)pvVar11 & 0xffffffc0;
    *(LPVOID *)(uVar14 + 0x3c) = pvVar11;
    *(undefined4 *)(uVar14 + 0x40) = 0;
    puVar15 = (uint *)(uVar14 + 0x40);
    *(int **)(uVar14 + 0x44) = piVar12;
    memcpy((void *)(uVar14 + 0x48),local_818,0x400);
    *(undefined4 *)(uVar14 + 0x448) = 0;
    *(undefined4 *)(uVar14 + 0x44c) = 0;
    *(undefined4 *)(uVar14 + 0x450) = 1;
    *(undefined4 *)(uVar14 + 0x454) = 0;
    *(undefined4 *)(uVar14 + 0x480) = 0;
    uVar8 = piVar12[0x40];
    *(uint *)(uVar14 + 0x40) = uVar8;
    LOCK();
    uVar13 = piVar12[0x40];
    bVar16 = uVar8 == uVar13;
    if (bVar16) {
      piVar12[0x40] = (int)puVar15;
      uVar13 = uVar8;
    }
    UNLOCK();
    while (!bVar16) {
      *puVar15 = uVar13;
      LOCK();
      uVar8 = piVar12[0x40];
      bVar16 = uVar13 == uVar8;
      if (bVar16) {
        piVar12[0x40] = (int)puVar15;
        uVar8 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar8;
    }
    iVar10 = *(int *)(uVar14 + 0x44c);
    local_818[0] = puVar15;
    if (iVar10 == -1) goto LAB_101363d0;
    *(int *)(uVar14 + 0x44c) = iVar10 + 1;
    if (iVar10 == 0) {
      LOCK();
      if (*(uint *)(uVar14 + 0x480) == 0) {
        *(uint *)(uVar14 + 0x480) = *(uint *)(*(int *)(uVar14 + 0x44) + 0xc0) | 1;
      }
      UNLOCK();
      uVar13 = *(uint *)(uVar14 + 0x454);
      *(uint *)(uVar14 + 0x454) = uVar13 + 1;
      if ((uVar13 & 0x7f) == 0) {
        FUN_10137010((uint *)(*(int *)(uVar14 + 0x44) + 0x40),(int *)local_818);
      }
    }
    iVar10 = *(int *)(uVar14 + 0x450);
    *(int *)(uVar14 + 0x450) = iVar10 + -1;
    if (iVar10 == 1 && *(int *)(uVar14 + 0x44c) == 0) {
      FUN_10136e40(puVar15);
    }
  }
  else {
    puVar15 = (uint *)*piVar7;
    uVar13 = puVar15[0x103];
    local_818[0] = puVar15;
    if (uVar13 == 0xffffffff) {
LAB_101363d0:
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151518);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar15[0x103] = uVar13 + 1;
    if (uVar13 == 0) {
      LOCK();
      if (puVar15[0x110] == 0) {
        puVar15[0x110] = *(uint *)(puVar15[1] + 0xc0) | 1;
      }
      UNLOCK();
      uVar13 = puVar15[0x105];
      puVar15[0x105] = uVar13 + 1;
      if ((uVar13 & 0x7f) == 0) {
        FUN_10137010((uint *)(puVar15[1] + 0x40),(int *)local_818);
      }
    }
  }
  param_1[1] = (int)puVar6;
  param_1[2] = param_2;
  iVar10 = *param_1;
  local_81c = puVar15;
  puVar9 = FUN_10107380(0,8);
  if (puVar9 == (undefined4 *)0x0) {
    FUN_1013679e(4,8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *puVar9 = puVar6;
  puVar9[1] = param_2;
  LOCK();
  uVar13 = *(uint *)(iVar10 + 0x40);
  *(uint *)(iVar10 + 0x40) = (uint)puVar9;
  UNLOCK();
  puVar1 = puVar15 + 2;
  uVar8 = puVar15[0x102];
  while( true ) {
    if (uVar8 < 0x40) {
      puVar1[uVar8 * 4] = (uint)&LAB_100bec40;
      puVar15[uVar8 * 4 + 3] = uVar13;
      puVar15[0x102] = puVar15[0x102] + 1;
      if (0x7f < param_2) {
        FUN_1009e1e0((int *)&local_81c);
      }
      puVar1 = puVar15 + 0x103;
      *puVar1 = *puVar1 - 1;
      if ((*puVar1 == 0) && (puVar15[0x110] = 0, puVar15[0x104] == 0)) {
        FUN_10136e40(puVar15);
      }
      return;
    }
    uVar8 = puVar15[1];
    iVar10 = -0x400;
    do {
      *(undefined8 *)(&stack0xfffffff4 + iVar10) = 0;
      *(undefined8 *)(&stack0xffffffec + iVar10) = 0x1009e1b0;
      iVar10 = iVar10 + 0x10;
    } while (iVar10 != 0);
    memcpy(local_818,puVar1,0x404);
    memcpy(puVar1,local_414,0x400);
    puVar15[0x102] = 0;
    uVar3 = *(undefined4 *)(uVar8 + 0xc0);
    pvVar11 = FUN_10107380(0,0x40c);
    if (pvVar11 == (LPVOID)0x0) break;
    memcpy(pvVar11,local_818,0x404);
    *(undefined4 *)((int)pvVar11 + 0x404) = uVar3;
    *(undefined4 *)((int)pvVar11 + 0x408) = 0;
    do {
      while( true ) {
        uVar14 = *(uint *)(uVar8 + 0x80);
        uVar4 = *(uint *)((uVar14 & 0xfffffffc) + 0x408);
        if (uVar4 < 4) break;
        LOCK();
        if (uVar14 == *(uint *)(uVar8 + 0x80)) {
          *(uint *)(uVar8 + 0x80) = uVar4;
        }
        UNLOCK();
      }
      piVar12 = (int *)((uVar14 & 0xfffffffc) + 0x408);
      LOCK();
      bVar16 = *piVar12 == 0;
      if (bVar16) {
        *piVar12 = (int)pvVar11;
      }
      UNLOCK();
    } while (!bVar16);
    LOCK();
    if (uVar14 == *(uint *)(uVar8 + 0x80)) {
      *(uint *)(uVar8 + 0x80) = (uint)pvVar11;
    }
    UNLOCK();
    uVar8 = puVar15[0x102];
  }
  FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
