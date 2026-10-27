// rea decompile_all
// name: FUN_1011c880
// address: 0x1011c880
// body: available
// range: 0x1011c880-0x1011cb33 inclusive
// range: 0x1011cb40-0x1011cba8 inclusive
// range: 0x1011cbb0-0x1011cdf3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1011c880(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined2 uVar8;
  undefined *puVar9;
  int iVar10;
  undefined2 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **local_ac;
  char local_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined **ppuStack_a4;
  undefined **local_a0;
  undefined **local_9c;
  undefined **local_98;
  undefined **local_94;
  byte local_90;
  char local_8f;
  ushort local_8e;
  undefined **local_8c;
  undefined4 local_88;
  undefined **local_84;
  undefined8 *local_80;
  int local_7c;
  undefined **local_78;
  undefined **local_74;
  undefined4 local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined5 uStack_54;
  uint local_38;
  int local_34;

  local_70 = (undefined1 *)0x0;
  local_68 = (undefined **)0x0;
  local_64 = (undefined **)0x0;
  local_60 = 7;
  local_5c = 0;
  uStack_54 = 0;
  uStack_58 = 1;
  FUN_1011b760((undefined8 *)&local_a8,&local_70,param_2,param_3);
  ppuVar12 = ppuStack_a4;
  if (local_a8 != -1) {
    *(undefined1 *)((int)param_1 + 7) = uStack_a5;
    *(undefined2 *)((int)param_1 + 5) = uStack_a7;
    *(char *)((int)param_1 + 4) = local_a8;
    *(undefined ***)(param_1 + 1) = ppuStack_a4;
    *(undefined4 *)param_1 = 0xffffffff;
    return;
  }
  local_80 = param_1;
  FUN_101109e0(&local_70,ppuStack_a4);
  ppuVar5 = local_64;
  local_94 = ppuStack_a4;
  local_7c = 0x1011c89b;
  if (((uint)local_70 & (uint)local_6c) == 0xffffffff) {
    BVar2 = 0;
    if ((char)local_68 == -1) goto LAB_1011c949;
    if ((char)local_68 == '\x03') {
      puVar1 = (undefined4 *)local_64[1];
      puVar9 = *local_64;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(puVar9);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          puVar9 = *(undefined **)(puVar9 + -4);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,puVar9);
      }
      pvVar3 = GetProcessHeap();
      BVar2 = HeapFree(pvVar3,0,ppuVar5);
    }
    local_88 = CONCAT31((int3)((uint)BVar2 >> 8),1);
    local_a8 = 0;
    uStack_a7 = 0;
    uStack_a5 = 0;
    ppuStack_a4 = (undefined **)0x1;
    local_a0 = (undefined **)0x0;
    local_98 = (undefined **)0x0;
    ppuVar6 = (undefined **)0x2000;
    ppuVar12 = local_94;
LAB_1011ca63:
    local_9c = ppuVar6;
    FUN_1011ce10(&local_70,ppuVar12,(uint *)&local_a8);
    iVar10 = 0;
    if ((char)local_70 == -1) {
      if (local_6c != (undefined **)0x0) {
        ppuVar7 = (undefined **)CONCAT13(uStack_a5,CONCAT21(uStack_a7,local_a8));
        ppuVar6 = local_9c;
        ppuVar5 = local_a0;
        iVar10 = local_7c;
        goto LAB_1011cab0;
      }
      local_ac = (undefined **)0x0;
      goto LAB_1011cd9a;
    }
LAB_1011ca80:
    uVar8 = CONCAT11(local_70._1_1_,(char)local_70);
    local_ac = local_6c;
    local_8e = local_70._2_2_;
LAB_1011ccd2:
    ppuVar12 = (undefined **)(uint)local_8e;
  }
  else {
    ppuVar5 = (undefined **)(-(uint)(local_34 != 0) | local_38);
LAB_1011c949:
    local_a8 = 0;
    uStack_a7 = 0;
    uStack_a5 = 0;
    ppuStack_a4 = (undefined **)0x1;
    local_a0 = (undefined **)0x0;
    local_88 = 0;
    local_98 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_10136730(&local_70,0,(LPVOID)0x1,(SIZE_T)ppuVar5);
      if ((char)local_70 != '\0') {
        *(undefined2 *)((int)local_80 + 4) = 0x2601;
        *(undefined4 *)local_80 = 0xffffffff;
        goto LAB_1011cd80;
      }
      ppuStack_a4 = local_6c;
      local_a8 = (char)ppuVar5;
      uStack_a7 = (undefined2)((uint)ppuVar5 >> 8);
      uStack_a5 = (undefined1)((uint)ppuVar5 >> 0x18);
      local_98 = ppuVar5;
    }
    uVar4 = (uint)(ppuVar5 + 0x100) & 0x1fff;
    ppuVar7 = (undefined **)((int)ppuVar5 + (0x2400 - uVar4));
    ppuVar6 = (undefined **)0x2000;
    if (ppuVar5 + 0x100 <= ppuVar7) {
      ppuVar6 = ppuVar7;
    }
    if (uVar4 == 0) {
      ppuVar6 = ppuVar5 + 0x100;
    }
    ppuVar7 = local_98;
    iVar10 = 0x1011c89b;
    if (ppuVar5 == (undefined **)0x0) {
      local_88 = 0;
      ppuVar5 = (undefined **)0x0;
      if (local_98 < &DAT_00000020) goto LAB_1011ca63;
    }
    else {
      ppuVar5 = (undefined **)0x0;
    }
LAB_1011cab0:
    if ((ppuVar5 == ppuVar7) && (ppuVar7 == local_98)) {
      FUN_1011ce10(&local_70,ppuVar12,(uint *)&local_a8);
      if ((char)local_70 != -1) goto LAB_1011ca80;
      if (local_6c == (undefined **)0x0) {
        uVar8 = 0xff;
        local_ac = local_a0;
        goto LAB_1011ccd6;
      }
      ppuVar7 = (undefined **)CONCAT13(uStack_a5,CONCAT21(uStack_a7,local_a8));
      ppuVar5 = local_a0;
      iVar10 = local_7c;
    }
    ppuVar13 = ppuVar12;
    local_9c = ppuVar6;
    local_84 = ppuVar7;
    if (ppuVar5 == ppuVar7) {
      ppuVar12 = (undefined **)((int)ppuVar7 * 2);
      if ((undefined **)((int)ppuVar7 * 2) < ppuVar7 + 8) {
        ppuVar12 = ppuVar7 + 8;
      }
      FUN_10136460(&local_70,(int)ppuVar7,ppuStack_a4,(uint)ppuVar12,(LPVOID)0x1,1);
      if (local_70 == (undefined1 *)0x1) {
        uVar8 = 0x2601;
        goto LAB_1011ccd6;
      }
      ppuStack_a4 = local_6c;
      local_a8 = (char)ppuVar12;
      uStack_a7 = (undefined2)((uint)ppuVar12 >> 8);
      uStack_a5 = (undefined1)((uint)ppuVar12 >> 0x18);
      ppuVar13 = local_94;
      local_84 = ppuVar12;
    }
    local_70 = (undefined1 *)((int)ppuStack_a4 + (int)ppuVar5);
    local_74 = (undefined **)((int)local_84 - (int)ppuVar5);
    local_78 = local_74;
    if (local_9c < local_74) {
      local_78 = local_9c;
    }
    local_68 = (undefined **)0x0;
    local_64 = (undefined **)((uint)local_64 & 0xffffff00);
    ppuVar12 = ppuVar13;
    local_6c = local_78;
    while( true ) {
      FUN_10112420((undefined8 *)&local_90,ppuVar12,&local_70);
      ppuVar6 = local_8c;
      if (local_90 == 0xff) break;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((&switchD_1011cb90::switchdataD_1011cdf4)[local_90] + iVar10) {
      case 0x1011cb92:
        if (*(char *)(local_8c + 2) == '#') goto joined_r0x1011cba5;
      case 0x1011ccb4:
switchD_1011cb90_caseD_1011ccb4:
        local_a0 = (undefined **)((int)ppuVar5 + (int)local_68);
        uVar8 = CONCAT11(local_8f,local_90);
        local_ac = local_8c;
        goto LAB_1011ccd2;
      case 0x1011cbb0:
        if (local_8f != '#') goto switchD_1011cb90_caseD_1011ccb4;
joined_r0x1011cba5:
        if (local_90 == 3) {
          puVar1 = (undefined4 *)local_8c[1];
          puVar9 = *local_8c;
          if ((code *)*puVar1 != (code *)0x0) {
            (*(code *)*puVar1)(puVar9);
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              puVar9 = *(undefined **)(puVar9 + -4);
            }
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,puVar9);
          }
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,ppuVar6);
          iVar10 = local_7c;
          ppuVar12 = local_94;
        }
      }
    }
    ppuVar5 = (undefined **)((int)ppuVar5 + (int)local_68);
    local_ac = ppuVar5;
    local_a0 = ppuVar5;
    if (local_68 != (undefined **)0x0) {
      ppuVar6 = local_9c;
      if ((byte)local_88 != 0) {
        ppuVar6 = (undefined **)0xffffffff;
      }
      ppuVar7 = local_84;
      if (((((byte)local_88 & (byte)local_64) != 0) && (ppuVar6 = local_9c, local_9c <= local_74))
         && (local_68 == local_78)) {
        if ((int)local_9c < 0) {
          ppuVar7 = local_84;
          ppuVar6 = (undefined **)0xffffffff;
        }
        else {
          ppuVar7 = local_84;
          ppuVar6 = (undefined **)((int)local_9c * 2);
        }
      }
      goto LAB_1011cab0;
    }
LAB_1011cd9a:
    uVar8 = (undefined2)CONCAT31((int3)((uint)iVar10 >> 8),0xff);
  }
LAB_1011ccd6:
  ppuVar5 = local_a0;
  uVar11 = SUB42(ppuVar12,0);
  FUN_10095490(&local_70,(int)ppuStack_a4,(uint)local_a0);
  ppuVar12 = ppuStack_a4;
  if (local_70 == (undefined1 *)0x0) {
    local_a0 = ppuVar5;
    if ((char)uVar8 == -1) {
      *(undefined ***)(local_80 + 1) = ppuVar5;
      *local_80 = CONCAT44(ppuStack_a4,CONCAT13(uStack_a5,CONCAT21(uStack_a7,local_a8)));
      goto LAB_1011cd80;
    }
  }
  else if ((char)uVar8 == -1) {
    uVar8 = 2;
    uVar11 = 0;
    local_ac = &PTR_DAT_10156880;
    local_a0 = (undefined **)0x0;
  }
  else {
    local_a0 = (undefined **)0x0;
  }
  *(char *)((int)local_80 + 5) = (char)((ushort)uVar8 >> 8);
  *(undefined2 *)((int)local_80 + 6) = uVar11;
  *(char *)((int)local_80 + 4) = (char)uVar8;
  *(undefined ***)(local_80 + 1) = local_ac;
  *(undefined4 *)local_80 = 0xffffffff;
  if (CONCAT13(uStack_a5,CONCAT21(uStack_a7,local_a8)) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,ppuVar12);
  }
LAB_1011cd80:
  CloseHandle(local_94);
  return;
}
