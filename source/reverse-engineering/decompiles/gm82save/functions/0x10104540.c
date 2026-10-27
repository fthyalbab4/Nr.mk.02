// rea decompile_all
// name: FUN_10104540
// address: 0x10104540
// body: available
// range: 0x10104540-0x101045e9 inclusive
// range: 0x101045f0-0x1010472c inclusive
// range: 0x10104730-0x1010480c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10104540(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;

  iVar11 = *param_1;
  if (iVar11 == 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar1 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return uVar1;
    }
  }
  else {
    uVar10 = param_1[1];
    uVar8 = param_1[2];
    uVar9 = 0;
    uVar12 = 0;
    if ((uVar8 < uVar10) && (uVar9 = 0, *(char *)(iVar11 + uVar8) == 'G')) {
      uVar9 = uVar8 + 1;
      param_1[2] = uVar9;
      if ((uVar10 <= uVar9) || (*(char *)(iVar11 + uVar9) != '_')) {
        uVar8 = 0;
        uVar12 = 0;
        do {
          if (uVar10 == uVar9) break;
          cVar2 = *(char *)(iVar11 + uVar9);
          if (cVar2 == '_') {
            param_1[2] = uVar9 + 1;
            uVar10 = uVar8 + 1;
            iVar13 = uVar12 + (0xfffffffe < uVar8);
            if ((uint)(0xfffffffd < uVar8) <= -uVar12 - 1) goto LAB_10104686;
            break;
          }
          bVar7 = cVar2 - 0x30;
          if (9 < bVar7) {
            if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              bVar7 = cVar2 + 0xa9;
            }
            else {
              if (0x19 < (byte)(cVar2 + 0xbfU)) break;
              bVar7 = cVar2 - 0x1d;
            }
          }
          uVar9 = uVar9 + 1;
          param_1[2] = uVar9;
          bVar3 = (int)((ulonglong)uVar12 * 0x3e >> 0x20) != 0;
          uVar12 = (uint)((ulonglong)uVar12 * 0x3e);
          uVar5 = (uint)((ulonglong)uVar8 * 0x3e >> 0x20);
          uVar4 = (uint)((ulonglong)uVar8 * 0x3e);
          uVar6 = uVar5 + uVar12;
          if (CARRY4(uVar5,uVar12) || bVar3) break;
          uVar12 = CONCAT11(bVar3,bVar7) & 0xff;
          uVar8 = uVar4 + uVar12;
          uVar4 = (uint)CARRY4(uVar4,uVar12);
          uVar12 = uVar6 + uVar4;
        } while (!CARRY4(uVar6,uVar4));
        if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
           (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                                 &DAT_00000010), cVar2 != '\0')) {
          return 1;
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        return 0;
      }
      uVar10 = 0;
      iVar13 = 0;
      param_1[2] = uVar8 + 2;
LAB_10104686:
      uVar9 = uVar10 + 1;
      uVar12 = iVar13 + (uint)(0xfffffffe < uVar10);
    }
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      if (uVar9 == 0 && uVar12 == 0) {
LAB_101047a5:
        iVar11 = *param_1;
        iVar13 = 0;
        while( true ) {
          if (iVar11 == 0) {
            param_1[5] = param_1[5] - uVar9;
            return 0;
          }
          uVar10 = param_1[2];
          if ((uVar10 < (uint)param_1[1]) && (*(char *)(iVar11 + uVar10) == 'E')) break;
          bVar3 = iVar13 != 0;
          iVar13 = iVar13 + -1;
          if ((((bVar3) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
              (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" + ",
                                    (undefined1 *)0x3), cVar2 != '\0')) ||
             (cVar2 = FUN_101049a0(param_1), cVar2 != '\0')) {
            param_1[5] = param_1[5] - uVar9;
            return 1;
          }
          iVar11 = *param_1;
        }
        param_1[2] = uVar10 + 1;
        param_1[5] = param_1[5] - uVar9;
        return 0;
      }
      cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155cdc,&DAT_00000004
                          );
      if (cVar2 == '\0') {
        param_1[5] = param_1[5] + 1;
        uVar10 = 1;
        bVar3 = FUN_101026a0(param_1,1,0);
        if (!bVar3) {
          uVar8 = 0;
          do {
            if (uVar12 <= uVar8 && (uint)(uVar10 < uVar9) <= uVar8 - uVar12) {
              if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
                 (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce0,
                                       (undefined1 *)0x2), cVar2 != '\0')) {
                return 1;
              }
              goto LAB_101047a5;
            }
            bVar3 = 0xfffffffe < uVar10;
            uVar10 = uVar10 + 1;
            uVar8 = uVar8 + bVar3;
            if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
               (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                                     (undefined1 *)0x2), cVar2 != '\0')) {
              return 1;
            }
            param_1[5] = param_1[5] + 1;
            bVar3 = FUN_101026a0(param_1,1,0);
          } while (!bVar3);
        }
      }
      return 1;
    }
    iVar13 = 0;
    do {
      uVar10 = param_1[2];
      if ((uVar10 < (uint)param_1[1]) && (*(char *)(iVar11 + uVar10) == 'E')) {
        param_1[2] = uVar10 + 1;
        return 0;
      }
      bVar3 = iVar13 != 0;
      iVar13 = iVar13 + -1;
      if (((bVar3) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
         (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" + ",(undefined1 *)0x3
                              ), cVar2 != '\0')) {
        return 1;
      }
      cVar2 = FUN_101049a0(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar11 = *param_1;
    } while (iVar11 != 0);
  }
  return 0;
}
