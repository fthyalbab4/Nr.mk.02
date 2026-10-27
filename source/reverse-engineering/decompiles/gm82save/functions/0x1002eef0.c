// rea decompile_all
// name: FUN_1002eef0
// address: 0x1002eef0
// body: available
// range: 0x1002eef0-0x1002f0fc inclusive
// range: 0x1002f100-0x1002f280 inclusive
// range: 0x1002f290-0x1002f41c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1002eef0(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  HANDLE pvVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  int *local_98;
  int iStack_94;
  int local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int *local_64;
  undefined4 *puStack_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;

  local_78 = *param_2;
  local_70 = param_2[1];
  local_50 = *(undefined4 *)(param_3 + 0x88);
  local_58 = param_3 + 0x8c;
  local_54 = 0;
  local_4c = 0;
  local_68 = 0;
  iVar8 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar5 = *(int *)(param_3 + 0x98);
  if (iVar5 <= (int)(uVar2 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar5 * 2);
    iVar5 = *(int *)(param_3 + 0x98);
  }
  uVar6 = iVar5 - 1U & uVar2;
  iVar5 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar5 + uVar6 * 8) = &LAB_1008c5f0;
  *(undefined8 **)(iVar5 + 4 + uVar6 * 8) = &local_78;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar2 + 1;
  iVar5 = *(int *)(param_3 + 0x8c);
  do {
    uVar2 = *(uint *)(iVar5 + 0xf8);
    uVar6 = uVar2;
    if ((uVar2 & 0x10000) != 0) break;
    uVar6 = uVar2 | 0x10000;
    LOCK();
    bVar12 = uVar2 == *(uint *)(iVar5 + 0xf8);
    if (bVar12) {
      *(uint *)(iVar5 + 0xf8) = uVar6;
    }
    UNLOCK();
  } while (!bVar12);
  if (((uVar2 & 0xff) != 0) &&
     ((iVar8 != iVar1 && -1 < iVar8 - iVar1 || ((uVar6 >> 8 & 0xff) == (uVar2 & 0xff))))) {
    FUN_10139520(iVar5 + 0xec,1);
  }
  local_40 = *(undefined4 *)((int)param_2 + 0x3c);
  local_48 = *(undefined8 *)((int)param_2 + 0x34);
  local_3c = *(undefined4 *)(param_2 + 8);
  local_38 = param_2[2];
  local_30 = *(undefined4 *)(param_2 + 3);
  local_2c = *(undefined8 *)((int)param_2 + 0x1c);
  local_24 = *(undefined8 *)((int)param_2 + 0x24);
  local_1c = *(undefined8 *)((int)param_2 + 0x2c);
  local_14 = local_3c;
  piVar7 = FUN_100be180();
  if (piVar7 == (int *)0x0) {
LAB_1002f411:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  iVar8 = *piVar7;
  if (iVar8 == 0) {
    piVar7 = FUN_100c0800();
    iVar1 = *piVar7;
    piVar7 = FUN_100be180();
    if (piVar7 == (int *)0x0) goto LAB_1002f411;
    iVar8 = *piVar7;
    if (iVar8 == 0) {
      FUN_1012d640((undefined8 *)&local_98,(uint *)(iVar1 + 0x40),&local_48);
      goto LAB_1002f0a2;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar1) {
      FUN_1012ffc0((undefined8 *)&local_98,(uint *)(iVar1 + 0x40),iVar8,&local_48);
      goto LAB_1002f0a2;
    }
  }
  FUN_1002f420(&local_98,&local_48,iVar8);
LAB_1002f0a2:
  pcVar11 = HeapFree_exref;
  piVar7 = local_98;
  if (iStack_94 == 0) {
    while (piVar3 = local_8c, iVar8 = local_88, iVar1 = local_84, piVar7 != (int *)0x0) {
      piVar3 = (int *)piVar7[3];
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
      }
      if (*piVar7 != 0) {
        pvVar4 = (LPVOID)piVar7[1];
        pvVar10 = GetProcessHeap();
        pcVar11 = HeapFree_exref;
        HeapFree(pvVar10,0,pvVar4);
      }
      pvVar10 = GetProcessHeap();
      (*pcVar11)(pvVar10,0,piVar7);
      piVar7 = piVar3;
    }
  }
  else {
    piVar3 = local_98;
    iVar8 = iStack_94;
    iVar1 = local_90;
    if (local_8c != (int *)0x0) {
      *(int **)(iStack_94 + 0xc) = local_8c;
      local_8c[4] = iStack_94;
      iVar8 = local_88;
      iVar1 = local_90 + local_84;
    }
  }
  do {
    iVar5 = local_5c;
    if (local_54 == 3) {
joined_r0x1002f3d3:
      local_90 = iVar5;
      if (local_68 != 1) {
        if (local_68 == 2) {
          FUN_100c0bc0();
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      *param_1 = piVar3;
      param_1[1] = iVar8;
      param_1[2] = iVar1;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_60,local_64);
LAB_1002f3f7:
      param_1[5] = local_90;
      return;
    }
    lVar13 = FUN_10052290(param_3);
    iVar5 = local_68;
    if ((code *)lVar13 == (code *)0x0) {
      iVar5 = local_5c;
      if (local_54 != 3) {
        FUN_10138cf0(param_3,&local_54);
        iVar5 = local_5c;
      }
      goto joined_r0x1002f3d3;
    }
    if (lVar13 == CONCAT44(&local_78,&LAB_1008c5f0)) {
      piVar7 = (int *)local_78;
      if ((int *)local_78 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar2 = local_78._4_4_;
      local_48 = local_78;
      local_7c = local_70._4_4_;
      local_40 = (undefined4)local_70;
      piVar9 = FUN_100be180();
      if (piVar9 != (int *)0x0) {
        local_80 = piVar7;
        if (*piVar9 == 0) {
          piVar7 = FUN_100c0800();
        }
        else {
          piVar7 = (int *)(*piVar9 + 0x8c);
        }
        uVar6 = (uint)(uVar2 == 0xffffffff);
        if ((uint)(uVar2 == 0xffffffff) < *(uint *)(*piVar7 + 0x104)) {
          uVar6 = *(uint *)(*piVar7 + 0x104);
        }
        FUN_100298a0((int *)&local_98,uVar2,'\0',uVar6,(uint *)0x1,local_80,(uint *)uVar2,local_7c,
                     &local_40);
        if (iVar5 != 0) {
          piVar7 = local_64;
          if (iVar5 == 1) {
            while (piVar7 != (int *)0x0) {
              piVar9 = (int *)piVar7[3];
              if (piVar9 != (int *)0x0) {
                piVar9[4] = 0;
              }
              if (*piVar7 != 0) {
                pvVar4 = (LPVOID)piVar7[1];
                pvVar10 = GetProcessHeap();
                HeapFree(pvVar10,0,pvVar4);
              }
              pvVar10 = GetProcessHeap();
              HeapFree(pvVar10,0,piVar7);
              piVar7 = piVar9;
            }
          }
          else {
            if ((code *)*puStack_60 != (code *)0x0) {
              (*(code *)*puStack_60)(local_64);
            }
            if (puStack_60[1] != 0) {
              if (8 < (uint)puStack_60[2]) {
                piVar7 = (int *)local_64[-1];
              }
              pvVar10 = GetProcessHeap();
              HeapFree(pvVar10,0,piVar7);
            }
          }
        }
        *param_1 = piVar3;
        param_1[1] = iVar8;
        param_1[2] = iVar1;
        *(ulonglong *)(param_1 + 3) = CONCAT44(iStack_94,local_98);
        goto LAB_1002f3f7;
      }
      goto LAB_1002f411;
    }
    (*(code *)lVar13)((int)((ulonglong)lVar13 >> 0x20));
  } while( true );
}
