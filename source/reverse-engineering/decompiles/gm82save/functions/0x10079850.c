// rea decompile_all
// name: FUN_10079850
// address: 0x10079850
// body: available
// range: 0x10079850-0x1007a504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10079850(uint *param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  SIZE_T SVar8;
  HANDLE pvVar9;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  ushort *puVar10;
  LPVOID pvVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  uint *local_130 [6];
  undefined4 local_118;
  uint local_110 [2];
  int local_108;
  int *piStack_104;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_48 [8];
  int local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  int local_20 [4];

  FUN_1007a660();
  LOCK();
  bVar15 = DAT_10163020 == '\0';
  if (bVar15) {
    DAT_10163020 = '\x01';
  }
  UNLOCK();
  if (bVar15) {
    if (DAT_10163024 != 0xffffffff) goto LAB_1007987f;
LAB_100798d0:
    puVar6 = PTR_FUN_10163034;
    PTR_FUN_10163034 = (undefined *)0x0;
    if (puVar6 == (undefined *)0x0) {
      FUN_101369c0("Lazy instance has previously been poisoned",0x55,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1013fd70);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    (*(code *)puVar6)(local_110);
    local_a0 = CONCAT44(local_108,local_110[1]);
    uStack_98 = CONCAT44(uStack_98._4_4_,piStack_104);
    if (DAT_10163024 == 0xffffffff) {
      DAT_10163024 = local_110[0];
      DAT_10163030 = piStack_104;
      _DAT_10163028 = local_a0;
    }
    else if (local_110[0] != 0xffffffff) {
      FUN_10003bb0((int *)local_110);
      FUN_101369c0("reentrant initC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\core\\src\\cell\\once.rs"
                   ,0x1d,&PTR_s_C__Users_runneradmin__cargo_regi_1013f3c8);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_110[0] = 0xffffffff;
    FUN_10003bb0((int *)local_110);
    iVar7 = DAT_10163028;
    if (DAT_10163024 == 0) goto LAB_100799a4;
LAB_1007988d:
    uVar12 = DAT_10163024;
    if (DAT_10163024 == 1) {
      LOCK();
      piVar1 = (int *)(iVar7 + 0xc0);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    else {
      LOCK();
      piVar1 = (int *)(iVar7 + 0x38);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
  }
  else {
    FUN_10138380((byte *)&DAT_10163020);
    if (DAT_10163024 == 0xffffffff) goto LAB_100798d0;
LAB_1007987f:
    iVar7 = DAT_10163028;
    if (DAT_10163024 != 0) goto LAB_1007988d;
LAB_100799a4:
    uVar12 = DAT_10163024;
    LOCK();
    piVar1 = (int *)(iVar7 + 0x100);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  LOCK();
  bVar15 = DAT_10163020 == '\x01';
  if (bVar15) {
    DAT_10163020 = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_10137fb0(&DAT_10163020);
  }
  FUN_1002b500((int)local_48,uVar12,iVar7);
  if (local_40 != -2) {
    uStack_f0 = (undefined4)local_28;
    local_ec = (undefined4)((ulonglong)local_28 >> 0x20);
    local_110[0] = local_48._0_4_;
    local_110[1] = local_48._4_4_;
    if (DAT_1016301c != 0) {
      local_130[0] = local_110;
      local_a0 = CONCAT44(local_a0._4_4_,local_130);
      FUN_1013c400((uint *)&DAT_1016301c,0,&local_a0,0x1013f34c,
                   &PTR_s_src_regular_project_watcher_rs_10142e6c);
    }
    FUN_10005ed0((char *)local_110);
    return;
  }
  local_b8 = CONCAT44(uStack_38,iStack_3c);
  local_b0 = CONCAT44(uStack_30,local_34);
  local_a8 = local_2c;
  FUN_10111020(param_1,&DAT_1014028c,0xb);
  pbVar3 = (byte *)param_1[1];
  uVar12 = param_1[2];
  FUN_1011c320(local_110,(int)pbVar3,uVar12);
  piVar1 = piStack_104;
  if ((local_110[0] & local_110[1]) == 0xffffffff) {
    if ((char)local_108 == '\x03') {
      puVar4 = (undefined4 *)piStack_104[1];
      pvVar11 = (LPVOID)*piStack_104;
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(pvVar11);
      }
      if (puVar4[1] != 0) {
        if (8 < (uint)puVar4[2]) {
          pvVar11 = *(LPVOID *)((int)pvVar11 + -4);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar11);
      }
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,piVar1);
    }
LAB_10079b43:
    iVar7 = FUN_10110f10(pbVar3,uVar12);
    if (iVar7 != 0) {
      FUN_10110e70((int)param_1,extraout_EDX);
    }
    FUN_10111020(param_1,&DAT_10140297,9);
    pbVar3 = (byte *)param_1[1];
    uVar12 = param_1[2];
    FUN_1011c320(local_110,(int)pbVar3,uVar12);
    piVar1 = piStack_104;
    if ((local_110[0] & local_110[1]) == 0xffffffff) {
      if ((char)local_108 == '\x03') {
        puVar4 = (undefined4 *)piStack_104[1];
        pvVar11 = (LPVOID)*piStack_104;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(pvVar11);
        }
        if (puVar4[1] != 0) {
          if (8 < (uint)puVar4[2]) {
            pvVar11 = *(LPVOID *)((int)pvVar11 + -4);
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvVar11);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,piVar1);
      }
    }
    else {
      FUN_100b2620(local_110,&iStack_3c,pbVar3,uVar12,0);
      if (local_108 != -2) goto LAB_1007a270;
    }
    iVar7 = FUN_10110f10(pbVar3,uVar12);
    if (iVar7 != 0) {
      FUN_10110e70((int)param_1,extraout_EDX_00);
    }
    FUN_10111020(param_1,&DAT_101402a0,5);
    pbVar3 = (byte *)param_1[1];
    uVar12 = param_1[2];
    FUN_1011c320(local_110,(int)pbVar3,uVar12);
    piVar1 = piStack_104;
    if ((local_110[0] & local_110[1]) == 0xffffffff) {
      if ((char)local_108 == '\x03') {
        puVar4 = (undefined4 *)piStack_104[1];
        pvVar11 = (LPVOID)*piStack_104;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(pvVar11);
        }
        if (puVar4[1] != 0) {
          if (8 < (uint)puVar4[2]) {
            pvVar11 = *(LPVOID *)((int)pvVar11 + -4);
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvVar11);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,piVar1);
      }
    }
    else {
      FUN_100b2620(local_110,&iStack_3c,pbVar3,uVar12,0);
      if (local_108 != -2) goto LAB_1007a270;
    }
    iVar7 = FUN_10110f10(pbVar3,uVar12);
    if (iVar7 != 0) {
      FUN_10110e70((int)param_1,extraout_EDX_01);
    }
    FUN_10111020(param_1,&DAT_1013f3d8,7);
    pbVar3 = (byte *)param_1[1];
    uVar12 = param_1[2];
    FUN_1011c320(local_110,(int)pbVar3,uVar12);
    piVar1 = piStack_104;
    if ((local_110[0] & local_110[1]) == 0xffffffff) {
      if ((char)local_108 == '\x03') {
        puVar4 = (undefined4 *)piStack_104[1];
        pvVar11 = (LPVOID)*piStack_104;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(pvVar11);
        }
        if (puVar4[1] != 0) {
          FUN_10093cf0(pvVar11,puVar4[2]);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,piVar1);
      }
    }
    else {
      FUN_100b2620(local_110,&iStack_3c,pbVar3,uVar12,0);
      if (local_108 != -2) goto LAB_1007a270;
    }
    iVar7 = FUN_10110f10(pbVar3,uVar12);
    if (iVar7 != 0) {
      FUN_10110e70((int)param_1,extraout_EDX_02);
    }
    FUN_10111020(param_1,(byte *)"paths",5);
    pbVar3 = (byte *)param_1[1];
    uVar12 = param_1[2];
    FUN_1011c320(local_110,(int)pbVar3,uVar12);
    piVar1 = piStack_104;
    if ((local_110[0] & local_110[1]) == 0xffffffff) {
      if ((char)local_108 == '\x03') {
        puVar4 = (undefined4 *)piStack_104[1];
        pvVar11 = (LPVOID)*piStack_104;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(pvVar11);
        }
        if (puVar4[1] != 0) {
          FUN_10093cf0(pvVar11,puVar4[2]);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,piVar1);
      }
    }
    else {
      FUN_100b2620(local_110,(int *)&local_b8,pbVar3,uVar12,0);
      if (local_108 != -2) goto LAB_1007a270;
    }
    iVar7 = FUN_10110f10(pbVar3,uVar12);
    if (iVar7 != 0) {
      FUN_10110e70((int)param_1,extraout_EDX_03);
    }
    FUN_10111020(param_1,&DAT_1013f3df,5);
    pbVar3 = (byte *)param_1[1];
    uVar12 = param_1[2];
    FUN_100b2620(local_110,(int *)&local_b8,pbVar3,uVar12,0);
    if (local_108 == -2) {
      iVar7 = FUN_10110f10(pbVar3,uVar12);
      if (iVar7 != 0) {
        FUN_10110e70((int)param_1,extraout_EDX_04);
      }
      FUN_10111020(param_1,&DAT_101402a5,7);
      pbVar3 = (byte *)param_1[1];
      uVar12 = param_1[2];
      FUN_1011c320(local_110,(int)pbVar3,uVar12);
      piVar1 = piStack_104;
      if ((local_110[0] & local_110[1]) == 0xffffffff) {
        if ((char)local_108 == '\x03') {
          puVar4 = (undefined4 *)piStack_104[1];
          pvVar11 = (LPVOID)*piStack_104;
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)(pvVar11);
          }
          if (puVar4[1] != 0) {
            FUN_10093cf0(pvVar11,puVar4[2]);
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,piVar1);
        }
      }
      else {
        FUN_100b2620(local_110,(int *)&local_b8,pbVar3,uVar12,0);
        if (local_108 != -2) goto LAB_1007a270;
      }
      iVar7 = FUN_10110f10(pbVar3,uVar12);
      if (iVar7 != 0) {
        FUN_10110e70((int)param_1,extraout_EDX_05);
      }
      FUN_10111020(param_1,&DAT_101402ac,8);
      FUN_100b2620(local_110,(int *)&local_b8,(byte *)param_1[1],param_1[2],0);
      if (local_108 == -2) {
        FUN_1011b820((int)param_1);
        FUN_10111020(param_1,&DAT_101402b4,6);
        pbVar3 = (byte *)param_1[1];
        SVar8 = param_1[2];
        FUN_1011c320(local_110,(int)pbVar3,SVar8);
        piVar1 = piStack_104;
        if ((local_110[0] & local_110[1]) == 0xffffffff) {
          if ((char)local_108 == '\x03') {
            puVar4 = (undefined4 *)piStack_104[1];
            pvVar11 = (LPVOID)*piStack_104;
            if ((code *)*puVar4 != (code *)0x0) {
              (*(code *)*puVar4)(pvVar11);
            }
            if (puVar4[1] != 0) {
              FUN_10093cf0(pvVar11,puVar4[2]);
            }
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,piVar1);
          }
        }
        else {
          FUN_100b2620(local_110,(int *)&local_b8,pbVar3,SVar8,0);
          if (local_108 != -2) goto LAB_1007a270;
        }
        FUN_1011b820((int)param_1);
        FUN_10111020(param_1,&DAT_101402ba,7);
        pbVar3 = (byte *)param_1[1];
        SVar8 = param_1[2];
        FUN_1011c320(local_110,(int)pbVar3,SVar8);
        if ((local_110[0] & local_110[1]) == 0xffffffff) {
          uStack_98 = CONCAT44(piStack_104,local_108);
          local_a0 = 0xffffffffffffffff;
          FUN_10003a60((uint *)&local_a0);
        }
        else {
          puVar13 = local_110;
          puVar14 = (uint *)&local_a0;
          for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar12 = (uint)(uint *)local_a0 & (uint)local_a0._4_4_;
          FUN_10003a60((uint *)&local_a0);
          if ((uVar12 != 0xffffffff) &&
             (FUN_100b2620(local_110,(int *)&local_b8,pbVar3,SVar8,0), local_108 != -2))
          goto LAB_1007a270;
        }
        FUN_1011b820((int)param_1);
        FUN_10111020(param_1,&DAT_101402c1,9);
        pbVar3 = (byte *)param_1[1];
        SVar8 = param_1[2];
        FUN_1011c320(local_110,(int)pbVar3,SVar8);
        if ((local_110[0] & local_110[1]) == 0xffffffff) {
          uStack_98 = CONCAT44(piStack_104,local_108);
          local_a0 = 0xffffffffffffffff;
          FUN_10003a60((uint *)&local_a0);
        }
        else {
          puVar13 = local_110;
          puVar14 = (uint *)&local_a0;
          for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar12 = (uint)(uint *)local_a0 & (uint)local_a0._4_4_;
          FUN_10003a60((uint *)&local_a0);
          if ((uVar12 != 0xffffffff) &&
             (FUN_100b2620(local_110,(int *)&local_b8,pbVar3,SVar8,0), local_108 != -2))
          goto LAB_1007a270;
        }
        FUN_1011b820((int)param_1);
        FUN_10111020(param_1,&DAT_101402ca,8);
        pbVar3 = (byte *)param_1[1];
        SVar8 = param_1[2];
        FUN_1011c320(local_110,(int)pbVar3,SVar8);
        if ((local_110[0] & local_110[1]) == 0xffffffff) {
          uStack_98 = CONCAT44(piStack_104,local_108);
          local_a0 = 0xffffffffffffffff;
          FUN_10003a60((uint *)&local_a0);
        }
        else {
          puVar13 = local_110;
          puVar14 = (uint *)&local_a0;
          for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar12 = (uint)(uint *)local_a0 & (uint)local_a0._4_4_;
          FUN_10003a60((uint *)&local_a0);
          if ((uVar12 != 0xffffffff) &&
             (FUN_100b2620(local_110,(int *)&local_b8,pbVar3,SVar8,0), local_108 != -2))
          goto LAB_1007a270;
        }
        FUN_1011b820((int)param_1);
        if (_DAT_0077f44c == (ushort *)0x0) {
          puVar10 = (ushort *)0x2;
          SVar8 = 0;
        }
        else {
          SVar8 = *(SIZE_T *)(_DAT_0077f44c + -2);
          puVar10 = _DAT_0077f44c;
        }
        FUN_10093310(&local_a0,puVar10,SVar8);
        pbVar3 = local_a0._4_4_;
        FUN_100b2620(local_110,(int *)&local_b8,local_a0._4_4_,(SIZE_T)uStack_98,0);
        uVar12 = local_110[0];
        if (local_108 == -2) {
          if ((uint *)local_a0 != (uint *)0x0) {
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,pbVar3);
          }
          if (DAT_10163038 != -1) {
            FUN_10005fc0(&DAT_10163038);
          }
          _DAT_10163038 = local_b8;
          _DAT_10163040 = local_b0;
          _DAT_10163048 = local_a8;
          return;
        }
        local_118 = local_ec;
        if ((uint *)local_a0 != (uint *)0x0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pbVar3);
        }
        goto LAB_1007a2a4;
      }
    }
  }
  else {
    FUN_100b2620(local_110,&iStack_3c,pbVar3,uVar12,0);
    if (local_108 == -2) goto LAB_10079b43;
  }
LAB_1007a270:
  local_118 = local_ec;
  uVar12 = local_110[0];
LAB_1007a2a4:
  local_a0._4_4_ = &LAB_100b6660;
  local_ec = local_118;
  local_110[0] = uVar12;
  local_a0._0_4_ = local_110;
  FUN_10093970((undefined8 *)local_20,(ushort *)&DAT_10142e24,(uint)&local_a0);
  iVar7 = FUN_100033c0(local_20);
  local_a0 = CONCAT44(local_a0._4_4_,iVar7);
  (*(code *)0x4d43f8)();
  (*(code *)0x407ea8)();
  FUN_10005ed0((char *)local_110);
  FUN_10005fc0((int *)&local_b8);
  return;
}
