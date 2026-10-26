// rea decompile_all
// name: FUN_10024430
// address: 0x10024430
// body: available
// range: 0x10024430-0x100249f3 inclusive
// range: 0x10024a00-0x10024bd2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10024430(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  int *piVar6;
  HANDLE hHeap;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  uint local_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  int *local_130;
  int local_12c;
  int local_128;
  undefined4 *local_124;
  undefined8 local_120;
  uint *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  uint *local_ec;
  uint *local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  longlong *local_8c;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;

  uVar10 = param_2 >> 1;
  local_90 = param_5;
  local_98 = param_2;
  if (uVar10 < param_5) {
LAB_10024462:
    local_a0 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_a0 = param_6[3];
    }
    local_12c = param_7[1];
    if ((uint)param_6[5] < local_a0) {
      local_a0 = param_6[5];
    }
    local_128 = param_7[2];
    if (local_a0 == 0) {
      local_a0 = 0;
    }
    else {
      local_a4 = param_6[2];
      local_9c = *param_6;
      local_ac = param_6[4];
      local_138 = local_138 & 0xffffffff00000000;
      local_124 = (undefined4 *)*param_7;
      local_130 = param_1;
      do {
        pcVar1 = (char *)*local_124;
        FUN_100a3830(&local_120,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        iVar8 = local_9c;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar11 = &local_120;
        plVar12 = &local_88;
        for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)plVar12 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar12 = (longlong *)((int)plVar12 + 4);
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar7 = (int)local_138;
        local_120 = CONCAT44(local_120._4_4_,(uint)(*(int *)(local_9c + (int)local_138 * 4) != 0));
        local_20 = pvVar5;
        FUN_10092830(&local_140,&local_88,(int)&local_120,(undefined **)&DAT_00000004);
        if ((char)local_140 != -1) {
          local_120 = CONCAT44(uStack_13c,local_140);
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_10024adf;
        }
        if (*(int *)(iVar8 + iVar7 * 4) != 0) {
          FUN_10018140(&local_140,&local_88);
          if ((char)local_140 != -1) {
            local_120 = CONCAT44(uStack_13c,local_140);
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_10024adf;
          }
          if (*pcVar1 == '\0') {
            local_120 = *(longlong *)(local_ac + (int)local_138 * 8);
            FUN_10092830(&local_140,&local_88,(int)&local_120,(undefined **)&DAT_00000008);
            if ((char)local_140 != -1) {
              local_120 = CONCAT44(uStack_13c,local_140);
              ppuVar14 = &PTR_s_src_save_exe_rs_1013f89c;
              goto LAB_10024adf;
            }
          }
          iVar8 = *(int *)(iVar8 + (int)local_138 * 4);
          local_140 = 500;
          local_8c = &local_88;
          FUN_10092830((uint *)&local_120,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_120 == -1) {
            local_140 = *(uint *)(iVar8 + 0xc);
            FUN_10092830((uint *)&local_120,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
            if ((char)local_120 == -1) {
              iVar7 = *(int *)(iVar8 + 8);
              if (iVar7 == 0) {
                iVar7 = 4;
                uVar10 = 0;
                iVar8 = *(int *)(iVar8 + 4);
              }
              else {
                uVar10 = *(uint *)(iVar7 + -4) & 0x3fffffff;
                iVar8 = *(int *)(iVar8 + 4);
              }
              if (iVar8 != 0) {
                local_a8 = *(uint *)(iVar8 + -4) & 0x3fffffff;
                if (uVar10 <= local_a8) {
                  local_a8 = uVar10;
                }
                if (local_a8 != 0) {
                  uVar10 = 0;
                  do {
                    local_140 = *(uint *)(iVar7 + uVar10 * 4);
                    FUN_10092830((uint *)&local_120,&local_88,(int)&local_140,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_120 != -1) {
                      goto LAB_1002464f;
                    }
                    iVar2 = *(int *)(iVar8 + uVar10 * 4);
                    FUN_10017bc0(&local_120,*(int **)(iVar2 + 4),*(uint *)(iVar2 + 8),&local_8c);
                    if ((char)local_120 != -1) {
                      goto LAB_1002464f;
                    }
                    uVar10 = uVar10 + 1;
                  } while (local_a8 != uVar10);
                }
              }
              goto LAB_10024660;
            }
          }
LAB_1002464f:
          if ((char)(uint)local_120 != -1) {
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_10024adf:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_120,
                         &PTR_FUN_1013f548,ppuVar14);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
LAB_10024660:
        puVar11 = &local_88;
        plVar12 = &local_120;
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar12 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar12 = (longlong *)((int)plVar12 + 4);
        }
        FUN_1004f710((undefined2 *)&local_140,&local_120);
        uVar4 = local_c0;
        uVar10 = local_c4;
        iVar8 = local_c8;
        if ((char)local_140 != -1) {
          local_138 = CONCAT44(uStack_13c,local_140);
          FUN_100053b0(&local_120);
          local_120 = local_138;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_120,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_c8 = -1;
        if (iVar8 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_100053b0(&local_120);
        iVar7 = (int)local_138;
        if ((int)local_138 == local_128) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar9 = (int)local_138 + 1;
        local_138 = CONCAT44(local_138._4_4_,uVar9);
        *(int *)(local_12c + iVar7 * 0xc) = iVar8;
        *(undefined4 *)(local_12c + 8 + iVar7 * 0xc) = uVar4;
        *(uint *)(local_12c + 4 + iVar7 * 0xc) = uVar10;
        param_1 = local_130;
      } while (uVar9 != local_a0);
    }
    *param_1 = local_12c;
    param_1[1] = local_128;
    param_1[2] = local_a0;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10024462;
    local_94 = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10024bc7;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_94 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_94 = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_110 = param_6[1] - uVar10;
  local_140 = uVar10;
  if ((uint)param_6[1] < uVar10) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_108 = param_6[3] - uVar10;
  if ((uint)param_6[3] < uVar10) {
LAB_10024aef:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_138 = CONCAT44(local_138._4_4_,local_108);
  local_124 = (undefined4 *)(param_6[5] - uVar10);
  if ((uint)param_6[5] < uVar10) goto LAB_10024aef;
  local_12c = param_7[2] - uVar10;
  if ((uint)param_7[2] < uVar10) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_120 = CONCAT44(&local_140,&local_98);
  local_118 = &local_94;
  local_e4 = *param_6;
  local_114 = local_e4 + uVar10 * 4;
  local_128 = param_6[2];
  local_d4 = param_6[4];
  local_c8 = param_7[1];
  local_fc = *param_7;
  local_10c = local_128 + uVar10 * 4;
  local_104 = local_d4 + uVar10 * 8;
  local_f8 = local_c8 + uVar10 * 0xc;
  local_f0 = param_7[3];
  local_ec = &local_140;
  local_e8 = &local_94;
  local_130 = param_1;
  local_100 = (int)local_124;
  local_f4 = local_12c;
  local_e0 = uVar10;
  local_dc = local_128;
  local_d8 = uVar10;
  local_d0 = uVar10;
  local_cc = local_fc;
  local_c4 = uVar10;
  local_c0 = local_f0;
  piVar6 = FUN_100be180();
  if (piVar6 == (int *)0x0) {
LAB_10024bc7:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar8 = *piVar6;
  if (iVar8 == 0) {
    piVar6 = FUN_100c0800();
    iVar7 = *piVar6;
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10024bc7;
    iVar8 = *piVar6;
    if (iVar8 == 0) {
      FUN_1012e990(&local_88,(uint *)(iVar7 + 0x40),(undefined4 *)&local_120);
      goto LAB_100249b2;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar7) {
      FUN_101310a0(&local_88,(uint *)(iVar7 + 0x40),iVar8,(undefined4 *)&local_120);
      goto LAB_100249b2;
    }
  }
  FUN_10035a70((undefined4 *)&local_88,&local_120,iVar8,0);
LAB_100249b2:
  if ((int)local_88 + local_80 * 0xc == local_7c) {
    *local_130 = (int)local_88;
    local_130[1] = local_88._4_4_ + local_78;
    local_130[2] = local_74 + local_80;
  }
  else {
    *local_130 = (int)local_88;
    local_130[1] = local_88._4_4_;
    local_130[2] = local_80;
    if (local_74 != 0) {
      puVar13 = (undefined4 *)(local_7c + 4);
      iVar8 = local_74;
      do {
        if (puVar13[-1] != 0) {
          pvVar5 = (LPVOID)*puVar13;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar5);
        }
        puVar13 = puVar13 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}
