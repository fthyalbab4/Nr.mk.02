// rea decompile_all
// name: FUN_100239a0
// address: 0x100239a0
// body: available
// range: 0x100239a0-0x10023d23 inclusive
// range: 0x10023d30-0x10024236 inclusive
// range: 0x10024240-0x1002442a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100239a0(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  LPVOID pvVar5;
  char *pcVar6;
  HANDLE hHeap;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  uint local_150;
  undefined4 uStack_14c;
  int local_148;
  char *local_144;
  int *local_140;
  uint local_13c;
  int *local_138;
  int local_134;
  int local_130;
  int local_12c;
  longlong local_128;
  int local_11c;
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
  undefined1 *local_e4;
  uint *local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_a4;
  int local_a0;
  uint local_9c;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
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
  local_8c = param_5;
  local_94 = param_2;
  if (uVar10 < param_5) {
LAB_100239d2:
    local_9c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_9c = param_6[3];
    }
    local_134 = param_7[1];
    if ((uint)param_6[5] < local_9c) {
      local_9c = param_6[5];
    }
    local_130 = param_7[2];
    if (local_9c == 0) {
      local_9c = 0;
    }
    else {
      local_12c = *param_6;
      local_a0 = param_6[2];
      local_a4 = param_6[4];
      local_98 = (undefined4 *)*param_7;
      uVar10 = 0;
      local_138 = param_1;
      do {
        local_128 = CONCAT44(local_128._4_4_,uVar10);
        local_144 = (char *)*local_98;
        FUN_100a3830(&local_118,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        iVar8 = local_12c;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar11 = &local_118;
        plVar13 = &local_88;
        for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)plVar13 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar13 = (longlong *)((int)plVar13 + 4);
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar7 = (int)local_128;
        local_118 = CONCAT44(local_118._4_4_,(uint)(*(int *)(local_12c + (int)local_128 * 4) != 0));
        local_20 = pvVar5;
        FUN_10092830(&local_150,&local_88,(int)&local_118,(undefined **)&DAT_00000004);
        if ((char)local_150 != -1) {
          local_118 = CONCAT44(uStack_14c,local_150);
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_100242fd;
        }
        if (*(int *)(iVar8 + iVar7 * 4) == 0) goto LAB_10023bfa;
        iVar8 = (int)local_128;
        FUN_10018140(&local_150,&local_88);
        if ((char)local_150 != -1) {
          local_118 = CONCAT44(uStack_14c,local_150);
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8cc;
          goto LAB_100242fd;
        }
        cVar1 = *local_144;
        local_144 = (char *)CONCAT31(local_144._1_3_,cVar1);
        if (cVar1 == '\0') {
          local_118 = *(longlong *)(local_a4 + iVar8 * 8);
          FUN_10092830(&local_150,&local_88,(int)&local_118,(undefined **)&DAT_00000008);
          if ((char)local_150 != -1) {
            local_118 = CONCAT44(uStack_14c,local_150);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f89c;
            goto LAB_1002432b;
          }
        }
        iVar8 = *(int *)(local_12c + iVar8 * 4);
        local_150 = 800;
        FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
        if ((char)local_118 == -1) {
          local_150 = *(uint *)(iVar8 + 8);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_10023be0;
          local_150 = *(uint *)(iVar8 + 0xc);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_10023be0;
          local_150 = *(uint *)(iVar8 + 4);
          local_13c = local_150;
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
          uVar10 = local_13c;
          if ((char)local_118 != -1) goto LAB_10023be0;
          piVar9 = *(int **)(iVar8 + 0x30);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)&DAT_00000004;
          }
          local_11c = local_13c * 4;
          local_148 = iVar8;
          local_140 = piVar9;
          if (local_13c != 0) {
            iVar8 = local_13c * 4;
            if ((char)local_144 == '\0') {
              do {
                FUN_10014a20(&local_118,*piVar9,&local_88);
                if ((char)local_118 != -1) goto LAB_10023be0;
                piVar9 = piVar9 + 1;
                iVar8 = iVar8 + -4;
              } while (iVar8 != 0);
            }
            else {
              iVar8 = local_13c * 4;
              do {
                iVar7 = (*(code *)0x701cf4)();
                (*(code *)0x5b0c74)();
                FUN_10014a20(&local_118,iVar7,&local_88);
                if ((char)local_118 != -1) {
                  uVar12 = local_118._4_4_;
                  uVar10 = (uint)local_118;
                  (*(code *)0x405a7c)();
                  goto LAB_10023be8;
                }
                (*(code *)0x405a7c)();
                iVar8 = iVar8 + -4;
                uVar10 = local_13c;
              } while (iVar8 != 0);
            }
          }
          if ((char)local_144 == '\0') {
            local_150 = *(uint *)(local_148 + 0x10);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
            if ((char)local_118 == -1) {
              local_150 = *(uint *)(local_148 + 0x14);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004)
              ;
              uVar10 = local_13c;
              if ((char)local_118 == -1) goto LAB_10023d64;
            }
            goto LAB_10023be0;
          }
LAB_10023d64:
          iVar8 = local_148;
          bVar2 = *(byte *)(local_148 + 0x18);
          local_150 = (uint)bVar2;
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
          iVar7 = local_148;
          if ((char)local_118 != -1) goto LAB_10023be0;
          if ((char)local_144 == '\0') {
            local_150 = *(uint *)(iVar8 + 0x1c);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004);
            if ((char)local_118 == -1) {
              local_150 = *(uint *)(local_148 + 0x20);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 == -1) {
                local_150 = *(uint *)(local_148 + 0x28);
                FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,
                             (undefined **)&DAT_00000004);
                if ((char)local_118 == -1) {
                  local_150 = *(uint *)(local_148 + 0x2c);
                  FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,
                               (undefined **)&DAT_00000004);
                  if ((char)local_118 == -1) {
                    local_150 = *(uint *)(local_148 + 0x24);
                    FUN_10092830((uint *)&local_118,&local_88,(int)&local_150,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_118 == -1) goto LAB_10023bfa;
                  }
                }
              }
            }
            goto LAB_10023be0;
          }
          if (uVar10 != 0) {
            if (bVar2 == 0) {
              local_11c = local_148 + 0x20;
              pcVar6 = (char *)(*(code *)0x5aecac)(*(undefined4 *)(local_148 + 0x14),
                                                   *(undefined4 *)(local_148 + 0x10),local_11c,
                                                   *(undefined4 *)(local_148 + 0x1c));
              iVar8 = *(int *)(iVar7 + 4);
              if (iVar8 == 0) {
                FUN_10136a50(1,0,0,&PTR_s_src_save_exe_rs_1013f6ec);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              piVar9 = *(int **)(iVar7 + 0x30);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)&DAT_00000004;
              }
              iVar8 = iVar8 * 4;
              if (iVar8 != 4) {
                uVar10 = iVar8 - 4;
                local_140 = piVar9;
                local_144 = pcVar6;
                do {
                  local_140 = local_140 + 1;
                  local_13c = uVar10;
                  (*(code *)0x5af188)(*(undefined4 *)(local_148 + 0x14),
                                      *(undefined4 *)(local_148 + 0x10),local_11c);
                  uVar10 = local_13c - 4;
                  pcVar6 = local_144;
                } while (uVar10 != 0);
              }
              FUN_1002b370(&local_118,(int)pcVar6,&local_88);
              if ((char)local_118 != -1) goto LAB_10023be0;
              (*(code *)0x405a7c)();
            }
            else {
              do {
                iVar8 = (*(code *)0x5aecac)(*(undefined4 *)(local_148 + 0x14),
                                            *(undefined4 *)(local_148 + 0x10),local_148 + 0x20,
                                            *(undefined4 *)(local_148 + 0x1c));
                FUN_1002b370(&local_118,iVar8,&local_88);
                if ((char)local_118 != -1) goto LAB_10023be0;
                (*(code *)0x405a7c)();
                local_11c = local_11c + -4;
              } while (local_11c != 0);
            }
          }
        }
        else {
LAB_10023be0:
          uVar10 = (uint)local_118;
          uVar12 = local_118._4_4_;
LAB_10023be8:
          if ((char)uVar10 != -1) {
            local_118 = CONCAT44(uVar12,uVar10);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_100242fd:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                         &PTR_FUN_1013f548,ppuVar15);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
LAB_10023bfa:
        puVar11 = &local_88;
        plVar13 = &local_118;
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar13 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar13 = (longlong *)((int)plVar13 + 4);
        }
        FUN_1004f710((undefined2 *)&local_150,&local_118);
        uVar12 = local_b8;
        uVar4 = local_bc;
        iVar8 = local_c0;
        if ((char)local_150 != -1) {
          local_128 = CONCAT44(uStack_14c,local_150);
          FUN_100053b0(&local_118);
          local_118 = local_128;
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8ac;
LAB_1002432b:
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                       &PTR_FUN_1013f548,ppuVar15);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_c0 = -1;
        if (iVar8 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_100053b0(&local_118);
        if ((int)local_128 == local_130) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar10 = (int)local_128 + 1;
        *(int *)(local_134 + (int)local_128 * 0xc) = iVar8;
        *(undefined4 *)(local_134 + 8 + (int)local_128 * 0xc) = uVar12;
        *(uint *)(local_134 + 4 + (int)local_128 * 0xc) = uVar4;
        param_1 = local_138;
      } while (uVar10 != local_9c);
    }
    *param_1 = local_134;
    param_1[1] = local_130;
    param_1[2] = local_9c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_100239d2;
    local_90 = param_4 >> 1;
  }
  else {
    piVar9 = FUN_100be180();
    if (piVar9 == (int *)0x0) goto LAB_1002441f;
    if (*piVar9 == 0) {
      piVar9 = FUN_100c0800();
    }
    else {
      piVar9 = (int *)(*piVar9 + 0x8c);
    }
    local_90 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar9 + 0x104)) {
      local_90 = *(uint *)(*piVar9 + 0x104);
    }
  }
  local_108 = param_6[1] - uVar10;
  local_150 = uVar10;
  if ((uint)param_6[1] < uVar10) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_100 = param_6[3] - uVar10;
  if ((uint)param_6[3] < uVar10) {
LAB_1002433b:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_128 = CONCAT44(local_128._4_4_,local_100);
  local_134 = param_6[5] - uVar10;
  if ((uint)param_6[5] < uVar10) goto LAB_1002433b;
  local_130 = param_7[2] - uVar10;
  if ((uint)param_7[2] < uVar10) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_118 = CONCAT44(&local_150,&local_94);
  local_110 = &local_90;
  local_12c = *param_6;
  local_10c = local_12c + uVar10 * 4;
  local_144 = (char *)param_6[2];
  local_cc = param_6[4];
  local_c0 = param_7[1];
  local_f4 = *param_7;
  local_104 = (int)local_144 + uVar10 * 4;
  local_fc = local_cc + uVar10 * 8;
  local_f0 = local_c0 + uVar10 * 0xc;
  local_e8 = param_7[3];
  local_e0 = &local_90;
  local_138 = param_1;
  local_f8 = local_134;
  local_ec = local_130;
  local_e4 = (undefined1 *)&local_150;
  local_dc = local_12c;
  local_d8 = uVar10;
  local_d4 = (int)local_144;
  local_d0 = uVar10;
  local_c8 = uVar10;
  local_c4 = local_f4;
  local_bc = uVar10;
  local_b8 = local_e8;
  piVar9 = FUN_100be180();
  if (piVar9 == (int *)0x0) {
LAB_1002441f:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar8 = *piVar9;
  if (iVar8 == 0) {
    piVar9 = FUN_100c0800();
    iVar7 = *piVar9;
    piVar9 = FUN_100be180();
    if (piVar9 == (int *)0x0) goto LAB_1002441f;
    iVar8 = *piVar9;
    if (iVar8 == 0) {
      FUN_1012e8a0(&local_88,(uint *)(iVar7 + 0x40),(undefined4 *)&local_118);
      goto LAB_100241f5;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar7) {
      FUN_10130fb0(&local_88,(uint *)(iVar7 + 0x40),iVar8,(undefined4 *)&local_118);
      goto LAB_100241f5;
    }
  }
  FUN_10035650((undefined4 *)&local_88,&local_118,iVar8,0);
LAB_100241f5:
  if ((int)local_88 + local_80 * 0xc == local_7c) {
    *local_138 = (int)local_88;
    local_138[1] = local_88._4_4_ + local_78;
    local_138[2] = local_74 + local_80;
  }
  else {
    *local_138 = (int)local_88;
    local_138[1] = local_88._4_4_;
    local_138[2] = local_80;
    if (local_74 != 0) {
      puVar14 = (undefined4 *)(local_7c + 4);
      iVar8 = local_74;
      do {
        if (puVar14[-1] != 0) {
          pvVar5 = (LPVOID)*puVar14;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar5);
        }
        puVar14 = puVar14 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}
