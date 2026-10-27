// rea decompile_all
// name: FUN_100f0d00
// address: 0x100f0d00
// body: available
// range: 0x100f0d00-0x100f1247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f0d00(undefined8 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  SIZE_T SVar7;
  void *pvVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  HANDLE pvVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  LPVOID pvVar18;
  int iVar19;
  undefined8 uVar20;
  uint *local_74;
  int iStack_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  iVar15 = *param_2;
  param_3[8] = *(int *)(iVar15 + 0x58);
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(iVar15 + 0x50);
  if (*(int *)(iVar15 + 0x10) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10153d90);
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  *(undefined4 *)(iVar15 + 0x10) = 0xffffffff;
  if (*(int *)(iVar15 + 0x1c) == 0) {
LAB_100f0d76:
    uVar20 = FUN_100f9590(param_3);
LAB_100f0e24:
    uStack_4c = (uint)uVar20;
    local_48 = (undefined4)((ulonglong)uVar20 >> 0x20);
    local_50 = 0xffffffff;
    if (*(int *)(iVar15 + 0x1c) != 0) {
      iVar13 = *(int *)(iVar15 + 0x1c) + -1;
      *(int *)(iVar15 + 0x1c) = iVar13;
      iVar13 = iVar13 * 0x70;
      iVar14 = *(int *)(iVar15 + 0x18);
      iVar3 = *(int *)(iVar14 + iVar13);
      if (iVar3 != -2) {
        if (iVar3 == -1) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10153d80);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        puVar17 = *(uint **)(iVar14 + 4 + iVar13);
        iVar19 = iVar14 + iVar13;
        iVar10 = *(int *)(iVar14 + 8 + iVar13);
        uVar20 = *(undefined8 *)(iVar19 + 100);
        pvVar4 = *(LPVOID *)(iVar14 + 0x24 + iVar13);
        pvVar5 = *(LPVOID *)(iVar14 + 0x28 + iVar13);
        pvVar6 = *(LPVOID *)(iVar14 + 0x2c + iVar13);
        puVar16 = *(uint **)(iVar14 + 0x50 + iVar13);
        uVar1 = *(undefined8 *)(iVar19 + 0x54);
        uVar2 = *(undefined8 *)(iVar19 + 0x5c);
        pvVar18 = (LPVOID)0x1;
        SVar7 = param_2[2];
        if (SVar7 != 0) {
          pvVar8 = (void *)param_2[1];
          pvVar18 = FUN_10107380(0,SVar7);
          if (pvVar18 == (LPVOID)0x0) {
LAB_100f123a:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          memcpy(pvVar18,pvVar8,SVar7);
        }
        param_1[7] = uVar20;
        param_1[6] = uVar2;
        param_1[5] = uVar1;
        *(undefined4 *)param_1 = 0x15;
        *(SIZE_T *)((int)param_1 + 0x1c) = SVar7;
        *(LPVOID *)(param_1 + 4) = pvVar18;
        *(SIZE_T *)((int)param_1 + 0x24) = SVar7;
        iVar14 = 1;
        if ((int)pvVar4 < 0) {
          iVar14 = (int)pvVar4 + -0x80000000;
        }
        if (iVar14 != 0) {
          if (iVar14 == 1) {
            pvVar6 = pvVar5;
            pvVar5 = pvVar4;
          }
          if (pvVar5 != (LPVOID)0x0) {
            pvVar12 = GetProcessHeap();
            HeapFree(pvVar12,0,pvVar6);
          }
        }
        FUN_100f4d00(puVar16);
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,puVar16);
        FUN_100f4d00(&uStack_4c);
        *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
        puVar16 = puVar17;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          FUN_100f4d00(puVar16);
          puVar16 = puVar16 + 2;
        }
        goto joined_r0x100f1122;
      }
    }
    param_1[6] = local_20;
    param_1[5] = local_28;
    param_1[7] = local_18;
    param_1[4] = local_30;
    param_1[3] = local_38;
    param_1[2] = local_40;
    *param_1 = CONCAT44(uStack_4c,0xffffffff);
    param_1[1] = CONCAT44(uStack_44,local_48);
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
  }
  else {
    iVar10 = *(int *)(iVar15 + 0x1c) + -1;
    *(int *)(iVar15 + 0x1c) = iVar10;
    iVar10 = iVar10 * 0x70;
    iVar3 = *(int *)(iVar15 + 0x18);
    puVar16 = *(uint **)(iVar3 + 4 + iVar10);
    iVar13 = *(int *)(iVar3 + iVar10);
    iVar14 = iVar3 + iVar10;
    iVar19 = *(int *)(iVar3 + 8 + iVar10);
    if (iVar13 == -1) {
      local_6c = *(undefined8 *)(iVar14 + 0xc);
      local_64 = *(undefined8 *)(iVar14 + 0x14);
      local_5c = *(undefined8 *)(iVar15 + 0x50);
      local_54 = *(undefined4 *)(iVar15 + 0x58);
      local_74 = puVar16;
      iStack_70 = iVar19;
      uVar20 = FUN_100f9590(param_3);
      puVar17 = (uint *)local_6c;
      if ((uint *)local_6c == puVar16) {
        FUN_10135ee0((uint *)&local_74);
        iVar19 = iStack_70;
      }
      *(int *)(iVar19 + (int)puVar17 * 8) = (int)uVar20;
      *(int *)(iVar19 + 4 + (int)puVar17 * 8) = (int)((ulonglong)uVar20 >> 0x20);
      local_6c = CONCAT44(local_6c._4_4_,(int)puVar17 + 1);
      puVar11 = FUN_10107380(0,0x24);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_1013679e(4,0x24);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      *(undefined4 *)(puVar11 + 4) = local_54;
      uVar20 = CONCAT44(puVar11,10);
      puVar11[3] = local_5c;
      puVar11[2] = local_64;
      puVar11[1] = local_6c;
      *puVar11 = CONCAT44(iStack_70,local_74);
      goto LAB_100f0e24;
    }
    if (iVar13 == -2) goto LAB_100f0d76;
    pvVar4 = *(LPVOID *)(iVar3 + 0x24 + iVar10);
    uVar20 = *(undefined8 *)(iVar14 + 100);
    pvVar5 = *(LPVOID *)(iVar3 + 0x28 + iVar10);
    pvVar6 = *(LPVOID *)(iVar3 + 0x2c + iVar10);
    puVar17 = *(uint **)(iVar3 + 0x50 + iVar10);
    uVar1 = *(undefined8 *)(iVar14 + 0x54);
    uVar2 = *(undefined8 *)(iVar14 + 0x5c);
    pvVar18 = (LPVOID)0x1;
    SVar7 = param_2[2];
    if (SVar7 != 0) {
      pvVar8 = (void *)param_2[1];
      pvVar18 = FUN_10107380(0,SVar7);
      if (pvVar18 == (LPVOID)0x0) goto LAB_100f123a;
      memcpy(pvVar18,pvVar8,SVar7);
    }
    param_1[7] = uVar20;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    *(undefined4 *)param_1 = 0x15;
    *(SIZE_T *)((int)param_1 + 0x1c) = SVar7;
    *(LPVOID *)(param_1 + 4) = pvVar18;
    *(SIZE_T *)((int)param_1 + 0x24) = SVar7;
    iVar14 = 1;
    if ((int)pvVar4 < 0) {
      iVar14 = (int)pvVar4 + -0x80000000;
    }
    if (iVar14 != 0) {
      if (iVar14 == 1) {
        pvVar6 = pvVar5;
        pvVar5 = pvVar4;
      }
      if (pvVar5 != (LPVOID)0x0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pvVar6);
      }
    }
    FUN_100f4d00(puVar17);
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,puVar17);
    puVar17 = puVar16;
    for (; iVar19 != 0; iVar19 = iVar19 + -1) {
      FUN_100f4d00(puVar17);
      puVar17 = puVar17 + 2;
    }
    if (iVar13 != 0) {
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,puVar16);
    }
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
    puVar17 = (uint *)param_3[1];
    puVar16 = puVar17;
    for (iVar15 = param_3[2]; iVar15 != 0; iVar15 = iVar15 + -1) {
      FUN_100f4d00(puVar16);
      puVar16 = puVar16 + 2;
    }
    iVar3 = *param_3;
joined_r0x100f1122:
    if (iVar3 != 0) {
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,puVar17);
    }
  }
  return;
}
