// rea decompile_all
// name: FUN_1006fb30
// address: 0x1006fb30
// body: available
// range: 0x1006fb30-0x1006fcda inclusive
// range: 0x1006fce0-0x10070ce1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006fb30(char *param_1,undefined *param_2,char param_3)

{
  byte *pbVar1;
  int *_Size;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 *lpMem;
  LPVOID pvVar5;
  int iVar6;
  HANDLE pvVar7;
  undefined4 uVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  char cVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined1 local_9c [4];
  undefined3 uStack_98;
  code *pcStack_95;
  undefined1 *puStack_91;
  undefined1 uStack_8d;
  int iStack_8c;
  undefined3 uStack_88;
  char local_84;
  undefined2 uStack_83;
  char cStack_81;
  code *pcStack_80;
  code *pcStack_7c;
  undefined1 *puStack_78;
  code *local_74;
  int iStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  code *local_60;
  undefined8 local_5c;
  undefined1 *local_54;
  code *local_50;
  undefined8 local_4c;
  undefined8 local_44;
  int local_3c;
  undefined2 local_38;
  char local_36;
  char *local_34;
  code *local_30;
  code *local_2c;
  code *local_28;
  undefined1 *local_24;
  int local_20;
  undefined8 local_1c;
  undefined4 local_14;

  FUN_10111020((uint *)param_2,&DAT_101402ac,8);
  pbVar1 = *(byte **)(param_2 + 4);
  _Size = *(int **)(param_2 + 8);
  FUN_101126e0(&local_84,pbVar1,_Size);
  if (local_84 != -1) {
    local_50 = (code *)CONCAT13(cStack_81,CONCAT21(uStack_83,local_84));
    if (_Size == (int *)0x0) {
      pvVar5 = (LPVOID)0x1;
      local_60 = pcStack_80;
    }
    else {
      local_60 = pcStack_80;
      pvVar5 = FUN_10107380(0,(SIZE_T)_Size);
      if (pvVar5 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      memcpy(pvVar5,pbVar1,(size_t)_Size);
    }
    *param_1 = '\x02';
    *(code **)(param_1 + 4) = local_50;
    *(code **)(param_1 + 8) = local_60;
    *(int **)(param_1 + 0xc) = _Size;
    *(LPVOID *)(param_1 + 0x10) = pvVar5;
    *(int **)(param_1 + 0x14) = _Size;
    param_1[0x18] = '\0';
    return;
  }
  if ((param_3 == '\0') || (DAT_0078c154 != '\0')) {
    local_34 = param_1;
    FUN_10111020((uint *)param_2,&DAT_10142012,0xd);
    pbVar1 = *(byte **)(param_2 + 4);
    uVar2 = *(uint *)(param_2 + 8);
    FUN_100759c0(&local_84,pbVar1,uVar2);
    if (local_84 != -1) {
      local_36 = cStack_81;
      local_50 = pcStack_80;
      local_1c = local_6c;
      local_14 = local_64;
      local_38 = uStack_83;
      cVar9 = local_84;
LAB_100707f8:
      *local_34 = cVar9;
      *(undefined2 *)(local_34 + 1) = local_38;
      local_34[3] = local_36;
      *(code **)(local_34 + 8) = pcStack_7c;
      *(code **)(local_34 + 4) = local_50;
      *(undefined1 **)(local_34 + 0xc) = puStack_78;
      *(int *)(local_34 + 0x14) = iStack_70;
      *(code **)(local_34 + 0x10) = local_74;
      *(undefined8 *)(local_34 + 0x18) = local_1c;
      *(undefined4 *)(local_34 + 0x20) = local_14;
      return;
    }
    local_9c[0] = (char)pcStack_80;
    local_9c._1_2_ = (undefined2)((uint)pcStack_80 >> 8);
    local_9c[3] = (undefined1)((uint)pcStack_80 >> 0x18);
    unique0x10000b2b = (code *)CONCAT31((int3)pcStack_7c,local_9c[3]);
    pcStack_95._1_3_ = SUB43(puStack_78,0);
    pcStack_95 = (code *)CONCAT31(pcStack_95._1_3_,(char)((uint)pcStack_7c >> 0x18));
    iStack_8c = iStack_70;
    puStack_91._1_3_ = SUB43(local_74,0);
    puStack_91 = (undefined1 *)CONCAT31(puStack_91._1_3_,(char)((uint)puStack_78 >> 0x18));
    uStack_8d = (undefined1)((uint)local_74 >> 0x18);
    local_60 = (code *)param_2;
    iVar6 = FUN_10110f10(pbVar1,uVar2);
    if (iVar6 != 0) {
      FUN_10110e70((int)local_60,extraout_EDX);
    }
    local_50 = (code *)_DAT_0077f3c4;
    pcVar11 = _DAT_0078c14c;
    if (_DAT_0078c14c == (code *)0x0) {
      pcVar11 = (code *)&DAT_00000004;
    }
    iVar6 = _DAT_0078c150;
    if (_DAT_0078c150 == 0) {
      iVar6 = 4;
    }
    if (_DAT_0077f3c4 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        FUN_10049460(&local_84,*(ushort **)(pcVar11 + (int)puVar10 * 4));
        if (local_84 != -1) {
          local_24 = puStack_78;
          local_20 = iStack_70;
          local_36 = cStack_81;
          local_38 = uStack_83;
          local_1c = local_6c;
          local_30 = local_74;
          local_14 = local_64;
          cVar9 = local_84;
          pcVar11 = pcStack_7c;
          local_50 = pcStack_80;
          goto LAB_100707e1;
        }
        local_5c = CONCAT44(pcStack_7c,pcStack_80);
        local_54 = puStack_78;
        FUN_10049460(&local_84,*(ushort **)(iVar6 + (int)puVar10 * 4));
        if (local_84 != -1) {
          local_36 = cStack_81;
          local_1c = local_6c;
          local_38 = uStack_83;
          local_14 = local_64;
          local_2c = pcStack_80;
          pcVar11 = pcStack_7c;
          local_24 = puStack_78;
          cVar9 = local_84;
LAB_100707a6:
          local_50 = local_2c;
          local_30 = local_74;
          local_20 = iStack_70;
          if ((int)local_5c != 0) {
            pvVar5 = local_5c._4_4_;
            pvVar7 = GetProcessHeap();
            HeapFree(pvVar7,0,pvVar5);
          }
          goto LAB_100707e1;
        }
        local_4c = CONCAT44(pcStack_7c,pcStack_80);
        local_44 = CONCAT44(local_44._4_4_,puStack_78);
        pcStack_7c = (code *)&local_4c;
        local_84 = (char)&local_5c;
        uStack_83 = (undefined2)((uint)&local_5c >> 8);
        cStack_81 = (char)((uint)&local_5c >> 0x18);
        pcStack_80 = (code *)&LAB_100922c0;
        puStack_78 = &LAB_100922c0;
        FUN_10092aa0((undefined8 *)&local_2c,(int *)local_9c,(ushort *)&DAT_1014258e,(uint)&local_84
                    );
        lpMem = local_4c._4_4_;
        if ((char)local_2c != -1) {
          local_74 = pcVar11;
          if ((int)local_4c != 0) {
            pvVar7 = GetProcessHeap();
            HeapFree(pvVar7,0,lpMem);
            puVar10 = lpMem;
            local_74 = local_2c;
          }
          pcVar11 = local_28;
          iStack_70 = iVar6;
          local_24 = puVar10;
          cVar9 = '\0';
          goto LAB_100707a6;
        }
        if ((int)local_4c != 0) {
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,lpMem);
        }
        if ((int)local_5c != 0) {
          pvVar5 = local_5c._4_4_;
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,pvVar5);
        }
        puVar10 = puVar10 + 1;
      } while (local_50 != (code *)puVar10);
    }
    FUN_10053090((undefined8 *)&local_84,(int)local_9c);
    param_1 = local_34;
    param_2 = local_60;
    if ((local_84 != -1) && (local_84 != -1)) {
      local_60 = pcStack_80;
      cVar9 = '\0';
      pcVar11 = local_60;
      local_50 = (code *)CONCAT13(cStack_81,CONCAT21(uStack_83,local_84));
LAB_100707e1:
      local_60 = pcVar11;
      FUN_10005aa0((int *)local_9c);
      puStack_78 = local_24;
      local_74 = local_30;
      iStack_70 = local_20;
      pcStack_7c = local_60;
      goto LAB_100707f8;
    }
    FUN_10005aa0((int *)local_9c);
    if (param_3 != '\0') goto LAB_1006fe1e;
LAB_1006fe2b:
    if ((DAT_0077f574 != '\0') && (_DAT_0077f578 == 0)) {
      DAT_0077f574 = '\0';
    }
    FUN_10111020((uint *)param_2,&DAT_10141fb3,0xc);
    pbVar1 = *(byte **)((int)param_2 + 4);
    uVar2 = *(uint *)((int)param_2 + 8);
    FUN_100759c0(&local_84,pbVar1,uVar2);
    if (local_84 != -1) {
      iStack_8c = (int)(CONCAT44(iStack_70,local_74) >> 8);
      uStack_88 = (undefined3)((uint)iStack_70 >> 8);
      *(undefined8 *)(param_1 + 0x18) = local_6c;
      *(undefined4 *)(param_1 + 0x20) = local_64;
      *(ulonglong *)(param_1 + 0x10) = CONCAT35(uStack_88,CONCAT41(iStack_8c,local_74._0_1_));
      *(ulonglong *)(param_1 + 1) =
           CONCAT17(pcStack_7c._0_1_,CONCAT43(pcStack_80,CONCAT12(cStack_81,uStack_83)));
      *(ulonglong *)(param_1 + 9) = CONCAT17(local_74._0_1_,CONCAT43(puStack_78,pcStack_7c._1_3_));
      *param_1 = local_84;
      return;
    }
    local_4c = CONCAT44(pcStack_7c,pcStack_80);
    local_44 = CONCAT44(local_74,puStack_78);
    local_3c = iStack_70;
    local_60 = (code *)param_2;
    iVar6 = FUN_10110f10(pbVar1,uVar2);
    if (iVar6 != 0) {
      FUN_10110e70((int)local_60,extraout_EDX_00);
    }
    local_84 = (char)&local_5c;
    cVar9 = local_84;
    uStack_83 = (undefined2)((uint)&local_5c >> 8);
    uVar3 = uStack_83;
    cStack_81 = (char)((uint)&local_5c >> 0x18);
    cVar4 = cStack_81;
    pcStack_80 = (code *)&LAB_10097da0;
    local_5c = CONCAT71(local_5c._1_7_,DAT_0077f514);
    FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_101422a2,(uint)&local_84);
    if (local_9c[0] == -1) {
      pcStack_80 = (code *)&LAB_10097da0;
      local_5c = CONCAT71(local_5c._1_7_,DAT_0077f518);
      local_84 = cVar9;
      uStack_83 = uVar3;
      cStack_81 = cVar4;
      FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_101422b2,(uint)&local_84);
      if (local_9c[0] == -1) {
        pcStack_80 = (code *)&LAB_10097da0;
        local_5c = CONCAT71(local_5c._1_7_,DAT_0077f51c);
        local_84 = cVar9;
        uStack_83 = uVar3;
        cStack_81 = cVar4;
        FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_101422ca,(uint)&local_84
                    );
        if (local_9c[0] == -1) {
          pcStack_80 = (code *)&LAB_10097da0;
          local_5c = CONCAT71(local_5c._1_7_,DAT_0077f520);
          local_84 = cVar9;
          uStack_83 = uVar3;
          cStack_81 = cVar4;
          FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_101422e0,
                       (uint)&local_84);
          if (local_9c[0] == -1) {
            pcStack_80 = FUN_1009c910;
            local_5c = CONCAT44(local_5c._4_4_,_DAT_0077f524);
            local_84 = cVar9;
            uStack_83 = uVar3;
            cStack_81 = cVar4;
            FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_101422f4,
                         (uint)&local_84);
            if (local_9c[0] == -1) {
              pcStack_80 = (code *)&LAB_10097da0;
              local_5c = CONCAT71(local_5c._1_7_,DAT_0077f528);
              local_84 = cVar9;
              uStack_83 = uVar3;
              cStack_81 = cVar4;
              FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_10142301,
                           (uint)&local_84);
              if (local_9c[0] == -1) {
                pcStack_80 = (code *)&LAB_10097da0;
                local_5c = CONCAT71(local_5c._1_7_,DAT_0077f52c);
                local_84 = cVar9;
                uStack_83 = uVar3;
                cStack_81 = cVar4;
                FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_10142313,
                             (uint)&local_84);
                if (local_9c[0] == -1) {
                  local_84 = '0';
                  uStack_83 = 0x77f5;
                  cStack_81 = '\0';
                  pcStack_80 = (code *)&LAB_10096fc0;
                  FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_10142326,
                               (uint)&local_84);
                  if (local_9c[0] == -1) {
                    pcStack_80 = (code *)&LAB_10097da0;
                    local_5c = CONCAT71(local_5c._1_7_,DAT_0077f534);
                    local_84 = cVar9;
                    uStack_83 = uVar3;
                    cStack_81 = cVar4;
                    FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_10142337,
                                 (uint)&local_84);
                    if (local_9c[0] == -1) {
                      local_84 = '8';
                      uStack_83 = 0x77f5;
                      cStack_81 = '\0';
                      pcStack_80 = (code *)&LAB_10096fc0;
                      FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_1014234b,
                                   (uint)&local_84);
                      if (local_9c[0] == -1) {
                        local_84 = '<';
                        uStack_83 = 0x77f5;
                        cStack_81 = '\0';
                        pcStack_80 = (code *)&LAB_10096fc0;
                        FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,(ushort *)&DAT_1014235c
                                     ,(uint)&local_84);
                        if (local_9c[0] == -1) {
                          local_84 = '@';
                          uStack_83 = 0x77f5;
                          cStack_81 = '\0';
                          pcStack_80 = (code *)&LAB_10096fc0;
                          FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                       (ushort *)&DAT_1014236c,(uint)&local_84);
                          if (local_9c[0] == -1) {
                            pcStack_80 = (code *)&LAB_10097da0;
                            local_5c = CONCAT71(local_5c._1_7_,DAT_0077f544);
                            local_84 = cVar9;
                            uStack_83 = uVar3;
                            cStack_81 = cVar4;
                            FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                         (ushort *)&DAT_1014237b,(uint)&local_84);
                            if (local_9c[0] == -1) {
                              pcStack_80 = (code *)&LAB_10096fc0;
                              local_5c = CONCAT44(local_5c._4_4_,_DAT_0077f54c) & 0xffffffff00000001
                              ;
                              local_84 = cVar9;
                              uStack_83 = uVar3;
                              cStack_81 = cVar4;
                              FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                           (ushort *)&DAT_10142392,(uint)&local_84);
                              if (local_9c[0] == -1) {
                                pcStack_80 = (code *)&LAB_10097da0;
                                local_5c = CONCAT71(local_5c._1_7_,
                                                    (byte)((uint)_DAT_0077f54c >> 0x1f));
                                local_84 = cVar9;
                                uStack_83 = uVar3;
                                cStack_81 = cVar4;
                                FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                             (ushort *)&DAT_1014239d,(uint)&local_84);
                                if (local_9c[0] == -1) {
                                  pcStack_80 = (code *)&LAB_10097da0;
                                  local_5c = CONCAT71(local_5c._1_7_,DAT_0077f550);
                                  local_84 = cVar9;
                                  uStack_83 = uVar3;
                                  cStack_81 = cVar4;
                                  FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                               (ushort *)&DAT_101423b7,(uint)&local_84);
                                  if (local_9c[0] == -1) {
                                    pcStack_80 = (code *)&LAB_10097da0;
                                    local_5c = CONCAT71(local_5c._1_7_,DAT_0077f554);
                                    local_84 = cVar9;
                                    uStack_83 = uVar3;
                                    cStack_81 = cVar4;
                                    FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                 (ushort *)&DAT_101423d0,(uint)&local_84);
                                    if (local_9c[0] == -1) {
                                      pcStack_80 = (code *)&LAB_10097da0;
                                      local_5c = CONCAT71(local_5c._1_7_,DAT_0077f558);
                                      local_84 = cVar9;
                                      uStack_83 = uVar3;
                                      cStack_81 = cVar4;
                                      FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                   (ushort *)&DAT_101423ea,(uint)&local_84);
                                      if (local_9c[0] == -1) {
                                        pcStack_80 = (code *)&LAB_10097da0;
                                        local_5c = CONCAT71(local_5c._1_7_,DAT_0077f55c);
                                        local_84 = cVar9;
                                        uStack_83 = uVar3;
                                        cStack_81 = cVar4;
                                        FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                     (ushort *)&DAT_101423fc,(uint)&local_84);
                                        if (local_9c[0] == -1) {
                                          pcStack_80 = (code *)&LAB_10097da0;
                                          local_5c = CONCAT71(local_5c._1_7_,DAT_0077f560);
                                          local_84 = cVar9;
                                          uStack_83 = uVar3;
                                          cStack_81 = cVar4;
                                          FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                       (ushort *)&DAT_10142410,(uint)&local_84);
                                          if (local_9c[0] == -1) {
                                            pcStack_80 = (code *)&LAB_10097da0;
                                            local_5c = CONCAT71(local_5c._1_7_,DAT_0077f564);
                                            local_84 = cVar9;
                                            uStack_83 = uVar3;
                                            cStack_81 = cVar4;
                                            FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                         (ushort *)&DAT_10142425,(uint)&local_84);
                                            if (local_9c[0] == -1) {
                                              pcStack_80 = (code *)&LAB_10097da0;
                                              local_5c = CONCAT71(local_5c._1_7_,DAT_0077f568);
                                              local_84 = cVar9;
                                              uStack_83 = uVar3;
                                              cStack_81 = cVar4;
                                              FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c,
                                                           (ushort *)&DAT_10142438,(uint)&local_84);
                                              if (local_9c[0] == -1) {
                                                local_84 = 'l';
                                                uStack_83 = 0x77f5;
                                                cStack_81 = '\0';
                                                pcStack_80 = (code *)&LAB_10096fc0;
                                                FUN_10092aa0((undefined8 *)local_9c,(int *)&local_4c
                                                             ,(ushort *)&DAT_10142450,
                                                             (uint)&local_84);
                                                if (local_9c[0] == -1) {
                                                  pcStack_80 = (code *)&LAB_10097da0;
                                                  local_5c = CONCAT71(local_5c._1_7_,DAT_0077f548);
                                                  local_84 = cVar9;
                                                  uStack_83 = uVar3;
                                                  cStack_81 = cVar4;
                                                  FUN_10092aa0((undefined8 *)local_9c,
                                                               (int *)&local_4c,
                                                               (ushort *)&DAT_1014245e,
                                                               (uint)&local_84);
                                                  if (local_9c[0] == -1) {
                                                    pcStack_80 = (code *)&LAB_10097da0;
                                                    local_5c = CONCAT71(local_5c._1_7_,DAT_0077f574)
                                                    ;
                                                    local_84 = cVar9;
                                                    uStack_83 = uVar3;
                                                    cStack_81 = cVar4;
                                                    FUN_10092aa0((undefined8 *)local_9c,
                                                                 (int *)&local_4c,
                                                                 (ushort *)&DAT_10142478,
                                                                 (uint)&local_84);
                                                    if (local_9c[0] == -1) {
                                                      local_84 = 'p';
                                                      uStack_83 = 0x77f5;
                                                      cStack_81 = '\0';
                                                      pcStack_80 = (code *)&LAB_10096fc0;
                                                      FUN_10092aa0((undefined8 *)local_9c,
                                                                   (int *)&local_4c,
                                                                   (ushort *)&DAT_1014248b,
                                                                   (uint)&local_84);
                                                      if (local_9c[0] == -1) {
                                                        pcStack_80 = (code *)&LAB_10097da0;
                                                        local_5c = CONCAT71(local_5c._1_7_,
                                                                            _DAT_0077f580 != 0);
                                                        local_84 = cVar9;
                                                        uStack_83 = uVar3;
                                                        cStack_81 = cVar4;
                                                        FUN_10092aa0((undefined8 *)local_9c,
                                                                     (int *)&local_4c,
                                                                     (ushort *)&DAT_1014249b,
                                                                     (uint)&local_84);
                                                        if (local_9c[0] == -1) {
                                                          pcStack_80 = (code *)&LAB_10097da0;
                                                          local_5c = CONCAT71(local_5c._1_7_,
                                                                              _DAT_0077f57c != 0);
                                                          local_84 = cVar9;
                                                          uStack_83 = uVar3;
                                                          cStack_81 = cVar4;
                                                          FUN_10092aa0((undefined8 *)local_9c,
                                                                       (int *)&local_4c,
                                                                       (ushort *)&DAT_101424ab,
                                                                       (uint)&local_84);
                                                          if (local_9c[0] == -1) {
                                                            pcStack_80 = (code *)&LAB_10097da0;
                                                            local_5c = CONCAT71(local_5c._1_7_,
                                                                                DAT_0077f584);
                                                            local_84 = cVar9;
                                                            uStack_83 = uVar3;
                                                            cStack_81 = cVar4;
                                                            FUN_10092aa0((undefined8 *)local_9c,
                                                                         (int *)&local_4c,
                                                                         (ushort *)&DAT_101424bb,
                                                                         (uint)&local_84);
                                                            if (local_9c[0] == -1) {
                                                              local_84 = -0x78;
                                                              uStack_83 = 0x77f5;
                                                              cStack_81 = '\0';
                                                              pcStack_80 = (code *)&LAB_10096fc0;
                                                              FUN_10092aa0((undefined8 *)local_9c,
                                                                           (int *)&local_4c,
                                                                           (ushort *)&DAT_101424cc,
                                                                           (uint)&local_84);
                                                              if (local_9c[0] == -1) {
                                                                pcStack_80 = (code *)&LAB_10097da0;
                                                                local_5c = CONCAT71(local_5c._1_7_,
                                                                                    DAT_0077f58c);
                                                                local_84 = cVar9;
                                                                uStack_83 = uVar3;
                                                                cStack_81 = cVar4;
                                                                FUN_10092aa0((undefined8 *)local_9c,
                                                                             (int *)&local_4c,
                                                                             (ushort *)&DAT_101424de
                                                                             ,(uint)&local_84);
                                                                if (local_9c[0] == -1) {
                                                                  pcStack_80 = (code *)&LAB_10097da0
                                                                  ;
                                                                  local_5c = CONCAT71(local_5c._1_7_
                                                                                      ,DAT_0077f594)
                                                                  ;
                                                                  local_84 = cVar9;
                                                                  uStack_83 = uVar3;
                                                                  cStack_81 = cVar4;
                                                                  FUN_10092aa0((undefined8 *)
                                                                               local_9c,(int *)&
                                                  local_4c,(ushort *)&DAT_101424f6,(uint)&local_84);
                                                  if (local_9c[0] == -1) {
                                                    pcStack_80 = (code *)&LAB_10097da0;
                                                    local_5c = CONCAT71(local_5c._1_7_,DAT_0077f598)
                                                    ;
                                                    local_84 = cVar9;
                                                    uStack_83 = uVar3;
                                                    cStack_81 = cVar4;
                                                    FUN_10092aa0((undefined8 *)local_9c,
                                                                 (int *)&local_4c,
                                                                 (ushort *)&DAT_1014250f,
                                                                 (uint)&local_84);
                                                    if (local_9c[0] == -1) {
                                                      pcStack_80 = (code *)&LAB_10097da0;
                                                      local_5c = CONCAT71(local_5c._1_7_,
                                                                          DAT_0077f59c);
                                                      local_84 = cVar9;
                                                      uStack_83 = uVar3;
                                                      cStack_81 = cVar4;
                                                      FUN_10092aa0((undefined8 *)local_9c,
                                                                   (int *)&local_4c,
                                                                   (ushort *)&DAT_1014251f,
                                                                   (uint)&local_84);
                                                      if (local_9c[0] == -1) {
                                                        pcStack_80 = (code *)&LAB_10097da0;
                                                        local_5c = CONCAT71(local_5c._1_7_,
                                                                            DAT_0077f5a0);
                                                        local_84 = cVar9;
                                                        uStack_83 = uVar3;
                                                        cStack_81 = cVar4;
                                                        FUN_10092aa0((undefined8 *)local_9c,
                                                                     (int *)&local_4c,
                                                                     (ushort *)&DAT_10142531,
                                                                     (uint)&local_84);
                                                        if (local_9c[0] == -1) {
                                                          pcStack_80 = (code *)&LAB_10097da0;
                                                          local_5c = CONCAT71(local_5c._1_7_,
                                                                              DAT_0077f5a4);
                                                          local_84 = cVar9;
                                                          uStack_83 = uVar3;
                                                          cStack_81 = cVar4;
                                                          FUN_10092aa0((undefined8 *)local_9c,
                                                                       (int *)&local_4c,
                                                                       (ushort *)&DAT_1014254e,
                                                                       (uint)&local_84);
                                                          if (local_9c[0] == -1) {
                                                            FUN_10053090((undefined8 *)&local_84,
                                                                         (int)&local_4c);
                                                            if ((local_84 == -1) ||
                                                               (uVar8 = CONCAT13(cStack_81,
                                                                                 CONCAT21(uStack_83,
                                                                                          local_84))
                                                               , local_84 == -1)) {
                                                              FUN_10005aa0((int *)&local_4c);
                                                              pcVar11 = local_60;
                                                              if (_DAT_0077f570 == 2) {
                                                                if (_DAT_0077f580 != 0) {
                                                                  FUN_10111020((uint *)local_60,
                                                                               &DAT_10141fbf,8);
                                                                  iVar6 = FUN_10003510(*(byte **)((
                                                  int)pcVar11 + 4),*(uint *)((int)pcVar11 + 8));
                                                  local_84 = (char)iVar6;
                                                  uStack_83 = (undefined2)((uint)iVar6 >> 8);
                                                  cStack_81 = (char)((uint)iVar6 >> 0x18);
                                                  (*(code *)0x45e6d8)();
                                                  (*(code *)0x407ea8)();
                                                  FUN_1011b820((int)pcVar11);
                                                  }
                                                  pcVar11 = local_60;
                                                  if (_DAT_0077f57c != 0) {
                                                    FUN_10111020((uint *)local_60,&DAT_10141fc7,9);
                                                    iVar6 = FUN_10003510(*(byte **)((int)pcVar11 + 4
                                                                                   ),
                                                                         *(uint *)((int)pcVar11 + 8)
                                                                        );
                                                    local_84 = (char)iVar6;
                                                    uStack_83 = (undefined2)((uint)iVar6 >> 8);
                                                    cStack_81 = (char)((uint)iVar6 >> 0x18);
                                                    (*(code *)0x45e6d8)();
                                                    (*(code *)0x407ea8)();
                                                    FUN_1011b820((int)pcVar11);
                                                  }
                                                  }
                                                  if (DAT_0077f574 != '\0') {
                                                    FUN_10111020((uint *)local_60,&DAT_10141fd0,10);
                                                    pcVar11 = local_60;
                                                    if (_DAT_0077f578 == 0) {
                                                      FUN_10136b20(&PTR_s_src_save_rs_10142570);
                    /* WARNING: Does not return */
                                                      pcVar11 = (code *)invalidInstructionException
                                                                                  ();
                                                      (*pcVar11)();
                                                    }
                                                    iVar6 = FUN_10003510(*(byte **)((int)local_60 +
                                                                                   4),
                                                                         *(uint *)((int)local_60 + 8
                                                                                  ));
                                                    local_84 = (char)iVar6;
                                                    uStack_83 = (undefined2)((uint)iVar6 >> 8);
                                                    cStack_81 = (char)((uint)iVar6 >> 0x18);
                                                    (*(code *)0x45e6d8)();
                                                    (*(code *)0x407ea8)();
                                                    FUN_1011b820((int)pcVar11);
                                                  }
                                                  param_2 = local_60;
                                                  FUN_10111020((uint *)local_60,&DAT_10141fda,8);
                                                  iVar6 = FUN_10003510(*(byte **)((int)param_2 + 4),
                                                                       *(uint *)((int)param_2 + 8));
                                                  local_84 = (char)iVar6;
                                                  uStack_83 = (undefined2)((uint)iVar6 >> 8);
                                                  cStack_81 = (char)((uint)iVar6 >> 0x18);
                                                  (*(code *)0x45e6d8)();
                                                  (*(code *)0x407ea8)();
                                                  FUN_1011b820((int)param_2);
                                                  if (param_3 != '\0') goto LAB_100709d6;
                                                  goto LAB_100709e3;
                                                  }
                                                  goto LAB_10070ba9;
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
    *param_1 = '\0';
    *(uint *)(param_1 + 8) = CONCAT13(pcStack_95._0_1_,uStack_98);
    *(uint *)(param_1 + 4) = CONCAT13(local_9c[3],CONCAT21(local_9c._1_2_,local_9c[0]));
LAB_100706d2:
    FUN_10005aa0((int *)&local_4c);
    return;
  }
LAB_1006fe1e:
  if (DAT_00790824 != '\0') goto LAB_1006fe2b;
LAB_100709d6:
  if (DAT_00790a0c == '\0') {
LAB_10070bd9:
    if (DAT_0078895c == '\0') goto LAB_10070c2b;
  }
  else {
LAB_100709e3:
    local_34 = param_1;
    FUN_10111020((uint *)param_2,&DAT_10141fe2,0xe);
    local_50 = (code *)_DAT_0077f5d8;
    local_30 = (code *)&DAT_00000004;
    if (_DAT_0077f5d4 != (code *)0x0) {
      local_30 = _DAT_0077f5d4;
    }
    iVar6 = 1;
    if (_DAT_00790a14 != 0) {
      iVar6 = _DAT_00790a14;
    }
    FUN_100759c0(&local_84,*(void **)((int)param_2 + 4),*(SIZE_T *)((int)param_2 + 8));
    if (local_84 != -1) {
      iStack_8c = (int)(CONCAT44(iStack_70,local_74) >> 8);
      uStack_88 = (undefined3)((uint)iStack_70 >> 8);
      *(undefined8 *)(local_34 + 0x18) = local_6c;
      *(undefined4 *)(local_34 + 0x20) = local_64;
      *(ulonglong *)(local_34 + 0x10) = CONCAT35(uStack_88,CONCAT41(iStack_8c,local_74._0_1_));
      *(ulonglong *)(local_34 + 1) =
           CONCAT17(pcStack_7c._0_1_,CONCAT43(pcStack_80,CONCAT12(cStack_81,uStack_83)));
      *(ulonglong *)(local_34 + 9) = CONCAT17(local_74._0_1_,CONCAT43(puStack_78,pcStack_7c._1_3_));
      *local_34 = local_84;
      return;
    }
    local_4c = CONCAT44(pcStack_7c,pcStack_80);
    local_44 = CONCAT44(local_74,puStack_78);
    local_3c = iStack_70;
    if (local_50 != (code *)0x0) {
      puVar10 = (undefined1 *)0x0;
      local_60 = (code *)param_2;
      do {
        if (puVar10[iVar6] != '\0') {
          FUN_10049460(&local_84,*(ushort **)(*(int *)(local_30 + (int)puVar10 * 4) + 4));
          unique0x10000e97 = pcStack_80;
          if (local_84 != -1) {
            puStack_91 = puStack_78;
            local_9c[0] = (char)uStack_83;
            local_9c._1_2_ = (undefined2)(CONCAT12(cStack_81,uStack_83) >> 8);
            pcStack_95 = pcStack_7c;
            *(undefined8 *)(local_34 + 0x18) = local_6c;
            *(undefined4 *)(local_34 + 0x20) = local_64;
            *(ulonglong *)(local_34 + 0x10) = CONCAT44(iStack_70,local_74);
            *(ulonglong *)(local_34 + 8) = CONCAT44(puStack_78,pcStack_7c);
            *(ulonglong *)(local_34 + 1) =
                 CONCAT17(pcStack_7c._0_1_,CONCAT43(pcStack_80,CONCAT12(cStack_81,uStack_83)));
            *local_34 = local_84;
            goto LAB_100706d2;
          }
          local_84 = (char)&local_5c;
          uStack_83 = (undefined2)((uint)&local_5c >> 8);
          cStack_81 = (char)((uint)&local_5c >> 0x18);
          pcStack_80 = (code *)&LAB_100922c0;
          puStack_91 = puStack_78;
          pcStack_95 = pcStack_7c;
          local_5c = CONCAT44(pcStack_7c,unique0x10000e97);
          local_54 = puStack_78;
          FUN_10092aa0((undefined8 *)&local_2c,(int *)&local_4c,(ushort *)&DAT_10155922,
                       (uint)&local_84);
          pvVar5 = local_5c._4_4_;
          if ((char)local_2c != -1) {
            *local_34 = '\0';
            *(code **)(local_34 + 8) = local_28;
            *(code **)(local_34 + 4) = local_2c;
            if ((int)local_5c != 0) {
              pvVar7 = GetProcessHeap();
              HeapFree(pvVar7,0,pvVar5);
            }
            goto LAB_100706d2;
          }
          if ((int)local_5c != 0) {
            pvVar7 = GetProcessHeap();
            param_2 = local_60;
            HeapFree(pvVar7,0,pvVar5);
          }
        }
        puVar10 = puVar10 + 1;
      } while (local_50 != (code *)puVar10);
    }
    FUN_10053090((undefined8 *)&local_84,(int)&local_4c);
    param_1 = local_34;
    if ((local_84 != -1) &&
       (uVar8 = CONCAT13(cStack_81,CONCAT21(uStack_83,local_84)), local_84 != -1)) {
LAB_10070ba9:
      *param_1 = '\0';
      *(undefined4 *)(param_1 + 4) = uVar8;
      *(code **)(param_1 + 8) = pcStack_80;
      goto LAB_100706d2;
    }
    FUN_10005aa0((int *)&local_4c);
    FUN_1011b820((int)param_2);
    if (param_3 != '\0') goto LAB_10070bd9;
  }
  FUN_100753e0(&local_84,(uint *)param_2);
  if (local_84 != -1) {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_70,local_74);
    *(undefined4 *)(param_1 + 0x20) = local_64;
    *(undefined8 *)(param_1 + 0x18) = local_6c;
    *(ulonglong *)param_1 = CONCAT44(pcStack_80,CONCAT13(cStack_81,CONCAT21(uStack_83,local_84)));
    *(ulonglong *)(param_1 + 8) = CONCAT44(puStack_78,pcStack_7c);
    return;
  }
LAB_10070c2b:
  iVar6 = FUN_10110f10(*(byte **)((int)param_2 + 4),*(uint *)((int)param_2 + 8));
  if (iVar6 != 0) {
    FUN_10110e70((int)param_2,extraout_EDX_01);
  }
  *param_1 = -1;
  return;
}
