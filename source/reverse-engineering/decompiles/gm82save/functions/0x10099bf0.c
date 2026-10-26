// rea decompile_all
// name: FUN_10099bf0
// address: 0x10099bf0
// body: available
// range: 0x10099bf0-0x10099c34 inclusive
// range: 0x10099c40-0x10099c81 inclusive
// range: 0x10099c90-0x10099c9d inclusive
// range: 0x10099ca0-0x10099d3b inclusive
// range: 0x10099d40-0x10099efe inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10099bf0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint auStack_20 [3];
  byte bStack_14;
  byte bStack_13;

  pcVar3 = *(code **)(param_4 + 0x10);
  cVar5 = (*pcVar3)(param_3,0x22);
  uVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
  if (cVar5 == '\0') {
    if (param_2 == 0) {
      uVar11 = 0;
      uVar13 = 0;
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      uVar11 = param_2;
      iVar12 = param_1;
      do {
        iVar1 = iVar12 + uVar11;
        uVar13 = 0;
        while (((cVar5 = *(char *)(iVar12 + uVar13), 0xa0 < (byte)(cVar5 + 0x81U) && (cVar5 != '\"')
                ) && (cVar5 != '\\'))) {
          uVar13 = uVar13 + 1;
          if (uVar11 == uVar13) {
            uVar6 = uVar6 + uVar11;
            goto LAB_10099e4c;
          }
        }
        bVar2 = *(byte *)(iVar12 + uVar13);
        uVar11 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          iVar7 = iVar12 + uVar13;
          uVar10 = *(byte *)(iVar7 + 1) & 0x3f;
          if (bVar2 < 0xe0) {
            iVar12 = iVar7 + 2;
            uVar11 = (uVar11 & 0x1f) << 6 | uVar10;
          }
          else {
            uVar10 = *(byte *)(iVar7 + 2) & 0x3f | uVar10 << 6;
            if (bVar2 < 0xf0) {
              iVar12 = iVar7 + 3;
              uVar11 = uVar10 | (uVar11 & 0x1f) << 0xc;
            }
            else {
              iVar12 = iVar7 + 4;
              uVar11 = *(byte *)(iVar7 + 3) & 0x3f | uVar10 << 6 | (uVar11 & 7) << 0x12;
            }
          }
        }
        else {
          iVar12 = iVar12 + 1 + uVar13;
        }
        uVar13 = uVar13 + uVar6;
        FUN_10094e60(auStack_20,uVar11,0x10001);
        bVar2 = bStack_13;
        uVar6 = (uint)bStack_13;
        uVar10 = (uint)bStack_14;
        if ((byte)(bStack_13 - bStack_14) != '\x01') {
          if (uVar13 < uVar9) goto LAB_10099ecb;
          if (uVar9 != 0) {
            if (uVar9 < param_2) {
              if (*(char *)(param_1 + uVar9) < -0x40) goto LAB_10099ecb;
            }
            else if (uVar9 != param_2) goto LAB_10099ecb;
          }
          if (uVar13 != 0) {
            if (uVar13 < param_2) {
              if (*(char *)(param_1 + uVar13) < -0x40) {
LAB_10099ecb:
                FUN_10136b90(param_1,param_2,uVar9,uVar13,
                             &PTR_s_C__Users_runneradmin__rustup_too_10149df4);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            else if (uVar13 != param_2) goto LAB_10099ecb;
          }
          pcVar4 = *(code **)(param_4 + 0xc);
          cVar5 = (*pcVar4)(param_3,uVar9 + param_1,uVar13 - uVar9);
          uVar8 = extraout_ECX_00;
          if (cVar5 != '\0') {
LAB_10099ec7:
            return CONCAT31((int3)((uint)uVar8 >> 8),1);
          }
          if (bVar2 < 0x81) {
            cVar5 = (*pcVar4)(param_3,(int)auStack_20 + uVar10,uVar6 - uVar10);
            uVar8 = extraout_ECX_02;
          }
          else {
            cVar5 = (*pcVar3)(param_3,auStack_20[0]);
            uVar8 = extraout_ECX_01;
          }
          if (cVar5 != '\0') goto LAB_10099ec7;
          iVar7 = 1;
          if ((0x7f < uVar11) && (iVar7 = 2, 0x7ff < uVar11)) {
            iVar7 = 4 - (uint)(uVar11 < 0x10000);
          }
          uVar9 = iVar7 + uVar13;
        }
        iVar7 = 1;
        if ((0x7f < uVar11) && (iVar7 = 2, 0x7ff < uVar11)) {
          iVar7 = 4 - (uint)(uVar11 < 0x10000);
        }
        uVar6 = iVar7 + uVar13;
        uVar11 = iVar1 - iVar12;
      } while (uVar11 != 0);
LAB_10099e4c:
      if (uVar6 < uVar9) goto LAB_10099eec;
      uVar11 = 0;
      if (uVar9 != 0) {
        if (uVar9 < param_2) {
          uVar11 = uVar9;
          if (*(char *)(param_1 + uVar9) < -0x40) goto LAB_10099eec;
        }
        else {
          uVar11 = param_2;
          if (uVar9 != param_2) goto LAB_10099eec;
        }
      }
      if (uVar6 == 0) {
        uVar13 = 0;
      }
      else {
        uVar9 = uVar11;
        if (uVar6 < param_2) {
          uVar13 = uVar6;
          if (*(char *)(param_1 + uVar6) < -0x40) {
LAB_10099eec:
            FUN_10136b90(param_1,param_2,uVar9,uVar6,
                         &PTR_s_C__Users_runneradmin__rustup_too_10149e04);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          uVar13 = param_2;
          if (uVar6 != param_2) goto LAB_10099eec;
        }
      }
    }
    cVar5 = (**(code **)(param_4 + 0xc))(param_3,param_1 + uVar11,uVar13 - uVar11);
    uVar8 = CONCAT31((int3)((uint)extraout_ECX_03 >> 8),1);
    if (cVar5 == '\0') {
      uVar8 = (*pcVar3)(param_3,0x22);
    }
  }
  return uVar8;
}
