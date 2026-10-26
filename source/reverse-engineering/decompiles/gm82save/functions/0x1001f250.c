// rea decompile_all
// name: FUN_1001f250
// address: 0x1001f250
// body: available
// range: 0x1001f250-0x1001f45b inclusive
// range: 0x1001f460-0x1001f883 inclusive
// range: 0x1001f890-0x1001fa62 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1001f250(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  char *pcVar6;
  int *piVar7;
  HANDLE hHeap;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  uint local_140;
  undefined4 uStack_13c;
  char *local_138;
  int *local_134;
  int local_130;
  int local_12c;
  longlong local_128;
  uint *local_11c;
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
  uint local_e8;
  undefined1 *local_e4;
  uint *local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_a8;
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
LAB_1001f282:
    local_9c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_9c = param_6[3];
    }
    local_a8 = param_7[1];
    if ((uint)param_6[5] < local_9c) {
      local_9c = param_6[5];
    }
    local_130 = param_7[2];
    if (local_9c == 0) {
      local_9c = 0;
    }
    else {
      local_12c = *param_6;
      local_11c = (uint *)(local_a8 + 4);
      local_a0 = param_6[2];
      local_a4 = param_6[4];
      local_98 = (undefined4 *)*param_7;
      uVar10 = 0;
      local_134 = param_1;
      do {
        local_128 = CONCAT44(local_128._4_4_,uVar10);
        local_138 = (char *)*local_98;
        FUN_100a3830(&local_118,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        iVar9 = local_12c;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar11 = &local_118;
        plVar13 = &local_88;
        for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar13 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar13 = (longlong *)((int)plVar13 + 4);
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar8 = (int)local_128;
        local_118 = CONCAT44(local_118._4_4_,(uint)(*(int *)(local_12c + (int)local_128 * 4) != 0));
        local_20 = pvVar5;
        FUN_10092830(&local_140,&local_88,(int)&local_118,(undefined **)&DAT_00000004);
        if ((char)local_140 != -1) {
          local_118 = CONCAT44(uStack_13c,local_140);
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_1001f96c;
        }
        if (*(int *)(iVar9 + iVar8 * 4) != 0) {
          iVar8 = (int)local_128;
          FUN_10018140(&local_140,&local_88);
          iVar9 = local_12c;
          if ((char)local_140 != -1) {
            local_118 = CONCAT44(uStack_13c,local_140);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_1001f96c;
          }
          cVar1 = *local_138;
          if (cVar1 == '\0') {
            local_118 = *(longlong *)(local_a4 + iVar8 * 8);
            FUN_10092830(&local_140,&local_88,(int)&local_118,(undefined **)&DAT_00000008);
            if ((char)local_140 != -1) {
              local_118 = CONCAT44(uStack_13c,local_140);
              ppuVar15 = &PTR_s_src_save_exe_rs_1013f89c;
              goto LAB_1001f96c;
            }
          }
          iVar9 = *(int *)(iVar9 + iVar8 * 4);
          local_140 = 0x2c6;
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 == -1) {
            if (cVar1 == '\0') {
              local_140 = (uint)*(byte *)(iVar9 + 8);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 == -1) {
                local_140 = *(uint *)(iVar9 + 0xc);
                FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                             (undefined **)&DAT_00000004);
                if ((char)local_118 == -1) {
                  local_140 = *(uint *)(iVar9 + 0x10);
                  FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                               (undefined **)&DAT_00000004);
                  if ((char)local_118 == -1) {
                    local_140 = *(uint *)(iVar9 + 0x14);
                    FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_118 == -1) {
                      local_140 = *(uint *)(iVar9 + 0x18);
                      FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                                   (undefined **)&DAT_00000004);
                      if ((char)local_118 == -1) {
                        local_140 = *(uint *)(iVar9 + 0x1c);
                        FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                                     (undefined **)&DAT_00000004);
                        if ((char)local_118 == -1) {
                          local_140 = *(uint *)(iVar9 + 0x20);
                          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,
                                       (undefined **)&DAT_00000004);
                          if ((char)local_118 == -1) {
                            FUN_10014a20(&local_118,*(int *)(iVar9 + 4),&local_88);
                            if ((char)local_118 == -1) goto LAB_1001f5e5;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_1001f5d4;
            }
            iVar9 = (*(code *)0x701cf4)();
            (*(code *)0x5b0c74)();
            FUN_10014a20(&local_118,iVar9,&local_88);
            if ((char)local_118 == -1) {
              (*(code *)0x405a7c)();
              goto LAB_1001f5e5;
            }
            uVar10 = local_118._4_4_;
            local_138 = (char *)local_118;
            uVar12 = local_118._4_4_ << 0x18 | (uint)(char *)local_118 >> 8;
            (*(code *)0x405a7c)();
            pcVar6 = local_138;
          }
          else {
LAB_1001f5d4:
            uVar12 = local_118._4_4_ << 0x18 | (uint)(char *)local_118 >> 8;
            pcVar6 = (char *)local_118;
            uVar10 = local_118._4_4_;
          }
          if ((char)pcVar6 != -1) {
            local_118 = CONCAT44(uVar10 & 0xffffff00 | uVar12 >> 0x18,
                                 (uint)pcVar6 & 0xff | uVar12 << 8);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_1001f96c:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                         &PTR_FUN_1013f548,ppuVar15);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
LAB_1001f5e5:
        puVar11 = &local_88;
        plVar13 = &local_118;
        for (iVar9 = 0x1c; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)plVar13 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar13 = (longlong *)((int)plVar13 + 4);
        }
        FUN_1004f710((undefined2 *)&local_140,&local_118);
        uVar4 = local_b8;
        uVar3 = local_bc;
        uVar12 = local_c0;
        if ((char)local_140 != -1) {
          local_128 = CONCAT44(uStack_13c,local_140);
          FUN_100053b0(&local_118);
          local_118 = local_128;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_c0 = 0xffffffff;
        if (uVar12 == 0xffffffff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        FUN_100053b0(&local_118);
        if (local_130 == (int)local_128) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar10 = (int)local_128 + 1;
        local_11c[-1] = uVar12;
        *local_11c = uVar3;
        local_11c[1] = uVar4;
        local_11c = local_11c + 3;
        param_1 = local_134;
      } while (local_9c != uVar10);
    }
    *param_1 = local_a8;
    param_1[1] = local_130;
    param_1[2] = local_9c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1001f282;
    local_90 = param_4 >> 1;
  }
  else {
    piVar7 = FUN_100be180();
    if (piVar7 == (int *)0x0) goto LAB_1001fa57;
    if (*piVar7 == 0) {
      piVar7 = FUN_100c0800();
    }
    else {
      piVar7 = (int *)(*piVar7 + 0x8c);
    }
    local_90 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar7 + 0x104)) {
      local_90 = *(uint *)(*piVar7 + 0x104);
    }
  }
  local_108 = param_6[1] - uVar10;
  local_140 = uVar10;
  if ((uint)param_6[1] < uVar10) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_100 = param_6[3] - uVar10;
  if ((uint)param_6[3] < uVar10) {
LAB_1001f980:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_128 = CONCAT44(local_128._4_4_,local_100);
  local_130 = param_6[5] - uVar10;
  if ((uint)param_6[5] < uVar10) goto LAB_1001f980;
  local_138 = (char *)(param_7[2] - uVar10);
  if ((uint)param_7[2] < uVar10) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_118 = CONCAT44(&local_140,&local_94);
  local_110 = &local_90;
  local_11c = (uint *)*param_6;
  local_10c = (int)local_11c + uVar10 * 4;
  local_12c = param_6[2];
  local_cc = param_6[4];
  local_c0 = param_7[1];
  local_f4 = *param_7;
  local_104 = local_12c + uVar10 * 4;
  local_fc = local_cc + uVar10 * 8;
  local_f0 = local_c0 + uVar10 * 0xc;
  local_e8 = param_7[3];
  local_e0 = &local_90;
  local_134 = param_1;
  local_f8 = local_130;
  local_ec = (int)local_138;
  local_e4 = (undefined1 *)&local_140;
  local_dc = (int)local_11c;
  local_d8 = uVar10;
  local_d4 = local_12c;
  local_d0 = uVar10;
  local_c8 = uVar10;
  local_c4 = local_f4;
  local_bc = uVar10;
  local_b8 = local_e8;
  piVar7 = FUN_100be180();
  if (piVar7 == (int *)0x0) {
LAB_1001fa57:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar9 = *piVar7;
  if (iVar9 == 0) {
    piVar7 = FUN_100c0800();
    iVar8 = *piVar7;
    piVar7 = FUN_100be180();
    if (piVar7 == (int *)0x0) goto LAB_1001fa57;
    iVar9 = *piVar7;
    if (iVar9 == 0) {
      FUN_1012e210(&local_88,(uint *)(iVar8 + 0x40),(undefined4 *)&local_118);
      goto LAB_1001f842;
    }
    if (*(int *)(iVar9 + 0x8c) != iVar8) {
      FUN_10130910(&local_88,(uint *)(iVar8 + 0x40),iVar9,(undefined4 *)&local_118);
      goto LAB_1001f842;
    }
  }
  FUN_10033970((undefined4 *)&local_88,&local_118,iVar9,0);
LAB_1001f842:
  if ((int)local_88 + local_80 * 0xc == local_7c) {
    *local_134 = (int)local_88;
    local_134[1] = local_88._4_4_ + local_78;
    local_134[2] = local_74 + local_80;
  }
  else {
    *local_134 = (int)local_88;
    local_134[1] = local_88._4_4_;
    local_134[2] = local_80;
    if (local_74 != 0) {
      puVar14 = (undefined4 *)(local_7c + 4);
      iVar9 = local_74;
      do {
        if (puVar14[-1] != 0) {
          pvVar5 = (LPVOID)*puVar14;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar5);
        }
        puVar14 = puVar14 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}
