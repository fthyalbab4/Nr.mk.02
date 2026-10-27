// rea decompile_all
// name: FUN_101006c0
// address: 0x101006c0
// body: available
// range: 0x101006c0-0x10100db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1 __fastcall FUN_101006c0(int *param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar9;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  undefined1 local_41;
  undefined4 local_40;
  uint uStack_3c;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28 [6];

  iVar6 = *param_1;
  if (iVar6 == 0) {
LAB_10100bf9:
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      return 0;
    }
    uVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
    return uVar5;
  }
  iVar1 = param_1[3];
  param_1[3] = iVar1 + 1U;
  if (500 < iVar1 + 1U) {
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],
                             (undefined1 (*) [16])"{recursion limit reached}",(undefined1 *)0x19),
       cVar3 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    return 0;
  }
  uVar16 = param_1[1];
  uVar10 = param_1[2];
  if (uVar16 <= uVar10) {
switchD_10100760_caseD_44:
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                             &DAT_00000010), cVar3 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return 0;
  }
  local_30 = (uint)*(byte *)(iVar6 + uVar10);
  param_1[2] = uVar10 + 1;
  local_48 = uVar16;
  switch(local_30) {
  case 0x42:
    cVar3 = FUN_10100e20(param_1);
    goto joined_r0x10100c69;
  case 0x43:
    FUN_10100ff0((undefined1 *)&local_58,param_1);
    if ((char)local_58 == '\x01') {
LAB_10100892:
      puVar11 = (undefined4 *)param_1[4];
      cVar3 = local_58._1_1_;
    }
    else {
      if (*param_1 == 0) goto LAB_10100bf9;
      FUN_10101120((int *)&local_58,param_1);
      if (CONCAT22(local_58._2_2_,CONCAT11(local_58._1_1_,(char)local_58)) != 0) {
        if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_10100b92;
        uVar8 = FUN_10101310(local_28,(undefined4 *)param_1[4]);
        if ((char)uVar8 != '\0') {
          return 1;
        }
        puVar11 = (undefined4 *)param_1[4];
        if (((puVar11 == (undefined4 *)0x0) || (local_50 == 0 && uStack_4c == 0)) ||
           ((puVar11[2] & 0x800000) != 0)) goto LAB_10100b92;
        cVar3 = (**(code **)(puVar11[1] + 0xc))(*puVar11,"[",1);
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = FUN_1009ca80(local_50,uStack_4c,(undefined4 *)param_1[4]);
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = (**(code **)(((undefined4 *)param_1[4])[1] + 0xc))(*(undefined4 *)param_1[4],"]",1);
        goto joined_r0x10100c69;
      }
LAB_10100b9c:
      puVar11 = (undefined4 *)param_1[4];
      cVar3 = local_58._4_1_;
    }
    if (cVar3 == '\0') {
      if (puVar11 == (undefined4 *)0x0) goto LAB_10100bc7;
      pcVar15 = "{invalid syntax}";
      puVar18 = &DAT_00000010;
    }
    else {
      if (puVar11 == (undefined4 *)0x0) goto LAB_10100bc7;
      pcVar15 = "{recursion limit reached}";
      puVar18 = (undefined1 *)0x19;
    }
    cVar4 = FUN_10093f00(puVar11,(undefined1 (*) [16])pcVar15,puVar18);
    if (cVar4 != '\0') {
      return 1;
    }
LAB_10100bc7:
    *param_1 = 0;
    *(char *)(param_1 + 1) = cVar3;
    return 0;
  default:
    goto switchD_10100760_caseD_44;
  case 0x49:
    cVar3 = FUN_101006c0(param_1,param_2);
    if (cVar3 != '\0') {
      return 1;
    }
    if (((param_2 != '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"::",(undefined1 *)0x2),
       cVar3 != '\0')) {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"<",(undefined1 *)0x1),
       cVar3 != '\0')) {
      return 1;
    }
    iVar6 = FUN_10101df0(param_1);
    if (iVar6 != 0) {
      return 1;
    }
    goto LAB_10100b70;
  case 0x4d:
  case 0x58:
    if ((uVar10 + 1 < uVar16) && (*(char *)(iVar6 + uVar10 + 1) == 's')) {
      uVar17 = uVar10 + 2;
      param_1[2] = uVar17;
      if ((uVar16 <= uVar17) || (*(char *)(iVar6 + uVar17) != '_')) {
        uVar10 = 0;
        uVar12 = 0;
        do {
          if (uVar16 == uVar17) break;
          cVar3 = *(char *)(iVar6 + uVar17);
          if (cVar3 == '_') {
            param_1[2] = uVar17 + 1;
            if ((uint)(0xfffffffd < uVar10) <= -uVar12 - 1) goto LAB_10100ae3;
            break;
          }
          bVar9 = cVar3 - 0x30;
          if (9 < bVar9) {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              bVar9 = cVar3 + 0xa9;
            }
            else {
              if (0x19 < (byte)(cVar3 + 0xbfU)) break;
              bVar9 = cVar3 - 0x1d;
            }
          }
          uVar17 = uVar17 + 1;
          local_2c = (uint)((ulonglong)uVar12 * 0x3e);
          param_1[2] = uVar17;
          uVar13 = (uint)((ulonglong)uVar10 * 0x3e >> 0x20);
          uVar7 = (uint)((ulonglong)uVar10 * 0x3e);
          uVar14 = uVar13 + local_2c;
          if (CARRY4(uVar13,local_2c) || (int)((ulonglong)uVar12 * 0x3e >> 0x20) != 0) break;
          uVar10 = uVar7 + bVar9;
          uVar7 = (uint)CARRY4(uVar7,(uint)bVar9);
          uVar12 = uVar14 + uVar7;
        } while (!CARRY4(uVar14,uVar7));
        goto switchD_10100760_caseD_44;
      }
      param_1[2] = uVar10 + 3;
    }
LAB_10100ae3:
    puVar11 = (undefined4 *)param_1[4];
    param_1[4] = 0;
    cVar3 = FUN_101006c0(param_1,'\0');
    if (cVar3 != '\0') {
      FUN_10136c40("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,&local_41,
                   &DAT_10155c14,&PTR_s_C__Users_runneradmin__cargo_regi_10155ccc);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1[4] = (int)puVar11;
    break;
  case 0x4e:
    if (uVar16 <= uVar10 + 1) goto switchD_10100760_caseD_44;
    bVar9 = *(byte *)(iVar6 + 1 + uVar10);
    uVar16 = (uint)bVar9;
    param_1[2] = uVar10 + 2;
    if ((0x19 < (byte)(bVar9 + 0xbf)) && (uVar16 = 0xffffffff, 0x19 < (byte)(bVar9 + 0x9f)))
    goto switchD_10100760_caseD_44;
    cVar3 = FUN_101006c0(param_1,param_2);
    if (cVar3 != '\0') {
      return 1;
    }
    if (*param_1 == 0) {
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
        return 0;
      }
      cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"::",(undefined1 *)0x2);
      if (cVar3 != '\0') {
        return 1;
      }
      if (*param_1 == 0) goto LAB_10100bf9;
    }
    FUN_10100ff0((undefined1 *)&local_58,param_1);
    uVar10 = uStack_4c;
    if ((char)local_58 == '\x01') goto LAB_10100892;
    if (*param_1 == 0) goto LAB_10100bf9;
    FUN_10101120((int *)&local_58,param_1);
    if (CONCAT22(local_58._2_2_,CONCAT11(local_58._1_1_,(char)local_58)) == 0) goto LAB_10100b9c;
    uStack_3c = local_58._4_4_;
    uStack_34 = uStack_4c;
    if (uVar16 == 0xffffffff) {
      if ((uStack_4c == 0 && local_58._4_4_ == 0) || ((undefined4 *)param_1[4] == (undefined4 *)0x0)
         ) goto LAB_10100b92;
      cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"::",(undefined1 *)0x2);
      if (cVar3 != '\0') {
        return 1;
      }
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_10100b92;
      uVar8 = FUN_10101310(&local_40,(undefined4 *)param_1[4]);
      cVar3 = (char)uVar8;
      goto joined_r0x10100c69;
    }
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"::{",(undefined1 *)0x3);
      if (cVar3 != '\0') {
        return 1;
      }
      puVar11 = (undefined4 *)param_1[4];
    }
    if (uVar16 == 0x43) {
      if (puVar11 != (undefined4 *)0x0) {
        cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])"closure",(undefined1 *)0x7);
        goto joined_r0x10100cae;
      }
    }
    else if (uVar16 == 0x53) {
      if (puVar11 != (undefined4 *)0x0) {
        cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])"shim",&DAT_00000004);
joined_r0x10100cae:
        if (cVar3 != '\0') {
          return 1;
        }
      }
    }
    else {
      local_58._0_1_ = (char)uVar16;
      local_58._1_1_ = (char)(uVar16 >> 8);
      local_58._2_2_ = (undefined2)(uVar16 >> 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        cVar3 = FUN_1009d530((uint *)&local_58,puVar11);
        goto joined_r0x10100cae;
      }
    }
    puVar11 = (undefined4 *)param_1[4];
    if (uStack_34 != 0 || uStack_3c != 0) {
      if (puVar11 == (undefined4 *)0x0) goto LAB_10100b92;
      cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])":",(undefined1 *)0x1);
      if (cVar3 != '\0') {
        return 1;
      }
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_10100b92;
      uVar8 = FUN_10101310(&local_40,(undefined4 *)param_1[4]);
      if ((char)uVar8 != '\0') {
        return 1;
      }
      puVar11 = (undefined4 *)param_1[4];
    }
    if (puVar11 == (undefined4 *)0x0) goto LAB_10100b92;
    cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])"#",(undefined1 *)0x1);
    if (cVar3 != '\0') {
      return 1;
    }
    local_58._4_4_ = uVar10;
    local_58._0_1_ = (char)local_50;
    local_58._1_1_ = (char)(local_50 >> 8);
    local_58._2_2_ = (undefined2)(local_50 >> 0x10);
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_10100b92;
    cVar3 = FUN_1009d3f0(&local_58,(undefined4 *)param_1[4]);
    if (cVar3 != '\0') {
      return 1;
    }
    puVar11 = (undefined4 *)param_1[4];
    if (puVar11 == (undefined4 *)0x0) goto LAB_10100b92;
    pcVar15 = "}";
    goto LAB_10100b7c;
  case 0x59:
    puVar11 = (undefined4 *)param_1[4];
  }
  if ((puVar11 != (undefined4 *)0x0) &&
     (cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])"<",(undefined1 *)0x1), cVar3 != '\0')) {
    return 1;
  }
  cVar3 = FUN_101018c0(param_1);
  if (cVar3 != '\0') {
    return 1;
  }
  if ((char)local_30 != 'M') {
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" as ",&DAT_00000004),
       cVar3 != '\0')) {
      return 1;
    }
    cVar3 = FUN_101006c0(param_1,'\0');
    if (cVar3 != '\0') {
      return 1;
    }
  }
LAB_10100b70:
  puVar11 = (undefined4 *)param_1[4];
  if (puVar11 != (undefined4 *)0x0) {
    pcVar15 = ">";
LAB_10100b7c:
    cVar3 = FUN_10093f00(puVar11,(undefined1 (*) [16])pcVar15,(undefined1 *)0x1);
joined_r0x10100c69:
    if (cVar3 != '\0') {
      return 1;
    }
  }
LAB_10100b92:
  if (*param_1 != 0) {
    param_1[3] = param_1[3] + -1;
  }
  return 0;
}
