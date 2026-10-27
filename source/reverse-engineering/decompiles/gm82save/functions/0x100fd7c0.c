// rea decompile_all
// name: FUN_100fd7c0
// address: 0x100fd7c0
// body: available
// range: 0x100fd7c0-0x100fd93e inclusive
// range: 0x100fd940-0x100fda19 inclusive
// range: 0x100fda20-0x100fde2c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fd7c0(undefined4 *param_1,int *param_2,byte param_3)

{
  SIZE_T *pSVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  SIZE_T _Size;
  char *pcVar5;
  void *pvVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  LPVOID pvVar11;
  byte bVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  iVar3 = *param_2;
  if (*(int *)(iVar3 + 0x40) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154334);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  pSVar1 = (SIZE_T *)(iVar3 + 0x50);
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  uVar4 = *(undefined4 *)(iVar3 + 0x58);
  uVar2 = *(undefined8 *)(iVar3 + 0x50);
  iVar18 = *(int *)(&DAT_10160684 + (uint)param_3 * 4);
  _Size = param_2[2];
  uVar8 = FUN_100f0c40(param_2);
  if (((9 < uVar8 - 0x30) && (5 < uVar8 - 0x61)) && (5 < uVar8 - 0x41)) {
LAB_100fdd06:
    uVar8 = *pSVar1;
    uVar9 = FUN_100f0c40(param_2);
    uVar17 = 1;
    if ((0x7f < uVar9) && (uVar17 = 2, 0x7ff < uVar9)) {
      uVar17 = 4 - (uVar9 < 0x10000);
    }
    if (CARRY4(uVar17,uVar8)) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (*(int *)(iVar3 + 0x58) == -1) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    iVar18 = *(int *)(iVar3 + 0x54);
    iVar21 = *(int *)(iVar3 + 0x58) + 1;
    uVar9 = FUN_100f0c40(param_2);
    pvVar11 = (LPVOID)0x1;
    if (uVar9 == 10) {
      iVar21 = 1;
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x58);
    uVar2 = *(undefined8 *)pSVar1;
    if (_Size != 0) {
      pvVar6 = (void *)param_2[1];
      pvVar11 = FUN_10107380(0,_Size);
      if (pvVar11 == (LPVOID)0x0) goto LAB_100fde1f;
      memcpy(pvVar11,pvVar6,_Size);
    }
    *(undefined8 *)(param_1 + 10) = uVar2;
    param_1[0xc] = uVar4;
    *param_1 = 9;
    param_1[7] = _Size;
    param_1[8] = pvVar11;
    param_1[9] = _Size;
    param_1[0xd] = uVar17 + uVar8;
    param_1[0xe] = iVar18 + (uint)(uVar9 == 10);
    param_1[0xf] = iVar21;
    goto LAB_100fdcfb;
  }
  uVar9 = FUN_100f0c40(param_2);
  uVar8 = *(uint *)(iVar3 + 0x4c);
  uVar17 = 1;
  if ((0x7f < uVar9) && (uVar17 = 2, 0x7ff < uVar9)) {
    uVar17 = 4 - (uVar9 < 0x10000);
  }
  if (*(int *)(iVar3 + 0x44) - uVar8 < uVar17) {
    FUN_101359e0((uint *)(iVar3 + 0x44),uVar8,uVar17,(LPVOID)0x1,1);
    iVar21 = *(int *)(iVar3 + 0x48);
    if (uVar9 < 0x80) goto LAB_100fd883;
LAB_100fd8b7:
    bVar12 = (byte)uVar9 & 0x3f | 0x80;
    bVar14 = (byte)(uVar9 >> 6);
    if (uVar9 < 0x800) {
      *(byte *)(iVar21 + uVar8) = bVar14 | 0xc0;
      *(byte *)(iVar21 + 1 + uVar8) = bVar12;
    }
    else {
      bVar15 = bVar14 & 0x3f | 0x80;
      bVar14 = (byte)(uVar9 >> 0xc);
      if (uVar9 < 0x10000) {
        *(byte *)(iVar21 + uVar8) = bVar14 | 0xe0;
        *(byte *)(iVar21 + 1 + uVar8) = bVar15;
        *(byte *)(iVar21 + 2 + uVar8) = bVar12;
      }
      else {
        *(byte *)(iVar21 + uVar8) = (byte)(uVar9 >> 0x12) | 0xf0;
        *(byte *)(iVar21 + 1 + uVar8) = bVar14 & 0x3f | 0x80;
        *(byte *)(iVar21 + 2 + uVar8) = bVar15;
        *(byte *)(iVar21 + 3 + uVar8) = bVar12;
      }
    }
  }
  else {
    iVar21 = *(int *)(iVar3 + 0x48);
    if (0x7f < uVar9) goto LAB_100fd8b7;
LAB_100fd883:
    *(byte *)(iVar21 + uVar8) = (byte)uVar9;
  }
  *(uint *)(iVar3 + 0x4c) = uVar17 + uVar8;
  iVar18 = iVar18 + -1;
  do {
    uVar10 = FUN_100f1250(param_2);
    if (((char)uVar10 == '\0') || (FUN_100f0910(param_2), *pSVar1 == _Size)) {
      uVar4 = *(undefined4 *)(iVar3 + 0x58);
      uStack_44 = (undefined4)*(undefined8 *)pSVar1;
      uStack_40 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
      uVar10 = *(undefined4 *)(iVar3 + 0x58);
      uVar2 = *(undefined8 *)pSVar1;
      if (_Size == 0) {
        pvVar11 = (LPVOID)0x1;
      }
      else {
        pvVar6 = (void *)param_2[1];
        pvVar11 = FUN_10107380(0,_Size);
        if (pvVar11 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        memcpy(pvVar11,pvVar6,_Size);
      }
      *(ulonglong *)(param_1 + 0xe) = CONCAT44(uVar4,uStack_40);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_44,uVar10);
      *(undefined8 *)(param_1 + 10) = uVar2;
      *param_1 = 10;
      param_1[7] = _Size;
      param_1[8] = pvVar11;
      param_1[9] = _Size;
      goto LAB_100fdcfb;
    }
    uVar8 = FUN_100f0c40(param_2);
    if (((9 < uVar8 - 0x30) && (5 < uVar8 - 0x41)) && (5 < uVar8 - 0x61)) goto LAB_100fdd06;
    uVar8 = FUN_100f0c40(param_2);
    uVar9 = 1;
    if ((0x7f < uVar8) && (uVar9 = 2, 0x7ff < uVar8)) {
      uVar9 = 4 - (uVar8 < 0x10000);
    }
    uVar17 = *(uint *)(iVar3 + 0x4c);
    if (*(int *)(iVar3 + 0x44) - uVar17 < uVar9) {
      FUN_101359e0((uint *)(iVar3 + 0x44),uVar17,uVar9,(LPVOID)0x1,1);
      iVar21 = *(int *)(iVar3 + 0x48);
      if (0x7f < uVar8) goto LAB_100fd9f6;
LAB_100fd940:
      *(byte *)(iVar21 + uVar17) = (byte)uVar8;
    }
    else {
      iVar21 = *(int *)(iVar3 + 0x48);
      if (uVar8 < 0x80) goto LAB_100fd940;
LAB_100fd9f6:
      bVar12 = (byte)uVar8 & 0x3f | 0x80;
      bVar14 = (byte)(uVar8 >> 6);
      if (uVar8 < 0x800) {
        *(byte *)(iVar21 + uVar17) = bVar14 | 0xc0;
        *(byte *)(iVar21 + 1 + uVar17) = bVar12;
      }
      else {
        bVar15 = bVar14 & 0x3f | 0x80;
        bVar14 = (byte)(uVar8 >> 0xc);
        if (uVar8 < 0x10000) {
          *(byte *)(iVar21 + uVar17) = bVar14 | 0xe0;
          *(byte *)(iVar21 + 1 + uVar17) = bVar15;
          *(byte *)(iVar21 + 2 + uVar17) = bVar12;
        }
        else {
          *(byte *)(iVar21 + uVar17) = (byte)(uVar8 >> 0x12) | 0xf0;
          *(byte *)(iVar21 + 1 + uVar17) = bVar14 & 0x3f | 0x80;
          *(byte *)(iVar21 + 2 + uVar17) = bVar15;
          *(byte *)(iVar21 + 3 + uVar17) = bVar12;
        }
      }
    }
    *(uint *)(iVar3 + 0x4c) = uVar9 + uVar17;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  uVar10 = FUN_100f1250(param_2);
  if ((char)uVar10 != '\0') {
    FUN_100f0910(param_2);
  }
  iVar18 = *(int *)(iVar3 + 0x4c);
  if (iVar18 != 0) {
    pcVar5 = *(char **)(iVar3 + 0x48);
    if (iVar18 == 1) {
      cVar16 = *pcVar5;
      if ((cVar16 == '+') || (cVar16 == '-')) goto LAB_100fdc6b;
    }
    else {
      cVar16 = *pcVar5;
    }
    uVar9 = 0;
    uVar8 = iVar18 - (uint)(cVar16 == '+');
    pbVar13 = (byte *)(pcVar5 + (cVar16 == '+'));
    if (uVar8 < 9) {
      if (uVar8 != 0) {
        do {
          uVar19 = (uint)*pbVar13;
          uVar17 = uVar19 - 0x30;
          if (0x39 < uVar19) {
            uVar17 = (uVar19 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar17) goto LAB_100fdc6b;
          pbVar13 = pbVar13 + 1;
          uVar9 = uVar9 << 4 | uVar17;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
LAB_100fdbab:
        if ((uVar9 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_100fdc6b;
      }
      uStack_1c = (undefined4)*(undefined8 *)pSVar1;
      uStack_18 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
      uVar10 = *(undefined4 *)(iVar3 + 0x58);
      param_1[1] = uVar9;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_1c,uVar4);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(ulonglong *)(param_1 + 6) = CONCAT44(uVar10,uStack_18);
      *(undefined1 *)(param_1 + 8) = 4;
      *(byte *)((int)param_1 + 0x21) = param_3;
      *param_1 = 0xffffffff;
      goto LAB_100fdcfb;
    }
    do {
      bVar22 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar22) goto LAB_100fdbab;
      if (0xfffffff < uVar9) break;
      uVar20 = (uint)*pbVar13;
      pbVar13 = pbVar13 + 1;
      uVar19 = uVar9 * 0x10;
      uVar17 = uVar20 - 0x30;
      if (0x39 < uVar20) {
        uVar17 = (uVar20 - 0x41 & 0xffffffdf) + 10;
      }
      uVar9 = uVar17 + uVar19;
    } while (!CARRY4(uVar17,uVar19) && uVar17 < 0x10);
  }
LAB_100fdc6b:
  uVar10 = *(undefined4 *)(iVar3 + 0x58);
  uStack_44 = (undefined4)*(undefined8 *)pSVar1;
  uStack_40 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
  if (_Size == 0) {
    pvVar11 = (LPVOID)0x1;
  }
  else {
    pvVar6 = (void *)param_2[1];
    pvVar11 = FUN_10107380(0,_Size);
    if (pvVar11 == (LPVOID)0x0) {
LAB_100fde1f:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    memcpy(pvVar11,pvVar6,_Size);
  }
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(uVar10,uStack_40);
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_44,uVar4);
  *(undefined8 *)(param_1 + 10) = uVar2;
  *param_1 = 8;
  param_1[7] = _Size;
  param_1[8] = pvVar11;
  param_1[9] = _Size;
LAB_100fdcfb:
  *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + 1;
  return;
}
