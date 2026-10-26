// rea decompile_all
// name: FUN_100349f0
// address: 0x100349f0
// body: available
// range: 0x100349f0-0x10034cd0 inclusive
// range: 0x10034ce0-0x10034e03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100349f0(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HANDLE pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  LPVOID pvVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  LPVOID local_84;
  undefined4 *puStack_80;
  int local_7c;
  undefined8 local_78;
  uint *local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_1c;
  int local_14;

  local_78 = *param_2;
  local_3c = *(undefined4 *)(param_3 + 0x88);
  local_44 = param_3 + 0x8c;
  local_40 = 0;
  local_48 = *(undefined4 *)(param_2 + 6);
  local_38 = 0;
  local_70 = (uint *)param_2[1];
  iStack_6c = (int)((ulonglong)param_2[1] >> 0x20);
  local_68 = (undefined4)param_2[2];
  uStack_64 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_60 = (undefined4)param_2[3];
  uStack_5c = (undefined4)((ulonglong)param_2[3] >> 0x20);
  local_58 = (undefined4)param_2[4];
  uStack_54 = (undefined4)((ulonglong)param_2[4] >> 0x20);
  local_50 = (undefined4)param_2[5];
  uStack_4c = (undefined4)((ulonglong)param_2[5] >> 0x20);
  local_88 = 0;
  iVar9 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar7 = *(int *)(param_3 + 0x98);
  if (iVar7 <= (int)(uVar2 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar7 * 2);
    iVar7 = *(int *)(param_3 + 0x98);
  }
  uVar8 = iVar7 - 1U & uVar2;
  iVar7 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar7 + uVar8 * 8) = &LAB_1008e220;
  *(int **)(iVar7 + 4 + uVar8 * 8) = &local_88;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar2 + 1;
  iVar7 = *(int *)(param_3 + 0x8c);
  do {
    uVar2 = *(uint *)(iVar7 + 0xf8);
    if ((uVar2 & 0x10000) != 0) {
      uVar8 = uVar2;
      if ((uVar2 & 0xff) == 0) goto LAB_10034b38;
      goto LAB_10034b25;
    }
    LOCK();
    bVar12 = uVar2 == *(uint *)(iVar7 + 0xf8);
    if (bVar12) {
      *(uint *)(iVar7 + 0xf8) = uVar2 | 0x10000;
    }
    UNLOCK();
  } while (!bVar12);
  uVar8 = uVar2 | 0x10000;
  if ((uVar2 & 0xff) != 0) {
LAB_10034b25:
    if ((iVar9 != iVar1 && -1 < iVar9 - iVar1) || ((uVar8 >> 8 & 0xff) == (uVar2 & 0xff))) {
      FUN_10139520(iVar7 + 0xec,1);
    }
  }
LAB_10034b38:
  local_20 = *(undefined4 *)(param_2 + 10);
  local_34 = *(int *)((int)param_2 + 0x3c);
  local_28 = (undefined4)param_2[9];
  uStack_24 = (undefined4)((ulonglong)param_2[9] >> 0x20);
  uStack_30 = (undefined4)param_2[8];
  uStack_2c = (undefined4)((ulonglong)param_2[8] >> 0x20);
  FUN_10022250((uint *)&local_98,**(uint **)((int)param_2 + 0x34),param_4,**(uint **)(param_2 + 7),
               (*(uint **)(param_2 + 7))[1],&local_34,(undefined4 *)((int)param_2 + 0x54));
  uVar5 = (undefined4)local_90;
  uVar2 = (uint)local_98;
  uVar4 = local_98._4_4_;
  do {
    iVar9 = local_7c;
    if (local_40 == 3) {
joined_r0x10034dc3:
      local_14 = iVar9;
      if (local_88 != 1) {
        if (local_88 != 2) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_100c0bc0();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *param_1 = (uint)local_98;
      param_1[1] = local_98._4_4_;
      param_1[2] = (undefined4)local_90;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_80,local_84);
LAB_10034dea:
      param_1[5] = local_14;
      return;
    }
    lVar13 = FUN_10052290(param_3);
    iVar9 = local_88;
    if ((code *)lVar13 == (code *)0x0) {
      iVar9 = local_7c;
      if (local_40 != 3) {
        FUN_10138cf0(param_3,&local_40);
        iVar9 = local_7c;
      }
      goto joined_r0x10034dc3;
    }
    if (lVar13 == CONCAT44(&local_88,&LAB_1008e220)) {
      if ((int *)local_78 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uStack_2c = uStack_64;
      local_28 = local_60;
      local_34 = iStack_6c;
      uStack_30 = local_68;
      local_90 = CONCAT44(local_48,uStack_4c);
      local_98 = CONCAT44(local_50,uStack_54);
      uStack_24 = uStack_5c;
      local_20 = local_58;
      FUN_10022250((uint *)&local_1c,*(int *)local_78 - *local_78._4_4_,param_4,*local_70,
                   local_70[1],&local_34,(undefined4 *)&local_98);
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          if (local_7c != 0) {
            puVar10 = (undefined4 *)((int)local_84 + 4);
            iVar9 = local_7c;
            do {
              if (puVar10[-1] != 0) {
                pvVar11 = (LPVOID)*puVar10;
                pvVar6 = GetProcessHeap();
                HeapFree(pvVar6,0,pvVar11);
              }
              puVar10 = puVar10 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        else {
          if ((code *)*puStack_80 != (code *)0x0) {
            (*(code *)*puStack_80)(local_84);
          }
          if (puStack_80[1] != 0) {
            pvVar11 = local_84;
            if (8 < (uint)puStack_80[2]) {
              pvVar11 = *(LPVOID *)((int)local_84 + -4);
            }
            pvVar6 = GetProcessHeap();
            HeapFree(pvVar6,0,pvVar11);
          }
        }
      }
      *param_1 = uVar2;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      *(undefined8 *)(param_1 + 3) = local_1c;
      goto LAB_10034dea;
    }
    (*(code *)lVar13)((int)((ulonglong)lVar13 >> 0x20));
  } while( true );
}
