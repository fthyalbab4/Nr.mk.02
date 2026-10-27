// rea decompile_all
// name: FUN_10028710
// address: 0x10028710
// body: available
// range: 0x10028710-0x10028768 inclusive
// range: 0x10028770-0x10028841 inclusive
// range: 0x10028850-0x100288d1 inclusive
// range: 0x100288e0-0x100288e9 inclusive
// range: 0x100288f0-0x1002898a inclusive
// range: 0x10028990-0x10028b9d inclusive
// range: 0x10028ba0-0x10028c45 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10028710(undefined4 *param_1,uint param_2,char param_3,uint param_4,int *param_5,int *param_6,
            int *param_7,int **param_8,undefined4 *param_9)

{
  int **ppiVar1;
  int *piVar2;
  LPVOID pvVar3;
  uint *puVar4;
  HANDLE pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *local_98;
  uint *local_8c;
  int *local_78;
  undefined4 *puStack_74;
  uint *local_70;
  int *local_6c;
  undefined4 *local_68;
  uint *local_64;
  undefined8 local_60;
  uint *local_58;
  int **local_54;
  int local_50;
  int **local_4c;
  undefined4 *local_48;
  int **local_44;
  uint *local_40;
  int *local_3c;
  int *local_38;
  int **local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;

  piVar11 = (int *)(param_2 >> 1);
  local_14 = param_5;
  local_20 = param_2;
  if (piVar11 < param_5) {
LAB_1002874f:
    if (param_7 == (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    local_28 = param_6 + (int)param_7;
    bVar10 = false;
    local_2c = (undefined4 *)*param_9;
    puVar9 = param_1;
    do {
      iVar7 = *param_6;
      local_98 = (uint *)0x0;
      puVar13 = (undefined4 *)0x0;
      piVar11 = (int *)0x0;
      local_24 = param_6;
      if (iVar7 != 0) {
        iVar14 = *(int *)(iVar7 + 0x2f4);
        ppiVar1 = *(int ***)(iVar7 + 0x2f0);
        if (iVar14 == 0) {
          iVar14 = 4;
        }
        FUN_10038b40((int *)&local_78,*(ushort **)(iVar7 + 0x2ec));
        local_60 = CONCAT44(puStack_74,local_78);
        local_58 = local_70;
        local_54 = param_8;
        local_48 = local_2c;
        local_44 = param_8;
        local_50 = iVar14;
        local_4c = ppiVar1;
        piVar11 = FUN_100be180();
        if (piVar11 == (int *)0x0) goto LAB_10028c3a;
        if (*piVar11 == 0) {
          piVar11 = FUN_100c0800();
          iVar7 = *piVar11;
          piVar11 = FUN_100be180();
          pcVar12 = GetProcessHeap_exref;
          if (piVar11 == (int *)0x0) goto LAB_10028c3a;
          iVar14 = *piVar11;
          if (iVar14 == 0) {
            FUN_1012d870((undefined8 *)&local_78,(uint *)(iVar7 + 0x40),(int *)&local_60);
          }
          else if (*(int *)(iVar14 + 0x8c) == iVar7) {
            FUN_1002fe50((undefined8 *)&local_78,&local_60,iVar14);
          }
          else {
            FUN_101301d0((undefined8 *)&local_78,(uint *)(iVar7 + 0x40),iVar14,&local_60);
          }
        }
        else {
          FUN_1002fe50((undefined8 *)&local_78,&local_60,*piVar11);
          pcVar12 = GetProcessHeap_exref;
        }
        puVar13 = local_68;
        piVar11 = local_6c;
        local_98 = local_64;
        piVar6 = local_78;
        if (puStack_74 == (undefined4 *)0x0) {
          while (piVar6 != (int *)0x0) {
            piVar2 = (int *)piVar6[3];
            if (piVar2 != (int *)0x0) {
              piVar2[4] = 0;
            }
            if (*piVar6 != 0) {
              pvVar3 = (LPVOID)piVar6[1];
              pvVar5 = GetProcessHeap();
              pcVar12 = GetProcessHeap_exref;
              HeapFree(pvVar5,0,pvVar3);
            }
            pvVar5 = (HANDLE)(*pcVar12)();
            HeapFree(pvVar5,0,piVar6);
            piVar6 = piVar2;
          }
        }
        else {
          piVar11 = local_78;
          if (local_6c == (int *)0x0) {
            local_98 = local_70;
            puVar13 = puStack_74;
          }
          else {
            local_98 = (uint *)((int)local_70 + (int)local_64);
            puStack_74[3] = local_6c;
            local_6c[4] = (int)puStack_74;
          }
        }
      }
      puVar8 = puVar13;
      piVar6 = piVar11;
      puVar4 = local_98;
      if (bVar10) {
        if (puVar9 == (undefined4 *)0x0) {
          while (puVar4 = local_98, param_7 != (int *)0x0) {
            piVar11 = (int *)param_7[3];
            if (piVar11 != (int *)0x0) {
              piVar11[4] = 0;
            }
            if (*param_7 != 0) {
              pvVar3 = (LPVOID)param_7[1];
              pvVar5 = GetProcessHeap();
              HeapFree(pvVar5,0,pvVar3);
            }
            pvVar5 = GetProcessHeap();
            HeapFree(pvVar5,0,param_7);
            param_7 = piVar11;
          }
        }
        else {
          puVar8 = puVar9;
          piVar6 = param_7;
          puVar4 = local_8c;
          if (piVar11 != (int *)0x0) {
            puVar9[3] = piVar11;
            piVar11[4] = (int)puVar9;
            puVar8 = puVar13;
            puVar4 = (uint *)((int)local_8c + (int)local_98);
          }
        }
      }
      local_8c = puVar4;
      bVar10 = true;
      param_6 = local_24 + 1;
      puVar9 = puVar8;
      param_7 = piVar6;
      if (param_6 == local_28) {
        *param_1 = piVar6;
        param_1[1] = puVar8;
        param_1[2] = local_8c;
        return;
      }
    } while( true );
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002874f;
    local_18 = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10028c3a;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_18 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_18 = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_50 = (int)param_7 - (int)piVar11;
  local_1c = piVar11;
  if (param_7 < piVar11) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  local_58 = &local_18;
  local_54 = (int **)(param_6 + (int)piVar11);
  local_44 = &local_1c;
  local_60 = CONCAT44(local_44,&local_20);
  local_4c = param_8;
  local_48 = param_9;
  local_3c = param_6;
  local_34 = param_8;
  local_30 = param_9;
  local_40 = local_58;
  local_38 = piVar11;
  piVar11 = FUN_100be180();
  if (piVar11 == (int *)0x0) {
LAB_10028c3a:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  iVar7 = *piVar11;
  if (iVar7 == 0) {
    piVar11 = FUN_100c0800();
    iVar14 = *piVar11;
    piVar11 = FUN_100be180();
    if (piVar11 == (int *)0x0) goto LAB_10028c3a;
    iVar7 = *piVar11;
    if (iVar7 == 0) {
      FUN_1012f130((undefined8 *)&local_78,(uint *)(iVar14 + 0x40),&local_60);
      goto LAB_10028b56;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar14) {
      FUN_10131760((undefined8 *)&local_78,(uint *)(iVar14 + 0x40),iVar7,&local_60);
      goto LAB_10028b56;
    }
  }
  FUN_10030980(&local_78,&local_60,iVar7,0);
LAB_10028b56:
  if (puStack_74 == (undefined4 *)0x0) {
    *param_1 = local_6c;
    param_1[1] = local_68;
    param_1[2] = local_64;
    pcVar12 = HeapFree_exref;
    piVar11 = local_78;
    while (piVar11 != (int *)0x0) {
      piVar6 = (int *)piVar11[3];
      if (piVar6 != (int *)0x0) {
        piVar6[4] = 0;
      }
      if (*piVar11 != 0) {
        pvVar3 = (LPVOID)piVar11[1];
        pvVar5 = GetProcessHeap();
        pcVar12 = HeapFree_exref;
        HeapFree(pvVar5,0,pvVar3);
      }
      pvVar5 = GetProcessHeap();
      (*pcVar12)(pvVar5,0,piVar11);
      piVar11 = piVar6;
    }
  }
  else {
    if (local_6c != (int *)0x0) {
      local_70 = (uint *)((int)local_70 + (int)local_64);
      puStack_74[3] = local_6c;
      local_6c[4] = (int)puStack_74;
      puStack_74 = local_68;
    }
    *param_1 = local_78;
    param_1[1] = puStack_74;
    param_1[2] = local_70;
  }
  return;
}
