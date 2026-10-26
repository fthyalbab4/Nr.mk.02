// rea decompile_all
// name: FUN_10020ca0
// address: 0x10020ca0
// body: available
// range: 0x10020ca0-0x1002224b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10020ca0(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  uint uVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  int *piVar7;
  HANDLE hHeap;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  uint local_148;
  undefined4 uStack_144;
  char *local_140;
  char local_139;
  undefined8 local_138;
  uint *local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  uint *local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  undefined4 local_e4;
  int local_e0;
  uint local_dc;
  undefined4 local_d8;
  int iStack_c8;
  int *local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined4 *local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  LPVOID local_40;
  undefined4 local_3c;
  int iStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;

  uVar10 = param_2 >> 1;
  local_18 = param_5;
  local_20 = param_2;
  if (uVar10 < param_5) {
LAB_10020cd2:
    local_28 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_28 = param_6[3];
    }
    local_c0 = param_7[1];
    if ((uint)param_6[5] < local_28) {
      local_28 = param_6[5];
    }
    local_bc = param_7[2];
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      local_24 = *param_6;
      local_2c = param_6[2];
      local_30 = param_6[4];
      local_ac = (undefined4 *)*param_7;
      uVar10 = 0;
      local_c4 = param_1;
      do {
        local_b8 = CONCAT44(local_b8._4_4_,uVar10);
        local_140 = (char *)*local_ac;
        FUN_100a3830(&local_138,DAT_10163000);
        pvVar5 = FUN_10107380(0,0x8000);
        if (pvVar5 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar11 = &local_138;
        plVar6 = &local_a8;
        for (iVar8 = 0x16; iVar1 = local_24, iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar6 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar6 = (longlong *)((int)plVar6 + 4);
        }
        local_50 = 0;
        local_4c = 1;
        local_48 = 0;
        local_44 = 0x8000;
        local_3c = 0;
        iVar8 = (int)local_b8;
        local_138 = CONCAT44(local_138._4_4_,(uint)(*(int *)(local_24 + (int)local_b8 * 4) != 0));
        local_40 = pvVar5;
        FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000004);
        if ((char)local_148 != -1) {
          local_138 = CONCAT44(uStack_144,local_148);
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8dc;
          goto LAB_10022130;
        }
        if (*(int *)(iVar1 + iVar8 * 4) == 0) goto LAB_10020f60;
        iVar8 = (int)local_b8;
        FUN_10018140(&local_148,&local_a8);
        if ((char)local_148 != -1) {
          local_138 = CONCAT44(uStack_144,local_148);
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8cc;
          goto LAB_10022130;
        }
        uVar10 = 0x32b;
        local_139 = *local_140;
        if (local_139 == '\0') {
          local_138 = *(longlong *)(local_30 + iVar8 * 8);
          FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
          if ((char)local_148 != -1) {
            local_138 = CONCAT44(uStack_144,local_148);
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f89c;
            goto LAB_1002215e;
          }
          uVar10 = 0x21d;
          iVar8 = (int)local_b8;
        }
        local_140 = *(char **)(iVar1 + iVar8 * 4);
        (*(code *)0x6576fc)();
        iVar8 = DAT_10163248;
        if (DAT_10163248 == 0) {
          uVar10 = 0x21d;
        }
        local_148 = uVar10;
        FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
        pcVar3 = local_140;
        if ((char)local_138 == -1) {
          iStack_34 = iVar8;
          FUN_10018140(&local_138,&local_a8);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = *(uint *)(pcVar3 + 0xc);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = *(uint *)(pcVar3 + 0x10);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          if (local_139 == '\0') {
            local_148 = *(uint *)(pcVar3 + 0x18);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 == -1) {
              local_148 = *(uint *)(pcVar3 + 0x14);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 == -1) {
                local_148 = (uint)(byte)pcVar3[0x1c];
                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                             (undefined **)&DAT_00000004);
                if ((char)local_138 == -1) goto LAB_10020ff5;
              }
            }
            goto LAB_10020f40;
          }
LAB_10020ff5:
          local_148 = *(uint *)(pcVar3 + 8);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = (uint)(byte)pcVar3[0x1d];
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = *(uint *)(pcVar3 + 0x20);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = (uint)(byte)pcVar3[0x24] + (uint)(byte)pcVar3[0x129] * 2;
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          FUN_10018140(&local_138,&local_a8);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = 8;
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          iStack_c8 = -0x100;
          do {
            local_148 = (uint)(byte)pcVar3[iStack_c8 + 0x128];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = (uint)(byte)pcVar3[iStack_c8 + 0x129];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(pcVar3 + iStack_c8 + 300);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(pcVar3 + iStack_c8 + 0x130);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(pcVar3 + iStack_c8 + 0x134);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = (uint)(byte)pcVar3[iStack_c8 + 0x138];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = (uint)(byte)pcVar3[iStack_c8 + 0x139];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(pcVar3 + iStack_c8 + 0x13c);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(pcVar3 + iStack_c8 + 0x140);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = (uint)(byte)pcVar3[iStack_c8 + 0x144];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            iStack_c8 = iStack_c8 + 0x20;
          } while (iStack_c8 != 0);
          local_148 = (uint)(byte)pcVar3[0x128];
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          local_148 = 8;
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          iVar8 = -0x1c0;
          do {
            local_148 = (uint)(byte)local_140[iVar8 + 0x2ec];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x2f0);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x2f4);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x2f8);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x2fc);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x300);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x304);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x308);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x30c);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x310);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x314);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x318);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 0x31c);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            local_148 = *(uint *)(local_140 + iVar8 + 800);
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 != -1) goto LAB_10020f40;
            iVar8 = iVar8 + 0x38;
          } while (iVar8 != 0);
          local_148 = *(uint *)(local_140 + 0x2f0);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          iVar8 = *(int *)(local_140 + 0x2f4);
          if (iVar8 == 0) {
            iVar8 = 4;
          }
          if (*(int *)(local_140 + 0x2f0) != 0) {
            pbVar12 = (byte *)(iVar8 + 0x14);
            iVar8 = *(int *)(local_140 + 0x2f0) * 0x18;
            do {
              local_148 = *(uint *)(pbVar12 + -0x14);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x10);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0xc);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -8);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              FUN_10018140(&local_138,&local_a8);
              if ((char)local_138 != -1) goto LAB_10020f40;
              if (local_139 == '\0') {
                local_148 = (uint)*pbVar12;
                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                             (undefined **)&DAT_00000004);
                if ((char)local_138 != -1) goto LAB_10020f40;
              }
              else if (iStack_34 != 0) {
                plVar6 = (longlong *)FUN_100028f0(*(uint *)(pbVar12 + -8));
                if (plVar6 == (longlong *)0x0) {
                  plVar6 = &DAT_1013f710;
                }
                local_138 = *plVar6;
                FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
                uVar10 = local_148;
                uVar9 = uStack_144;
                if ((char)local_148 != -1) goto LAB_10020f48;
                local_138 = plVar6[1];
                FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
                uVar10 = local_148;
                uVar9 = uStack_144;
                if ((char)local_148 != -1) goto LAB_10020f48;
                local_148 = *(uint *)((int)plVar6 + 0x1c);
                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                             (undefined **)&DAT_00000004);
                if ((char)local_138 != -1) goto LAB_10020f40;
                local_138 = plVar6[2];
                FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
                uVar10 = local_148;
                uVar9 = uStack_144;
                if ((char)local_148 != -1) goto LAB_10020f48;
              }
              pbVar12 = pbVar12 + 0x18;
              iVar8 = iVar8 + -0x18;
            } while (iVar8 != 0);
          }
          local_148 = *(uint *)(local_140 + 0x2f8);
          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
          if ((char)local_138 != -1) goto LAB_10020f40;
          iVar8 = *(int *)(local_140 + 0x2fc);
          if (iVar8 == 0) {
            iVar8 = 4;
          }
          if (*(int *)(local_140 + 0x2f8) != 0) {
            pbVar12 = (byte *)(iVar8 + 0x24);
            iVar8 = *(int *)(local_140 + 0x2f8) * 0x28;
            do {
              local_148 = *(uint *)(pbVar12 + -0x24);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x20);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x1c);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x18);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x14);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0x10);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -0xc);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -8);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              local_148 = *(uint *)(pbVar12 + -4);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 != -1) goto LAB_10020f40;
              if (local_139 == '\0') {
                local_148 = (uint)*pbVar12;
LAB_10021b31:
                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                             (undefined **)&DAT_00000004);
                if ((char)local_138 != -1) goto LAB_10020f40;
              }
              else if (iStack_34 != 0) {
                plVar6 = (longlong *)FUN_100029c0(*(uint *)(pbVar12 + -4));
                if (plVar6 == (longlong *)0x0) {
                  plVar6 = &DAT_1013f730;
                }
                local_138 = *plVar6;
                FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
                uVar10 = local_148;
                uVar9 = uStack_144;
                if ((char)local_148 == -1) {
                  local_138 = plVar6[1];
                  FUN_10092830(&local_148,&local_a8,(int)&local_138,(undefined **)&DAT_00000008);
                  uVar10 = local_148;
                  uVar9 = uStack_144;
                  if ((char)local_148 == -1) {
                    local_148 = *(uint *)(plVar6 + 2);
                    goto LAB_10021b31;
                  }
                }
                goto LAB_10020f48;
              }
              pbVar12 = pbVar12 + 0x28;
              iVar8 = iVar8 + -0x28;
            } while (iVar8 != 0);
          }
          if (local_139 == '\0') {
            local_148 = (uint)(byte)local_140[0x300];
            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004);
            if ((char)local_138 == -1) {
              local_148 = *(uint *)(local_140 + 0x304);
              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,(undefined **)&DAT_00000004)
              ;
              if ((char)local_138 == -1) {
                local_148 = *(uint *)(local_140 + 0x308);
                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                             (undefined **)&DAT_00000004);
                if ((char)local_138 == -1) {
                  local_148 = (uint)(byte)local_140[0x30c];
                  FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                               (undefined **)&DAT_00000004);
                  if ((char)local_138 == -1) {
                    local_148 = (uint)(byte)local_140[0x30d];
                    FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                 (undefined **)&DAT_00000004);
                    if ((char)local_138 == -1) {
                      local_148 = (uint)(byte)local_140[0x30e];
                      FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                   (undefined **)&DAT_00000004);
                      if ((char)local_138 == -1) {
                        local_148 = (uint)(byte)local_140[0x30f];
                        FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                     (undefined **)&DAT_00000004);
                        if ((char)local_138 == -1) {
                          local_148 = (uint)(byte)local_140[0x310];
                          FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                       (undefined **)&DAT_00000004);
                          if ((char)local_138 == -1) {
                            local_148 = (uint)(byte)local_140[0x311];
                            FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                         (undefined **)&DAT_00000004);
                            if ((char)local_138 == -1) {
                              local_148 = (uint)(byte)local_140[0x312];
                              FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                           (undefined **)&DAT_00000004);
                              if ((char)local_138 == -1) {
                                local_148 = (uint)(byte)local_140[0x313];
                                FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                             (undefined **)&DAT_00000004);
                                if ((char)local_138 == -1) {
                                  local_148 = *(uint *)(local_140 + 0x314);
                                  FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                               (undefined **)&DAT_00000004);
                                  if ((char)local_138 == -1) {
                                    local_148 = *(uint *)(local_140 + 0x318);
                                    FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                                 (undefined **)&DAT_00000004);
                                    if ((char)local_138 == -1) {
                                      local_148 = *(uint *)(local_140 + 0x31c);
                                      FUN_10092830((uint *)&local_138,&local_a8,(int)&local_148,
                                                   (undefined **)&DAT_00000004);
                                      if ((char)local_138 == -1) goto LAB_10020f60;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_10020f40;
          }
        }
        else {
LAB_10020f40:
          uVar10 = (uint)local_138;
          uVar9 = local_138._4_4_;
LAB_10020f48:
          if ((char)uVar10 != -1) {
            local_138 = CONCAT44(uVar9,uVar10);
            ppuVar14 = &PTR_s_src_save_exe_rs_1013f8bc;
LAB_10022130:
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                         &PTR_FUN_1013f548,ppuVar14);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
LAB_10020f60:
        puVar11 = &local_a8;
        plVar6 = &local_138;
        for (iVar8 = 0x1c; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)plVar6 = *(undefined4 *)puVar11;
          puVar11 = (undefined8 *)((int)puVar11 + 4);
          plVar6 = (longlong *)((int)plVar6 + 4);
        }
        FUN_1004f710((undefined2 *)&local_148,&local_138);
        uVar9 = local_d8;
        uVar4 = local_dc;
        iVar8 = local_e0;
        if ((char)local_148 != -1) {
          local_b8 = CONCAT44(uStack_144,local_148);
          FUN_100053b0(&local_138);
          local_138 = local_b8;
          ppuVar14 = &PTR_s_src_save_exe_rs_1013f8ac;
LAB_1002215e:
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                       &PTR_FUN_1013f548,ppuVar14);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_e0 = -1;
        if (iVar8 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        FUN_100053b0(&local_138);
        if ((int)local_b8 == local_bc) {
          FUN_101369c0("too many values pushed to consumer",0x45,
                       &PTR_s_C__Users_runneradmin__cargo_regi_10143848);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar10 = (int)local_b8 + 1;
        *(int *)(local_c0 + (int)local_b8 * 0xc) = iVar8;
        *(undefined4 *)(local_c0 + 8 + (int)local_b8 * 0xc) = uVar9;
        *(uint *)(local_c0 + 4 + (int)local_b8 * 0xc) = uVar4;
        param_1 = local_c4;
      } while (uVar10 != local_28);
    }
    *param_1 = local_c0;
    param_1[1] = local_bc;
    param_1[2] = local_28;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10020cd2;
    local_1c = param_4 >> 1;
  }
  else {
    piVar7 = FUN_100be180();
    if (piVar7 == (int *)0x0) goto LAB_10022240;
    if (*piVar7 == 0) {
      piVar7 = FUN_100c0800();
    }
    else {
      piVar7 = (int *)(*piVar7 + 0x8c);
    }
    local_1c = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar7 + 0x104)) {
      local_1c = *(uint *)(*piVar7 + 0x104);
    }
  }
  local_128 = param_6[1] - uVar10;
  local_148 = uVar10;
  if ((uint)param_6[1] < uVar10) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143bf4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_120 = param_6[3] - uVar10;
  if ((uint)param_6[3] < uVar10) {
LAB_1002216e:
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_b8 = CONCAT44(local_b8._4_4_,local_120);
  local_118 = param_6[5] - uVar10;
  if ((uint)param_6[5] < uVar10) goto LAB_1002216e;
  local_10c = param_7[2] - uVar10;
  if ((uint)param_7[2] < uVar10) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10143814);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_138 = CONCAT44(&local_148,&local_20);
  local_130 = &local_1c;
  local_140 = (char *)*param_6;
  local_12c = (int)local_140 + uVar10 * 4;
  local_f4 = param_6[2];
  local_ec = param_6[4];
  local_e0 = param_7[1];
  local_114 = *param_7;
  local_124 = local_f4 + uVar10 * 4;
  local_11c = local_ec + uVar10 * 8;
  local_110 = local_e0 + uVar10 * 0xc;
  local_108 = param_7[3];
  local_100 = &local_1c;
  local_104 = (undefined1 *)&local_148;
  local_fc = (int)local_140;
  local_f8 = uVar10;
  local_f0 = uVar10;
  local_e8 = uVar10;
  local_e4 = local_114;
  local_dc = uVar10;
  local_d8 = local_108;
  local_c4 = param_1;
  local_c0 = local_10c;
  local_bc = local_f4;
  local_ac = (undefined4 *)local_118;
  piVar7 = FUN_100be180();
  if (piVar7 == (int *)0x0) {
LAB_10022240:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar8 = *piVar7;
  if (iVar8 == 0) {
    piVar7 = FUN_100c0800();
    iVar1 = *piVar7;
    piVar7 = FUN_100be180();
    if (piVar7 == (int *)0x0) goto LAB_10022240;
    iVar8 = *piVar7;
    if (iVar8 == 0) {
      FUN_1012e4e0(&local_a8,(uint *)(iVar1 + 0x40),(undefined4 *)&local_138);
      goto LAB_1002202b;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar1) {
      FUN_10130be0(&local_a8,(uint *)(iVar1 + 0x40),iVar8,(undefined4 *)&local_138);
      goto LAB_1002202b;
    }
  }
  FUN_100345d0((undefined4 *)&local_a8,&local_138,iVar8,0);
LAB_1002202b:
  if ((int)local_a8 + local_a0 * 0xc == local_9c) {
    *local_c4 = (int)local_a8;
    local_c4[1] = local_a8._4_4_ + local_98;
    local_c4[2] = local_94 + local_a0;
  }
  else {
    *local_c4 = (int)local_a8;
    local_c4[1] = local_a8._4_4_;
    local_c4[2] = local_a0;
    if (local_94 != 0) {
      puVar13 = (undefined4 *)(local_9c + 4);
      iVar8 = local_94;
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
