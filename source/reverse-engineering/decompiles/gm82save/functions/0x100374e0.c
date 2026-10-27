// rea decompile_all
// name: FUN_100374e0
// address: 0x100374e0
// body: available
// range: 0x100374e0-0x10037787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100374e0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  HANDLE hHeap;
  int iVar6;
  uint uVar7;
  LPVOID lpMem;
  bool bVar8;
  longlong lVar9;
  char in_stack_00000004;
  undefined8 local_54;
  uint *local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  LPVOID local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_1c;
  undefined4 local_14;

  local_24 = *(undefined4 *)(param_2 + 0x88);
  local_2c = param_2 + 0x8c;
  local_28 = 0;
  local_54 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 3);
  local_20 = 0;
  local_4c = (uint *)param_1[1];
  uStack_48 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_44 = (undefined4)param_1[2];
  uStack_40 = (undefined4)((ulonglong)param_1[2] >> 0x20);
  local_38 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_2 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_2 + 0x90) + 0x84);
  iVar6 = *(int *)(param_2 + 0x98);
  if (iVar6 <= (int)(uVar3 - *(int *)(*(int *)(param_2 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_2 + 0x90),iVar6 * 2);
    iVar6 = *(int *)(param_2 + 0x98);
  }
  iVar4 = *(int *)(param_2 + 0x94);
  uVar7 = iVar6 - 1U & uVar3;
  *(undefined1 **)(iVar4 + uVar7 * 8) = &LAB_1008ee60;
  *(undefined8 **)(iVar4 + 4 + uVar7 * 8) = &local_54;
  *(uint *)(*(int *)(param_2 + 0x90) + 0x84) = uVar3 + 1;
  iVar6 = *(int *)(param_2 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar6 + 0xf8);
    uVar7 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar7 = uVar3 | 0x10000;
    LOCK();
    bVar8 = uVar3 == *(uint *)(iVar6 + 0xf8);
    if (bVar8) {
      *(uint *)(iVar6 + 0xf8) = uVar7;
    }
    UNLOCK();
  } while (!bVar8);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar7 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar6 + 0xec,1);
  }
  FUN_1002b1a0(**(uint **)((int)param_1 + 0x1c),in_stack_00000004,**(uint **)(param_1 + 4),
               (*(uint **)(param_1 + 4))[1],(int *)((int)param_1 + 0x24),
               *(undefined4 *)(param_1 + 6));
  do {
    if (local_28 == 3) {
LAB_10037667:
      if (local_38 == 1) {
        return;
      }
LAB_10037674:
      if (local_38 == 2) {
        FUN_100c0bc0();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar9 = FUN_10052290(param_2);
    uVar3 = local_38;
    if ((code *)lVar9 == (code *)0x0) {
      if (local_28 != 3) {
        FUN_10138cf0(param_2,&local_28);
        if (local_38 == 1) {
          return;
        }
        goto LAB_10037674;
      }
      goto LAB_10037667;
    }
    if (lVar9 == CONCAT44(&local_54,&LAB_1008ee60)) {
      if ((int *)local_54 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_1c = CONCAT44(local_44,uStack_48);
      local_14 = uStack_40;
      FUN_1002b1a0(*(int *)local_54 - *local_54._4_4_,in_stack_00000004,*local_4c,local_4c[1],
                   (int *)&local_1c,local_3c);
      if (uVar3 < 2) {
        return;
      }
      if ((code *)*local_30 != (code *)0x0) {
        (*(code *)*local_30)(local_34);
      }
      if (local_30[1] == 0) {
        return;
      }
      lpMem = local_34;
      if (8 < (uint)local_30[2]) {
        lpMem = *(LPVOID *)((int)local_34 + -4);
      }
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
      return;
    }
    (*(code *)lVar9)((int)((ulonglong)lVar9 >> 0x20));
  } while( true );
}
