// rea decompile_all
// name: FUN_10104ea0
// address: 0x10104ea0
// body: available
// range: 0x10104ea0-0x10105247 inclusive
// range: 0x10105250-0x10105305 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101051e5 to 0x101018c0 FUN_101018c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10104ea0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined1 *puVar11;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 uVar12;
  undefined3 extraout_var_12;
  char *pcVar13;
  int iVar14;
  undefined *puVar15;
  undefined1 (*pauVar16) [16];
  undefined4 *puVar17;
  int unaff_EDI;
  int iVar18;
  bool bVar19;
  undefined4 *local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *puStack_44;
  int local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  char cStack_24;
  char cStack_23;
  undefined2 uStack_22;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;

  iVar14 = *param_1;
  if (iVar14 == 0) goto LAB_10105106;
  uVar2 = param_1[1];
  uVar10 = param_1[2];
  if ((uVar10 < uVar2) && (*(char *)(iVar14 + uVar10) == 'U')) {
    uVar10 = uVar10 + 1;
    bVar19 = true;
    param_1[2] = uVar10;
    if (uVar2 <= uVar10) goto LAB_10104efd;
LAB_10104ed5:
    if (*(char *)(iVar14 + uVar10) != 'K') goto LAB_10104efd;
    uVar1 = uVar10 + 1;
    param_1[2] = uVar1;
    if ((uVar1 < uVar2) && (*(char *)(iVar14 + uVar1) == 'C')) {
      param_1[2] = uVar10 + 2;
      puVar15 = &DAT_10155dbc;
      unaff_EDI = 1;
    }
    else {
      FUN_10101120((int *)&local_70,param_1);
      if ((undefined *)local_70 == (undefined *)0x0) {
        puVar17 = (undefined4 *)param_1[4];
        if (local_70._4_1_ == '\0') {
          if (puVar17 == (undefined4 *)0x0) goto LAB_101052e7;
          pcVar13 = "{invalid syntax}";
          puVar11 = &DAT_00000010;
        }
        else {
          if (puVar17 == (undefined4 *)0x0) goto LAB_101052e7;
          pcVar13 = "{recursion limit reached}";
          puVar11 = (undefined1 *)0x19;
        }
        cVar8 = FUN_10093f00(puVar17,(undefined1 (*) [16])pcVar13,puVar11);
        if (cVar8 != '\0') {
          return CONCAT31(extraout_var_12,1);
        }
LAB_101052e7:
        *param_1 = 0;
        *(char *)(param_1 + 1) = local_70._4_1_;
        return 0;
      }
      if ((local_70._4_4_ == 0) ||
         (puVar15 = (undefined *)local_70, unaff_EDI = local_70._4_4_, local_68._4_4_ != 0)) {
        if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
          cVar8 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                               &DAT_00000010);
          if (cVar8 != '\0') {
            return CONCAT31(extraout_var_01,1);
          }
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        return 0;
      }
    }
    if (bVar19) goto LAB_10104f07;
  }
  else {
    bVar19 = false;
    if (uVar10 < uVar2) goto LAB_10104ed5;
LAB_10104efd:
    if (!bVar19) goto LAB_10105106;
    puVar15 = (undefined *)0x0;
LAB_10104f07:
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      cVar8 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155dbd,
                           (undefined1 *)0x7);
      if (cVar8 != '\0') {
        return CONCAT31(extraout_var,1);
      }
    }
    if (puVar15 == (undefined *)0x0) goto LAB_10105106;
  }
  puVar17 = (undefined4 *)param_1[4];
  if (puVar17 != (undefined4 *)0x0) {
    cVar8 = FUN_10093f00(puVar17,(undefined1 (*) [16])&DAT_10155dc4,&DAT_00000008);
    if (cVar8 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
  }
  local_48 = 0x5f;
  uStack_3c = 0;
  uStack_34 = 0x5f;
  local_30 = CONCAT31(local_30._1_3_,1);
  iStack_2c = 0;
  cStack_24 = '\x01';
  cStack_23 = '\0';
  puStack_44 = puVar15;
  local_40 = unaff_EDI;
  local_38 = unaff_EDI;
  local_28 = unaff_EDI;
  FUN_10090ba0((undefined4 *)&local_70,(int)&local_48);
  if ((undefined *)local_70 == (undefined *)0x1) {
    puVar11 = (undefined1 *)(local_70._4_4_ - iStack_2c);
  }
  else {
    if ((cStack_23 != '\0') ||
       ((cStack_23 = '\x01', cStack_24 != '\x01' && (local_28 == iStack_2c)))) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10155dcc);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar11 = (undefined1 *)(local_28 - iStack_2c);
    puVar15 = puStack_44;
    local_68._0_4_ = iStack_2c;
  }
  if ((puVar17 == (undefined4 *)0x0) ||
     (pauVar16 = (undefined1 (*) [16])(puVar15 + iStack_2c), iStack_2c = (int)local_68,
     cVar8 = FUN_10093f00(puVar17,pauVar16,puVar11), uVar12 = extraout_var_02,
     local_68._0_4_ = iStack_2c, cVar8 == '\0')) {
    iStack_2c = (int)local_68;
    local_58 = CONCAT44(iStack_2c,local_30);
    local_60 = CONCAT44(uStack_34,local_38);
    local_50 = CONCAT26(uStack_22,CONCAT15(cStack_23,CONCAT14(cStack_24,local_28)));
    local_68 = CONCAT44(uStack_3c,local_40);
    local_74 = puVar17;
    puVar7 = puVar17;
    local_70 = CONCAT44(puStack_44,local_48);
    puVar6 = local_20;
    cVar8 = cStack_23;
    while (local_20 = puVar7, uVar5 = local_50, cVar8 == '\0') {
      local_70._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar14 = local_70._4_4_;
      FUN_10090ba0(&local_1c,(int)&local_70);
      uVar4 = local_50;
      iVar18 = local_58._4_4_;
      if (local_1c == 1) {
        puVar11 = (undefined1 *)(local_18 - local_58._4_4_);
        local_58 = CONCAT44(local_14,(undefined4)local_58);
        if (puVar17 == (undefined4 *)0x0) goto LAB_10105209;
LAB_1010528f:
        cVar8 = FUN_10093f00(puVar17,(undefined1 (*) [16])"-",(undefined1 *)0x1);
        puVar17 = local_20;
        uVar12 = extraout_var_10;
        if (cVar8 != '\0') goto LAB_101052c8;
        local_74 = local_20;
        if (local_20 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
          goto LAB_10105209;
        }
        cVar8 = FUN_10093f00(local_20,(undefined1 (*) [16])(iVar14 + iVar18),puVar11);
        uVar12 = extraout_var_11;
        if (cVar8 != '\0') goto LAB_101052c8;
      }
      else {
        uVar5 = local_50;
        puVar6 = local_20;
        if (local_50._5_1_ != '\0') break;
        local_50._0_6_ = CONCAT15(1,(undefined5)local_50);
        uVar5 = local_50;
        local_50._4_1_ = SUB81(uVar4,4);
        local_50._0_4_ = (int)uVar4;
        if ((local_50._4_1_ != '\x01') && ((int)local_50 == local_58._4_4_)) break;
        puVar11 = (undefined1 *)((int)local_50 - local_58._4_4_);
        local_50 = uVar5;
        iVar14 = local_70._4_4_;
        if (puVar17 != (undefined4 *)0x0) goto LAB_1010528f;
LAB_10105209:
        puVar17 = (undefined4 *)0x0;
      }
      puVar7 = local_20;
      puVar6 = local_20;
      cVar8 = local_50._5_1_;
    }
    local_20 = puVar6;
    local_50 = uVar5;
    if ((local_74 == (undefined4 *)0x0) ||
       (cVar8 = FUN_10093f00(local_74,(undefined1 (*) [16])"\" ",(undefined1 *)0x2),
       uVar12 = extraout_var_03, cVar8 == '\0')) {
LAB_10105106:
      if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
        cVar8 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"fn(",(undefined1 *)0x3);
        if (cVar8 != '\0') {
          return CONCAT31(extraout_var_04,1);
        }
      }
      iVar14 = *param_1;
      if (iVar14 != 0) {
        iVar18 = 0;
        do {
          uVar2 = param_1[2];
          if ((uVar2 < (uint)param_1[1]) && (*(char *)(iVar14 + uVar2) == 'E')) {
            param_1[2] = uVar2 + 1;
            puVar17 = (undefined4 *)param_1[4];
            goto joined_r0x101051f3;
          }
          bVar19 = iVar18 != 0;
          iVar18 = iVar18 + -1;
          if ((((bVar19) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
              (cVar8 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                                    (undefined1 *)0x2), uVar12 = extraout_var_05, cVar8 != '\0')) ||
             (cVar8 = FUN_101018c0(param_1), uVar12 = extraout_var_06, cVar8 != '\0'))
          goto LAB_101052c8;
          iVar14 = *param_1;
        } while (iVar14 != 0);
      }
      iVar14 = 0;
      puVar17 = (undefined4 *)param_1[4];
joined_r0x101051f3:
      if (puVar17 != (undefined4 *)0x0) {
        cVar8 = FUN_10093f00(puVar17,(undefined1 (*) [16])")",(undefined1 *)0x1);
        if (cVar8 != '\0') {
          return CONCAT31(extraout_var_07,1);
        }
      }
      if (((iVar14 != 0) && (uVar2 = param_1[2], uVar2 < (uint)param_1[1])) &&
         (*(char *)(iVar14 + uVar2) == 'u')) {
        param_1[2] = uVar2 + 1;
        return 0;
      }
      if (puVar17 != (undefined4 *)0x0) {
        cVar8 = FUN_10093f00(puVar17,(undefined1 (*) [16])" -> ",&DAT_00000004);
        if (cVar8 != '\0') {
          return CONCAT31(extraout_var_08,1);
        }
      }
      uVar9 = FUN_101018c0(param_1);
      return CONCAT31(extraout_var_09,uVar9);
    }
  }
LAB_101052c8:
  return CONCAT31(uVar12,1);
}
