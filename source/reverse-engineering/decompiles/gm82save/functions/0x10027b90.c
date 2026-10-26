// rea decompile_all
// name: FUN_10027b90
// address: 0x10027b90
// body: available
// range: 0x10027b90-0x10027cbd inclusive
// range: 0x10027cc0-0x10028019 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall
FUN_10027b90(uint param_1,char param_2,uint param_3,uint param_4,int *param_5,undefined4 *param_6)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  undefined4 *local_5c;
  undefined1 local_58 [3];
  undefined1 uStack_55;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  byte local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 *local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  byte local_14;

  puVar1 = (uint *)param_6[2];
  local_7c = param_3;
  local_78 = param_4;
  uVar11 = *puVar1;
  bVar13 = *(byte *)(param_6 + 5);
  uVar10 = (uint)bVar13;
  uVar9 = param_6[uVar10 + 3];
  bVar12 = uVar11 < uVar9;
  if (uVar10 != 0) {
    bVar12 = uVar11 >= uVar9 && uVar11 != uVar9;
  }
  if (bVar12) {
    local_a0 = 0;
    goto LAB_10027fb4;
  }
  uVar9 = param_1 >> 1;
  local_70 = param_1;
  if (uVar9 < param_4) {
LAB_10027bff:
    local_80 = param_5[2];
    uVar9 = param_5[1];
    local_6c = 0;
    local_64 = param_6[1];
    local_74 = param_6[3];
    local_94 = param_6[4];
    uVar11 = local_74;
    if (bVar13 != 0) {
      uVar11 = local_94;
    }
    local_9c = (local_80 + uVar9) - local_80;
    _local_58 = (uint *)CONCAT31(stack0xffffffa9,bVar13);
    if (local_80 + uVar9 < local_80) {
      local_9c = 0;
    }
    if (uVar9 < local_9c) {
      local_9c = uVar9;
    }
    iVar3 = *param_5;
    local_98 = *param_6;
    if (local_9c == 0) {
      local_a0 = 0;
    }
    else {
      local_60 = puVar1;
      local_5c = (undefined4 *)uVar11;
      local_54 = local_98;
      if (bVar13 == 0) {
        uVar10 = 0;
        do {
          iVar6 = (*(code *)0x415924)(uVar10,iVar3);
          puVar8 = (undefined4 *)(local_58 + 1);
          if (iVar6 == 0) {
            local_90 = CONCAT22(CONCAT11(local_90._3_1_,uStack_55),local_58._1_2_);
            uVar9 = *puVar1;
            while (uVar11 < uVar9) {
              LOCK();
              uVar7 = *puVar1;
              bVar12 = uVar9 == uVar7;
              if (bVar12) {
                *puVar1 = uVar11;
                uVar7 = uVar9;
              }
              UNLOCK();
              uVar9 = uVar7;
              if (bVar12) goto LAB_10027e0b;
            }
            puVar8 = &local_90;
            if (uVar11 == uVar9) {
LAB_10027e0b:
              local_a0 = 1;
              uVar10 = uVar10 + local_80;
              goto LAB_10027fb4;
            }
          }
          local_a4 = CONCAT22(CONCAT11(local_a4._3_1_,*(undefined1 *)((int)puVar8 + 2)),
                              *(undefined2 *)puVar8);
          local_58 = (undefined1  [3])CONCAT21(*(undefined2 *)puVar8,local_58[0]);
          _local_58 = (uint *)CONCAT13(*(undefined1 *)((int)puVar8 + 2),local_58);
          local_a0 = 0;
          if ((*puVar1 < local_74) || (uVar10 = uVar10 + 1, local_9c <= uVar10)) goto LAB_10027fb4;
        } while( true );
      }
      uVar9 = 0;
      local_a0 = 0;
      do {
        iVar3 = (*(code *)0x415924)();
        puVar8 = (undefined4 *)(local_58 + 1);
        if (iVar3 == 0) {
          local_90 = CONCAT22(CONCAT11(local_90._3_1_,uStack_55),local_58._1_2_);
          uVar7 = *puVar1;
          do {
            if (uVar11 <= uVar7) {
              puVar8 = &local_90;
              if (uVar11 != uVar7) goto LAB_10027d01;
              break;
            }
            LOCK();
            uVar4 = *puVar1;
            bVar12 = uVar7 == uVar4;
            if (bVar12) {
              *puVar1 = uVar11;
              uVar4 = uVar7;
            }
            UNLOCK();
            uVar7 = uVar4;
          } while (!bVar12);
          local_a0 = 1;
          puVar8 = &local_90;
          uVar10 = uVar9 + local_80;
        }
LAB_10027d01:
        local_a4 = CONCAT22(CONCAT11(local_a4._3_1_,*(undefined1 *)((int)puVar8 + 2)),
                            *(undefined2 *)puVar8);
        local_58 = (undefined1  [3])CONCAT21(*(undefined2 *)puVar8,local_58[0]);
        _local_58 = (uint *)CONCAT13(*(undefined1 *)((int)puVar8 + 2),local_58);
      } while ((*puVar1 <= local_94) && (uVar9 = uVar9 + 1, uVar9 < local_9c));
    }
    goto LAB_10027fb4;
  }
  if (param_2 == '\0') {
    if (param_3 == 0) goto LAB_10027bff;
    local_7c = param_3 >> 1;
    local_40 = bVar13;
  }
  else {
    piVar5 = FUN_100be180();
    bVar13 = (byte)uVar10;
    if (piVar5 == (int *)0x0) goto LAB_1002800e;
    if (*piVar5 == 0) {
      piVar5 = FUN_100c0800();
    }
    else {
      piVar5 = (int *)(*piVar5 + 0x8c);
    }
    local_7c = param_3 >> 1;
    local_40 = bVar13;
    if (param_3 >> 1 <= *(uint *)(*piVar5 + 0x104)) {
      local_7c = *(uint *)(*piVar5 + 0x104);
    }
  }
  local_68 = param_5[1] - uVar9;
  local_a4 = uVar9;
  if ((uint)param_5[1] < uVar9) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_3c = *param_5;
  local_98 = param_5[2];
  local_3d = *(undefined1 *)((int)param_6 + 0x17);
  local_3f = *(undefined2 *)((int)param_6 + 0x15);
  local_6c = local_3c + uVar9 * 4;
  local_5c = &local_a4;
  local_64 = local_98 + uVar9;
  local_94 = *param_6;
  local_1c = param_6[3];
  local_60 = &local_70;
  local_9c = param_6[1];
  local_44 = param_6[4];
  _local_58 = &local_7c;
  local_48 = ((uint)(local_44 - local_1c) >> 1) + local_1c;
  local_30 = &local_a4;
  local_2c = &local_7c;
  local_54 = local_94;
  local_50 = local_9c;
  local_4c = puVar1;
  local_38 = uVar9;
  local_34 = local_98;
  local_28 = local_94;
  local_24 = local_9c;
  local_20 = puVar1;
  local_18 = local_48;
  local_14 = local_40;
  bVar13 = local_40;
  piVar5 = FUN_100be180();
  if (piVar5 == (int *)0x0) {
LAB_1002800e:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar3 = *piVar5;
  if (iVar3 == 0) {
    piVar5 = FUN_100c0800();
    iVar6 = *piVar5;
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_1002800e;
    iVar3 = *piVar5;
    if (iVar3 == 0) {
      FUN_1012ee10(&local_90,(uint *)(iVar6 + 0x40),&local_6c);
    }
    else {
      if (*(int *)(iVar3 + 0x8c) == iVar6) goto LAB_10027f6e;
      FUN_10131490(&local_90,(uint *)(iVar6 + 0x40),iVar3,&local_6c);
    }
  }
  else {
LAB_10027f6e:
    FUN_10036b30((undefined8 *)&local_90,(undefined8 *)&local_6c,iVar3);
  }
  uVar11 = local_90;
  uVar9 = local_8c;
  if (local_88 != 0) {
    uVar11 = 1;
    uVar9 = local_84;
  }
  if (local_90 != 0) {
    local_88 = 1;
    local_84 = local_8c;
  }
  local_a0 = local_88;
  uVar10 = local_84;
  if (bVar13 != 0) {
    local_a0 = uVar11;
    uVar10 = uVar9;
  }
LAB_10027fb4:
  return CONCAT44(uVar10,local_a0);
}
