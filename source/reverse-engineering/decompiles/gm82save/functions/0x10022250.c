// rea decompile_all
// name: FUN_10022250
// address: 0x10022250
// body: available
// range: 0x10022250-0x10022867 inclusive
// range: 0x10022870-0x10022a42 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10022250(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  int *piVar6;
  HANDLE hHeap;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  uint local_13c;
  undefined4 uStack_138;
  char *local_134;
  uint *local_130;
  uint local_12c;
  ulonglong local_128;
  undefined4 *local_120;
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
  uint *local_e4;
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
  uint local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88 [4];
  int local_78;
  int local_74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;

  uVar11 = param_2 >> 1;
  local_8c = param_5;
  local_94 = param_2;
  if (uVar11 < param_5) {
LAB_10022282:
    local_9c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_9c = param_6[3];
    }
    local_a8 = param_7[1];
    if ((uint)param_6[5] < local_9c) {
      local_9c = param_6[5];
    }
    local_12c = param_7[2];
    if (local_9c == 0) {
      local_9c = 0;
    }
    else {
      local_98 = *param_6;
      local_a4 = param_6[4];
      local_120 = (undefined4 *)*param_7;
      local_11c = (uint *)(local_a8 + 4);
      local_128 = local_128 & 0xffffffff00000000;
      local_a0 = param_6[2];
      local_130 = param_1;
      do {
        local_134 = (char *)*local_120;
        FUN_100a3830(&local_118,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        iVar9 = local_98;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar12 = (uint *)&local_118;
        puVar13 = local_88;
        for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar7 = (uint)local_128;
        local_118 = CONCAT44(local_118._4_4_,(uint)(*(int *)(local_98 + (uint)local_128 * 4) != 0));
        local_20 = pvVar5;
        FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_118,(undefined **)&DAT_00000004);
        if ((char)local_13c != -1) {
          local_118 = CONCAT44(uStack_138,local_13c);
          ppuVar15 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_1002294f;
        }
        if (*(int *)(iVar9 + iVar7 * 4) != 0) {
          FUN_10018140(&local_13c,(longlong *)local_88);
          if ((char)local_13c != -1) {
            local_118 = CONCAT44(uStack_138,local_13c);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8cc;
            goto LAB_1002294f;
          }
          if (*local_134 == '\0') {
            local_118 = *(longlong *)(local_a4 + iVar7 * 8);
            FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_118,(undefined **)&DAT_00000008
                        );
            if ((char)local_13c != -1) {
              local_118 = CONCAT44(uStack_138,local_13c);
              ppuVar15 = &PTR_s_src_save_exe_rs_1013f89c;
              goto LAB_1002294f;
            }
          }
          local_134 = *(char **)(iVar9 + iVar7 * 4);
          local_13c = 800;
          FUN_10092830((uint *)&local_118,(longlong *)local_88,(int)&local_13c,
                       (undefined **)&DAT_00000004);
          if ((char)local_118 == -1) {
            local_13c = *(uint *)(local_134 + 4);
            FUN_10092830((uint *)&local_118,(longlong *)local_88,(int)&local_13c,
                         (undefined **)&DAT_00000004);
            pcVar2 = local_134;
            if ((char)local_118 != -1) goto LAB_100224a0;
            FUN_10018140(&local_118,(longlong *)local_88);
            if ((char)local_118 != -1) goto LAB_100224a0;
            FUN_10018140(&local_118,(longlong *)local_88);
            if ((char)local_118 != -1) goto LAB_100224a0;
            iVar9 = *(int *)(pcVar2 + 0x2c);
            local_13c = (uint)(iVar9 != 0);
            FUN_10092830((uint *)&local_118,(longlong *)local_88,(int)&local_13c,
                         (undefined **)&DAT_00000004);
            if ((char)local_118 == -1) {
              if (iVar9 != 0) {
                FUN_100180e0((uint *)&local_118,*(int *)(iVar9 + 4),*(undefined ***)(iVar9 + 8),
                             (longlong *)local_88);
                if ((char)local_118 != -1) goto LAB_10022573;
              }
              local_13c = *(uint *)(pcVar2 + 0xc);
              FUN_10092830((uint *)&local_118,(longlong *)local_88,(int)&local_13c,
                           (undefined **)&DAT_00000004);
              if ((char)local_118 != -1) goto LAB_100224a0;
              local_118 = *(longlong *)(pcVar2 + 0x18);
              FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_118,
                           (undefined **)&DAT_00000008);
              uVar11 = local_13c;
              uVar8 = uStack_138;
              if ((char)local_13c == -1) {
                local_118 = *(longlong *)(pcVar2 + 0x20);
                FUN_10092830(&local_13c,(longlong *)local_88,(int)&local_118,
                             (undefined **)&DAT_00000008);
                uVar11 = local_13c;
                uVar8 = uStack_138;
                if ((char)local_13c == -1) {
                  local_13c = (uint)(byte)pcVar2[0x28];
                  FUN_10092830((uint *)&local_118,(longlong *)local_88,(int)&local_13c,
                               (undefined **)&DAT_00000004);
                  if ((char)local_118 == -1) goto LAB_100224b9;
                  goto LAB_100224a0;
                }
              }
            }
            else {
LAB_10022573:
              uVar11 = (uint)local_118;
              uVar8 = local_118._4_4_;
            }
          }
          else {
LAB_100224a0:
            uVar11 = (uint)local_118;
            uVar8 = local_118._4_4_;
          }
          if ((char)uVar11 != -1) {
            local_118 = CONCAT44(uVar8,uVar11);
            ppuVar15 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_1002294f:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                         &PTR_FUN_1013f548,ppuVar15);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_100224b9:
        puVar12 = local_88;
        puVar13 = (uint *)&local_118;
        for (iVar9 = 0x1c; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1004f710((undefined2 *)&local_13c,&local_118);
        uVar4 = local_b8;
        uVar3 = local_bc;
        uVar11 = local_c0;
        if ((char)local_13c != -1) {
          local_128 = CONCAT44(uStack_138,local_13c);
          FUN_100053b0(&local_118);
          local_118 = local_128;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                       &PTR_FUN_1013f548,&PTR_s_src_save_exe_rs_1013f8ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_c0 = 0xffffffff;
        if (uVar11 == 0xffffffff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_100053b0(&local_118);
        if (local_12c == (uint)local_128) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar10 = (uint)local_128 + 1;
        local_11c[-1] = uVar11;
        local_11c[1] = uVar4;
        *local_11c = uVar3;
        local_11c = local_11c + 3;
        local_128 = CONCAT44(local_128._4_4_,uVar10);
        param_1 = local_130;
      } while (local_9c != uVar10);
    }
    *param_1 = local_a8;
    param_1[1] = local_12c;
    param_1[2] = local_9c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10022282;
    local_90 = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10022a37;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_90 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_90 = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_108 = param_6[1] - uVar11;
  local_13c = uVar11;
  if ((uint)param_6[1] < uVar11) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_100 = param_6[3] - uVar11;
  if ((uint)param_6[3] < uVar11) {
LAB_1002295f:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_128 = CONCAT44(local_128._4_4_,local_100);
  local_120 = (undefined4 *)(param_6[5] - uVar11);
  if ((uint)param_6[5] < uVar11) goto LAB_1002295f;
  local_12c = param_7[2] - uVar11;
  if ((uint)param_7[2] < uVar11) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_118 = CONCAT44(&local_13c,&local_94);
  local_110 = &local_90;
  local_11c = (uint *)*param_6;
  local_10c = (int)local_11c + uVar11 * 4;
  local_134 = (char *)param_6[2];
  local_cc = param_6[4];
  local_c0 = param_7[1];
  local_f4 = *param_7;
  local_104 = (int)local_134 + uVar11 * 4;
  local_fc = local_cc + uVar11 * 8;
  local_f0 = local_c0 + uVar11 * 0xc;
  local_e8 = param_7[3];
  local_e4 = &local_13c;
  local_e0 = &local_90;
  local_130 = param_1;
  local_f8 = (int)local_120;
  local_ec = local_12c;
  local_dc = (int)local_11c;
  local_d8 = uVar11;
  local_d4 = (int)local_134;
  local_d0 = uVar11;
  local_c8 = uVar11;
  local_c4 = local_f4;
  local_bc = uVar11;
  local_b8 = local_e8;
  piVar6 = FUN_100be180();
  if (piVar6 == (int *)0x0) {
LAB_10022a37:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar9 = *piVar6;
  if (iVar9 == 0) {
    piVar6 = FUN_100c0800();
    iVar7 = *piVar6;
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10022a37;
    iVar9 = *piVar6;
    if (iVar9 == 0) {
      FUN_1012e5d0((undefined8 *)local_88,(uint *)(iVar7 + 0x40),(undefined4 *)&local_118);
      goto LAB_10022826;
    }
    if (*(int *)(iVar9 + 0x8c) != iVar7) {
      FUN_10130cd0((undefined8 *)local_88,(uint *)(iVar7 + 0x40),iVar9,(undefined4 *)&local_118);
      goto LAB_10022826;
    }
  }
  FUN_100349f0(local_88,&local_118,iVar9,0);
LAB_10022826:
  if (local_88[0] + local_88[2] * 0xc == local_88[3]) {
    *local_130 = local_88[0];
    local_130[1] = local_88[1] + local_78;
    local_130[2] = local_74 + local_88[2];
  }
  else {
    *local_130 = local_88[0];
    local_130[1] = local_88[1];
    local_130[2] = local_88[2];
    if (local_74 != 0) {
      puVar14 = (undefined4 *)(local_88[3] + 4);
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
