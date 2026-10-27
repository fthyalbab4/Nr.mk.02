// rea decompile_all
// name: FUN_10030630
// address: 0x10030630
// body: available
// range: 0x10030630-0x10030849 inclusive
// range: 0x10030850-0x10030973 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10030630(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  LPVOID lpMem;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  HANDLE pvVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int local_44;
  int *local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;

  local_34 = *param_2;
  local_2c = param_2[1];
  local_20 = param_3 + 0x8c;
  local_18 = *(undefined4 *)(param_3 + 0x88);
  local_24 = *(uint *)(param_2 + 2);
  local_1c = 0;
  local_14 = 0;
  local_44 = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar2 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar3 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar11 = *(int *)(param_3 + 0x98);
  if (iVar11 <= (int)(uVar3 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar11 * 2);
    iVar11 = *(int *)(param_3 + 0x98);
  }
  iVar4 = *(int *)(param_3 + 0x94);
  uVar12 = iVar11 - 1U & uVar3;
  *(undefined1 **)(iVar4 + uVar12 * 8) = &LAB_1008ce30;
  *(int **)(iVar4 + 4 + uVar12 * 8) = &local_44;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar3 + 1;
  iVar11 = *(int *)(param_3 + 0x8c);
  do {
    uVar3 = *(uint *)(iVar11 + 0xf8);
    uVar12 = uVar3;
    if ((uVar3 & 0x10000) != 0) break;
    uVar12 = uVar3 | 0x10000;
    LOCK();
    bVar15 = uVar3 == *(uint *)(iVar11 + 0xf8);
    if (bVar15) {
      *(uint *)(iVar11 + 0xf8) = uVar12;
    }
    UNLOCK();
  } while (!bVar15);
  if (((uVar3 & 0xff) != 0) &&
     ((iVar1 != iVar2 && -1 < iVar1 - iVar2 || ((uVar12 >> 8 & 0xff) == (uVar3 & 0xff))))) {
    FUN_10139520(iVar11 + 0xec,1);
  }
  FUN_10028440(&local_54,**(uint **)((int)param_2 + 0x14),param_4,**(uint **)(param_2 + 3),
               (*(uint **)(param_2 + 3))[1],*(int *)((int)param_2 + 0x1c),*(uint *)(param_2 + 4));
  uVar7 = local_4c;
  uVar6 = uStack_50;
  iVar1 = local_54;
  do {
    uVar9 = local_38;
    if (local_1c == 3) {
joined_r0x10030932:
      local_4c = uVar9;
      if (local_44 != 1) {
        if (local_44 == 2) {
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
      *param_1 = iVar1;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_3c,local_40);
LAB_1003095d:
      param_1[5] = local_4c;
      return;
    }
    lVar16 = FUN_10052290(param_3);
    iVar2 = local_44;
    if ((code *)lVar16 == (code *)0x0) {
      uVar9 = local_38;
      if (local_1c != 3) {
        FUN_10138cf0(param_3,&local_1c);
        uVar9 = local_38;
      }
      goto joined_r0x10030932;
    }
    if (lVar16 == CONCAT44(&local_44,&LAB_1008ce30)) {
      if ((int *)local_34 == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      local_48 = puStack_3c;
      FUN_10028440(&local_54,*(int *)local_34 - *local_34._4_4_,param_4,*(uint *)local_2c,
                   ((uint *)local_2c)[1],local_2c._4_4_,local_24);
      puVar8 = local_48;
      if (iVar2 != 0) {
        pcVar14 = HeapFree_exref;
        piVar13 = local_40;
        if (iVar2 == 1) {
          while (piVar13 != (int *)0x0) {
            piVar5 = (int *)piVar13[3];
            if (piVar5 != (int *)0x0) {
              piVar5[4] = 0;
            }
            if (*piVar13 != 0) {
              lpMem = (LPVOID)piVar13[1];
              pvVar10 = GetProcessHeap();
              pcVar14 = HeapFree_exref;
              HeapFree(pvVar10,0,lpMem);
            }
            pvVar10 = GetProcessHeap();
            (*pcVar14)(pvVar10,0,piVar13);
            piVar13 = piVar5;
          }
        }
        else {
          if ((code *)*local_48 != (code *)0x0) {
            (*(code *)*local_48)(local_40);
          }
          if (puVar8[1] != 0) {
            if (8 < (uint)puVar8[2]) {
              piVar13 = (int *)local_40[-1];
            }
            pvVar10 = GetProcessHeap();
            HeapFree(pvVar10,0,piVar13);
          }
        }
      }
      *param_1 = iVar1;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_50,local_54);
      goto LAB_1003095d;
    }
    (*(code *)lVar16)((int)((ulonglong)lVar16 >> 0x20));
  } while( true );
}
