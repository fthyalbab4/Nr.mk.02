// rea decompile_all
// name: FUN_1001da70
// address: 0x1001da70
// body: available
// range: 0x1001da70-0x1001dcbb inclusive
// range: 0x1001dcc0-0x1001e176 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1001da70(char *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined8 *param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint local_144;
  uint *local_140;
  uint *puStack_13c;
  uint *puStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  char local_11c;
  undefined7 uStack_11b;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *puStack_108;
  uint *local_104;
  int iStack_100;
  uint uStack_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_81;
  undefined1 local_58 [9];
  undefined8 local_4f;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined6 uStack_3f;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  char local_34;
  undefined8 local_33;
  undefined8 local_2b;
  undefined8 local_23;
  undefined7 local_1b;
  undefined4 uStack_14;

  pcVar1 = *(char **)(param_7 + 1);
  local_d4 = param_4;
  local_d0 = param_5;
  if (*pcVar1 != '\0') goto LAB_1001dab0;
  uVar9 = param_2 >> 1;
  local_c8 = param_2;
  if (uVar9 < param_5) {
LAB_1001dac7:
    uVar9 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      uVar9 = param_6[3];
    }
    if ((uint)param_6[5] < uVar9) {
      uVar9 = param_6[5];
    }
    if (uVar9 != 0) {
      piVar8 = (int *)*param_6;
      puVar2 = (undefined4 *)param_6[2];
      pdVar3 = (double *)param_6[4];
      piVar4 = *(int **)((int)param_7 + 0xc);
      iVar11 = *piVar8;
      if (iVar11 != 0) {
        if (*(char *)piVar4[1] == '\x01') {
          bVar12 = *pdVar3 <= DAT_10163290 && DAT_10163290 != *pdVar3;
        }
        else {
          bVar12 = false;
        }
        FUN_1007c160((undefined1 *)&local_140,*(int *)(iVar11 + 4),(ushort *)*puVar2,
                     *(void **)(*piVar4 + 4),*(SIZE_T *)(*piVar4 + 8),bVar12);
        if ((char)local_140 != -1) {
LAB_1001dbab:
          *pcVar1 = '\x01';
          *param_1 = (char)local_140;
          *(ulonglong *)(param_1 + 9) =
               CONCAT17((undefined1)iStack_130,CONCAT43(iStack_134,puStack_138._1_3_));
          *(ulonglong *)(param_1 + 1) =
               CONCAT17(puStack_138._0_1_,CONCAT43(puStack_13c,local_140._1_3_));
          *(ulonglong *)(param_1 + 0x11) =
               CONCAT17((undefined1)iStack_128,CONCAT43(iStack_12c,iStack_130._1_3_));
          *(ulonglong *)(param_1 + 0x19) =
               CONCAT17((undefined1)iStack_120,CONCAT43(iStack_124,iStack_128._1_3_));
          *(int *)(param_1 + 0x20) = iStack_120;
          return;
        }
      }
      if ((*pcVar1 == '\0') && (uVar9 != 1)) {
        iVar10 = uVar9 - 2;
        iVar11 = 0;
        local_cc = iVar10;
        do {
          iVar5 = piVar8[iVar11 + 1];
          if (iVar5 != 0) {
            if (*(char *)piVar4[1] == '\x01') {
              bVar12 = pdVar3[iVar11 + 1] <= DAT_10163290 && DAT_10163290 != pdVar3[iVar11 + 1];
            }
            else {
              bVar12 = false;
            }
            FUN_1007c160((undefined1 *)&local_140,*(int *)(iVar5 + 4),(ushort *)puVar2[iVar11 + 1],
                         *(void **)(*piVar4 + 4),*(SIZE_T *)(*piVar4 + 8),bVar12);
            iVar10 = local_cc;
            if ((char)local_140 != -1) goto LAB_1001dbab;
          }
        } while ((*pcVar1 == '\0') && (bVar12 = iVar10 != iVar11, iVar11 = iVar11 + 1, bVar12));
      }
    }
    *param_1 = -1;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1001dac7;
    local_d4 = param_4 >> 1;
  }
  else {
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_1001e16b;
    if (*piVar8 == 0) {
      piVar8 = FUN_100c0800();
    }
    else {
      piVar8 = (int *)(*piVar8 + 0x8c);
    }
    local_d4 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar8 + 0x104)) {
      local_d4 = *(uint *)(*piVar8 + 0x104);
    }
  }
  iStack_130 = param_6[1] - uVar9;
  local_144 = uVar9;
  if ((((uint)param_6[1] < uVar9) || (iStack_128 = param_6[3] - uVar9, (uint)param_6[3] < uVar9)) ||
     (iStack_120 = param_6[5] - uVar9, (uint)param_6[5] < uVar9)) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  local_140 = &local_c8;
  puStack_13c = &local_144;
  iStack_100 = *param_6;
  puStack_138 = &local_d4;
  iStack_134 = iStack_100 + uVar9 * 4;
  local_f8 = param_6[2];
  local_f0 = param_6[4];
  puStack_108 = &local_144;
  iStack_12c = local_f8 + uVar9 * 4;
  iStack_124 = local_f0 + uVar9 * 8;
  local_114 = *(undefined4 *)(param_7 + 1);
  uStack_110 = *(undefined4 *)((int)param_7 + 0xc);
  uStack_10c = *(undefined4 *)(param_7 + 2);
  local_11c = (char)*param_7;
  uStack_11b = (undefined7)((ulonglong)*param_7 >> 8);
  local_e8 = *param_7;
  local_104 = &local_d4;
  local_e0 = *(undefined4 *)(param_7 + 1);
  uStack_fc = uVar9;
  local_f4 = uVar9;
  local_ec = uVar9;
  local_dc = uStack_110;
  local_d8 = uStack_10c;
  piVar8 = FUN_100be180();
  if (piVar8 == (int *)0x0) {
LAB_1001e16b:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  iVar11 = *piVar8;
  if (iVar11 == 0) {
    piVar8 = FUN_100c0800();
    iVar10 = *piVar8;
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_1001e16b;
    iVar11 = *piVar8;
    if (iVar11 == 0) {
      FUN_1012dca0(local_58,(uint *)(iVar10 + 0x40),&local_140);
    }
    else {
      if (*(int *)(iVar11 + 0x8c) == iVar10) goto LAB_1001de4b;
      FUN_10130520(local_58,(uint *)(iVar10 + 0x40),iVar11,&local_140);
    }
  }
  else {
LAB_1001de4b:
    FUN_10032a20((int *)local_58,(undefined8 *)&local_140,iVar11,0);
  }
  uVar7 = CONCAT13(uStack_35,CONCAT21(uStack_37,uStack_38));
  local_bc = local_4f;
  local_c4 = local_58._1_8_;
  local_a0 = local_33;
  local_98 = local_2b;
  local_90 = local_23;
  uStack_81 = uStack_14;
  local_104._1_3_ = (undefined3)local_1b;
  iStack_100 = (int)((uint7)local_1b >> 0x18);
  uStack_10c._0_1_ = (undefined1)((ulonglong)local_2b >> 0x38);
  local_114._1_3_ = (undefined3)local_2b;
  uStack_110 = (undefined4)((ulonglong)local_2b >> 0x18);
  local_104._0_1_ = (undefined1)((ulonglong)local_23 >> 0x38);
  uStack_10c._1_3_ = (undefined3)local_23;
  puStack_108 = (uint *)((ulonglong)local_23 >> 0x18);
  local_114._0_1_ = (undefined1)((ulonglong)local_33 >> 0x38);
  uStack_11b = (undefined7)local_33;
  if (local_58[0] != -1) {
    iStack_130._0_1_ = (undefined1)((ulonglong)local_4f >> 0x38);
    puStack_138._1_3_ = (undefined3)local_4f;
    iStack_134 = (int)((ulonglong)local_4f >> 0x18);
    puStack_138._0_1_ = SUB81(local_58._1_8_,7);
    local_140._1_3_ = (undefined3)local_58._1_8_;
    puStack_13c = SUB84(local_58._1_8_,3);
    iStack_130._1_3_ = (undefined3)local_47;
    iStack_12c = (int)((uint7)local_47 >> 0x18);
    iStack_124 = (int)(CONCAT16(uStack_39,uStack_3f) >> 0x18);
    iStack_128._1_3_ = (undefined3)uStack_3f;
    if (local_34 != -1) {
      local_140 = (uint *)CONCAT31(local_140._1_3_,local_58[0]);
      iStack_128 = CONCAT31(iStack_128._1_3_,uStack_40);
      local_11c = local_34;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_12c,iStack_130);
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_124,iStack_128);
      *(ulonglong *)(param_1 + 8) = CONCAT44(iStack_134,puStack_138);
      *(ulonglong *)param_1 = CONCAT44(puStack_13c,local_140);
      FUN_10005ca0(&local_11c);
      return;
    }
    local_140 = (uint *)CONCAT31(local_140._1_3_,local_58[0]);
    iStack_120 = CONCAT31((int3)((uint)uVar7 >> 8),uStack_38);
    iStack_128 = CONCAT31(iStack_128._1_3_,uStack_40);
    *(ulonglong *)(param_1 + 8) = CONCAT44(iStack_134,puStack_138);
    *(ulonglong *)param_1 = CONCAT44(puStack_13c,local_140);
    *(int *)(param_1 + 0x20) = iStack_120;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_12c,iStack_130);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_124,iStack_128);
    return;
  }
  if (local_34 != -1) {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(puStack_108,uStack_10c);
    *(undefined4 *)(param_1 + 0x20) = uStack_14;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_100,local_104);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_110,local_114);
    *(ulonglong *)param_1 = CONCAT71(uStack_11b,local_34);
    return;
  }
LAB_1001dab0:
  *param_1 = -1;
  return;
}
