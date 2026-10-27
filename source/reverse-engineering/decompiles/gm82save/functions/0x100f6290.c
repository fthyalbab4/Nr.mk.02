// rea decompile_all
// name: FUN_100f6290
// address: 0x100f6290
// body: available
// range: 0x100f6290-0x100f6480 inclusive
// range: 0x100f6490-0x100f65aa inclusive
// range: 0x100f65b0-0x100f65da inclusive
// range: 0x100f65e0-0x100f678a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f6290(undefined4 *param_1,int *param_2)

{
  SIZE_T *pSVar1;
  char cVar2;
  int iVar3;
  SIZE_T _Size;
  SIZE_T SVar4;
  void *pvVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  LPVOID pvVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  bool bVar17;
  byte bVar18;
  int *local_50;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  iVar3 = *param_2;
  if (*(int *)(iVar3 + 0x40) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10154244);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  pSVar1 = (SIZE_T *)(iVar3 + 0x50);
  _Size = param_2[2];
  if (*(SIZE_T *)(iVar3 + 0x50) == _Size) {
    local_3c = *(undefined4 *)(iVar3 + 0x58);
    local_44 = *(undefined8 *)pSVar1;
LAB_100f6382:
    local_30 = local_3c;
    local_38 = local_44;
    uStack_2c = (undefined4)*(undefined8 *)pSVar1;
    uStack_28 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    uStack_24 = *(undefined4 *)(iVar3 + 0x58);
  }
  else {
    do {
      uVar9 = FUN_100f0c40(param_2);
      if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
        if (uVar9 < 0x85) break;
        uVar12 = uVar9 >> 8;
        if (uVar12 < 0x20) {
          if (uVar12 == 0) {
            bVar18 = (&DAT_10154dd4)[uVar9 & 0xff];
          }
          else {
            if (uVar12 != 0x16) break;
            bVar18 = uVar9 == 0x1680;
          }
        }
        else if (uVar12 == 0x20) {
          bVar18 = (byte)(&DAT_10154dd4)[uVar9 & 0xff] >> 1;
        }
        else {
          if (uVar12 != 0x30) break;
          bVar18 = uVar9 == 0x3000;
        }
        if ((bVar18 & 1) == 0) break;
      }
      FUN_100f1250(param_2);
    } while (*pSVar1 != _Size);
    local_3c = *(undefined4 *)(iVar3 + 0x58);
    local_44 = *(undefined8 *)pSVar1;
    if (*pSVar1 == _Size) goto LAB_100f6382;
    do {
      uVar9 = FUN_100f0c40(param_2);
      if ((uVar9 < 0x30) || (uVar9 = FUN_100f0c40(param_2), 0x39 < uVar9)) break;
      uVar9 = FUN_100f0c40(param_2);
      uVar12 = 1;
      if ((0x7f < uVar9) && (uVar12 = 2, 0x7ff < uVar9)) {
        uVar12 = 4 - (uVar9 < 0x10000);
      }
      uVar10 = *(uint *)(iVar3 + 0x4c);
      if (*(int *)(iVar3 + 0x44) - uVar10 < uVar12) {
        FUN_101359e0((uint *)(iVar3 + 0x44),uVar10,uVar12,(LPVOID)0x1,1);
        iVar7 = *(int *)(iVar3 + 0x48);
        if (uVar9 < 0x80) goto LAB_100f6436;
LAB_100f6460:
        bVar18 = (byte)uVar9 & 0x3f | 0x80;
        bVar13 = (byte)(uVar9 >> 6);
        if (uVar9 < 0x800) {
          *(byte *)(iVar7 + uVar10) = bVar13 | 0xc0;
          *(byte *)(iVar7 + 1 + uVar10) = bVar18;
        }
        else {
          bVar14 = bVar13 & 0x3f | 0x80;
          bVar13 = (byte)(uVar9 >> 0xc);
          if (uVar9 < 0x10000) {
            *(byte *)(iVar7 + uVar10) = bVar13 | 0xe0;
            *(byte *)(iVar7 + 1 + uVar10) = bVar14;
            *(byte *)(iVar7 + 2 + uVar10) = bVar18;
          }
          else {
            *(byte *)(iVar7 + uVar10) = (byte)(uVar9 >> 0x12) | 0xf0;
            *(byte *)(iVar7 + 1 + uVar10) = bVar13 & 0x3f | 0x80;
            *(byte *)(iVar7 + 2 + uVar10) = bVar14;
            *(byte *)(iVar7 + 3 + uVar10) = bVar18;
          }
        }
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x48);
        if (0x7f < uVar9) goto LAB_100f6460;
LAB_100f6436:
        *(byte *)(iVar7 + uVar10) = (byte)uVar9;
      }
      *(uint *)(iVar3 + 0x4c) = uVar12 + uVar10;
      uVar8 = FUN_100f1250(param_2);
      if ((char)uVar8 != '\0') {
        FUN_100f0910(param_2);
      }
    } while (*pSVar1 != _Size);
    SVar4 = *pSVar1;
    uStack_2c = (undefined4)*(undefined8 *)pSVar1;
    uStack_28 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    uStack_24 = *(undefined4 *)(iVar3 + 0x58);
    while (local_38 = local_44, local_30 = local_3c, SVar4 != _Size) {
      uVar9 = FUN_100f0c40(param_2);
      if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
        if (uVar9 < 0x85) break;
        uVar12 = uVar9 >> 8;
        if (uVar12 < 0x20) {
          if (uVar12 == 0) {
            bVar18 = (&DAT_10154dd4)[uVar9 & 0xff];
joined_r0x100f665f:
            if ((bVar18 & 1) == 0) break;
          }
          else if ((uVar12 != 0x16) || (uVar9 != 0x1680)) break;
        }
        else {
          if (uVar12 == 0x20) {
            bVar18 = (byte)(&DAT_10154dd4)[uVar9 & 0xff] >> 1;
            goto joined_r0x100f665f;
          }
          if ((uVar12 != 0x30) || (uVar9 != 0x3000)) break;
        }
      }
      uVar8 = FUN_100f1250(param_2);
      if ((char)uVar8 != '\0') {
        FUN_100f0910(param_2);
      }
      SVar4 = *pSVar1;
    }
  }
  local_50 = param_2 + 1;
  iVar7 = *(int *)(iVar3 + 0x4c);
  if (iVar7 == 0) {
    if (_Size == 0) {
      pvVar11 = (LPVOID)0x1;
    }
    else {
      pvVar5 = (void *)*local_50;
      pvVar11 = FUN_10107380(0,_Size);
      if (pvVar11 == (LPVOID)0x0) goto LAB_100f677d;
      memcpy(pvVar11,pvVar5,_Size);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_24,uStack_28);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_2c,local_30);
    *(undefined8 *)(param_1 + 10) = local_38;
    *param_1 = 5;
    param_1[7] = _Size;
    param_1[8] = pvVar11;
    param_1[9] = _Size;
  }
  else {
    cVar2 = **(char **)(iVar3 + 0x48);
    if ((iVar7 != 1) || ((cVar2 != '+' && (cVar2 != '-')))) {
      uVar9 = 0;
      uVar12 = iVar7 - (uint)(cVar2 == '+');
      pbVar16 = (byte *)(*(char **)(iVar3 + 0x48) + (cVar2 == '+'));
      if (uVar12 < 9) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          bVar18 = *pbVar16;
          if (9 < bVar18 - 0x30) goto LAB_100f66c5;
          pbVar16 = pbVar16 + 1;
          uVar9 = (bVar18 - 0x30) + uVar9 * 10;
        }
LAB_100f6599:
        param_1[1] = uVar9;
        *param_1 = 0xffffffff;
        goto LAB_100f6766;
      }
      while( true ) {
        bVar17 = uVar12 == 0;
        uVar12 = uVar12 - 1;
        if (bVar17) goto LAB_100f6599;
        uVar10 = (uint)((ulonglong)uVar9 * 10);
        if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) break;
        uVar15 = *pbVar16 - 0x30;
        uVar9 = uVar10 + uVar15;
        if ((9 < uVar15) || (pbVar16 = pbVar16 + 1, CARRY4(uVar10,uVar15))) break;
      }
    }
LAB_100f66c5:
    if (_Size == 0) {
      pvVar11 = (LPVOID)0x1;
    }
    else {
      pvVar5 = (void *)*local_50;
      pvVar11 = FUN_10107380(0,_Size);
      if (pvVar11 == (LPVOID)0x0) {
LAB_100f677d:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      memcpy(pvVar11,pvVar5,_Size);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_24,uStack_28);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_2c,local_30);
    *(undefined8 *)(param_1 + 10) = local_38;
    *param_1 = 6;
    param_1[7] = _Size;
    param_1[8] = pvVar11;
    param_1[9] = _Size;
  }
LAB_100f6766:
  *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + 1;
  return;
}
