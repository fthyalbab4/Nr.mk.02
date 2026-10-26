// rea decompile_all
// name: FUN_100fc8f0
// address: 0x100fc8f0
// body: available
// range: 0x100fc8f0-0x100fca89 inclusive
// range: 0x100fca90-0x100fcb30 inclusive
// range: 0x100fcb40-0x100fce0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fc8f0(undefined4 *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *_Buf1;
  void *pvVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  LPVOID pvVar8;
  int iVar9;
  byte bVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  SIZE_T *pSVar14;
  int iVar15;
  uint uVar16;
  SIZE_T SVar17;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  SIZE_T SStack_4c;
  SIZE_T local_48;
  int local_44;
  SIZE_T *local_40;
  int *local_3c;
  int local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  SIZE_T local_14;

  uVar6 = FUN_100f0c40(param_2);
  local_60 = CONCAT44(local_60._4_4_,uVar6);
  if (uVar6 != 0x7b) {
    FUN_1013bbfd(&local_60,&DAT_10154544,&PTR_s_C__Users_runneradmin__cargo_regi_1015456c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar15 = *param_2;
  local_2c = *(undefined4 *)(iVar15 + 0x58);
  pSVar14 = (SIZE_T *)(iVar15 + 0x50);
  local_34 = *(undefined8 *)(iVar15 + 0x50);
  uVar7 = FUN_100f1250(param_2);
  if ((char)uVar7 == '\0') {
    SVar17 = param_2[2];
LAB_100fc9a7:
    SStack_4c = *(undefined4 *)(iVar15 + 0x58);
    local_58 = *(undefined4 *)(param_3 + 1);
    local_60 = *param_3;
    uStack_54 = (undefined4)*(undefined8 *)pSVar14;
    uStack_50 = (undefined4)((ulonglong)*(undefined8 *)pSVar14 >> 0x20);
    if (SVar17 == 0) {
      pvVar8 = (LPVOID)0x1;
    }
    else {
      pvVar3 = (void *)param_2[1];
      pvVar8 = FUN_10107380(0,SVar17);
      if (pvVar8 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      memcpy(pvVar8,pvVar3,SVar17);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(SStack_4c,uStack_50);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(param_1 + 10) = local_60;
    *param_1 = 0x1e;
    param_1[7] = SVar17;
    param_1[8] = pvVar8;
    param_1[9] = SVar17;
    return;
  }
  local_44 = 0x100fc903;
  FUN_100f0910(param_2);
  local_48 = param_2[2];
  SVar17 = *pSVar14;
  if (SVar17 == local_48) goto LAB_100fc9a7;
  local_20 = *(undefined4 *)(iVar15 + 0x58);
  local_28 = *(undefined8 *)pSVar14;
  uVar6 = FUN_100f0c40(param_2);
  if (0x19 < uVar6 - 0x41) {
    if (uVar6 < 0x61) {
      if (uVar6 != 0x2d) goto LAB_100fcc2b;
    }
    else if (0x7a < uVar6) {
LAB_100fcc2b:
      *(undefined4 *)(iVar15 + 0x58) = local_2c;
      *(undefined8 *)pSVar14 = local_34;
      *(undefined1 *)(param_1 + 1) = 0xff;
      *param_1 = 0xffffffff;
      return;
    }
  }
  if (*(int *)(iVar15 + 0x40) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_1015455c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined4 *)(iVar15 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar15 + 0x4c) = 0;
  if (*(SIZE_T *)(iVar15 + 0x50) == local_48) {
    piVar11 = param_2 + 1;
    SVar17 = local_48;
  }
  else {
    puVar1 = (uint *)(iVar15 + 0x44);
    local_40 = pSVar14;
    local_3c = param_2;
    local_38 = iVar15;
    do {
      SVar17 = local_48;
      uVar6 = FUN_100f0c40(param_2);
      if (0x19 < uVar6 - 0x41) {
        if (uVar6 < 0x61) {
          if (uVar6 != 0x2d) break;
        }
        else if (0x7a < uVar6) break;
      }
      uVar6 = FUN_100f0c40(param_2);
      uVar16 = 1;
      if ((0x7f < uVar6) && (uVar16 = 2, 0x7ff < uVar6)) {
        uVar16 = 4 - (uVar6 < 0x10000);
      }
      uVar2 = *(uint *)(iVar15 + 0x4c);
      if (*(int *)(iVar15 + 0x44) - uVar2 < uVar16) {
        FUN_101359e0(puVar1,uVar2,uVar16,(LPVOID)0x1,1);
        iVar15 = *(int *)(iVar15 + 0x48);
        if (0x7f < uVar6) goto LAB_100fcb10;
LAB_100fcae0:
        *(byte *)(iVar15 + uVar2) = (byte)uVar6;
      }
      else {
        iVar15 = *(int *)(iVar15 + 0x48);
        if (uVar6 < 0x80) goto LAB_100fcae0;
LAB_100fcb10:
        bVar10 = (byte)uVar6 & 0x3f | 0x80;
        bVar12 = (byte)(uVar6 >> 6);
        if (uVar6 < 0x800) {
          *(byte *)(iVar15 + uVar2) = bVar12 | 0xc0;
          *(byte *)(iVar15 + 1 + uVar2) = bVar10;
        }
        else {
          bVar13 = bVar12 & 0x3f | 0x80;
          bVar12 = (byte)(uVar6 >> 0xc);
          if (uVar6 < 0x10000) {
            *(byte *)(iVar15 + uVar2) = bVar12 | 0xe0;
            *(byte *)(iVar15 + 1 + uVar2) = bVar13;
            *(byte *)(iVar15 + 2 + uVar2) = bVar10;
          }
          else {
            *(byte *)(iVar15 + uVar2) = (byte)(uVar6 >> 0x12) | 0xf0;
            *(byte *)(iVar15 + 1 + uVar2) = bVar12 & 0x3f | 0x80;
            *(byte *)(iVar15 + 2 + uVar2) = bVar13;
            *(byte *)(iVar15 + 3 + uVar2) = bVar10;
          }
        }
      }
      iVar15 = local_38;
      param_2 = local_3c;
      *(uint *)(local_38 + 0x4c) = uVar16 + uVar2;
      uVar7 = FUN_100f1250(local_3c);
      pSVar14 = local_40;
      if ((char)uVar7 != '\0') {
        FUN_100f0910(param_2);
      }
      SVar17 = local_48;
    } while (*pSVar14 != local_48);
    piVar11 = param_2 + 1;
    if ((*pSVar14 != SVar17) && (uVar6 = FUN_100f0c40(param_2), uVar6 == 0x7d)) {
      local_14 = pSVar14[2];
      local_1c = *(undefined8 *)pSVar14;
      FUN_100f1250(param_2);
      uVar6 = *(int *)(iVar15 + 0x4c) - 3;
      if (uVar6 < 8) {
        _Buf1 = *(int **)(iVar15 + 0x48);
        switch(local_44 + (&switchD_100fcc00::switchdataD_100fce10)[uVar6]) {
        case 0x100fcc02:
          if (*(char *)((int)_Buf1 + 2) == 'd' && (short)*_Buf1 == 0x6e65) {
            uVar5 = 7;
LAB_100fcdbc:
            *(undefined1 *)(param_1 + 1) = uVar5;
            *param_1 = 0xffffffff;
            *(int *)(iVar15 + 0x40) = *(int *)(iVar15 + 0x40) + 1;
            return;
          }
          break;
        case 0x100fcce3:
          if (_Buf1[1] == 0x666c6168 && *_Buf1 == 0x2d646e65) {
            uVar5 = 0xb;
            goto LAB_100fcdbc;
          }
          break;
        case 0x100fccfd:
          if ((char)_Buf1[1] == 't' && *_Buf1 == 0x72617473) {
            uVar5 = 6;
            goto LAB_100fcdbc;
          }
          break;
        case 0x100fcd16:
          iVar9 = memcmp(_Buf1,"start-half",10);
          if (iVar9 == 0) {
            uVar5 = 10;
            goto LAB_100fcdbc;
          }
        }
      }
      local_60 = local_28;
      local_58 = local_20;
      SStack_4c = local_14;
      uStack_54 = (undefined4)local_1c;
      uStack_50 = (undefined4)((ulonglong)local_1c >> 0x20);
      if (SVar17 == 0) {
        pvVar8 = (LPVOID)0x1;
      }
      else {
        pvVar3 = (void *)*piVar11;
        pvVar8 = FUN_10107380(0,SVar17);
        if (pvVar8 == (LPVOID)0x0) goto LAB_100fce02;
        memcpy(pvVar8,pvVar3,SVar17);
      }
      *(ulonglong *)(param_1 + 0xe) = CONCAT44(SStack_4c,uStack_50);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_54,local_58);
      *(undefined8 *)(param_1 + 10) = local_60;
      *param_1 = 0x1d;
      goto LAB_100fccd2;
    }
  }
  SStack_4c = pSVar14[2];
  uStack_54 = (undefined4)*(undefined8 *)pSVar14;
  uStack_50 = (undefined4)((ulonglong)*(undefined8 *)pSVar14 >> 0x20);
  local_58 = local_2c;
  local_60 = local_34;
  if (SVar17 == 0) {
    pvVar8 = (LPVOID)0x1;
  }
  else {
    pvVar3 = (void *)*piVar11;
    pvVar8 = FUN_10107380(0,SVar17);
    if (pvVar8 == (LPVOID)0x0) {
LAB_100fce02:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    memcpy(pvVar8,pvVar3,SVar17);
  }
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(SStack_4c,uStack_50);
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_54,local_58);
  *(undefined8 *)(param_1 + 10) = local_60;
  *param_1 = 0x1c;
LAB_100fccd2:
  param_1[7] = SVar17;
  param_1[8] = pvVar8;
  param_1[9] = SVar17;
  *(int *)(iVar15 + 0x40) = *(int *)(iVar15 + 0x40) + 1;
  return;
}
