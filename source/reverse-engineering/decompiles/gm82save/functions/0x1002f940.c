// rea decompile_all
// name: FUN_1002f940
// address: 0x1002f940
// body: available
// range: 0x1002f940-0x1002fb22 inclusive
// range: 0x1002fb30-0x1002fcb0 inclusive
// range: 0x1002fcc0-0x1002fe4c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1002f940(undefined4 *param_1,undefined8 *param_2,int param_3)

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
  int *local_80;
  int iStack_7c;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int *local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int *local_4c;
  undefined4 *puStack_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;

  local_60 = *param_2;
  local_58 = param_2[1];
  local_38 = *(undefined4 *)(param_3 + 0x88);
  local_40 = param_3 + 0x8c;
  local_3c = 0;
  local_34 = 0;
  local_50 = 0;
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
  *(undefined1 **)(iVar5 + uVar6 * 8) = &LAB_1008c950;
  *(undefined8 **)(iVar5 + 4 + uVar6 * 8) = &local_60;
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
  local_30 = *(undefined8 *)((int)param_2 + 0x1c);
  local_28 = *(undefined4 *)((int)param_2 + 0x24);
  local_18 = *(undefined4 *)(param_2 + 3);
  local_24 = *(undefined4 *)(param_2 + 5);
  local_20 = param_2[2];
  local_14 = local_24;
  piVar7 = FUN_100be180();
  if (piVar7 == (int *)0x0) {
LAB_1002fe41:
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
    if (piVar7 == (int *)0x0) goto LAB_1002fe41;
    iVar8 = *piVar7;
    if (iVar8 == 0) {
      FUN_1012d9d0((undefined8 *)&local_80,(uint *)(iVar1 + 0x40),&local_30);
      goto LAB_1002fac8;
    }
    if (*(int *)(iVar8 + 0x8c) != iVar1) {
      FUN_101302e0((undefined8 *)&local_80,(uint *)(iVar1 + 0x40),iVar8,&local_30);
      goto LAB_1002fac8;
    }
  }
  FUN_10030240((undefined8 *)&local_80,&local_30,iVar8);
LAB_1002fac8:
  pcVar11 = HeapFree_exref;
  piVar7 = local_80;
  if (iStack_7c == 0) {
    while (piVar3 = local_74, iVar8 = local_70, iVar1 = local_6c, piVar7 != (int *)0x0) {
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
    piVar3 = local_80;
    iVar8 = iStack_7c;
    iVar1 = local_78;
    if (local_74 != (int *)0x0) {
      *(int **)(iStack_7c + 0xc) = local_74;
      local_74[4] = iStack_7c;
      iVar8 = local_70;
      iVar1 = local_78 + local_6c;
    }
  }
  do {
    iVar5 = local_44;
    if (local_3c == 3) {
joined_r0x1002fe03:
      local_78 = iVar5;
      if (local_50 != 1) {
        if (local_50 == 2) {
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
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_48,local_4c);
LAB_1002fe27:
      param_1[5] = local_78;
      return;
    }
    lVar13 = FUN_10052290(param_3);
    iVar5 = local_50;
    if ((code *)lVar13 == (code *)0x0) {
      iVar5 = local_44;
      if (local_3c != 3) {
        FUN_10138cf0(param_3,&local_3c);
        iVar5 = local_44;
      }
      goto joined_r0x1002fe03;
    }
    if (lVar13 == CONCAT44(&local_60,&LAB_1008c950)) {
      piVar7 = (int *)local_60;
      if ((int *)local_60 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar2 = local_60._4_4_;
      local_30 = local_60;
      local_64 = local_58._4_4_;
      local_28 = (undefined4)local_58;
      piVar9 = FUN_100be180();
      if (piVar9 != (int *)0x0) {
        local_68 = piVar7;
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
        FUN_10029cb0((uint *)&local_80,uVar2,'\0',uVar6,1,local_68,uVar2,local_64,&local_28);
        if (iVar5 != 0) {
          piVar7 = local_4c;
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
            if ((code *)*puStack_48 != (code *)0x0) {
              (*(code *)*puStack_48)(local_4c);
            }
            if (puStack_48[1] != 0) {
              if (8 < (uint)puStack_48[2]) {
                piVar7 = (int *)local_4c[-1];
              }
              pvVar10 = GetProcessHeap();
              HeapFree(pvVar10,0,piVar7);
            }
          }
        }
        *param_1 = piVar3;
        param_1[1] = iVar8;
        param_1[2] = iVar1;
        *(ulonglong *)(param_1 + 3) = CONCAT44(iStack_7c,local_80);
        goto LAB_1002fe27;
      }
      goto LAB_1002fe41;
    }
    (*(code *)lVar13)((int)((ulonglong)lVar13 >> 0x20));
  } while( true );
}
