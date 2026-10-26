// rea decompile_all
// name: FUN_10022a50
// address: 0x10022a50
// body: available
// range: 0x10022a50-0x10023128 inclusive
// range: 0x10023130-0x10023302 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10022a50(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int *piVar5;
  HANDLE hHeap;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  uint local_144;
  undefined4 uStack_140;
  char *local_13c;
  uint *local_138;
  uint local_134;
  uint local_130;
  undefined4 *local_12c;
  longlong local_128;
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
  int iStack_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint *local_8c;
  uint local_88 [4];
  int local_78;
  int local_74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;

  uVar8 = param_2 >> 1;
  local_90 = param_5;
  local_98 = param_2;
  if (uVar8 < param_5) {
LAB_10022a82:
    local_a0 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_a0 = param_6[3];
    }
    local_134 = param_7[1];
    if ((uint)param_6[5] < local_a0) {
      local_a0 = param_6[5];
    }
    local_130 = param_7[2];
    if (local_a0 == 0) {
      local_a0 = 0;
    }
    else {
      local_9c = *param_6;
      local_a4 = param_6[2];
      local_a8 = param_6[4];
      local_12c = (undefined4 *)*param_7;
      uVar8 = 0;
      local_138 = param_1;
      do {
        local_128 = CONCAT44(local_128._4_4_,uVar8);
        local_13c = (char *)*local_12c;
        FUN_100a3830(&local_120,DAT_10163000);
        pvVar4 = FUN_10107380(0,0x8000);
        iVar7 = local_9c;
        if (pvVar4 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar9 = (uint *)&local_120;
        puVar10 = local_88;
        for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar6 = (uint)local_128;
        local_120 = CONCAT44(local_120._4_4_,(uint)(*(int *)(local_9c + (uint)local_128 * 4) != 0));
        local_20 = pvVar4;
        FUN_10092830(&local_144,(longlong *)local_88,(int)&local_120,(undefined **)&DAT_00000004);
        if ((char)local_144 != -1) {
          local_120 = CONCAT44(uStack_140,local_144);
          ppuVar12 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_1002320f;
        }
        if (*(int *)(iVar7 + iVar6 * 4) != 0) {
          FUN_10018140(&local_144,(longlong *)local_88);
          if ((char)local_144 != -1) {
            local_120 = CONCAT44(uStack_140,local_144);
            ppuVar12 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_1002320f;
          }
          if (*local_13c == '\0') {
            local_120 = *(longlong *)(local_a8 + iVar6 * 8);
            FUN_10092830(&local_144,(longlong *)local_88,(int)&local_120,(undefined **)&DAT_00000008
                        );
            if ((char)local_144 != -1) {
              local_120 = CONCAT44(uStack_140,local_144);
              ppuVar12 = &PTR_s_src_save_exe_rs_1013f89c;
              goto LAB_1002320f;
            }
          }
          iVar7 = *(int *)(iVar7 + iVar6 * 4);
          local_8c = local_88;
          (*(code *)0x704b30)();
          local_144 = 0x1ae;
          FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                       (undefined **)&DAT_00000004);
          if ((char)local_120 == -1) {
            local_144 = *(uint *)(iVar7 + 4);
            FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                         (undefined **)&DAT_00000004);
            if ((char)local_120 == -1) {
              local_144 = (uint)*(byte *)(iVar7 + 8);
              FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                           (undefined **)&DAT_00000004);
              if ((char)local_120 == -1) {
                local_144 = (uint)*(byte *)(iVar7 + 9);
                FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                             (undefined **)&DAT_00000004);
                if ((char)local_120 == -1) {
                  local_144 = *(uint *)(iVar7 + 0xc);
                  FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                               (undefined **)&DAT_00000004);
                  if ((char)local_120 == -1) {
                    local_144 = (uint)*(byte *)(iVar7 + 0x10);
                    FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_120 == -1) {
                      local_144 = *(uint *)(iVar7 + 0x14);
                      FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                                   (undefined **)&DAT_00000004);
                      if ((char)local_120 == -1) {
                        local_144 = *(uint *)(iVar7 + 0x18);
                        FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                                     (undefined **)&DAT_00000004);
                        if ((char)local_120 == -1) {
                          local_144 = 0xb;
                          FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                                       (undefined **)&DAT_00000004);
                          if ((char)local_120 == -1) {
                            iVar6 = 0x1c;
                            do {
                              local_13c = *(char **)(iVar7 + iVar6);
                              iStack_ac = iVar6;
                              if ((local_13c != (char *)0x0) && (*(int *)(local_13c + -4) != 0)) {
                                uVar8 = *(int *)(local_13c + -4) * 4 - 4;
                                do {
                                  if (*(int *)(*(int *)(local_13c + uVar8) + 8) != 0) {
                                    local_144 = uVar8 >> 2;
                                    FUN_10092830((uint *)&local_120,(longlong *)local_88,
                                                 (int)&local_144,(undefined **)&DAT_00000004);
                                    if ((char)local_120 != -1) goto LAB_10022d70;
                                    FUN_10017bc0(&local_120,
                                                 *(int **)(*(int *)(local_13c + uVar8) + 4),
                                                 *(uint *)(*(int *)(local_13c + uVar8) + 8),
                                                 &local_8c);
                                    if ((char)local_120 != -1) {
                                      goto LAB_10022d78;
                                    }
                                  }
                                  uVar8 = uVar8 - 4;
                                } while (uVar8 != 0xfffffffc);
                              }
                              local_144 = 0xffffffff;
                              FUN_10092830((uint *)&local_120,(longlong *)local_88,(int)&local_144,
                                           (undefined **)&DAT_00000004);
                              if ((char)local_120 != -1) goto LAB_10022d70;
                              iVar6 = iStack_ac + 4;
                            } while (iVar6 != 0x4c);
                            goto LAB_10022d89;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_10022d70:
LAB_10022d78:
          if ((char)(uint)local_120 != -1) {
            ppuVar12 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_1002320f:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_120,
                         &PTR_FUN_1013f548,ppuVar12);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_10022d89:
        puVar9 = local_88;
        puVar10 = (uint *)&local_120;
        for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        FUN_1004f710((undefined2 *)&local_144,&local_120);
        uVar3 = local_c0;
        uVar2 = local_c4;
        iVar7 = local_c8;
        if ((char)local_144 != -1) {
          local_128 = CONCAT44(uStack_140,local_144);
          FUN_100053b0(&local_120);
          local_120 = local_128;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_120,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_c8 = -1;
        if (iVar7 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_100053b0(&local_120);
        if ((uint)local_128 == local_130) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (uint)local_128 + 1;
        *(int *)(local_134 + (uint)local_128 * 0xc) = iVar7;
        *(undefined4 *)(local_134 + 8 + (uint)local_128 * 0xc) = uVar3;
        *(uint *)(local_134 + 4 + (uint)local_128 * 0xc) = uVar2;
        param_1 = local_138;
      } while (uVar8 != local_a0);
    }
    *param_1 = local_134;
    param_1[1] = local_130;
    param_1[2] = local_a0;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10022a82;
    local_94 = param_4 >> 1;
  }
  else {
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_100232f7;
    if (*piVar5 == 0) {
      piVar5 = FUN_100c0800();
    }
    else {
      piVar5 = (int *)(*piVar5 + 0x8c);
    }
    local_94 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar5 + 0x104)) {
      local_94 = *(uint *)(*piVar5 + 0x104);
    }
  }
  local_110 = param_6[1] - uVar8;
  local_144 = uVar8;
  if ((uint)param_6[1] < uVar8) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_108 = param_6[3] - uVar8;
  if ((uint)param_6[3] < uVar8) {
LAB_1002321f:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_128 = CONCAT44(local_128._4_4_,local_108);
  local_12c = (undefined4 *)(param_6[5] - uVar8);
  if ((uint)param_6[5] < uVar8) goto LAB_1002321f;
  local_134 = param_7[2] - uVar8;
  if ((uint)param_7[2] < uVar8) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_120 = CONCAT44(&local_144,&local_98);
  local_118 = &local_94;
  local_13c = (char *)*param_6;
  local_114 = (int)local_13c + uVar8 * 4;
  local_130 = param_6[2];
  local_d4 = param_6[4];
  local_c8 = param_7[1];
  local_fc = *param_7;
  local_10c = local_130 + uVar8 * 4;
  local_104 = local_d4 + uVar8 * 8;
  local_f8 = local_c8 + uVar8 * 0xc;
  local_f0 = param_7[3];
  local_ec = &local_144;
  local_e8 = &local_94;
  local_138 = param_1;
  local_100 = (int)local_12c;
  local_f4 = local_134;
  local_e4 = (int)local_13c;
  local_e0 = uVar8;
  local_dc = local_130;
  local_d8 = uVar8;
  local_d0 = uVar8;
  local_cc = local_fc;
  local_c4 = uVar8;
  local_c0 = local_f0;
  piVar5 = FUN_100be180();
  if (piVar5 == (int *)0x0) {
LAB_100232f7:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar7 = *piVar5;
  if (iVar7 == 0) {
    piVar5 = FUN_100c0800();
    iVar6 = *piVar5;
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_100232f7;
    iVar7 = *piVar5;
    if (iVar7 == 0) {
      FUN_1012e6c0((undefined8 *)local_88,(uint *)(iVar6 + 0x40),(undefined4 *)&local_120);
      goto LAB_100230e7;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar6) {
      FUN_10130dc0((undefined8 *)local_88,(uint *)(iVar6 + 0x40),iVar7,(undefined4 *)&local_120);
      goto LAB_100230e7;
    }
  }
  FUN_10034e10(local_88,&local_120,iVar7,0);
LAB_100230e7:
  if (local_88[0] + local_88[2] * 0xc == local_88[3]) {
    *local_138 = local_88[0];
    local_138[1] = local_88[1] + local_78;
    local_138[2] = local_74 + local_88[2];
  }
  else {
    *local_138 = local_88[0];
    local_138[1] = local_88[1];
    local_138[2] = local_88[2];
    if (local_74 != 0) {
      puVar11 = (undefined4 *)(local_88[3] + 4);
      iVar7 = local_74;
      do {
        if (puVar11[-1] != 0) {
          pvVar4 = (LPVOID)*puVar11;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar4);
        }
        puVar11 = puVar11 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}
