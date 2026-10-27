// rea decompile_all
// name: FUN_100be610
// address: 0x100be610
// body: available
// range: 0x100be610-0x100bea50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100be610(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  LPVOID pvVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  uint *local_418 [2];
  undefined8 auStack_410 [128];

  iVar2 = *param_2;
  uVar3 = *(uint *)(iVar2 + 0x80);
  piVar7 = FUN_100bea60();
  piVar8 = DAT_101630cc;
  if (piVar7 != (int *)0x0) {
LAB_100be757:
    piVar8 = FUN_100bea60();
    if (piVar8 != (int *)0x0) goto LAB_100be764;
LAB_100be800:
    piVar8 = DAT_101630cc;
    if (DAT_101630c8 == 0) {
      LOCK();
      iVar9 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar8 == 0 || SCARRY4(iVar9,1) != *piVar8 < 0) goto LAB_100bea4f;
    }
    else {
      FUN_101373c0();
      piVar8 = DAT_101630cc;
      LOCK();
      iVar9 = *DAT_101630cc;
      *DAT_101630cc = *DAT_101630cc + 1;
      UNLOCK();
      if (*piVar8 == 0 || SCARRY4(iVar9,1) != *piVar8 < 0) goto LAB_100bea4f;
    }
    iVar9 = -0x400;
    do {
      *(undefined8 *)(&stack0xfffffff0 + iVar9) = 0;
      *(undefined8 *)((int)auStack_410 + iVar9 + 0x3f8) = 0x1009e1b0;
      iVar9 = iVar9 + 0x10;
    } while (iVar9 != 0);
    pvVar10 = FUN_10107380(0,0x4c0);
    if (pvVar10 == (LPVOID)0x0) goto LAB_100bea40;
    uVar15 = (uint)pvVar10 & 0xffffffc0;
    *(LPVOID *)(uVar15 + 0x3c) = pvVar10;
    puVar14 = (uint *)(uVar15 + 0x40);
    *(undefined4 *)(uVar15 + 0x40) = 0;
    *(int **)(uVar15 + 0x44) = piVar8;
    memcpy((void *)(uVar15 + 0x48),local_418,0x400);
    *(undefined4 *)(uVar15 + 0x448) = 0;
    *(undefined4 *)(uVar15 + 0x44c) = 0;
    *(undefined4 *)(uVar15 + 0x450) = 1;
    *(undefined4 *)(uVar15 + 0x454) = 0;
    *(undefined4 *)(uVar15 + 0x480) = 0;
    uVar11 = piVar8[0x40];
    *(uint *)(uVar15 + 0x40) = uVar11;
    LOCK();
    uVar12 = piVar8[0x40];
    bVar16 = uVar11 == uVar12;
    if (bVar16) {
      piVar8[0x40] = (int)puVar14;
      uVar12 = uVar11;
    }
    UNLOCK();
    while (!bVar16) {
      *puVar14 = uVar12;
      LOCK();
      uVar11 = piVar8[0x40];
      bVar16 = uVar12 == uVar11;
      if (bVar16) {
        piVar8[0x40] = (int)puVar14;
        uVar11 = uVar12;
      }
      UNLOCK();
      uVar12 = uVar11;
    }
    iVar9 = *(int *)(uVar15 + 0x44c);
    local_418[0] = puVar14;
    if (iVar9 == -1) goto LAB_100be9b7;
    *(int *)(uVar15 + 0x44c) = iVar9 + 1;
    if (iVar9 == 0) {
      LOCK();
      if (*(uint *)(uVar15 + 0x480) == 0) {
        *(uint *)(uVar15 + 0x480) = *(uint *)(*(int *)(uVar15 + 0x44) + 0xc0) | 1;
      }
      UNLOCK();
      uVar12 = *(uint *)(uVar15 + 0x454);
      *(uint *)(uVar15 + 0x454) = uVar12 + 1;
      if ((uVar12 & 0x7f) == 0) {
        FUN_10137010((uint *)(*(int *)(uVar15 + 0x44) + 0x40),(int *)local_418);
      }
    }
    iVar9 = *(int *)(uVar15 + 0x450);
    *(int *)(uVar15 + 0x450) = iVar9 + -1;
    if (iVar9 == 1 && *(int *)(uVar15 + 0x44c) == 0) {
      FUN_10136e40(puVar14);
      goto LAB_100be9e0;
    }
    goto LAB_100be94f;
  }
  if (DAT_101630c8 == 0) {
    LOCK();
    iVar9 = *DAT_101630cc;
    *DAT_101630cc = *DAT_101630cc + 1;
    UNLOCK();
    if (*piVar8 == 0 || SCARRY4(iVar9,1) != *piVar8 < 0) goto LAB_100bea4f;
  }
  else {
    FUN_101373c0();
    piVar8 = DAT_101630cc;
    LOCK();
    iVar9 = *DAT_101630cc;
    *DAT_101630cc = *DAT_101630cc + 1;
    UNLOCK();
    if (*piVar8 == 0 || SCARRY4(iVar9,1) != *piVar8 < 0) goto LAB_100bea4f;
  }
  iVar9 = -0x400;
  do {
    *(undefined8 *)(&stack0xfffffff0 + iVar9) = 0;
    *(undefined8 *)((int)auStack_410 + iVar9 + 0x3f8) = 0x1009e1b0;
    iVar9 = iVar9 + 0x10;
  } while (iVar9 != 0);
  pvVar10 = FUN_10107380(0,0x4c0);
  if (pvVar10 == (LPVOID)0x0) {
LAB_100bea40:
    FUN_1013679e(0x40,0x480);
LAB_100bea4f:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar15 = (uint)pvVar10 & 0xffffffc0;
  *(LPVOID *)(uVar15 + 0x3c) = pvVar10;
  puVar14 = (uint *)(uVar15 + 0x40);
  *(undefined4 *)(uVar15 + 0x40) = 0;
  *(int **)(uVar15 + 0x44) = piVar8;
  memcpy((void *)(uVar15 + 0x48),local_418,0x400);
  *(undefined4 *)(uVar15 + 0x448) = 0;
  *(undefined4 *)(uVar15 + 0x44c) = 0;
  *(undefined4 *)(uVar15 + 0x450) = 1;
  *(undefined4 *)(uVar15 + 0x454) = 0;
  *(undefined4 *)(uVar15 + 0x480) = 0;
  uVar11 = piVar8[0x40];
  *(uint *)(uVar15 + 0x40) = uVar11;
  LOCK();
  uVar12 = piVar8[0x40];
  bVar16 = uVar11 == uVar12;
  if (bVar16) {
    piVar8[0x40] = (int)puVar14;
    uVar12 = uVar11;
  }
  UNLOCK();
  while (!bVar16) {
    *puVar14 = uVar12;
    LOCK();
    uVar11 = piVar8[0x40];
    bVar16 = uVar12 == uVar11;
    if (bVar16) {
      piVar8[0x40] = (int)puVar14;
      uVar11 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar11;
  }
  iVar9 = *(int *)(uVar15 + 0x450);
  *(int *)(uVar15 + 0x450) = iVar9 + -1;
  if (iVar9 != 1 || *(int *)(uVar15 + 0x44c) != 0) goto LAB_100be757;
  FUN_10136e40(puVar14);
  piVar8 = FUN_100bea60();
  if (piVar8 == (int *)0x0) goto LAB_100be800;
LAB_100be764:
  puVar14 = (uint *)*piVar8;
  uVar12 = puVar14[0x103];
  local_418[0] = puVar14;
  if (uVar12 == 0xffffffff) {
LAB_100be9b7:
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151518);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  puVar14[0x103] = uVar12 + 1;
  if (uVar12 == 0) {
    LOCK();
    if (puVar14[0x110] == 0) {
      puVar14[0x110] = *(uint *)(puVar14[1] + 0xc0) | 1;
    }
    UNLOCK();
    uVar12 = puVar14[0x105];
    puVar14[0x105] = uVar12 + 1;
    if ((uVar12 & 0x7f) != 0) goto LAB_100be94f;
    FUN_10137010((uint *)(puVar14[1] + 0x40),(int *)local_418);
LAB_100be9e0:
    if (*(uint *)(iVar2 + 0x84) != uVar3 && -1 < (int)(*(uint *)(iVar2 + 0x84) - uVar3))
    goto LAB_100be95f;
LAB_100be9f4:
    uVar13 = 0;
  }
  else {
LAB_100be94f:
    if (*(uint *)(iVar2 + 0x84) == uVar3 || (int)(*(uint *)(iVar2 + 0x84) - uVar3) < 0)
    goto LAB_100be9f4;
LAB_100be95f:
    piVar8 = (int *)(*(uint *)(iVar2 + 0x40) & 0xfffffffc);
    iVar9 = *piVar8;
    uVar12 = piVar8[1] - 1U & uVar3;
    uVar4 = *(undefined4 *)(iVar9 + uVar12 * 8);
    uVar5 = *(undefined4 *)(iVar9 + 4 + uVar12 * 8);
    uVar13 = 2;
    if (*(uint *)(iVar2 + 0x40) == *(uint *)(iVar2 + 0x40)) {
      LOCK();
      bVar16 = uVar3 == *(uint *)(iVar2 + 0x80);
      if (bVar16) {
        *(uint *)(iVar2 + 0x80) = uVar3 + 1;
      }
      UNLOCK();
      if (bVar16) {
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        *param_1 = 1;
        puVar1 = puVar14 + 0x103;
        *puVar1 = *puVar1 - 1;
        uVar3 = *puVar1;
        goto joined_r0x100be9b3;
      }
    }
  }
  *param_1 = uVar13;
  puVar1 = puVar14 + 0x103;
  *puVar1 = *puVar1 - 1;
  uVar3 = *puVar1;
joined_r0x100be9b3:
  if ((uVar3 == 0) && (puVar14[0x110] = 0, puVar14[0x104] == 0)) {
    FUN_10136e40(puVar14);
  }
  return;
}
