// rea decompile_all
// name: FUN_100203e0
// address: 0x100203e0
// body: available
// range: 0x100203e0-0x10020aa4 inclusive
// range: 0x10020ab0-0x10020c91 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100203e0(int *param_1,uint param_2,char param_3,uint param_4,longlong *param_5,int *param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  LPVOID pvVar6;
  longlong *plVar7;
  int *piVar8;
  HANDLE hHeap;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  longlong *local_13c;
  uint uStack_138;
  longlong *local_134;
  int *local_130;
  int local_12c;
  int local_128;
  int local_124;
  longlong local_120;
  undefined8 local_118;
  uint *local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  longlong **local_e4;
  uint *local_e0;
  int local_dc;
  longlong *local_d8;
  int local_d4;
  longlong *local_d0;
  int local_cc;
  longlong *local_c8;
  undefined4 local_c4;
  int local_c0;
  longlong *local_bc;
  undefined4 local_b8;
  int local_a4;
  int local_a0;
  uint local_9c;
  undefined4 *local_98;
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

  plVar12 = (longlong *)(param_2 >> 1);
  local_8c = param_5;
  local_94 = param_2;
  if (plVar12 < param_5) {
LAB_10020412:
    local_9c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_9c = param_6[3];
    }
    local_12c = param_7[1];
    if ((uint)param_6[5] < local_9c) {
      local_9c = param_6[5];
    }
    local_128 = param_7[2];
    if (local_9c == 0) {
      local_9c = 0;
    }
    else {
      local_124 = *param_6;
      local_a0 = param_6[2];
      local_a4 = param_6[4];
      local_98 = (undefined4 *)*param_7;
      uVar5 = 0;
      local_130 = param_1;
      do {
        local_120 = CONCAT44(local_120._4_4_,uVar5);
        local_134 = (longlong *)*local_98;
        FUN_100a3830(&local_118,DAT_10163000);
        pvVar6 = FUN_10107380(0,0x8000);
        iVar11 = local_124;
        if (pvVar6 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar13 = &local_118;
        plVar12 = &local_88;
        for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)plVar12 = *(undefined4 *)puVar13;
          puVar13 = (undefined8 *)((int)puVar13 + 4);
          plVar12 = (longlong *)((int)plVar12 + 4);
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar9 = (int)local_120;
        local_118 = CONCAT44(local_118._4_4_,(uint)(*(int *)(local_124 + (int)local_120 * 4) != 0));
        local_20 = pvVar6;
        FUN_10092830((uint *)&local_13c,&local_88,(int)&local_118,(undefined **)&DAT_00000004);
        if ((char)local_13c != -1) {
          local_118 = CONCAT44(uStack_138,local_13c);
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_10020b6f;
        }
        if (*(int *)(iVar11 + iVar9 * 4) != 0) {
          iVar9 = (int)local_120;
          FUN_10018140(&local_13c,&local_88);
          iVar11 = local_124;
          if ((char)local_13c != -1) {
            local_118 = CONCAT44(uStack_138,local_13c);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_10020b6f;
          }
          lVar2 = *local_134;
          local_134 = (longlong *)CONCAT31(local_134._1_3_,(char)lVar2);
          if ((char)lVar2 == '\0') {
            local_118 = *(longlong *)(local_a4 + iVar9 * 8);
            FUN_10092830((uint *)&local_13c,&local_88,(int)&local_118,(undefined **)&DAT_00000008);
            if ((char)local_13c != -1) {
              local_118 = CONCAT44(uStack_138,local_13c);
              FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                           &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f89c);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          iVar11 = *(int *)(iVar11 + iVar9 * 4);
          local_13c = (longlong *)0x212;
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,(undefined **)&DAT_00000004);
          if ((char)local_118 == -1) {
            local_13c = *(longlong **)(iVar11 + 0xc);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,(undefined **)&DAT_00000004);
            if ((char)local_118 != -1) goto LAB_10020620;
            local_13c = (longlong *)(uint)*(byte *)(iVar11 + 0x10);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,(undefined **)&DAT_00000004);
            if ((char)local_118 != -1) goto LAB_10020620;
            local_13c = *(longlong **)(iVar11 + 0x14);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,(undefined **)&DAT_00000004);
            if ((char)local_118 == -1) {
              if ((char)local_134 == '\0') {
                local_13c = *(longlong **)(iVar11 + 0x28);
                FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,
                             (undefined **)&DAT_00000004);
                if ((char)local_118 == -1) {
                  local_13c = *(longlong **)(iVar11 + 0x2c);
                  FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,
                               (undefined **)&DAT_00000004);
                  if ((char)local_118 == -1) {
                    local_13c = *(longlong **)(iVar11 + 0x30);
                    FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_118 != -1) goto LAB_100206de;
                    goto LAB_10020712;
                  }
                }
              }
              else {
LAB_10020712:
                local_13c = *(longlong **)(iVar11 + 8);
                local_134 = local_13c;
                FUN_10092830((uint *)&local_118,&local_88,(int)&local_13c,
                             (undefined **)&DAT_00000004);
                if ((char)local_118 == -1) {
                  plVar12 = *(longlong **)(iVar11 + 4);
                  if (plVar12 == (longlong *)0x0) {
                    plVar12 = (longlong *)&DAT_00000008;
                  }
                  if (local_134 != (longlong *)0x0) {
                    local_134 = plVar12 + (int)local_134 * 3;
                    do {
                      local_118 = *plVar12;
                      FUN_10092830((uint *)&local_13c,&local_88,(int)&local_118,
                                   (undefined **)&DAT_00000008);
                      plVar7 = local_13c;
                      uVar5 = uStack_138;
                      if ((char)local_13c != -1) goto LAB_10020628;
                      local_118 = plVar12[1];
                      FUN_10092830((uint *)&local_13c,&local_88,(int)&local_118,
                                   (undefined **)&DAT_00000008);
                      plVar7 = local_13c;
                      uVar5 = uStack_138;
                      if ((char)local_13c != -1) goto LAB_10020628;
                      local_118 = plVar12[2];
                      FUN_10092830((uint *)&local_13c,&local_88,(int)&local_118,
                                   (undefined **)&DAT_00000008);
                      plVar7 = local_13c;
                      uVar5 = uStack_138;
                      if ((char)local_13c != -1) goto LAB_100206e6;
                      plVar12 = plVar12 + 3;
                    } while (plVar12 != local_134);
                  }
                  goto LAB_10020639;
                }
              }
              goto LAB_10020620;
            }
LAB_100206de:
            plVar7 = (longlong *)local_118;
            uVar5 = local_118._4_4_;
LAB_100206e6:
            uVar10 = uVar5 << 0x18 | (uint)plVar7 >> 8;
            cVar4 = (char)plVar7;
          }
          else {
LAB_10020620:
            plVar7 = (longlong *)local_118;
            uVar5 = local_118._4_4_;
LAB_10020628:
            uVar10 = uVar5 << 0x18 | (uint)plVar7 >> 8;
            cVar4 = (char)plVar7;
          }
          if (cVar4 != -1) {
            local_118 = CONCAT44(uVar5 & 0xffffff00 | uVar10 >> 0x18,
                                 (uint)plVar7 & 0xff | uVar10 << 8);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_10020b6f:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                         &PTR_FUN_1013f548,ppuVar15);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_10020639:
        puVar13 = &local_88;
        plVar12 = &local_118;
        for (iVar11 = 0x1c; iVar11 != 0; iVar11 = iVar11 + -1) {
          *(undefined4 *)plVar12 = *(undefined4 *)puVar13;
          puVar13 = (undefined8 *)((int)puVar13 + 4);
          plVar12 = (longlong *)((int)plVar12 + 4);
        }
        FUN_1004f710((undefined2 *)&local_13c,&local_118);
        uVar3 = local_b8;
        plVar12 = local_bc;
        iVar11 = local_c0;
        if ((char)local_13c != -1) {
          local_120 = CONCAT44(uStack_138,local_13c);
          FUN_100053b0(&local_118);
          local_118 = local_120;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_c0 = -1;
        if (iVar11 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_100053b0(&local_118);
        if ((int)local_120 == local_128) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = (int)local_120 + 1;
        *(int *)(local_12c + (int)local_120 * 0xc) = iVar11;
        *(undefined4 *)(local_12c + 8 + (int)local_120 * 0xc) = uVar3;
        *(longlong **)(local_12c + 4 + (int)local_120 * 0xc) = plVar12;
        param_1 = local_130;
      } while (uVar5 != local_9c);
    }
    *param_1 = local_12c;
    param_1[1] = local_128;
    param_1[2] = local_9c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10020412;
    local_90 = param_4 >> 1;
  }
  else {
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_10020c86;
    if (*piVar8 == 0) {
      piVar8 = FUN_100c0800();
    }
    else {
      piVar8 = (int *)(*piVar8 + 0x8c);
    }
    local_90 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar8 + 0x104)) {
      local_90 = *(uint *)(*piVar8 + 0x104);
    }
  }
  local_108 = param_6[1] - (int)plVar12;
  local_13c = plVar12;
  if ((longlong *)param_6[1] < plVar12) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_100 = param_6[3] - (int)plVar12;
  if ((longlong *)param_6[3] < plVar12) {
LAB_10020bae:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_120 = CONCAT44(local_120._4_4_,local_100);
  local_12c = param_6[5] - (int)plVar12;
  if ((longlong *)param_6[5] < plVar12) goto LAB_10020bae;
  local_128 = (int)param_7[2] - (int)plVar12;
  if ((longlong *)param_7[2] < plVar12) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_118 = CONCAT44(&local_13c,&local_94);
  local_110 = &local_90;
  local_124 = *param_6;
  local_10c = local_124 + (int)plVar12 * 4;
  local_134 = (longlong *)param_6[2];
  local_cc = param_6[4];
  local_c0 = param_7[1];
  local_f4 = *param_7;
  local_104 = (int)local_134 + (int)plVar12 * 4;
  local_fc = local_cc + (int)plVar12 * 8;
  local_f0 = local_c0 + (int)plVar12 * 0xc;
  local_e8 = param_7[3];
  local_e4 = &local_13c;
  local_e0 = &local_90;
  local_130 = param_1;
  local_f8 = local_12c;
  local_ec = local_128;
  local_dc = local_124;
  local_d8 = plVar12;
  local_d4 = (int)local_134;
  local_d0 = plVar12;
  local_c8 = plVar12;
  local_c4 = local_f4;
  local_bc = plVar12;
  local_b8 = local_e8;
  piVar8 = FUN_100be180();
  if (piVar8 == (int *)0x0) {
LAB_10020c86:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar11 = *piVar8;
  if (iVar11 == 0) {
    piVar8 = FUN_100c0800();
    iVar9 = *piVar8;
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_10020c86;
    iVar11 = *piVar8;
    if (iVar11 == 0) {
      FUN_1012e3f0(&local_88,(uint *)(iVar9 + 0x40),(undefined4 *)&local_118);
      goto LAB_10020a63;
    }
    if (*(int *)(iVar11 + 0x8c) != iVar9) {
      FUN_10130af0(&local_88,(uint *)(iVar9 + 0x40),iVar11,(undefined4 *)&local_118);
      goto LAB_10020a63;
    }
  }
  FUN_100341b0((undefined4 *)&local_88,&local_118,iVar11,0);
LAB_10020a63:
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
      puVar14 = (undefined4 *)(local_7c + 4);
      iVar11 = local_74;
      do {
        if (puVar14[-1] != 0) {
          pvVar6 = (LPVOID)*puVar14;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar6);
        }
        puVar14 = puVar14 + 3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  return;
}
