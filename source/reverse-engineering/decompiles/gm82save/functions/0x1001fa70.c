// rea decompile_all
// name: FUN_1001fa70
// address: 0x1001fa70
// body: available
// range: 0x1001fa70-0x100201fb inclusive
// range: 0x10020200-0x100203d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1001fa70(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int *piVar6;
  HANDLE hHeap;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  uint local_140;
  undefined4 uStack_13c;
  char *local_138;
  int *local_134;
  int local_130;
  int local_12c;
  ulonglong local_128;
  undefined4 *local_11c;
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
  int local_98;
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

  uVar9 = param_2 >> 1;
  local_8c = param_5;
  local_94 = param_2;
  if (uVar9 < param_5) {
LAB_1001faa2:
    local_9c = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_9c = param_6[3];
    }
    local_130 = param_7[1];
    if ((uint)param_6[5] < local_9c) {
      local_9c = param_6[5];
    }
    local_12c = param_7[2];
    if (local_9c == 0) {
      local_9c = 0;
    }
    else {
      local_a0 = param_6[2];
      local_98 = *param_6;
      local_a4 = param_6[4];
      local_128 = local_128 & 0xffffffff00000000;
      local_11c = (undefined4 *)*param_7;
      local_134 = param_1;
      do {
        local_138 = (char *)*local_11c;
        FUN_100a3830(&local_118,DAT_10163000);
        pvVar4 = FUN_10107380(0,0x8000);
        iVar8 = local_98;
        if (pvVar4 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar10 = &local_118;
        puVar11 = &local_88;
        for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          puVar10 = (undefined8 *)((int)puVar10 + 4);
          puVar11 = (undefined8 *)((int)puVar11 + 4);
        }
        local_30 = 0;
        local_2c = 1;
        local_28 = 0;
        local_24 = 0x8000;
        local_1c = 0;
        iVar7 = (int)local_128;
        local_118 = CONCAT44(local_118._4_4_,(uint)(*(int *)(local_98 + (int)local_128 * 4) != 0));
        local_20 = pvVar4;
        FUN_10092830(&local_140,&local_88,(int)&local_118,(undefined **)&DAT_00000004);
        if ((char)local_140 != -1) {
          local_118 = CONCAT44(uStack_13c,local_140);
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_100202dc;
        }
        if (*(int *)(iVar8 + iVar7 * 4) == 0) goto LAB_1001fd69;
        FUN_10018140(&local_140,&local_88);
        if ((char)local_140 != -1) {
          local_118 = CONCAT44(uStack_13c,local_140);
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8cc;
          goto LAB_100202dc;
        }
        cVar1 = *local_138;
        local_138 = (char *)CONCAT31(local_138._1_3_,cVar1);
        if (cVar1 == '\0') {
          local_118 = *(longlong *)(local_a4 + iVar7 * 8);
          FUN_10092830(&local_140,&local_88,(int)&local_118,(undefined **)&DAT_00000008);
          if ((char)local_140 != -1) {
            local_118 = CONCAT44(uStack_13c,local_140);
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f89c;
            goto LAB_100202dc;
          }
        }
        iVar8 = *(int *)(iVar8 + iVar7 * 4);
        local_140 = 800;
        FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
        if ((char)local_118 == -1) {
          FUN_10018140(&local_118,&local_88);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          local_140 = *(uint *)(iVar8 + 8);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          local_140 = (uint)*(byte *)(iVar8 + 0xc);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          local_140 = (uint)*(byte *)(iVar8 + 0xd);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          uVar9 = *(int *)(iVar8 + 0x18) << 0x10;
          if (*(int *)(iVar8 + 0x18) == 1) {
            uVar9 = 0;
          }
          local_140 = *(int *)(iVar8 + 0x1c) * 0x1000000 + 0x1000000U |
                      *(ushort *)(iVar8 + 0x10) | uVar9;
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          local_140 = *(uint *)(iVar8 + 0x14);
          FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
          if ((char)local_118 != -1) goto LAB_1001fd50;
          if ((char)local_138 != '\0') {
            FUN_10048610(iVar8);
            iVar7 = -0x100;
            do {
              local_140 = *(uint *)(iVar8 + 0x420 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) {
LAB_1001ffd9:
                goto LAB_1001fd58;
              }
              local_140 = *(uint *)(iVar8 + 0x820 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) goto LAB_1001ffd9;
              local_140 = *(uint *)(iVar8 + 0xc20 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) goto LAB_1001ffd9;
              local_140 = *(uint *)(iVar8 + 0x1020 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) goto LAB_1001ffd9;
              local_140 = *(uint *)(iVar8 + 0x1420 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) goto LAB_1001ffd9;
              local_140 = *(uint *)(iVar8 + 0x1820 + iVar7 * 4);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 != -1) goto LAB_1001ffd9;
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0);
            local_140 = *(uint *)(iVar8 + 0x1c20);
            FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004);
            if ((char)local_118 == -1) {
              local_140 = *(uint *)(iVar8 + 0x1c24);
              FUN_10092830((uint *)&local_118,&local_88,(int)&local_140,(undefined **)&DAT_00000004)
              ;
              if ((char)local_118 == -1) {
                iVar7 = *(int *)(iVar8 + 0x1c28);
                if (iVar7 == 0) {
                  iVar7 = 1;
                }
                FUN_100180e0((uint *)&local_118,iVar7,
                             (undefined **)(*(int *)(iVar8 + 0x1c24) * *(int *)(iVar8 + 0x1c20)),
                             &local_88);
                if ((char)local_118 == -1) {
                  (*(code *)0x409be0)(0);
                  goto LAB_1001fd69;
                }
              }
            }
            goto LAB_1001fd50;
          }
        }
        else {
LAB_1001fd50:
LAB_1001fd58:
          if ((char)(uint)local_118 != -1) {
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_100202dc:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_118,
                         &PTR_FUN_1013f548,ppuVar14);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
LAB_1001fd69:
        puVar10 = &local_88;
        plVar12 = &local_118;
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar12 = *(undefined4 *)puVar10;
          puVar10 = (undefined8 *)((int)puVar10 + 4);
          plVar12 = (longlong *)((int)plVar12 + 4);
        }
        FUN_1004f710((undefined2 *)&local_140,&local_118);
        uVar3 = local_b8;
        uVar9 = local_bc;
        iVar8 = local_c0;
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
        local_c0 = -1;
        if (iVar8 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        FUN_100053b0(&local_118);
        iVar7 = (int)local_128;
        if ((int)local_128 == local_12c) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = (int)local_128 + 1;
        local_128 = CONCAT44(local_128._4_4_,uVar5);
        *(int *)(local_130 + iVar7 * 0xc) = iVar8;
        *(undefined4 *)(local_130 + 8 + iVar7 * 0xc) = uVar3;
        *(uint *)(local_130 + 4 + iVar7 * 0xc) = uVar9;
        param_1 = local_134;
      } while (uVar5 != local_9c);
    }
    *param_1 = local_130;
    param_1[1] = local_12c;
    param_1[2] = local_9c;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1001faa2;
    local_90 = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_100203c7;
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
  local_108 = param_6[1] - uVar9;
  local_140 = uVar9;
  if ((uint)param_6[1] < uVar9) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_100 = param_6[3] - uVar9;
  if ((uint)param_6[3] < uVar9) {
LAB_100202f0:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_128 = CONCAT44(local_128._4_4_,local_100);
  local_11c = (undefined4 *)(param_6[5] - uVar9);
  if ((uint)param_6[5] < uVar9) goto LAB_100202f0;
  local_130 = param_7[2] - uVar9;
  if ((uint)param_7[2] < uVar9) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_118 = CONCAT44(&local_140,&local_94);
  local_110 = &local_90;
  local_138 = (char *)*param_6;
  local_10c = (int)local_138 + uVar9 * 4;
  local_12c = param_6[2];
  local_cc = param_6[4];
  local_c0 = param_7[1];
  local_f4 = *param_7;
  local_104 = local_12c + uVar9 * 4;
  local_fc = local_cc + uVar9 * 8;
  local_f0 = local_c0 + uVar9 * 0xc;
  local_e8 = param_7[3];
  local_e0 = &local_90;
  local_134 = param_1;
  local_f8 = (int)local_11c;
  local_ec = local_130;
  local_e4 = (undefined1 *)&local_140;
  local_dc = (int)local_138;
  local_d8 = uVar9;
  local_d4 = local_12c;
  local_d0 = uVar9;
  local_c8 = uVar9;
  local_c4 = local_f4;
  local_bc = uVar9;
  local_b8 = local_e8;
  piVar6 = FUN_100be180();
  if (piVar6 == (int *)0x0) {
LAB_100203c7:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar8 = *piVar6;
  if (iVar8 == 0) {
    piVar6 = FUN_100c0800();
    iVar7 = *piVar6;
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_100203c7;
    iVar8 = *piVar6;
    if (iVar8 == 0) {
      FUN_1012e300(&local_88,(uint *)(iVar7 + 0x40),(undefined4 *)&local_118);
      goto LAB_100201ba;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar7) {
      FUN_10130a00(&local_88,(uint *)(iVar7 + 0x40),iVar8,(undefined4 *)&local_118);
      goto LAB_100201ba;
    }
  }
  FUN_10033d90((undefined4 *)&local_88,&local_118,iVar8,0);
LAB_100201ba:
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
      puVar13 = (undefined4 *)(local_7c + 4);
      iVar8 = local_74;
      do {
        if (puVar13[-1] != 0) {
          pvVar4 = (LPVOID)*puVar13;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar4);
        }
        puVar13 = puVar13 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}
