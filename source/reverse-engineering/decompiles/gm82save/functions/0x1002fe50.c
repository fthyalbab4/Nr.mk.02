// rea decompile_all
// name: FUN_1002fe50
// address: 0x1002fe50
// body: available
// range: 0x1002fe50-0x100300ea inclusive
// range: 0x100300f0-0x10030232 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1002fe50(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  LPVOID lpMem;
  int iVar6;
  uint uVar7;
  int *piVar8;
  HANDLE pvVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  int local_94;
  int *piStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int local_84;
  int *local_80;
  undefined4 *puStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  uint uStack_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  int *local_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_6c = *(undefined4 *)(param_3 + 0x88);
  local_74 = param_3 + 0x8c;
  local_70 = 0;
  local_68 = 0;
  local_94 = (int)*param_2;
  piStack_90 = (int *)((ulonglong)*param_2 >> 0x20);
  local_8c = (undefined4)param_2[1];
  uStack_88 = (undefined4)((ulonglong)param_2[1] >> 0x20);
  local_84 = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar6 = *(int *)(param_3 + 0x98);
  if (iVar6 <= (int)(uVar3 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar6 * 2);
    iVar6 = *(int *)(param_3 + 0x98);
  }
  iVar4 = *(int *)(param_3 + 0x94);
  uVar7 = iVar6 - 1U & uVar3;
  *(undefined1 **)(iVar4 + uVar7 * 8) = &LAB_1008cb00;
  *(int **)(iVar4 + 4 + uVar7 * 8) = &local_94;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar3 + 1;
  iVar6 = *(int *)(param_3 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar6 + 0xf8);
    uVar7 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar7 = uVar3 | 0x10000;
    LOCK();
    bVar12 = uVar3 == *(uint *)(iVar6 + 0xf8);
    if (bVar12) {
      *(uint *)(iVar6 + 0xf8) = uVar7;
    }
    UNLOCK();
  } while (!bVar12);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar7 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar6 + 0xec,1);
  }
  local_5c = *(undefined4 *)(param_2 + 3);
  iVar2 = *(int *)(param_2 + 2);
  uVar3 = *(uint *)((int)param_2 + 0x14);
  local_64 = *(uint *)(param_2 + 2);
  uStack_60 = *(undefined4 *)((int)param_2 + 0x14);
  iVar1 = *(int *)((int)param_2 + 0x1c);
  local_50[0] = *(undefined4 *)(param_2 + 3);
  local_58 = iVar2;
  uStack_54 = uVar3;
  piVar8 = FUN_100be180();
  if (piVar8 == (int *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  if (*piVar8 == 0) {
    piVar8 = FUN_100c0800();
  }
  else {
    piVar8 = (int *)(*piVar8 + 0x8c);
  }
  uVar7 = (uint)(uVar3 == 0xffffffff);
  if ((uint)(uVar3 == 0xffffffff) < *(uint *)(*piVar8 + 0x104)) {
    uVar7 = *(uint *)(*piVar8 + 0x104);
  }
  FUN_1002a9e0(&local_64,uVar3,'\0',uVar7,1,iVar2,uVar3,iVar1,local_50);
  piVar8 = piStack_90;
  local_20 = local_80;
  puStack_1c = puStack_7c;
  uVar10 = local_78;
  if (local_70 != 3) {
    while( true ) {
      lVar13 = FUN_10052290(param_3);
      iVar1 = local_84;
      if ((code *)lVar13 == (code *)0x0) break;
      if (lVar13 == CONCAT44(&local_94,&LAB_1008cb00)) {
        if (local_94 == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        local_44 = local_94;
        local_40 = CONCAT44(local_8c,piStack_90);
        local_48 = uStack_88;
        local_38 = uStack_88;
        local_58 = 0;
        FUN_1008f1e0(&local_34,&local_58,&local_44);
        uVar10 = 0;
        if (local_34 != 0) {
          uVar10 = local_28;
        }
        local_20 = (int *)((local_34 << 0x1f) >> 0x1f & local_30);
        puStack_1c = (undefined4 *)((local_34 << 0x1f) >> 0x1f & uStack_2c);
        uStack_18 = 0;
        uStack_14 = 0;
        if (iVar1 == 0) goto LAB_100301ef;
        pcVar11 = HeapFree_exref;
        piVar8 = local_80;
        if (iVar1 == 1) goto joined_r0x100300d4;
        if ((code *)*puStack_7c != (code *)0x0) {
          (*(code *)*puStack_7c)(local_80);
        }
        if (puStack_7c[1] == 0) goto LAB_100301ef;
        if (8 < (uint)puStack_7c[2]) {
          piVar8 = (int *)local_80[-1];
        }
        goto LAB_100301df;
      }
      (*(code *)lVar13)((int)((ulonglong)lVar13 >> 0x20));
      piVar8 = piStack_90;
      local_20 = local_80;
      puStack_1c = puStack_7c;
      uVar10 = local_78;
      if (local_70 == 3) goto joined_r0x100301be;
    }
    piVar8 = piStack_90;
    local_20 = local_80;
    puStack_1c = puStack_7c;
    uVar10 = local_78;
    if (local_70 != 3) {
      FUN_10138cf0(param_3,&local_70);
      piVar8 = piStack_90;
      local_20 = local_80;
      puStack_1c = puStack_7c;
      uVar10 = local_78;
    }
  }
joined_r0x100301be:
  piStack_90 = piVar8;
  if (local_84 != 1) {
    if (local_84 != 2) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    FUN_100c0bc0();
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  local_84 = 1;
  if (0 < local_94) {
LAB_100301df:
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,piVar8);
  }
LAB_100301ef:
  *(undefined4 *)(param_1 + 1) = local_5c;
  *param_1 = CONCAT44(uStack_60,local_64);
  *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(puStack_1c,local_20);
  *(undefined4 *)((int)param_1 + 0x14) = uVar10;
  return;
joined_r0x100300d4:
  while (piVar8 != (int *)0x0) {
    piVar5 = (int *)piVar8[3];
    if (piVar5 != (int *)0x0) {
      piVar5[4] = 0;
    }
    if (*piVar8 != 0) {
      lpMem = (LPVOID)piVar8[1];
      pvVar9 = GetProcessHeap();
      pcVar11 = HeapFree_exref;
      HeapFree(pvVar9,0,lpMem);
    }
    pvVar9 = GetProcessHeap();
    (*pcVar11)(pvVar9,0,piVar8);
    piVar8 = piVar5;
  }
  goto LAB_100301ef;
}
