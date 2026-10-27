// rea decompile_all
// name: FUN_10035e90
// address: 0x10035e90
// body: available
// range: 0x10035e90-0x1003610c inclusive
// range: 0x10036110-0x10036248 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10035e90(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LPVOID lpMem;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  HANDLE pvVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  code *pcVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int local_64;
  int *local_60;
  undefined4 *puStack_5c;
  undefined4 local_58;
  undefined8 local_54;
  uint *local_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_1c;
  undefined4 local_14;

  local_54 = *param_2;
  local_24 = *(undefined4 *)(param_3 + 0x88);
  local_2c = param_3 + 0x8c;
  local_28 = 0;
  local_20 = 0;
  local_4c = (uint *)param_2[1];
  iStack_48 = (int)((ulonglong)param_2[1] >> 0x20);
  local_3c = (undefined4)param_2[3];
  uStack_38 = (undefined4)((ulonglong)param_2[3] >> 0x20);
  local_44 = (undefined4)param_2[2];
  uStack_40 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_34 = (undefined4)param_2[4];
  uStack_30 = (undefined4)((ulonglong)param_2[4] >> 0x20);
  local_64 = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar9 = *(int *)(param_3 + 0x98);
  if (iVar9 <= (int)(uVar3 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar9 * 2);
    iVar9 = *(int *)(param_3 + 0x98);
  }
  uVar10 = iVar9 - 1U & uVar3;
  iVar9 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar9 + uVar10 * 8) = &LAB_1008c140;
  *(int **)(iVar9 + 4 + uVar10 * 8) = &local_64;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar3 + 1;
  iVar9 = *(int *)(param_3 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar9 + 0xf8);
    uVar10 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar10 = uVar3 | 0x10000;
    LOCK();
    bVar13 = uVar3 == *(uint *)(iVar9 + 0xf8);
    if (bVar13) {
      *(uint *)(iVar9 + 0xf8) = uVar10;
    }
    UNLOCK();
  } while (!bVar13);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar10 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar9 + 0xec,1);
  }
  local_68 = *(undefined4 *)((int)param_2 + 0x3c);
  local_74 = *(int *)(param_2 + 6);
  uStack_70 = (undefined4)*(undefined8 *)((int)param_2 + 0x34);
  uStack_6c = (undefined4)((ulonglong)*(undefined8 *)((int)param_2 + 0x34) >> 0x20);
  FUN_10027710((int *)&local_88,**(uint **)(param_2 + 5),param_4,**(uint **)((int)param_2 + 0x2c),
               (*(uint **)((int)param_2 + 0x2c))[1],&local_74,(undefined4 *)(param_2 + 8));
  iVar1 = (int)local_88;
  uVar5 = local_88._4_4_;
  do {
    uVar7 = local_58;
    if (local_28 == 3) {
joined_r0x10036208:
      local_14 = uVar7;
      if (local_64 != 1) {
        if (local_64 == 2) {
          FUN_100c0bc0();
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      *param_1 = (int)local_88;
      param_1[1] = local_88._4_4_;
      param_1[2] = local_80;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_5c,local_60);
LAB_1003622f:
      param_1[5] = local_14;
      return;
    }
    lVar14 = FUN_10052290(param_3);
    iVar2 = local_64;
    if ((code *)lVar14 == (code *)0x0) {
      uVar7 = local_58;
      if (local_28 != 3) {
        FUN_10138cf0(param_3,&local_28);
        uVar7 = local_58;
      }
      goto joined_r0x10036208;
    }
    if (lVar14 == CONCAT44(&local_64,&LAB_1008c140)) {
      local_78 = local_80;
      if ((int *)local_54 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      local_88 = CONCAT44(local_34,uStack_38);
      uStack_6c = uStack_40;
      local_68 = local_3c;
      local_74 = iStack_48;
      uStack_70 = local_44;
      local_80 = uStack_30;
      local_7c = puStack_5c;
      FUN_10027710((int *)&local_1c,*(int *)local_54 - *local_54._4_4_,param_4,*local_4c,local_4c[1]
                   ,&local_74,(undefined4 *)&local_88);
      puVar6 = local_7c;
      if (iVar2 != 0) {
        pcVar12 = HeapFree_exref;
        piVar11 = local_60;
        if (iVar2 == 1) {
          while (piVar11 != (int *)0x0) {
            piVar4 = (int *)piVar11[3];
            if (piVar4 != (int *)0x0) {
              piVar4[4] = 0;
            }
            if (*piVar11 != 0) {
              lpMem = (LPVOID)piVar11[1];
              pvVar8 = GetProcessHeap();
              pcVar12 = HeapFree_exref;
              HeapFree(pvVar8,0,lpMem);
            }
            pvVar8 = GetProcessHeap();
            (*pcVar12)(pvVar8,0,piVar11);
            piVar11 = piVar4;
          }
        }
        else {
          if ((code *)*local_7c != (code *)0x0) {
            (*(code *)*local_7c)(local_60);
          }
          if (puVar6[1] != 0) {
            if (8 < (uint)puVar6[2]) {
              piVar11 = (int *)local_60[-1];
            }
            pvVar8 = GetProcessHeap();
            HeapFree(pvVar8,0,piVar11);
          }
        }
      }
      *param_1 = iVar1;
      param_1[1] = uVar5;
      param_1[2] = local_78;
      *(undefined8 *)(param_1 + 3) = local_1c;
      goto LAB_1003622f;
    }
    (*(code *)lVar14)((int)((ulonglong)lVar14 >> 0x20));
  } while( true );
}
