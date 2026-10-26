// rea decompile_all
// name: FUN_1003ad50
// address: 0x1003ad50
// body: available
// range: 0x1003ad50-0x1003bc15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003ad50(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  uint *lpMem;
  HANDLE hHeap;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;

  local_18 = param_1;
  switch(param_2) {
  case 1:
    uVar4 = _DAT_0077f0e0;
    uVar8 = _DAT_0077f0e0 * 4;
    iVar11 = 4;
    if (_DAT_0077f0d0 != 0) {
      iVar11 = _DAT_0077f0d0;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) {
LAB_1003bc05:
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b640;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b640;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b640:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f0e0;
      if (_DAT_0077f0e0 <= uVar4) {
LAB_1003bbf6:
        FUN_10136b52(uVar4,uVar8,&PTR_s_src_lib_rs_1013f6d0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      iVar9 = _DAT_0077f0d8;
      if (_DAT_0077f0d8 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 1;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 2:
    uVar4 = _DAT_0077f4d8;
    uVar8 = _DAT_0077f4d8 * 4;
    iVar11 = 4;
    if (_DAT_0077f4c4 != 0) {
      iVar11 = _DAT_0077f4c4;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b710;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b710;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b710:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f4d8;
      if (_DAT_0077f4d8 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f4cc;
      if (_DAT_0077f4cc == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 2;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 3:
    uVar4 = _DAT_0077f2c8;
    uVar8 = _DAT_0077f2c8 * 4;
    iVar11 = 4;
    if (_DAT_0077f2b8 != 0) {
      iVar11 = _DAT_0077f2b8;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b4a0;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b4a0;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b4a0:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f2c8;
      if (_DAT_0077f2c8 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f2c0;
      if (_DAT_0077f2c0 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 3;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 4:
    uVar4 = _DAT_0077f3b8;
    uVar8 = _DAT_0077f3b8 * 4;
    iVar11 = 4;
    if (_DAT_0077f3a8 != 0) {
      iVar11 = _DAT_0077f3a8;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b980;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b980;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b980:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f3b8;
      if (_DAT_0077f3b8 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f3b0;
      if (_DAT_0077f3b0 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 4;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  default:
    goto switchD_1003ad77_caseD_5;
  case 6:
    uVar4 = _DAT_0077f1c0;
    uVar8 = _DAT_0077f1c0 * 4;
    iVar11 = 4;
    if (_DAT_0077f1ac != 0) {
      iVar11 = _DAT_0077f1ac;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003ba50;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003ba50;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003ba50:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f1c0;
      if (_DAT_0077f1c0 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f1b4;
      if (_DAT_0077f1b4 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 6;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 7:
    uVar4 = _DAT_0077f2dc;
    uVar8 = _DAT_0077f2dc * 4;
    iVar11 = 4;
    if (_DAT_0077f2cc != 0) {
      iVar11 = _DAT_0077f2cc;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b570;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b570;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b570:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f2dc;
      if (_DAT_0077f2dc <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f2d4;
      if (_DAT_0077f2d4 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 7;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 8:
    uVar4 = _DAT_0077f618;
    uVar8 = _DAT_0077f618 * 4;
    iVar11 = 4;
    if (_DAT_0077f608 != 0) {
      iVar11 = _DAT_0077f608;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b7e0;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b7e0;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b7e0:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f618;
      if (_DAT_0077f618 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f610;
      if (_DAT_0077f610 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 8;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 9:
    uVar4 = _DAT_0077f50c;
    uVar8 = _DAT_0077f50c * 4;
    iVar11 = 4;
    if (_DAT_0077f4fc != 0) {
      iVar11 = _DAT_0077f4fc;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003b8b0;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003b8b0;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003b8b0:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f50c;
      if (_DAT_0077f50c <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f504;
      if (_DAT_0077f504 == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 9;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
    break;
  case 0xc:
    uVar4 = _DAT_0077f4f4;
    uVar8 = _DAT_0077f4f4 * 4;
    iVar11 = 4;
    if (_DAT_0077f4e4 != 0) {
      iVar11 = _DAT_0077f4e4;
    }
    do {
      uVar7 = uVar8;
      if (uVar7 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar7 - 4;
    } while (*(int *)(iVar11 + -4 + uVar7) == 0);
    lpMem = FUN_10107380(0,0x10);
    if (lpMem == (uint *)0x0) goto LAB_1003bc05;
    *lpMem = uVar4;
    piVar3 = (int *)(iVar11 + -4 + uVar8);
    uVar4 = uVar7 - 4 >> 2;
    do {
      if (uVar8 == 0) {
        iVar10 = 4;
        goto LAB_1003bb20;
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 - 4;
      iVar10 = *piVar3;
      piVar3 = piVar3 + -1;
    } while (iVar10 == 0);
    lpMem[1] = uVar4;
    iVar9 = -uVar8;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (iVar9 == 0) {
        iVar10 = 8;
        goto LAB_1003bb20;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar6 + -1;
    } while (piVar3[iVar6] == 0);
    iVar10 = 0xc;
    lpMem[2] = ((uVar8 >> 2) - 1) + iVar6;
LAB_1003bb20:
    do {
      uVar4 = *(uint *)((int)lpMem + iVar10 + -4);
      uVar8 = _DAT_0077f4f4;
      if (_DAT_0077f4f4 <= uVar4) goto LAB_1003bbf6;
      iVar9 = _DAT_0077f4ec;
      if (_DAT_0077f4ec == 0) {
        iVar9 = 4;
      }
      uVar1 = *(undefined4 *)(iVar9 + uVar4 * 4);
      local_28 = 0;
      local_24 = 3;
      local_20 = 0xc;
      puVar5 = (undefined *)0x0;
      if (param_3[-5] != '\0') {
        puVar5 = param_3;
      }
      local_1c = uVar4;
      (*(code *)0x407ea0)();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_10141d24;
      }
      (*(code *)0x71c3fc)(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc),
                          *(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x14),
                          *(undefined4 *)(puVar5 + 0x18),*(undefined4 *)(puVar5 + 0x1c),iVar11,lpMem
                          ,0x49614c,0,uVar1,&local_28);
      (*(code *)0x407ea8)();
      iVar10 = iVar10 + -4;
    } while (iVar10 != 0);
  }
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,lpMem);
switchD_1003ad77_caseD_5:
  return;
}
