// rea decompile_all
// name: FUN_100fe060
// address: 0x100fe060
// body: available
// range: 0x100fe060-0x100fe13a inclusive
// range: 0x100fe140-0x100fe1b3 inclusive
// range: 0x100fe1c0-0x100fe3d1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100fe060(undefined4 *param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar14;
  uint uVar13;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  int *local_34;

  puVar3 = (uint *)*param_1;
  if (puVar3[2] == 0) {
    if (*puVar3 == 0) {
      FUN_10135e90(puVar3);
    }
    puVar4 = (undefined4 *)puVar3[1];
    *puVar4 = 0;
    puVar4[1] = 4;
    puVar4[2] = 0;
    puVar3[2] = 1;
    uVar17 = puVar3[5];
    if (uVar17 == puVar3[3]) {
      FUN_10135e40(puVar3 + 3);
    }
    *(undefined4 *)(puVar3[4] + uVar17 * 4) = 0;
    uVar17 = uVar17 + 1;
    puVar3[5] = uVar17;
  }
  else {
    uVar17 = puVar3[5];
  }
  if (uVar17 == 0) {
    FUN_10136b52(0,0,&PTR_s_C__Users_runneradmin__cargo_regi_10154bc4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_34 = (int *)puVar3[4];
  iVar11 = *local_34;
  if (iVar11 == 0) {
    if (param_3 == 0) {
      uVar15 = 0;
    }
    else {
      pbVar7 = param_2 + param_3;
      uVar15 = 0;
      uVar9 = puVar3[2];
      do {
        if (uVar9 <= uVar15) {
          FUN_10136b52(uVar15,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_10154bd4);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        bVar2 = *param_2;
        uVar8 = puVar3[1];
        uVar13 = *(uint *)(uVar8 + 8 + uVar15 * 0xc);
        uVar12 = 0;
        if (uVar13 == 0) {
LAB_100fe235:
          if (uVar9 == *puVar3) {
            FUN_10135e90(puVar3);
            uVar8 = puVar3[1];
            uVar17 = puVar3[5];
          }
          uVar13 = uVar9 + 1;
          *(undefined4 *)(uVar8 + uVar9 * 0xc) = 0;
          *(undefined4 *)(uVar8 + 4 + uVar9 * 0xc) = 4;
          *(undefined4 *)(uVar8 + 8 + uVar9 * 0xc) = 0;
          puVar3[2] = uVar13;
          if (uVar17 == puVar3[3]) {
            FUN_10135e40(puVar3 + 3);
            uVar13 = puVar3[2];
          }
          local_34 = (int *)puVar3[4];
          local_34[uVar17] = 0;
          uVar17 = uVar17 + 1;
          puVar3[5] = uVar17;
          if (uVar13 <= uVar15) {
            FUN_10136b52(uVar15,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_10154bf4);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar8 = *(uint *)(puVar3[1] + 8 + uVar15 * 0xc);
          if (uVar8 < uVar12) {
            FUN_10136819(uVar12,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_10154c04);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          puVar1 = (uint *)(puVar3[1] + uVar15 * 0xc);
          if (uVar8 == *puVar1) {
            FUN_10135ee0(puVar1);
          }
          pbVar16 = (byte *)(uVar12 * 8 + puVar1[1]);
          if (uVar12 <= uVar8 && uVar8 - uVar12 != 0) {
            memmove(pbVar16 + 8,pbVar16,(uVar8 - uVar12) * 8);
          }
          *pbVar16 = bVar2;
          *(uint *)(pbVar16 + 4) = uVar9;
          puVar1[2] = uVar8 + 1;
          uVar15 = uVar9;
        }
        else {
          pbVar16 = *(byte **)(uVar8 + 4 + uVar15 * 0xc);
          if (uVar13 == 1) {
            bVar14 = *pbVar16;
            iVar10 = 0;
            if (bVar14 != bVar2) {
LAB_100fe226:
              uVar12 = iVar10 + (uint)(bVar14 < bVar2);
              goto LAB_100fe235;
            }
          }
          else {
            iVar11 = 0;
            do {
              iVar10 = iVar11 + (uVar13 >> 1);
              if (bVar2 < pbVar16[iVar10 * 8]) {
                iVar10 = iVar11;
              }
              uVar13 = uVar13 - (uVar13 >> 1);
              iVar11 = iVar10;
            } while (1 < uVar13);
            bVar14 = pbVar16[iVar10 * 8];
            if (bVar14 != bVar2) goto LAB_100fe226;
            pbVar16 = pbVar16 + iVar10 * 8;
          }
          uVar15 = *(uint *)(pbVar16 + 4);
          if (uVar17 <= uVar15) {
            FUN_10136b52(uVar15,uVar17,&PTR_s_C__Users_runneradmin__cargo_regi_10154be4);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          iVar11 = local_34[uVar15];
          uVar13 = uVar9;
          if (iVar11 != 0) goto LAB_100fe08f;
        }
        param_2 = param_2 + 1;
        uVar9 = uVar13;
      } while (param_2 != pbVar7);
    }
    uVar9 = puVar3[6];
    puVar3[6] = uVar9 + 1;
    if (uVar17 <= uVar15) {
      FUN_10136b52(uVar15,uVar17,&PTR_s_C__Users_runneradmin__cargo_regi_10154c14);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_34[uVar15] = uVar9;
    uVar6 = CONCAT31((int3)(uVar9 >> 8),1);
  }
  else {
LAB_100fe08f:
    if (*(char *)param_1[1] != '\x01') {
      puVar3 = (uint *)param_1[2];
      uVar17 = puVar3[2];
      if (uVar17 == *puVar3) {
        FUN_10135e40(puVar3);
      }
      *(int *)(puVar3[1] + uVar17 * 4) = iVar11 + -1;
      puVar3[2] = uVar17 + 1;
    }
    uVar6 = 0;
  }
  return uVar6;
}
