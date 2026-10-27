// rea decompile_all
// name: FUN_100eb4b0
// address: 0x100eb4b0
// body: available
// range: 0x100eb4b0-0x100eb54e inclusive
// range: 0x100eb550-0x100eb6cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100eb4b0(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;

  pbVar14 = (byte *)param_1[1];
  uVar4 = param_1[2];
  pbVar9 = pbVar14;
  uVar13 = uVar4;
  do {
    if (uVar13 < 2) {
      return;
    }
    bVar8 = pbVar9[1];
    bVar12 = pbVar9[3];
    bVar11 = *pbVar9;
    bVar1 = pbVar9[2];
    bVar7 = bVar1 <= bVar11;
    if (bVar11 == bVar1) {
      bVar7 = bVar12 <= bVar8;
    }
    if (bVar7) break;
    uVar13 = uVar13 - 1;
    if (bVar11 < bVar1) {
      bVar11 = bVar1;
    }
    uVar6 = CONCAT11(bVar12,bVar8);
    if (bVar12 < bVar8) {
      uVar6 = (ushort)bVar12;
    }
    pbVar9 = pbVar9 + 2;
  } while ((ushort)((uVar6 & 0xff) + 1) < (ushort)bVar11);
  if (uVar4 < 2) {
    uVar13 = 1;
    if (uVar4 == 0) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1015399c);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    uVar13 = uVar4;
    if (uVar4 < 0x15) {
      FUN_100ef670(pbVar14,uVar4);
    }
    else {
      FUN_100dd560(pbVar14,uVar4);
    }
  }
  uVar10 = 0;
  do {
    if (uVar4 < uVar13) {
      bVar8 = pbVar14[uVar13 * 2 + -2];
      bVar12 = pbVar14[uVar10 * 2];
      bVar11 = pbVar14[uVar13 * 2 + -1];
      bVar1 = pbVar14[(uVar10 + 1) * 2 + -1];
      bVar2 = bVar8;
      if (bVar8 < bVar12) {
        bVar2 = bVar12;
      }
      bVar3 = bVar11;
      if (bVar1 < bVar11) {
        bVar3 = bVar1;
      }
      if (bVar3 + 1 < (uint)bVar2) goto LAB_100eb5f3;
      if (bVar12 < bVar8) {
        bVar8 = bVar12;
      }
      if (bVar11 < bVar1) {
        bVar11 = bVar1;
      }
      bVar12 = bVar11;
      if (bVar8 < bVar11) {
        bVar12 = bVar8;
      }
      if (bVar11 < bVar8) {
        bVar11 = bVar8;
      }
      pbVar14[uVar13 * 2 + -2] = bVar12;
      pbVar14[uVar13 * 2 + -1] = bVar11;
    }
    else {
LAB_100eb5f3:
      if (uVar13 <= uVar10) {
        FUN_10136b52(uVar10,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_101539ac);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      bVar8 = pbVar14[uVar10 * 2];
      bVar12 = pbVar14[(uVar10 + 1) * 2 + -1];
      if (uVar13 == *param_1) {
        FUN_1013bbb0(param_1);
        pbVar14 = (byte *)param_1[1];
      }
      pbVar14[uVar13 * 2] = bVar8;
      pbVar14[uVar13 * 2 + 1] = bVar12;
      uVar13 = uVar13 + 1;
      param_1[2] = uVar13;
    }
    uVar10 = uVar10 + 1;
    if (uVar4 == uVar10) {
      uVar10 = uVar13 - uVar4;
      if (uVar4 <= uVar13) {
        param_1[2] = 0;
        if (uVar10 != 0) {
          memmove((void *)param_1[1],(void *)((int)param_1[1] + uVar4 * 2),uVar10 * 2);
          param_1[2] = uVar10;
        }
        return;
      }
      FUN_10136a50(0,uVar4,uVar13,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  } while( true );
}
