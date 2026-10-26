// rea decompile_all
// name: FUN_100fd150
// address: 0x100fd150
// body: available
// range: 0x100fd150-0x100fd21d inclusive
// range: 0x100fd220-0x100fd2f6 inclusive
// range: 0x100fd300-0x100fd569 inclusive
// range: 0x100fd570-0x100fd7b4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fd150(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  SIZE_T *pSVar1;
  int iVar2;
  int iVar3;
  SIZE_T _Size;
  char *pcVar4;
  void *pvVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  LPVOID pvVar20;
  int iVar21;
  bool bVar22;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  uint *local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;

  iVar2 = *param_2;
  if (*(int *)(iVar2 + 0x40) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154268);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  local_20 = *(undefined4 *)(iVar2 + 0x58);
  local_28 = *(undefined8 *)(iVar2 + 0x50);
  uVar9 = *(uint *)(iVar2 + 0x50);
  uVar8 = FUN_100f0c40(param_2);
  uVar13 = 1;
  if ((0x7f < uVar8) && (uVar13 = 2, 0x7ff < uVar8)) {
    uVar13 = 4 - (uVar8 < 0x10000);
  }
  iVar14 = uVar13 + uVar9;
  if (CARRY4(uVar13,uVar9)) {
LAB_100fd74f:
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  iVar21 = *(int *)(iVar2 + 0x58);
  if (iVar21 == -1) {
LAB_100fd75b:
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  iVar3 = *(int *)(iVar2 + 0x54);
  pSVar1 = (SIZE_T *)(iVar2 + 0x50);
  uVar9 = FUN_100f0c40(param_2);
  iVar10 = 1;
  if (uVar9 != 10) {
    iVar10 = iVar21 + 1;
  }
  local_30 = (uint)(uVar9 == 10) + iVar3;
  local_2c = (uint *)(iVar2 + 0x44);
  _Size = param_2[2];
  while( true ) {
    uVar11 = FUN_100f1250(param_2);
    if ((char)uVar11 == '\0') break;
    FUN_100f0910(param_2);
    if (*pSVar1 == _Size) break;
    uVar9 = FUN_100f0c40(param_2);
    if (uVar9 == 0x7d) break;
    uVar9 = FUN_100f0c40(param_2);
    if (((9 < uVar9 - 0x30) && (5 < uVar9 - 0x41)) && (5 < uVar9 - 0x61)) {
      uVar9 = *pSVar1;
      uVar8 = FUN_100f0c40(param_2);
      uVar13 = 1;
      if ((0x7f < uVar8) && (uVar13 = 2, 0x7ff < uVar8)) {
        uVar13 = 4 - (uVar8 < 0x10000);
      }
      if (CARRY4(uVar13,uVar9)) goto LAB_100fd74f;
      if (*(int *)(iVar2 + 0x58) == -1) goto LAB_100fd75b;
      iVar14 = *(int *)(iVar2 + 0x54);
      iVar21 = *(int *)(iVar2 + 0x58) + 1;
      uVar8 = FUN_100f0c40(param_2);
      pvVar20 = (LPVOID)0x1;
      if (uVar8 == 10) {
        iVar21 = 1;
      }
      local_40 = *(undefined4 *)(iVar2 + 0x58);
      local_48 = *(undefined8 *)pSVar1;
      if (_Size != 0) {
        pvVar5 = (void *)param_2[1];
        pvVar20 = FUN_10107380(0,_Size);
        if (pvVar20 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        memcpy(pvVar20,pvVar5,_Size);
      }
      *(undefined8 *)(param_1 + 10) = local_48;
      param_1[0xc] = local_40;
      *param_1 = 9;
      param_1[7] = _Size;
      param_1[8] = pvVar20;
      param_1[9] = _Size;
      param_1[0xd] = uVar13 + uVar9;
      param_1[0xe] = iVar14 + (uint)(uVar8 == 10);
      param_1[0xf] = iVar21;
      goto LAB_100fd656;
    }
    uVar9 = FUN_100f0c40(param_2);
    uVar8 = 1;
    if ((0x7f < uVar9) && (uVar8 = 2, 0x7ff < uVar9)) {
      uVar8 = 4 - (uVar9 < 0x10000);
    }
    uVar13 = *(uint *)(iVar2 + 0x4c);
    if (*(int *)(iVar2 + 0x44) - uVar13 < uVar8) {
      FUN_101359e0(local_2c,uVar13,uVar8,(LPVOID)0x1,1);
      iVar21 = *(int *)(iVar2 + 0x48);
      if (0x7f < uVar9) goto LAB_100fd2d3;
LAB_100fd220:
      *(byte *)(iVar21 + uVar13) = (byte)uVar9;
    }
    else {
      iVar21 = *(int *)(iVar2 + 0x48);
      if (uVar9 < 0x80) goto LAB_100fd220;
LAB_100fd2d3:
      bVar12 = (byte)uVar9 & 0x3f | 0x80;
      bVar15 = (byte)(uVar9 >> 6);
      if (uVar9 < 0x800) {
        *(byte *)(iVar21 + uVar13) = bVar15 | 0xc0;
        *(byte *)(iVar21 + 1 + uVar13) = bVar12;
      }
      else {
        bVar16 = bVar15 & 0x3f | 0x80;
        bVar15 = (byte)(uVar9 >> 0xc);
        if (uVar9 < 0x10000) {
          *(byte *)(iVar21 + uVar13) = bVar15 | 0xe0;
          *(byte *)(iVar21 + 1 + uVar13) = bVar16;
          *(byte *)(iVar21 + 2 + uVar13) = bVar12;
        }
        else {
          *(byte *)(iVar21 + uVar13) = (byte)(uVar9 >> 0x12) | 0xf0;
          *(byte *)(iVar21 + 1 + uVar13) = bVar15 & 0x3f | 0x80;
          *(byte *)(iVar21 + 2 + uVar13) = bVar16;
          *(byte *)(iVar21 + 3 + uVar13) = bVar12;
        }
      }
    }
    *(uint *)(iVar2 + 0x4c) = uVar8 + uVar13;
  }
  if (*pSVar1 == _Size) {
    uStack_34 = *(undefined4 *)(iVar2 + 0x58);
    uStack_3c = (undefined4)*(undefined8 *)pSVar1;
    uStack_38 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    local_40 = local_20;
    local_48 = local_28;
    if (_Size == 0) {
      pvVar20 = (LPVOID)0x1;
    }
    else {
      pvVar5 = (void *)param_2[1];
      pvVar20 = FUN_10107380(0,_Size);
      if (pvVar20 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      memcpy(pvVar20,pvVar5,_Size);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_34,uStack_38);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_3c,local_40);
    *(undefined8 *)(param_1 + 10) = local_48;
    *param_1 = 10;
    param_1[7] = _Size;
    param_1[8] = pvVar20;
    param_1[9] = _Size;
    goto LAB_100fd656;
  }
  local_14 = *(undefined4 *)(iVar2 + 0x58);
  local_1c = *(undefined8 *)pSVar1;
  pcVar4 = *(char **)(iVar2 + 0x48);
  iVar21 = *(int *)(iVar2 + 0x4c);
  uVar9 = FUN_100f0c40(param_2);
  local_48 = CONCAT44(local_48._4_4_,uVar9);
  if (uVar9 != 0x7d) {
    FUN_1013bbfd(&local_48,&DAT_10154254,&PTR_s_C__Users_runneradmin__cargo_regi_10154258);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar11 = FUN_100f1250(param_2);
  if ((char)uVar11 != '\0') {
    FUN_100f0910(param_2);
  }
  if (iVar21 == 0) {
    uStack_34 = *(undefined4 *)(iVar2 + 0x58);
    uStack_3c = (undefined4)*(undefined8 *)pSVar1;
    uStack_38 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    local_40 = local_20;
    local_48 = local_28;
    if (_Size == 0) {
      pvVar20 = (LPVOID)0x1;
    }
    else {
      pvVar5 = (void *)param_2[1];
      pvVar20 = FUN_10107380(0,_Size);
      if (pvVar20 == (LPVOID)0x0) goto LAB_100fd799;
      memcpy(pvVar20,pvVar5,_Size);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_34,uStack_38);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_3c,local_40);
    *(undefined8 *)(param_1 + 10) = local_48;
    *param_1 = 7;
    param_1[7] = _Size;
    param_1[8] = pvVar20;
    param_1[9] = _Size;
    goto LAB_100fd656;
  }
  if (iVar21 == 1) {
    cVar7 = *pcVar4;
    if ((cVar7 != '+') && (cVar7 != '-')) goto LAB_100fd4bd;
  }
  else {
    cVar7 = *pcVar4;
LAB_100fd4bd:
    uVar9 = 0;
    uVar8 = iVar21 - (uint)(cVar7 == '+');
    pbVar19 = (byte *)(pcVar4 + (cVar7 == '+'));
    if (uVar8 < 9) {
      if (uVar8 != 0) {
        do {
          uVar17 = (uint)*pbVar19;
          uVar13 = uVar17 - 0x30;
          if (0x39 < uVar17) {
            uVar13 = (uVar17 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar13) goto LAB_100fd5ad;
          pbVar19 = pbVar19 + 1;
          uVar9 = uVar9 << 4 | uVar13;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
LAB_100fd50b:
        if ((uVar9 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_100fd5ad;
      }
      param_1[7] = *(undefined4 *)(iVar2 + 0x58);
      *(undefined8 *)(param_1 + 5) = *(undefined8 *)pSVar1;
      param_1[1] = uVar9;
      param_1[2] = iVar14;
      param_1[3] = local_30;
      param_1[4] = iVar10;
      *(undefined1 *)(param_1 + 8) = 5;
      *(undefined1 *)((int)param_1 + 0x21) = param_3;
      *param_1 = 0xffffffff;
      goto LAB_100fd656;
    }
    do {
      bVar22 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar22) goto LAB_100fd50b;
      if (0xfffffff < uVar9) break;
      uVar18 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
      uVar17 = uVar9 * 0x10;
      uVar13 = uVar18 - 0x30;
      if (0x39 < uVar18) {
        uVar13 = (uVar18 - 0x41 & 0xffffffdf) + 10;
      }
      uVar9 = uVar13 + uVar17;
    } while (!CARRY4(uVar13,uVar17) && uVar13 < 0x10);
  }
LAB_100fd5ad:
  if (_Size == 0) {
    pvVar20 = (LPVOID)0x1;
  }
  else {
    pvVar5 = (void *)param_2[1];
    pvVar20 = FUN_10107380(0,_Size);
    if (pvVar20 == (LPVOID)0x0) {
LAB_100fd799:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    memcpy(pvVar20,pvVar5,_Size);
  }
  param_1[0xf] = local_14;
  *(undefined8 *)(param_1 + 0xd) = local_1c;
  *param_1 = 8;
  param_1[7] = _Size;
  param_1[8] = pvVar20;
  param_1[9] = _Size;
  param_1[10] = iVar14;
  param_1[0xb] = local_30;
  param_1[0xc] = iVar10;
LAB_100fd656:
  *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  return;
}
