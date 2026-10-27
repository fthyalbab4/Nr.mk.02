// rea decompile_all
// name: FUN_10036b30
// address: 0x10036b30
// body: available
// range: 0x10036b30-0x10036ead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10036b30(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  HANDLE hHeap;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char in_stack_00000008;
  LPVOID local_94;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  LPVOID local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  char local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined8 local_1c;
  undefined4 local_14;

  local_78 = param_2[1];
  local_70 = param_2[2];
  local_80 = *param_2;
  local_3c = *(undefined4 *)(param_3 + 0x88);
  local_44 = param_3 + 0x8c;
  local_40 = 0;
  local_38 = 0;
  local_68 = param_2[3];
  local_60 = param_2[4];
  local_58 = param_2[5];
  local_50 = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar5 = *(int *)(param_3 + 0x98);
  if (iVar5 <= (int)(uVar3 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar5 * 2);
    iVar5 = *(int *)(param_3 + 0x98);
  }
  uVar6 = iVar5 - 1U & uVar3;
  iVar5 = *(int *)(param_3 + 0x94);
  *(undefined1 **)(iVar5 + uVar6 * 8) = &LAB_1008a9a0;
  *(undefined8 **)(iVar5 + 4 + uVar6 * 8) = &local_80;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar3 + 1;
  iVar5 = *(int *)(param_3 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar5 + 0xf8);
    uVar6 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar6 = uVar3 | 0x10000;
    LOCK();
    bVar7 = uVar3 == *(uint *)(iVar5 + 0xf8);
    if (bVar7) {
      *(uint *)(iVar5 + 0xf8) = uVar6;
    }
    UNLOCK();
  } while (!bVar7);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar6 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar5 + 0xec,1);
  }
  local_34 = param_2[6];
  local_2c = CONCAT44(local_2c._4_4_,*(undefined4 *)(param_2 + 7));
  uVar8 = FUN_10027b90(**(uint **)((int)param_2 + 0x3c),in_stack_00000008,**(uint **)(param_2 + 8),
                       (*(uint **)(param_2 + 8))[1],(int *)&local_34,
                       (undefined4 *)((int)param_2 + 0x44));
  if (local_40 != 3) {
    while( true ) {
      lVar9 = FUN_10052290(param_3);
      uVar3 = local_50;
      if ((code *)lVar9 == (code *)0x0) break;
      if (lVar9 == CONCAT44(&local_80,&LAB_1008a9a0)) {
        if (local_58._4_1_ == '\x02') {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_94 = local_4c;
        local_2c = local_60;
        local_34 = local_68;
        local_14 = (undefined4)local_78;
        local_1c = local_80;
        local_24 = (undefined4)local_58;
        local_1d = local_58._7_1_;
        local_1f = local_58._5_2_;
        local_20 = local_58._4_1_;
        uVar10 = FUN_10027b90(*local_78._4_4_ - *(int *)local_70,in_stack_00000008,*local_70._4_4_,
                              local_70._4_4_[1],(int *)&local_1c,(undefined4 *)&local_34);
        if (1 < uVar3) {
          if ((code *)*local_48 != (code *)0x0) {
            (*(code *)*local_48)(local_4c);
          }
          if (local_48[1] != 0) {
            if (8 < (uint)local_48[2]) {
              local_94 = *(LPVOID *)((int)local_4c + -4);
            }
            hHeap = GetProcessHeap();
            HeapFree(hHeap,0,local_94);
          }
        }
        goto LAB_10036e88;
      }
      (*(code *)lVar9)((int)((ulonglong)lVar9 >> 0x20));
      if (local_40 == 3) goto joined_r0x10036e76;
    }
    if (local_40 != 3) {
      FUN_10138cf0(param_3,&local_40);
    }
  }
joined_r0x10036e76:
  if (local_50 != 1) {
    if (local_50 == 2) {
      FUN_100c0bc0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar10 = CONCAT44(local_48,local_4c);
LAB_10036e88:
  *param_1 = uVar8;
  param_1[1] = uVar10;
  return;
}
