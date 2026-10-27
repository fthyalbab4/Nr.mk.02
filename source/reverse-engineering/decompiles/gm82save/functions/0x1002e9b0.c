// rea decompile_all
// name: FUN_1002e9b0
// address: 0x1002e9b0
// body: available
// range: 0x1002e9b0-0x1002ebd1 inclusive
// range: 0x1002ebe0-0x1002ed58 inclusive
// range: 0x1002ed60-0x1002eeec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1002e9b0(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  HANDLE pvVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  int *local_a0;
  uint local_9c;
  int local_98;
  int *local_94;
  uint local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int *local_7c;
  undefined4 *puStack_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;

  local_70 = *param_2;
  local_64 = param_3 + 0x8c;
  local_5c = *(undefined4 *)(param_3 + 0x88);
  local_68 = *(int *)(param_2 + 1);
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  iVar10 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar7 = *(int *)(param_3 + 0x98);
  if (iVar7 <= (int)(uVar2 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar7 * 2);
    iVar7 = *(int *)(param_3 + 0x98);
  }
  uVar8 = iVar7 - 1U & uVar2;
  iVar7 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar7 + uVar8 * 8) = &LAB_1008c440;
  *(int **)(iVar7 + 4 + uVar8 * 8) = &local_80;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar2 + 1;
  iVar7 = *(int *)(param_3 + 0x8c);
  do {
    uVar2 = *(uint *)(iVar7 + 0xf8);
    uVar8 = uVar2;
    if ((uVar2 & 0x10000) != 0) break;
    uVar8 = uVar2 | 0x10000;
    LOCK();
    bVar15 = uVar2 == *(uint *)(iVar7 + 0xf8);
    if (bVar15) {
      *(uint *)(iVar7 + 0xf8) = uVar8;
    }
    UNLOCK();
  } while (!bVar15);
  if (((uVar2 & 0xff) != 0) &&
     ((iVar10 != iVar1 && -1 < iVar10 - iVar1 || ((uVar8 >> 8 & 0xff) == (uVar2 & 0xff))))) {
    FUN_10139520(iVar7 + 0xec,1);
  }
  local_4c = *(undefined4 *)((int)param_2 + 0x44);
  local_54 = *(undefined8 *)((int)param_2 + 0x3c);
  local_48 = *(undefined4 *)(param_2 + 9);
  local_44 = *(undefined8 *)((int)param_2 + 0xc);
  local_3c = *(undefined4 *)((int)param_2 + 0x14);
  local_38 = param_2[3];
  local_28 = param_2[5];
  local_30 = param_2[4];
  local_18 = *(undefined4 *)(param_2 + 7);
  local_20 = param_2[6];
  local_14 = local_48;
  piVar9 = FUN_100be180();
  if (piVar9 == (int *)0x0) {
LAB_1002eee1:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  iVar10 = *piVar9;
  if (iVar10 == 0) {
    piVar9 = FUN_100c0800();
    iVar1 = *piVar9;
    piVar9 = FUN_100be180();
    if (piVar9 == (int *)0x0) goto LAB_1002eee1;
    iVar10 = *piVar9;
    if (iVar10 == 0) {
      FUN_1012d560((undefined8 *)&local_a0,(uint *)(iVar1 + 0x40),(undefined4 *)&local_54);
      goto LAB_1002eb77;
    }
    if (*(int *)(iVar10 + 0x8c) != iVar1) {
      FUN_1012fef0((undefined8 *)&local_a0,(uint *)(iVar1 + 0x40),iVar10,(undefined4 *)&local_54);
      goto LAB_1002eb77;
    }
  }
  FUN_1002eef0(&local_a0,&local_54,iVar10);
LAB_1002eb77:
  pcVar14 = HeapFree_exref;
  piVar9 = local_a0;
  if (local_9c == 0) {
    while (piVar3 = local_94, uVar2 = local_90, iVar10 = local_8c, piVar9 != (int *)0x0) {
      piVar3 = (int *)piVar9[3];
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
      }
      if (*piVar9 != 0) {
        pvVar4 = (LPVOID)piVar9[1];
        pvVar13 = GetProcessHeap();
        pcVar14 = HeapFree_exref;
        HeapFree(pvVar13,0,pvVar4);
      }
      pvVar13 = GetProcessHeap();
      (*pcVar14)(pvVar13,0,piVar9);
      piVar9 = piVar3;
    }
  }
  else {
    piVar3 = local_a0;
    uVar2 = local_9c;
    iVar10 = local_98;
    if (local_94 != (int *)0x0) {
      *(int **)(local_9c + 0xc) = local_94;
      local_94[4] = local_9c;
      uVar2 = local_90;
      iVar10 = local_98 + local_8c;
    }
  }
  do {
    uVar6 = local_74;
    uVar5 = local_4c;
    if (local_60 == 3) {
joined_r0x1002eea3:
      local_4c = uVar6;
      if (local_80 != 1) {
        local_4c = uVar5;
        if (local_80 == 2) {
          FUN_100c0bc0();
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      *param_1 = piVar3;
      param_1[1] = uVar2;
      param_1[2] = iVar10;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_78,local_7c);
LAB_1002eec7:
      param_1[5] = local_4c;
      return;
    }
    lVar16 = FUN_10052290(param_3);
    iVar1 = local_80;
    if ((code *)lVar16 == (code *)0x0) {
      uVar6 = local_74;
      uVar5 = local_4c;
      if (local_60 != 3) {
        FUN_10138cf0(param_3,&local_60);
        uVar6 = local_74;
        uVar5 = local_4c;
      }
      goto joined_r0x1002eea3;
    }
    if (lVar16 == CONCAT44(&local_80,&LAB_1008c440)) {
      piVar9 = (int *)local_70;
      if ((int *)local_70 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      uVar8 = local_70._4_4_;
      local_a0 = (int *)local_70;
      local_9c = local_70._4_4_;
      local_84 = local_68;
      piVar11 = FUN_100be180();
      if (piVar11 != (int *)0x0) {
        local_88 = piVar9;
        if (*piVar11 == 0) {
          piVar9 = FUN_100c0800();
        }
        else {
          piVar9 = (int *)(*piVar11 + 0x8c);
        }
        uVar12 = (uint)(uVar8 == 0xffffffff);
        if ((uint)(uVar8 == 0xffffffff) < *(uint *)(*piVar9 + 0x104)) {
          uVar12 = *(uint *)(*piVar9 + 0x104);
        }
        FUN_1002ace0(&local_54,uVar8,'\0',uVar12,1,local_88,uVar8,local_84,&local_98);
        if (iVar1 != 0) {
          piVar9 = local_7c;
          if (iVar1 == 1) {
            while (piVar9 != (int *)0x0) {
              piVar11 = (int *)piVar9[3];
              if (piVar11 != (int *)0x0) {
                piVar11[4] = 0;
              }
              if (*piVar9 != 0) {
                pvVar4 = (LPVOID)piVar9[1];
                pvVar13 = GetProcessHeap();
                HeapFree(pvVar13,0,pvVar4);
              }
              pvVar13 = GetProcessHeap();
              HeapFree(pvVar13,0,piVar9);
              piVar9 = piVar11;
            }
          }
          else {
            if ((code *)*puStack_78 != (code *)0x0) {
              (*(code *)*puStack_78)(local_7c);
            }
            if (puStack_78[1] != 0) {
              if (8 < (uint)puStack_78[2]) {
                piVar9 = (int *)local_7c[-1];
              }
              pvVar13 = GetProcessHeap();
              HeapFree(pvVar13,0,piVar9);
            }
          }
        }
        *param_1 = piVar3;
        param_1[1] = uVar2;
        param_1[2] = iVar10;
        *(undefined8 *)(param_1 + 3) = local_54;
        goto LAB_1002eec7;
      }
      goto LAB_1002eee1;
    }
    (*(code *)lVar16)((int)((ulonglong)lVar16 >> 0x20));
  } while( true );
}
