// rea decompile_all
// name: FUN_10023310
// address: 0x10023310
// body: available
// range: 0x10023310-0x100237be inclusive
// range: 0x100237c0-0x10023992 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10023310(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  int *piVar6;
  HANDLE hHeap;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined **ppuVar13;
  uint local_13c;
  undefined4 uStack_138;
  uint *local_134;
  uint local_130;
  undefined4 *local_12c;
  char *local_128;
  uint *local_124;
  longlong local_120;
  uint local_118;
  int local_114;
  int local_110;
  uint local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  undefined8 local_f8;
  uint *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint *local_c4;
  uint *local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_88 [4];
  int local_78;
  int local_74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;

  uVar9 = param_2 >> 1;
  local_fc = param_5;
  local_104 = param_2;
  if (uVar9 < param_5) {
LAB_1002333c:
    local_10c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_10c = param_6[3];
    }
    local_118 = param_7[1];
    if ((uint)param_6[5] < local_10c) {
      local_10c = param_6[5];
    }
    local_130 = param_7[2];
    if (local_10c == 0) {
      local_10c = 0;
    }
    else {
      local_108 = *param_6;
      local_124 = (uint *)(local_118 + 4);
      local_110 = param_6[2];
      local_114 = param_6[4];
      local_12c = (undefined4 *)*param_7;
      uVar9 = 0;
      local_134 = param_1;
      do {
        local_120 = CONCAT44(local_120._4_4_,uVar9);
        local_128 = (char *)*local_12c;
        FUN_100a3830(&local_f8,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        iVar8 = local_108;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar10 = (uint *)&local_f8;
        puVar11 = local_88;
        for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar7 = (uint)local_120;
        local_f8 = CONCAT44(local_f8._4_4_,(uint)(*(int *)(local_108 + (uint)local_120 * 4) != 0));
        local_20 = pvVar5;
        FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_f8,(undefined **)&DAT_00000004);
        if ((char)local_13c != -1) {
          local_f8 = CONCAT44(uStack_138,local_13c);
          ppuVar13 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_1002389f;
        }
        if (*(int *)(iVar8 + iVar7 * 4) != 0) {
          FUN_10018140(&local_13c,(longlong *)local_88);
          if ((char)local_13c != -1) {
            local_f8 = CONCAT44(uStack_138,local_13c);
            ppuVar13 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_1002389f;
          }
          if (*local_128 == '\0') {
            local_f8 = *(longlong *)(local_114 + iVar7 * 8);
            FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_f8,(undefined **)&DAT_00000008)
            ;
            if ((char)local_13c != -1) {
              local_f8 = CONCAT44(uStack_138,local_13c);
              ppuVar13 = &PTR_s_src_save_exe_rs_1013f89c;
              goto LAB_1002389f;
            }
          }
          local_13c = 800;
          FUN_10092830((uint *)&local_f8,(longlong *)local_88,(int)&local_13c,
                       (undefined **)&DAT_00000004);
          if ((char)local_f8 == -1) {
            FUN_10018140(&local_f8,(longlong *)local_88);
            if ((char)local_f8 == -1) goto LAB_10023512;
          }
          if ((char)local_f8 != -1) {
            ppuVar13 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_1002389f:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_f8,
                         &PTR_FUN_1013f548,ppuVar13);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_10023512:
        puVar10 = local_88;
        puVar11 = (uint *)&local_f8;
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        FUN_1004f710((undefined2 *)&local_13c,&local_f8);
        uVar4 = local_98;
        uVar3 = local_9c;
        uVar2 = local_a0;
        if ((char)local_13c != -1) {
          local_120 = CONCAT44(uStack_138,local_13c);
          FUN_100053b0(&local_f8);
          local_f8 = local_120;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_f8,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_a0 = 0xffffffff;
        if (uVar2 == 0xffffffff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_100053b0(&local_f8);
        if (local_130 == (uint)local_120) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar9 = (uint)local_120 + 1;
        local_124[-1] = uVar2;
        local_124[1] = uVar4;
        *local_124 = uVar3;
        local_124 = local_124 + 3;
        param_1 = local_134;
      } while (local_10c != uVar9);
    }
    *param_1 = local_118;
    param_1[1] = local_130;
    param_1[2] = local_10c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002333c;
    local_100 = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10023987;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_100 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_100 = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_e8 = param_6[1] - uVar9;
  local_13c = uVar9;
  if ((uint)param_6[1] < uVar9) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_e0 = param_6[3] - uVar9;
  if ((uint)param_6[3] < uVar9) {
LAB_100238af:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_120 = CONCAT44(local_120._4_4_,local_e0);
  local_12c = (undefined4 *)(param_6[5] - uVar9);
  if ((uint)param_6[5] < uVar9) goto LAB_100238af;
  local_130 = param_7[2] - uVar9;
  if ((uint)param_7[2] < uVar9) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_f8 = CONCAT44(&local_13c,&local_104);
  local_f0 = &local_100;
  local_124 = (uint *)*param_6;
  local_ec = (int)local_124 + uVar9 * 4;
  local_128 = (char *)param_6[2];
  local_ac = param_6[4];
  local_a0 = param_7[1];
  local_d4 = *param_7;
  local_e4 = (int)local_128 + uVar9 * 4;
  local_dc = local_ac + uVar9 * 8;
  local_d0 = local_a0 + uVar9 * 0xc;
  local_c8 = param_7[3];
  local_c4 = &local_13c;
  local_c0 = &local_100;
  local_134 = param_1;
  local_d8 = (int)local_12c;
  local_cc = local_130;
  local_bc = (int)local_124;
  local_b8 = uVar9;
  local_b4 = (int)local_128;
  local_b0 = uVar9;
  local_a8 = uVar9;
  local_a4 = local_d4;
  local_9c = uVar9;
  local_98 = local_c8;
  piVar6 = FUN_100be180();
  if (piVar6 == (int *)0x0) {
LAB_10023987:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar8 = *piVar6;
  if (iVar8 == 0) {
    piVar6 = FUN_100c0800();
    iVar7 = *piVar6;
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10023987;
    iVar8 = *piVar6;
    if (iVar8 == 0) {
      FUN_1012e7b0((undefined8 *)local_88,(uint *)(iVar7 + 0x40),(undefined4 *)&local_f8);
      goto LAB_1002377d;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar7) {
      FUN_10130eb0((undefined8 *)local_88,(uint *)(iVar7 + 0x40),iVar8,(undefined4 *)&local_f8);
      goto LAB_1002377d;
    }
  }
  FUN_10035230(local_88,&local_f8,iVar8,0);
LAB_1002377d:
  if (local_88[0] + local_88[2] * 0xc == local_88[3]) {
    *local_134 = local_88[0];
    local_134[1] = local_88[1] + local_78;
    local_134[2] = local_74 + local_88[2];
  }
  else {
    *local_134 = local_88[0];
    local_134[1] = local_88[1];
    local_134[2] = local_88[2];
    if (local_74 != 0) {
      puVar12 = (undefined4 *)(local_88[3] + 4);
      iVar8 = local_74;
      do {
        if (puVar12[-1] != 0) {
          pvVar5 = (LPVOID)*puVar12;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar5);
        }
        puVar12 = puVar12 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}
