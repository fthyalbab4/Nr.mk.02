// rea decompile_all
// name: FUN_10103fe0
// address: 0x10103fe0
// body: available
// range: 0x10103fe0-0x1010409d inclusive
// range: 0x101040a0-0x1010418b inclusive
// range: 0x10104190-0x1010420a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10104183 to 0x10104ea0 FUN_10104ea0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10103fe0(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 uVar5;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;

  iVar13 = *param_1;
  if (iVar13 == 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar1 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return CONCAT31(extraout_var,uVar1);
    }
LAB_10104100:
    uVar11 = 0;
  }
  else {
    uVar11 = param_1[1];
    uVar10 = param_1[2];
    uVar6 = 0;
    uVar12 = 0;
    if ((uVar10 < uVar11) && (uVar6 = 0, *(char *)(iVar13 + uVar10) == 'G')) {
      uVar6 = uVar10 + 1;
      param_1[2] = uVar6;
      if ((uVar11 <= uVar6) || (*(char *)(iVar13 + uVar6) != '_')) {
        uVar10 = 0;
        uVar12 = 0;
        do {
          if (uVar11 == uVar6) break;
          cVar2 = *(char *)(iVar13 + uVar6);
          if (cVar2 == '_') {
            uVar11 = uVar10 + 1;
            iVar13 = uVar12 + (0xfffffffe < uVar10);
            param_1[2] = uVar6 + 1;
            if ((uint)(0xfffffffd < uVar10) <= -uVar12 - 1) goto LAB_10104125;
            break;
          }
          bVar9 = cVar2 - 0x30;
          if (9 < bVar9) {
            if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              bVar9 = cVar2 + 0xa9;
            }
            else {
              if (0x19 < (byte)(cVar2 + 0xbfU)) break;
              bVar9 = cVar2 - 0x1d;
            }
          }
          uVar6 = uVar6 + 1;
          param_1[2] = uVar6;
          bVar3 = (int)((ulonglong)uVar12 * 0x3e >> 0x20) != 0;
          uVar12 = (uint)((ulonglong)uVar12 * 0x3e);
          uVar7 = (uint)((ulonglong)uVar10 * 0x3e >> 0x20);
          uVar4 = (uint)((ulonglong)uVar10 * 0x3e);
          uVar8 = uVar7 + uVar12;
          if (CARRY4(uVar7,uVar12) || bVar3) break;
          uVar12 = CONCAT11(bVar3,bVar9) & 0xff;
          uVar10 = uVar4 + uVar12;
          uVar4 = (uint)CARRY4(uVar4,uVar12);
          uVar12 = uVar8 + uVar4;
        } while (!CARRY4(uVar8,uVar4));
        if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
          cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                               &DAT_00000010);
          if (cVar2 != '\0') {
            return CONCAT31(extraout_var_00,1);
          }
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_10104100;
      }
      uVar11 = 0;
      iVar13 = 0;
      param_1[2] = uVar10 + 2;
LAB_10104125:
      uVar6 = uVar11 + 1;
      uVar12 = iVar13 + (uint)(0xfffffffe < uVar11);
    }
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      uVar11 = FUN_10104ea0(param_1);
      return uVar11;
    }
    if (uVar6 == 0 && uVar12 == 0) {
LAB_101041f9:
      uVar11 = FUN_10104ea0(param_1);
      param_1[5] = param_1[5] - uVar6;
    }
    else {
      cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155cdc,&DAT_00000004
                          );
      uVar5 = extraout_var_01;
      if (cVar2 == '\0') {
        param_1[5] = param_1[5] + 1;
        uVar11 = 1;
        bVar3 = FUN_101026a0(param_1,1,0);
        uVar5 = extraout_var_02;
        if (!bVar3) {
          uVar10 = 0;
          do {
            if (uVar12 <= uVar10 && (uint)(uVar11 < uVar6) <= uVar10 - uVar12) {
              if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
                cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce0,
                                     (undefined1 *)0x2);
                if (cVar2 != '\0') {
                  return CONCAT31(extraout_var_05,1);
                }
              }
              goto LAB_101041f9;
            }
            bVar3 = 0xfffffffe < uVar11;
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + bVar3;
            if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
               (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                                     (undefined1 *)0x2), uVar5 = extraout_var_04, cVar2 != '\0'))
            break;
            param_1[5] = param_1[5] + 1;
            bVar3 = FUN_101026a0(param_1,1,0);
            uVar5 = extraout_var_03;
          } while (!bVar3);
        }
      }
      uVar11 = CONCAT31(uVar5,1);
    }
  }
  return uVar11;
}
