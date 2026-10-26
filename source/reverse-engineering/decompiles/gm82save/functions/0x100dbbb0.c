// rea decompile_all
// name: FUN_100dbbb0
// address: 0x100dbbb0
// body: available
// range: 0x100dbbb0-0x100dbc52 inclusive
// range: 0x100dbc60-0x100dbdcd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100dbbb0(uint *param_1)

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
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  byte *_Dst;

  _Dst = (byte *)param_1[1];
  uVar4 = param_1[2];
  pbVar9 = _Dst;
  uVar12 = uVar4;
  do {
    if (uVar12 < 2) {
      return;
    }
    bVar8 = pbVar9[1];
    bVar11 = pbVar9[3];
    bVar10 = *pbVar9;
    bVar1 = pbVar9[2];
    bVar7 = bVar1 <= bVar10;
    if (bVar10 == bVar1) {
      bVar7 = bVar11 <= bVar8;
    }
    if (bVar7) break;
    uVar12 = uVar12 - 1;
    if (bVar10 < bVar1) {
      bVar10 = bVar1;
    }
    uVar6 = CONCAT11(bVar11,bVar8);
    if (bVar11 < bVar8) {
      uVar6 = (ushort)bVar11;
    }
    pbVar9 = pbVar9 + 2;
  } while ((ushort)((uVar6 & 0xff) + 1) < (ushort)bVar10);
  if (uVar4 < 2) {
    uVar12 = 1;
    if (uVar4 == 0) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1015399c);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    uVar12 = uVar4;
    if (uVar4 < 0x15) {
      FUN_100ef670(_Dst,uVar4);
    }
    else {
      FUN_100dd560(_Dst,uVar4);
    }
  }
  uVar13 = 0;
  do {
    if (uVar4 < uVar12) {
      bVar8 = _Dst[uVar12 * 2 + -2];
      bVar11 = _Dst[uVar13 * 2];
      bVar10 = _Dst[uVar12 * 2 + -1];
      bVar1 = _Dst[uVar13 * 2 + 1];
      bVar2 = bVar8;
      if (bVar8 < bVar11) {
        bVar2 = bVar11;
      }
      bVar3 = bVar10;
      if (bVar1 < bVar10) {
        bVar3 = bVar1;
      }
      if (bVar3 + 1 < (uint)bVar2) goto LAB_100dbcfd;
      if (bVar11 < bVar8) {
        bVar8 = bVar11;
      }
      if (bVar10 < bVar1) {
        bVar10 = bVar1;
      }
      bVar11 = bVar10;
      if (bVar8 < bVar10) {
        bVar11 = bVar8;
      }
      if (bVar10 < bVar8) {
        bVar10 = bVar8;
      }
      _Dst[uVar12 * 2 + -2] = bVar11;
      _Dst[uVar12 * 2 + -1] = bVar10;
    }
    else {
LAB_100dbcfd:
      if (uVar12 <= uVar13) {
        FUN_10136b52(uVar13,uVar12,&PTR_s_C__Users_runneradmin__cargo_regi_101539ac);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      bVar8 = _Dst[uVar13 * 2];
      bVar11 = _Dst[uVar13 * 2 + 1];
      if (uVar12 == *param_1) {
        FUN_1013bbb0(param_1);
        _Dst = (byte *)param_1[1];
      }
      _Dst[uVar12 * 2] = bVar8;
      _Dst[uVar12 * 2 + 1] = bVar11;
      uVar12 = uVar12 + 1;
      param_1[2] = uVar12;
    }
    uVar13 = uVar13 + 1;
    if (uVar4 == uVar13) {
      uVar13 = uVar12 - uVar4;
      if (uVar4 <= uVar12) {
        param_1[2] = 0;
        if (uVar13 != 0) {
          memmove(_Dst,_Dst + uVar4 * 2,uVar13 * 2);
          param_1[2] = uVar13;
        }
        return;
      }
      FUN_10136a50(0,uVar4,uVar12,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  } while( true );
}
