// rea decompile_all
// name: FUN_101395d0
// address: 0x101395d0
// body: available
// range: 0x101395d0-0x10139944 inclusive
// range: 0x10139950-0x10139a91 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101395d0(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  LPVOID pvVar6;
  int *piVar7;
  LPVOID pvVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  uint *local_81c;
  uint *local_818 [2];
  undefined8 auStack_810 [127];
  undefined1 local_414 [8];
  undefined8 auStack_40c [127];

  uVar9 = *(uint *)(*param_1 + 0x84);
  uVar10 = *(uint *)(*param_1 + 0x80);
  if (0x1fffffff < param_2 || 0x7ffffffc < param_2 * 8) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar12 = param_1[2];
  iVar2 = param_1[1];
  pvVar6 = FUN_10107380(0,param_2 * 8);
  if (pvVar6 == (LPVOID)0x0) {
    FUN_101366bc(4);
    goto LAB_10139a7f;
  }
  if (uVar10 != uVar9) {
    do {
      uVar14 = uVar10 + 1;
      *(undefined8 *)((int)pvVar6 + (uVar10 & param_2 - 1) * 8) =
           *(undefined8 *)(iVar2 + (uVar10 & iVar12 - 1U) * 8);
      uVar10 = uVar14;
    } while (uVar9 != uVar14);
  }
  piVar7 = FUN_100bea60();
  piVar13 = DAT_101630cc;
  if (piVar7 == (int *)0x0) {
    if (DAT_101630c8 == 0) {
      LOCK();
      iVar12 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar13 == 0 || SCARRY4(iVar12,1) != *piVar13 < 0) {
LAB_10139a7f:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    else {
      FUN_101373c0();
      piVar13 = DAT_101630cc;
      LOCK();
      iVar12 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar13 == 0 || SCARRY4(iVar12,1) != *piVar13 < 0) goto LAB_10139a7f;
    }
    iVar12 = -0x400;
    do {
      *(undefined8 *)((int)auStack_40c + iVar12 + -4) = 0;
      *(undefined8 *)(&stack0xfffffbe8 + iVar12) = 0x1009e1b0;
      iVar12 = iVar12 + 0x10;
    } while (iVar12 != 0);
    pvVar8 = FUN_10107380(0,0x4c0);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_1013679e(0x40,0x480);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = (uint)pvVar8 & 0xffffffc0;
    *(LPVOID *)(uVar14 + 0x3c) = pvVar8;
    *(undefined4 *)(uVar14 + 0x40) = 0;
    puVar15 = (uint *)(uVar14 + 0x40);
    *(int **)(uVar14 + 0x44) = piVar13;
    memcpy((void *)(uVar14 + 0x48),local_818,0x400);
    *(undefined4 *)(uVar14 + 0x448) = 0;
    *(undefined4 *)(uVar14 + 0x44c) = 0;
    *(undefined4 *)(uVar14 + 0x450) = 1;
    *(undefined4 *)(uVar14 + 0x454) = 0;
    *(undefined4 *)(uVar14 + 0x480) = 0;
    uVar10 = piVar13[0x40];
    *(uint *)(uVar14 + 0x40) = uVar10;
    LOCK();
    uVar9 = piVar13[0x40];
    bVar16 = uVar10 == uVar9;
    if (bVar16) {
      piVar13[0x40] = (int)puVar15;
      uVar9 = uVar10;
    }
    UNLOCK();
    while (!bVar16) {
      *puVar15 = uVar9;
      LOCK();
      uVar10 = piVar13[0x40];
      bVar16 = uVar9 == uVar10;
      if (bVar16) {
        piVar13[0x40] = (int)puVar15;
        uVar10 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar10;
    }
    iVar12 = *(int *)(uVar14 + 0x44c);
    local_818[0] = puVar15;
    if (iVar12 == -1) goto LAB_101399ff;
    *(int *)(uVar14 + 0x44c) = iVar12 + 1;
    if (iVar12 == 0) {
      LOCK();
      if (*(uint *)(uVar14 + 0x480) == 0) {
        *(uint *)(uVar14 + 0x480) = *(uint *)(*(int *)(uVar14 + 0x44) + 0xc0) | 1;
      }
      UNLOCK();
      uVar9 = *(uint *)(uVar14 + 0x454);
      *(uint *)(uVar14 + 0x454) = uVar9 + 1;
      if ((uVar9 & 0x7f) == 0) {
        FUN_10137010((uint *)(*(int *)(uVar14 + 0x44) + 0x40),(int *)local_818);
      }
    }
    iVar12 = *(int *)(uVar14 + 0x450);
    *(int *)(uVar14 + 0x450) = iVar12 + -1;
    if (iVar12 == 1 && *(int *)(uVar14 + 0x44c) == 0) {
      FUN_10136e40(puVar15);
    }
  }
  else {
    puVar15 = (uint *)*piVar7;
    uVar9 = puVar15[0x103];
    local_818[0] = puVar15;
    if (uVar9 == 0xffffffff) {
LAB_101399ff:
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151518);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar15[0x103] = uVar9 + 1;
    if (uVar9 == 0) {
      LOCK();
      if (puVar15[0x110] == 0) {
        puVar15[0x110] = *(uint *)(puVar15[1] + 0xc0) | 1;
      }
      UNLOCK();
      uVar9 = puVar15[0x105];
      puVar15[0x105] = uVar9 + 1;
      if ((uVar9 & 0x7f) == 0) {
        FUN_10137010((uint *)(puVar15[1] + 0x40),(int *)local_818);
      }
    }
  }
  param_1[1] = (int)pvVar6;
  param_1[2] = param_2;
  iVar12 = *param_1;
  local_81c = puVar15;
  puVar11 = FUN_10107380(0,8);
  if (puVar11 == (undefined4 *)0x0) {
    FUN_1013679e(4,8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *puVar11 = pvVar6;
  puVar11[1] = param_2;
  LOCK();
  uVar9 = *(uint *)(iVar12 + 0x40);
  *(uint *)(iVar12 + 0x40) = (uint)puVar11;
  UNLOCK();
  puVar1 = puVar15 + 2;
  uVar10 = puVar15[0x102];
  while( true ) {
    if (uVar10 < 0x40) {
      puVar1[uVar10 * 4] = (uint)&LAB_100bec40;
      puVar15[uVar10 * 4 + 3] = uVar9;
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
    uVar10 = puVar15[1];
    iVar12 = -0x400;
    do {
      *(undefined8 *)(&stack0xfffffff4 + iVar12) = 0;
      *(undefined8 *)(&stack0xffffffec + iVar12) = 0x1009e1b0;
      iVar12 = iVar12 + 0x10;
    } while (iVar12 != 0);
    memcpy(local_818,puVar1,0x404);
    memcpy(puVar1,local_414,0x400);
    puVar15[0x102] = 0;
    uVar3 = *(undefined4 *)(uVar10 + 0xc0);
    pvVar6 = FUN_10107380(0,0x40c);
    if (pvVar6 == (LPVOID)0x0) break;
    memcpy(pvVar6,local_818,0x404);
    *(undefined4 *)((int)pvVar6 + 0x404) = uVar3;
    *(undefined4 *)((int)pvVar6 + 0x408) = 0;
    do {
      while( true ) {
        uVar14 = *(uint *)(uVar10 + 0x80);
        uVar4 = *(uint *)((uVar14 & 0xfffffffc) + 0x408);
        if (uVar4 < 4) break;
        LOCK();
        if (uVar14 == *(uint *)(uVar10 + 0x80)) {
          *(uint *)(uVar10 + 0x80) = uVar4;
        }
        UNLOCK();
      }
      piVar13 = (int *)((uVar14 & 0xfffffffc) + 0x408);
      LOCK();
      bVar16 = *piVar13 == 0;
      if (bVar16) {
        *piVar13 = (int)pvVar6;
      }
      UNLOCK();
    } while (!bVar16);
    LOCK();
    if (uVar14 == *(uint *)(uVar10 + 0x80)) {
      *(uint *)(uVar10 + 0x80) = (uint)pvVar6;
    }
    UNLOCK();
    uVar10 = puVar15[0x102];
  }
  FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
