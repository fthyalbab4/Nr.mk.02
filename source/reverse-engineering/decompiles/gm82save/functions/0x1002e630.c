// rea decompile_all
// name: FUN_1002e630
// address: 0x1002e630
// body: available
// range: 0x1002e630-0x1002e879 inclusive
// range: 0x1002e880-0x1002e9a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002e630(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  LPVOID lpMem;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  HANDLE pvVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  byte in_stack_00000008;
  undefined8 local_70;
  undefined8 local_68;
  char local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  char cStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
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

  local_5c = *param_2;
  local_24 = *(undefined4 *)(param_3 + 0x88);
  local_2c = param_3 + 0x8c;
  local_28 = 0;
  local_20 = 0;
  local_54 = (undefined4)param_2[1];
  uStack_50 = (undefined4)((ulonglong)param_2[1] >> 0x20);
  uVar1 = param_2[3];
  local_4c = (undefined4)param_2[2];
  uStack_48 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_44 = (undefined4)uVar1;
  cStack_40 = (char)((ulonglong)uVar1 >> 0x20);
  uStack_3f = (undefined2)((ulonglong)uVar1 >> 0x28);
  uStack_3d = (undefined1)((ulonglong)uVar1 >> 0x38);
  local_3c = 0;
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar3 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar4 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar11 = *(int *)(param_3 + 0x98);
  if (iVar11 <= (int)(uVar4 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar11 * 2);
    iVar11 = *(int *)(param_3 + 0x98);
  }
  iVar5 = *(int *)(param_3 + 0x94);
  uVar12 = iVar11 - 1U & uVar4;
  *(undefined1 **)(iVar5 + uVar12 * 8) = &LAB_1008bd30;
  *(undefined8 **)(iVar5 + 4 + uVar12 * 8) = &local_5c;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar4 + 1;
  iVar11 = *(int *)(param_3 + 0x8c);
  do {
    uVar4 = *(uint *)(iVar11 + 0xf8);
    uVar12 = uVar4;
    if ((uVar4 & 0x10000) != 0) break;
    uVar12 = uVar4 | 0x10000;
    LOCK();
    bVar15 = uVar4 == *(uint *)(iVar11 + 0xf8);
    if (bVar15) {
      *(uint *)(iVar11 + 0xf8) = uVar12;
    }
    UNLOCK();
  } while (!bVar15);
  if (((uVar4 & 0xff) != 0) &&
     ((iVar2 != iVar3 && -1 < iVar2 - iVar3 || ((uVar12 >> 8 & 0xff) == (uVar4 & 0xff))))) {
    FUN_10139520(iVar11 + 0xec,1);
  }
  FUN_10018c90((int *)&local_70,(uint)in_stack_00000008,**(uint **)((int)param_2 + 0x24),
               (int *)((int)param_2 + 0x2c),*(undefined4 *)(param_2 + 5));
  uVar8 = (undefined4)local_68;
  iVar2 = (int)local_70;
  uVar7 = local_70._4_4_;
  do {
    uVar9 = local_30;
    if (local_28 == 3) {
joined_r0x1002e962:
      local_14 = uVar9;
      if (local_3c != 1) {
        if (local_3c == 2) {
          FUN_100c0bc0();
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      *param_1 = (int)local_70;
      param_1[1] = local_70._4_4_;
      param_1[2] = (undefined4)local_68;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_34,local_38);
LAB_1002e98d:
      param_1[5] = local_14;
      return;
    }
    lVar16 = FUN_10052290(param_3);
    iVar3 = local_3c;
    if ((code *)lVar16 == (code *)0x0) {
      uVar9 = local_30;
      if (local_28 != 3) {
        FUN_10138cf0(param_3,&local_28);
        uVar9 = local_30;
      }
      goto joined_r0x1002e962;
    }
    if (lVar16 == CONCAT44(&local_5c,&LAB_1008bd30)) {
      if (cStack_40 == '\x02') {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      local_68 = CONCAT44(local_44,uStack_48);
      local_70 = CONCAT44(local_4c,uStack_50);
      local_5f = uStack_3f;
      local_5d = uStack_3d;
      local_60 = cStack_40;
      FUN_10018c90((int *)&local_1c,(uint)in_stack_00000008,*local_5c._4_4_,(int *)&local_70,
                   local_54);
      if (iVar3 != 0) {
        pcVar14 = HeapFree_exref;
        piVar13 = local_38;
        if (iVar3 == 1) {
          while (piVar13 != (int *)0x0) {
            piVar6 = (int *)piVar13[3];
            if (piVar6 != (int *)0x0) {
              piVar6[4] = 0;
            }
            if (*piVar13 != 0) {
              lpMem = (LPVOID)piVar13[1];
              pvVar10 = GetProcessHeap();
              pcVar14 = HeapFree_exref;
              HeapFree(pvVar10,0,lpMem);
            }
            pvVar10 = GetProcessHeap();
            (*pcVar14)(pvVar10,0,piVar13);
            piVar13 = piVar6;
          }
        }
        else {
          if ((code *)*puStack_34 != (code *)0x0) {
            (*(code *)*puStack_34)(local_38);
          }
          if (puStack_34[1] != 0) {
            if (8 < (uint)puStack_34[2]) {
              piVar13 = (int *)local_38[-1];
            }
            pvVar10 = GetProcessHeap();
            HeapFree(pvVar10,0,piVar13);
          }
        }
      }
      *param_1 = iVar2;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      *(undefined8 *)(param_1 + 3) = local_1c;
      goto LAB_1002e98d;
    }
    (*(code *)lVar16)((int)((ulonglong)lVar16 >> 0x20));
  } while( true );
}
