// rea decompile_all
// name: FUN_10031060
// address: 0x10031060
// body: available
// range: 0x10031060-0x10031297 inclusive
// range: 0x100312a0-0x100313c9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10031060(undefined4 *param_1,undefined8 *param_2,int param_3,char param_4)

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
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  undefined4 *puStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;

  local_34 = param_2[1];
  local_3c = *param_2;
  local_18 = *(undefined4 *)(param_3 + 0x88);
  local_20 = param_3 + 0x8c;
  local_1c = 0;
  local_24 = *(undefined4 *)(param_2 + 3);
  local_14 = 0;
  local_2c = param_2[2];
  local_4c = 0;
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
  *(undefined1 **)(iVar10 + uVar11 * 8) = &LAB_1008d270;
  *(int **)(iVar10 + 4 + uVar11 * 8) = &local_4c;
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
  FUN_10029490(&local_60,**(uint **)((int)param_2 + 0x1c),param_4,**(uint **)(param_2 + 4),
               (uint *)(*(uint **)(param_2 + 4))[1],*(int **)((int)param_2 + 0x24),
               *(uint **)(param_2 + 5),*(undefined4 *)((int)param_2 + 0x2c),
               *(undefined4 *)(param_2 + 6));
  uVar6 = local_58;
  uVar5 = uStack_5c;
  iVar1 = local_60;
  do {
    uVar8 = local_40;
    if (local_1c == 3) {
joined_r0x1003138c:
      local_58 = uVar8;
      if (local_4c != 1) {
        if (local_4c == 2) {
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
      *param_1 = iVar1;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      *(ulonglong *)(param_1 + 3) = CONCAT44(puStack_44,local_48);
LAB_100313b3:
      param_1[5] = local_58;
      return;
    }
    lVar15 = FUN_10052290(param_3);
    iVar2 = local_4c;
    if ((code *)lVar15 == (code *)0x0) {
      uVar8 = local_40;
      if (local_1c != 3) {
        FUN_10138cf0(param_3,&local_1c);
        uVar8 = local_40;
      }
      goto joined_r0x1003138c;
    }
    if (lVar15 == CONCAT44(&local_4c,&LAB_1008d270)) {
      local_50 = uVar6;
      if ((int *)local_3c == (int *)0x0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      local_54 = puStack_44;
      FUN_10029490(&local_60,*(int *)local_3c - *local_3c._4_4_,param_4,*(uint *)local_34,
                   (uint *)((uint *)local_34)[1],local_34._4_4_,(uint *)local_2c,local_2c._4_4_,
                   local_24);
      puVar7 = local_54;
      if (iVar2 != 0) {
        pcVar13 = HeapFree_exref;
        piVar12 = local_48;
        if (iVar2 == 1) {
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
          if ((code *)*local_54 != (code *)0x0) {
            (*(code *)*local_54)(local_48);
          }
          if (puVar7[1] != 0) {
            if (8 < (uint)puVar7[2]) {
              piVar12 = (int *)local_48[-1];
            }
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,piVar12);
          }
        }
      }
      *param_1 = iVar1;
      param_1[1] = uVar5;
      param_1[2] = local_50;
      *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_5c,local_60);
      goto LAB_100313b3;
    }
    (*(code *)lVar15)((int)((ulonglong)lVar15 >> 0x20));
  } while( true );
}
