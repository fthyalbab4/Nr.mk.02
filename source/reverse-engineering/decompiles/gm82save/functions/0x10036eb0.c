// rea decompile_all
// name: FUN_10036eb0
// address: 0x10036eb0
// body: available
// range: 0x10036eb0-0x10037226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10036eb0(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 local_94;
  undefined4 local_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint *local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;

  local_78 = *param_2;
  uStack_54 = *(undefined4 *)(param_3 + 0x88);
  iStack_5c = param_3 + 0x8c;
  local_58 = 0;
  local_60 = *(undefined4 *)(param_2 + 3);
  local_50 = local_50 & 0xffffff00;
  local_70 = (uint *)param_2[1];
  uStack_6c = (undefined4)((ulonglong)param_2[1] >> 0x20);
  local_68 = (undefined4)param_2[2];
  uStack_64 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_88 = 0;
  iVar7 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar8 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar1 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar5 = *(int *)(param_3 + 0x98);
  if (iVar5 <= (int)(uVar1 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar5 * 2);
    iVar5 = *(int *)(param_3 + 0x98);
  }
  iVar2 = *(int *)(param_3 + 0x94);
  uVar6 = iVar5 - 1U & uVar1;
  *(undefined1 **)(iVar2 + uVar6 * 8) = &LAB_1008bfc0;
  *(int **)(iVar2 + 4 + uVar6 * 8) = &local_88;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar1 + 1;
  iVar5 = *(int *)(param_3 + 0x8c);
  do {
    uVar1 = *(uint *)(iVar5 + 0xf8);
    uVar6 = uVar1;
    if ((uVar1 & 0x10000) != 0) break;
    uVar6 = uVar1 | 0x10000;
    LOCK();
    bVar11 = uVar1 == *(uint *)(iVar5 + 0xf8);
    if (bVar11) {
      *(uint *)(iVar5 + 0xf8) = uVar6;
    }
    UNLOCK();
  } while (!bVar11);
  if (((uVar1 & 0xff) != 0) &&
     ((iVar7 != iVar8 && -1 < iVar7 - iVar8 || ((uVar6 >> 8 & 0xff) == (uVar1 & 0xff))))) {
    FUN_10139520(iVar5 + 0xec,1);
  }
  local_4c = *(undefined8 *)((int)param_2 + 0x24);
  local_44 = CONCAT44(local_44._4_4_,*(undefined4 *)((int)param_2 + 0x2c));
  FUN_10028020((int *)&local_94,**(uint **)((int)param_2 + 0x1c),param_4,**(uint **)(param_2 + 4),
               (*(uint **)(param_2 + 4))[1],(int *)&local_4c,*(undefined4 *)(param_2 + 6));
  uVar10 = local_8c;
  iVar7 = (int)local_94;
  uVar9 = local_94._4_4_;
  do {
    if (local_58 == 3) {
joined_r0x100371d1:
      uVar10 = uStack_7c;
      uVar9 = local_80;
      if (local_88 != 1) {
        if (local_88 == 2) {
          FUN_100c0bc0();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *param_1 = (int)local_94;
      param_1[1] = local_94._4_4_;
      param_1[2] = local_8c;
      param_1[3] = uStack_84;
      iVar7 = 0x14;
      iVar8 = 0x10;
LAB_10037208:
      *(undefined4 *)((int)param_1 + iVar8) = uVar9;
      *(undefined4 *)((int)param_1 + iVar7) = uVar10;
      return;
    }
    lVar12 = FUN_10052290(param_3);
    if ((code *)lVar12 == (code *)0x0) {
      if (local_58 != 3) {
        FUN_10138cf0(param_3,&local_58);
      }
      goto joined_r0x100371d1;
    }
    if (lVar12 == CONCAT44(&local_88,&LAB_1008bfc0)) {
      local_1c = CONCAT44(uStack_54,local_58);
      local_24 = CONCAT44(iStack_5c,local_60);
      local_2c = CONCAT44(uStack_64,local_68);
      local_34 = CONCAT44(uStack_6c,local_70);
      local_3c = local_78;
      uVar4 = local_3c;
      local_14 = local_50;
      local_4c = CONCAT44(uStack_84,local_88);
      local_3c._0_4_ = (int *)local_78;
      local_3c = uVar4;
      if ((int *)local_3c == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_94 = CONCAT44(local_68,uStack_6c);
      local_3c._4_4_ = (int *)((ulonglong)local_78 >> 0x20);
      local_8c = uStack_64;
      iVar8 = *(int *)local_3c;
      iVar5 = *local_3c._4_4_;
      FUN_10028020(param_1 + 3,iVar8 - iVar5,param_4,*local_70,local_70[1],(int *)&local_94,local_60
                  );
      FUN_10004a00((int *)&local_4c);
      iVar8 = 4;
      *param_1 = iVar7;
      iVar7 = 8;
      goto LAB_10037208;
    }
    (*(code *)lVar12)((int)((ulonglong)lVar12 >> 0x20));
  } while( true );
}
