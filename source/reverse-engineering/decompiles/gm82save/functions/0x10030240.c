// rea decompile_all
// name: FUN_10030240
// address: 0x10030240
// body: available
// range: 0x10030240-0x100304d5 inclusive
// range: 0x100304e0-0x10030625 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10030240(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  LPVOID lpMem;
  byte ******ppppppbVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  byte ******ppppppbVar11;
  HANDLE pvVar12;
  code *pcVar13;
  bool bVar14;
  longlong lVar15;
  int *local_6c;
  uint uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  int local_3c;
  int *local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_1c;
  undefined4 local_14;

  local_4c = *param_2;
  local_44 = param_2[1];
  local_24 = *(undefined4 *)(param_3 + 0x88);
  local_2c = param_3 + 0x8c;
  local_28 = 0;
  local_20 = 0;
  local_3c = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar9 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar6 = *(int *)(param_3 + 0x98);
  if (iVar6 <= (int)(uVar9 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar6 * 2);
    iVar6 = *(int *)(param_3 + 0x98);
  }
  iVar3 = *(int *)(param_3 + 0x94);
  uVar7 = iVar6 - 1U & uVar9;
  *(undefined1 **)(iVar3 + uVar7 * 8) = &LAB_1008cc80;
  *(undefined8 **)(iVar3 + 4 + uVar7 * 8) = &local_4c;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar9 + 1;
  iVar6 = *(int *)(param_3 + 0x8c);
  do {
    uVar9 = *(uint *)(iVar6 + 0xf8);
    uVar7 = uVar9;
    if ((uVar9 & 0x10000) != 0) break;
    uVar7 = uVar9 | 0x10000;
    LOCK();
    bVar14 = uVar9 == *(uint *)(iVar6 + 0xf8);
    if (bVar14) {
      *(uint *)(iVar6 + 0xf8) = uVar7;
    }
    UNLOCK();
  } while (!bVar14);
  if (((uVar9 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar7 >> 8 & 0xff) == (uVar9 & 0xff))))) {
    FUN_10139520(iVar6 + 0xec,1);
  }
  local_58 = *(undefined4 *)(param_2 + 3);
  local_60 = param_2[2];
  ppiVar4 = *(int ***)((int)param_2 + 0x1c);
  local_64 = *(undefined4 *)(param_2 + 3);
  local_6c = (int *)param_2[2];
  uStack_68 = (uint)((ulonglong)param_2[2] >> 0x20);
  piVar8 = FUN_100be180();
  if (piVar8 == (int *)0x0) {
LAB_1003061a:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar13 = (code *)invalidInstructionException();
    (*pcVar13)();
  }
  if (*piVar8 == 0) {
    piVar8 = FUN_100c0800();
  }
  else {
    piVar8 = (int *)(*piVar8 + 0x8c);
  }
  uVar9 = (uint)(uStack_68 == 0xffffffff);
  if ((uint)(uStack_68 == 0xffffffff) < *(uint *)(*piVar8 + 0x104)) {
    uVar9 = *(uint *)(*piVar8 + 0x104);
  }
  FUN_10028710((undefined4 *)&local_60,uStack_68,'\0',uVar9,(int *)0x1,local_6c,(int *)uStack_68,
               ppiVar4,&local_64);
  do {
    if (local_28 == 3) {
joined_r0x100305da:
      if (local_3c == 1) {
        *(undefined4 *)(param_1 + 1) = local_58;
        *param_1 = local_60;
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(puStack_34,local_38);
        *(undefined4 *)((int)param_1 + 0x14) = local_30;
        return;
      }
      if (local_3c == 2) {
        FUN_100c0bc0();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    lVar15 = FUN_10052290(param_3);
    iVar1 = local_3c;
    if ((code *)lVar15 == (code *)0x0) {
      if (local_28 != 3) {
        FUN_10138cf0(param_3,&local_28);
      }
      goto joined_r0x100305da;
    }
    if (lVar15 == CONCAT44(&local_4c,&LAB_1008cc80)) {
      piVar8 = (int *)local_4c;
      if ((int *)local_4c == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      ppppppbVar5 = local_4c._4_4_;
      local_50 = local_44._4_4_;
      local_64 = (undefined4)local_44;
      piVar10 = FUN_100be180();
      if (piVar10 != (int *)0x0) {
        local_54 = iVar1;
        if (*piVar10 == 0) {
          piVar10 = FUN_100c0800();
        }
        else {
          piVar10 = (int *)(*piVar10 + 0x8c);
        }
        ppppppbVar11 = (byte ******)(uint)(ppppppbVar5 == (byte ******)0xffffffff);
        if ((byte ******)(uint)(ppppppbVar5 == (byte ******)0xffffffff) <
            *(byte *******)(*piVar10 + 0x104)) {
          ppppppbVar11 = *(byte *******)(*piVar10 + 0x104);
        }
        FUN_10028c50((int *)&local_1c,ppppppbVar5,'\0',ppppppbVar11,(byte *******)0x1,piVar8,
                     (byte *******)ppppppbVar5,local_50,&local_64);
        if (local_54 != 0) {
          if (local_54 == 1) {
            local_54 = 1;
            pcVar13 = HeapFree_exref;
            piVar8 = local_38;
            while (piVar8 != (int *)0x0) {
              piVar10 = (int *)piVar8[3];
              if (piVar10 != (int *)0x0) {
                piVar10[4] = 0;
              }
              if (*piVar8 != 0) {
                lpMem = (LPVOID)piVar8[1];
                pvVar12 = GetProcessHeap();
                pcVar13 = HeapFree_exref;
                HeapFree(pvVar12,0,lpMem);
              }
              pvVar12 = GetProcessHeap();
              (*pcVar13)(pvVar12,0,piVar8);
              piVar8 = piVar10;
            }
          }
          else {
            if ((code *)*puStack_34 != (code *)0x0) {
              (*(code *)*puStack_34)(local_38);
            }
            if (puStack_34[1] != 0) {
              piVar8 = local_38;
              if (8 < (uint)puStack_34[2]) {
                piVar8 = (int *)local_38[-1];
              }
              pvVar12 = GetProcessHeap();
              HeapFree(pvVar12,0,piVar8);
            }
          }
        }
        *(undefined4 *)(param_1 + 1) = local_58;
        *param_1 = local_60;
        *(undefined8 *)((int)param_1 + 0xc) = local_1c;
        *(undefined4 *)((int)param_1 + 0x14) = local_14;
        return;
      }
      goto LAB_1003061a;
    }
    (*(code *)lVar15)((int)((ulonglong)lVar15 >> 0x20));
  } while( true );
}
