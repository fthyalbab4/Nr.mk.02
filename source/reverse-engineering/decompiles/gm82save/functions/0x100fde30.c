// rea decompile_all
// name: FUN_100fde30
// address: 0x100fde30
// body: available
// range: 0x100fde30-0x100fdf5b inclusive
// range: 0x100fdf60-0x100fe05c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fde30(int param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  uint *lpMem;
  undefined1 *puVar4;
  undefined4 uVar5;
  HANDLE pvVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_4d;
  int local_4c;
  uint *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined1 *local_18;
  int *local_14;

  uVar13 = *(uint *)(param_1 + 8);
  local_1c = &local_38;
  local_38 = 0;
  local_34 = &DAT_00000004;
  local_30 = 0;
  local_2c = 0;
  local_28 = &DAT_00000004;
  local_24 = 0;
  local_4c = 0;
  local_48 = (uint *)&DAT_00000004;
  local_4d = 1;
  local_20 = 1;
  local_44 = 0;
  local_18 = &local_4d;
  local_14 = &local_4c;
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
    piVar11 = *(int **)(param_1 + 4);
    local_40 = uVar13 - 1;
    uVar9 = 0;
    local_3c = piVar11;
    do {
      uVar5 = FUN_100fe060(&local_1c,(byte *)piVar11[1],piVar11[2]);
      if ((char)uVar5 == '\0') {
        if (*piVar11 != 0) {
          pvVar2 = (LPVOID)piVar11[1];
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,pvVar2);
        }
        if (uVar9 + 1 < uVar13) {
          iVar14 = local_40 - uVar9;
          uVar13 = uVar9;
          do {
            piVar12 = piVar11 + 4;
            uVar5 = FUN_100fe060(&local_1c,(byte *)piVar11[5],piVar11[6]);
            if ((char)uVar5 == '\0') {
              uVar9 = uVar13;
              if (*piVar12 != 0) {
                pvVar2 = (LPVOID)piVar11[5];
                pvVar6 = GetProcessHeap();
                HeapFree(pvVar6,0,pvVar2);
              }
            }
            else {
              uVar1 = *(undefined8 *)piVar12;
              uVar9 = uVar13 + 1;
              *(undefined8 *)(local_3c + uVar13 * 4 + 2) = *(undefined8 *)(piVar11 + 6);
              *(undefined8 *)(local_3c + uVar13 * 4) = uVar1;
            }
            iVar14 = iVar14 + -1;
            uVar13 = uVar9;
            piVar11 = piVar12;
          } while (iVar14 != 0);
        }
        *(uint *)(param_1 + 8) = uVar9;
        uVar13 = uVar9;
        break;
      }
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar13 != uVar9);
  }
  lpMem = local_48;
  if (local_44 != 0) {
    iVar14 = *(int *)(param_1 + 4);
    iVar7 = local_44 << 2;
    puVar10 = local_48;
    do {
      uVar9 = *puVar10;
      if (uVar13 <= uVar9) {
        FUN_10136b52(uVar9,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_10154c24);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar10 = puVar10 + 1;
      iVar7 = iVar7 + -4;
      *(undefined1 *)(iVar14 + 0xc + uVar9 * 0x10) = 0;
    } while (iVar7 != 0);
  }
  if (local_4c != 0) {
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,lpMem);
  }
  puVar4 = local_34;
  if (local_30 != 0) {
    puVar8 = (undefined4 *)(local_34 + 4);
    iVar14 = local_30;
    do {
      if (puVar8[-1] != 0) {
        pvVar2 = (LPVOID)*puVar8;
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar2);
      }
      puVar8 = puVar8 + 3;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (local_38 != 0) {
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,puVar4);
  }
  puVar4 = local_28;
  if (local_2c != 0) {
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,puVar4);
  }
  return;
}
