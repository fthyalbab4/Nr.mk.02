// rea decompile_all
// name: FUN_10036740
// address: 0x10036740
// body: available
// range: 0x10036740-0x100369eb inclusive
// range: 0x100369f0-0x10036b2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10036740(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LPVOID lpMem;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  HANDLE pvVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  code *pcVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 local_80;
  int local_7c;
  int *local_78;
  undefined4 *puStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  uint *local_64;
  int iStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;

  local_6c = *param_2;
  local_38 = *(undefined4 *)(param_3 + 0x88);
  local_40 = param_3 + 0x8c;
  local_3c = 0;
  local_44 = *(undefined4 *)(param_2 + 5);
  local_34 = 0;
  local_64 = (uint *)param_2[1];
  iStack_60 = (int)((ulonglong)param_2[1] >> 0x20);
  local_54 = (undefined4)param_2[3];
  uStack_50 = (undefined4)((ulonglong)param_2[3] >> 0x20);
  local_5c = (undefined4)param_2[2];
  uStack_58 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_4c = param_2[4];
  local_7c = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar10 = *(int *)(param_3 + 0x98);
  if (iVar10 <= (int)(uVar3 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar10 * 2);
    iVar10 = *(int *)(param_3 + 0x98);
  }
  uVar11 = iVar10 - 1U & uVar3;
  iVar10 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar10 + uVar11 * 8) = &LAB_1008bab0;
  *(int **)(iVar10 + 4 + uVar11 * 8) = &local_7c;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar3 + 1;
  iVar10 = *(int *)(param_3 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar10 + 0xf8);
    uVar11 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar11 = uVar3 | 0x10000;
    LOCK();
    bVar14 = uVar3 == *(uint *)(iVar10 + 0xf8);
    if (bVar14) {
      *(uint *)(iVar10 + 0xf8) = uVar11;
    }
    UNLOCK();
  } while (!bVar14);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar11 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar10 + 0xec,1);
  }
  local_30 = *(int *)((int)param_2 + 0x34);
  local_24 = (undefined4)param_2[8];
  uStack_20 = (undefined4)((ulonglong)param_2[8] >> 0x20);
  uStack_2c = (undefined4)param_2[7];
  uStack_28 = (undefined4)((ulonglong)param_2[7] >> 0x20);
  FUN_100265f0((undefined4 *)&local_90,**(uint **)((int)param_2 + 0x2c),param_4,
               **(uint **)(param_2 + 6),(*(uint **)(param_2 + 6))[1],&local_30,
               (undefined4 *)(param_2 + 9));
  uVar5 = (undefined4)local_90;
  uVar6 = local_90._4_4_;
  do {
    uVar8 = local_70;
    if (local_3c == 3) {
joined_r0x10036aeb:
      local_14 = uVar8;
      if (local_7c != 1) {
        if (local_7c == 2) {
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
      *param_1 = (undefined4)local_90;
      param_1[1] = local_90._4_4_;
      param_1[2] = local_88;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_74,local_78);
LAB_10036b12:
      param_1[5] = local_14;
      return;
    }
    lVar15 = FUN_10052290(param_3);
    iVar1 = local_7c;
    if ((code *)lVar15 == (code *)0x0) {
      uVar8 = local_70;
      if (local_3c != 3) {
        FUN_10138cf0(param_3,&local_3c);
        uVar8 = local_70;
      }
      goto joined_r0x10036aeb;
    }
    if (lVar15 == CONCAT44(&local_7c,&LAB_1008bab0)) {
      local_80 = local_88;
      if ((int *)local_6c == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      uStack_20 = uStack_50;
      uStack_28 = uStack_58;
      local_24 = local_54;
      local_30 = iStack_60;
      uStack_2c = local_5c;
      local_90 = local_4c;
      local_84 = puStack_74;
      local_88 = local_44;
      FUN_100265f0((undefined4 *)&local_1c,*(int *)local_6c - *local_6c._4_4_,param_4,*local_64,
                   local_64[1],&local_30,(undefined4 *)&local_90);
      puVar7 = local_84;
      if (iVar1 != 0) {
        pcVar13 = HeapFree_exref;
        piVar12 = local_78;
        if (iVar1 == 1) {
          while (piVar12 != (int *)0x0) {
            piVar4 = (int *)piVar12[3];
            if (piVar4 != (int *)0x0) {
              piVar4[4] = 0;
            }
            if (*piVar12 != 0) {
              lpMem = (LPVOID)piVar12[1];
              pvVar9 = GetProcessHeap();
              pcVar13 = HeapFree_exref;
              HeapFree(pvVar9,0,lpMem);
            }
            pvVar9 = GetProcessHeap();
            (*pcVar13)(pvVar9,0,piVar12);
            piVar12 = piVar4;
          }
        }
        else {
          if ((code *)*local_84 != (code *)0x0) {
            (*(code *)*local_84)(local_78);
          }
          if (puVar7[1] != 0) {
            if (8 < (uint)puVar7[2]) {
              piVar12 = (int *)local_78[-1];
            }
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,piVar12);
          }
        }
      }
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = local_80;
      *(undefined8 *)(param_1 + 3) = local_1c;
      goto LAB_10036b12;
    }
    (*(code *)lVar15)((int)((ulonglong)lVar15 >> 0x20));
  } while( true );
}
