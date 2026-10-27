// rea decompile_all
// name: FUN_10057c80
// address: 0x10057c80
// body: available
// range: 0x10057c80-0x10057e63 inclusive
// range: 0x100582c8-0x100582e4 inclusive
// range: 0x1005840b-0x100584e1 inclusive
// range: 0x100584ee-0x1005863d inclusive
// range: 0x10058694-0x100586a8 inclusive
// range: 0x100586b5-0x10058715 inclusive
// range: 0x10058739-0x10058898 inclusive
// range: 0x10058947-0x10058962 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* WARNING: Removing unreachable block (ram,0x10058873) */
/* WARNING: Removing unreachable block (ram,0x100586fc) */

char * __cdecl FUN_10057c80(char *param_1,uint *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  SIZE_T SVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  LPVOID pvVar8;
  HANDLE pvVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ushort uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  void *pvVar17;
  undefined8 uVar18;
  char cStack_b0;
  SIZE_T SStack_ac;
  SIZE_T *pSStack_a4;
  char cStack_a0;
  LPVOID pvStack_9c;
  LPVOID pvStack_98;
  void *pvStack_94;
  SIZE_T SStack_84;
  void *pvStack_80;
  LPVOID pvStack_7c;
  char cStack_78;
  char cStack_77;
  undefined2 uStack_76;
  void *pvStack_74;
  LPVOID pvStack_70;
  void *pvStack_6c;
  LPVOID pvStack_68;
  SIZE_T SStack_64;
  LPVOID pvStack_60;
  SIZE_T SStack_5c;
  SIZE_T *pSStack_58;
  SIZE_T SStack_50;
  LPVOID pvStack_4c;
  int local_48;
  uint uStack_44;
  void *pvStack_40;
  int iStack_3c;
  void *pvStack_38;
  LPVOID pvStack_34;
  void *pvStack_30;
  LPVOID pvStack_24;
  int iStack_20;
  SIZE_T SStack_1c;

  local_48 = 0x10057c97;
  iVar6 = (*(code *)0x64fb70)();
  FUN_10110c70(param_2,"txt",3);
  pvVar17 = (void *)param_2[1];
  pvStack_94 = (void *)param_2[2];
  FUN_1006b940(&cStack_78,pvVar17,(SIZE_T)pvStack_94);
  cStack_a0 = cStack_78;
  if (cStack_78 == -1) {
    pvStack_38 = pvStack_74;
    pvStack_34 = pvStack_70;
    pSStack_a4 = &SStack_84;
    uStack_44 = 0;
    pvStack_30 = pvStack_6c;
    pvStack_24 = pvStack_60;
    iStack_3c = iVar6 + 0x10;
    SStack_50 = iVar6 + 8;
    pvStack_40 = pvVar17;
    while (FUN_10090ef0((undefined8 *)pSStack_a4,(int *)&pvStack_38), pvVar17 = pvStack_80,
          SStack_84 != 0xfffffffe) {
      if (SStack_84 == 0xffffffff) {
        cStack_a0 = '\0';
        cStack_b0 = (char)pvStack_7c;
        SStack_50 = 0xffffffff;
        pvStack_98 = pvStack_7c;
        pvVar8 = pvStack_38;
joined_r0x100584d7:
        if (pvStack_34 != (LPVOID)0x0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvVar8);
        }
        CloseHandle(pvStack_24);
        pvStack_9c = (LPVOID)0x0;
        SStack_5c = SStack_50;
        goto LAB_10058829;
      }
      if (pvStack_7c != (LPVOID)0x0) {
        pvStack_74 = pvStack_80;
        pvStack_70 = pvStack_7c;
        pvStack_6c = (void *)0x0;
        pvStack_68 = pvStack_7c;
        cStack_78 = '=';
        cStack_77 = '\0';
        uStack_76 = 0;
        pvStack_60 = (LPVOID)CONCAT31(pvStack_60._1_3_,1);
        SStack_64 = 0x3d;
        FUN_10090ba0(&iStack_20,(int)&cStack_78);
        if (iStack_20 == 1) {
          if (SStack_1c - 3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x10057e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(&DAT_10058964 + (SStack_1c - 3) * 4) + local_48))();
            return param_1;
          }
          pvStack_4c = (LPVOID)0x1;
          pvStack_98 = (LPVOID)0x1;
          SStack_ac = SStack_1c;
          pvStack_94 = (void *)param_2[2];
          if (pvStack_94 != (void *)0x0) {
            pvVar17 = (void *)param_2[1];
            pvStack_98 = FUN_10107380(0,(SIZE_T)pvStack_94);
            if (pvStack_98 == (LPVOID)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            memcpy(pvStack_98,pvVar17,(size_t)pvStack_94);
          }
          if (SStack_1c != 0) {
            pvVar8 = FUN_10107380(0,SStack_1c);
            if (pvVar8 == (LPVOID)0x0) {
LAB_10058947:
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            pvStack_4c = pvVar8;
            memcpy(pvVar8,pvStack_80,SStack_1c);
          }
          cStack_b0 = '\a';
        }
        else {
          if (pvStack_94 == (void *)0x0) {
            pvStack_98 = (LPVOID)0x1;
          }
          else {
            pvStack_98 = FUN_10107380(0,(SIZE_T)pvStack_94);
            if (pvStack_98 == (LPVOID)0x0) goto LAB_10058947;
            memcpy(pvStack_98,pvStack_40,(size_t)pvStack_94);
          }
          cStack_b0 = '\x06';
        }
        if (SStack_84 != 0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvStack_80);
        }
        pSStack_a4 = (SIZE_T *)0x0;
        pvVar17 = pvStack_94;
        SStack_50 = SStack_ac;
        pvVar8 = pvStack_38;
        cStack_a0 = cStack_b0;
        goto joined_r0x100584d7;
      }
      if (SStack_84 != 0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar17);
      }
    }
    if (pvStack_34 != (LPVOID)0x0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvStack_38);
    }
    CloseHandle(pvStack_24);
    if ((uStack_44 & 1) != 0) {
      uVar18 = FUN_100022d0(1,0);
      FUN_10110c70(param_2,(char *)uVar18,(uint)((ulonglong)uVar18 >> 0x20));
      pbVar15 = (byte *)param_2[1];
      SVar4 = param_2[2];
      FUN_1005b040(&cStack_78,pbVar15,SVar4);
      if (cStack_78 != -1) {
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(SStack_64,pvStack_68);
        *(SIZE_T **)(param_1 + 0x20) = pSStack_58;
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(SStack_5c,pvStack_60);
        *(ulonglong *)param_1 =
             CONCAT44(pvStack_74,CONCAT22(uStack_76,CONCAT11(cStack_77,cStack_78)));
        *(ulonglong *)(param_1 + 8) = CONCAT44(pvStack_6c,pvStack_70);
        goto LAB_10058867;
      }
      uVar7 = (*(code *)0x405a4c)();
      cStack_78 = '\0';
      cStack_77 = 0;
      uStack_76 = 0;
      if (SVar4 == 0) {
        uVar12 = 0;
      }
      else {
        (*(code *)0x408244)();
        pbVar2 = pbVar15 + SVar4;
        iVar10 = SVar4 * 2;
        iVar11 = 0;
        uVar14 = 0;
        do {
          uVar13 = (ushort)uVar14;
          if (uVar13 == 0) {
            if (pbVar15 == pbVar2) break;
            bVar3 = *pbVar15;
            uVar13 = (ushort)bVar3;
            if (-1 < (char)bVar3) {
              pbVar15 = pbVar15 + 1;
              goto LAB_10058605;
            }
            pbVar1 = pbVar15 + 1;
            uVar14 = bVar3 & 0x1f;
            if (bVar3 < 0xe0) {
              pbVar15 = pbVar15 + 2;
              uVar16 = uVar14 << 6 | *pbVar1 & 0x3f;
LAB_10058601:
              uVar13 = (ushort)uVar16;
              goto LAB_10058605;
            }
            uVar16 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar3 < 0xf0) {
              uVar16 = uVar16 | uVar14 << 0xc;
              pbVar15 = pbVar15 + 3;
            }
            else {
              pbVar1 = pbVar15 + 3;
              pbVar15 = pbVar15 + 4;
              uVar16 = *pbVar1 & 0x3f | uVar16 << 6 | (bVar3 & 7) << 0x12;
            }
            if (uVar16 < 0x10000) goto LAB_10058601;
            uVar14 = uVar16 & 0x3ff | 0xdc00;
            uVar13 = (ushort)(uVar16 + 0xff0000 >> 10) | 0xd800;
          }
          else {
LAB_10058605:
            uVar14 = 0;
          }
          *(ushort *)(CONCAT22(uStack_76,CONCAT11(cStack_77,cStack_78)) + iVar11 * 2) = uVar13;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + -2;
        } while (iVar10 != 0);
        (*(code *)0x408244)();
        uVar12 = CONCAT22(uStack_76,CONCAT11(cStack_77,cStack_78));
      }
      cStack_78 = (char)uVar12;
      cStack_77 = (char)((uint)uVar12 >> 8);
      uStack_76 = (undefined2)((uint)uVar12 >> 0x10);
      (*(code *)0x43ff44)();
      (*(code *)0x407ea8)();
      if (*(int *)(iVar6 + 0x2c) != 0) {
        (*(code *)0x405a7c)();
      }
      *(undefined4 *)(iVar6 + 0x2c) = uVar7;
    }
    *(int *)(param_1 + 4) = iVar6;
    *param_1 = -1;
  }
  else {
    local_48 = CONCAT22(local_48._2_2_,uStack_76);
    pSStack_a4 = pSStack_58;
    pvStack_94 = pvStack_6c;
    pvStack_9c = pvStack_68;
    SStack_ac = SStack_64;
    pvStack_4c = pvStack_60;
    pvStack_98 = pvStack_70;
    pvVar17 = pvStack_74;
    cStack_b0 = cStack_77;
LAB_10058829:
    *param_1 = cStack_a0;
    param_1[1] = cStack_b0;
    *(undefined2 *)(param_1 + 2) = (undefined2)local_48;
    *(void **)(param_1 + 4) = pvVar17;
    *(LPVOID *)(param_1 + 8) = pvStack_98;
    *(void **)(param_1 + 0xc) = pvStack_94;
    *(LPVOID *)(param_1 + 0x10) = pvStack_9c;
    *(SIZE_T *)(param_1 + 0x14) = SStack_ac;
    *(LPVOID *)(param_1 + 0x18) = pvStack_4c;
    *(SIZE_T *)(param_1 + 0x1c) = SStack_5c;
    *(SIZE_T **)(param_1 + 0x20) = pSStack_a4;
LAB_10058867:
    (*(code *)0x405a7c)();
  }
  return param_1;
}
