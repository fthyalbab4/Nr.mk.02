// rea decompile_all
// name: FUN_100957c0
// address: 0x100957c0
// body: available
// range: 0x100957c0-0x10095a2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __fastcall FUN_100957c0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_d4;
  uint local_b0 [40];

  uVar1 = param_1[0x28];
  local_b0[0x24] = 0;
  local_b0[0x25] = 0;
  local_b0[0x26] = 0;
  local_b0[0x27] = 0;
  local_b0[0x20] = 0;
  local_b0[0x21] = 0;
  local_b0[0x22] = 0;
  local_b0[0x23] = 0;
  local_b0[0x1c] = 0;
  local_b0[0x1d] = 0;
  local_b0[0x1e] = 0;
  local_b0[0x1f] = 0;
  local_b0[0x18] = 0;
  local_b0[0x19] = 0;
  local_b0[0x1a] = 0;
  local_b0[0x1b] = 0;
  local_b0[0x14] = 0;
  local_b0[0x15] = 0;
  local_b0[0x16] = 0;
  local_b0[0x17] = 0;
  local_b0[0x10] = 0;
  local_b0[0x11] = 0;
  local_b0[0x12] = 0;
  local_b0[0x13] = 0;
  local_b0[0xc] = 0;
  local_b0[0xd] = 0;
  local_b0[0xe] = 0;
  local_b0[0xf] = 0;
  local_b0[8] = 0;
  local_b0[9] = 0;
  local_b0[10] = 0;
  local_b0[0xb] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[7] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  if (uVar1 < param_3) {
    local_d4 = 0;
    puVar5 = param_1;
    uVar10 = 0;
    while (uVar12 = uVar10, puVar5 != param_1 + uVar1) {
      uVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar10 = uVar12 + 1;
      if (uVar6 != 0) {
        uVar11 = 0;
        uVar7 = uVar12;
        puVar8 = param_2;
        iVar9 = param_3 * 4;
        do {
          if (0x27 < uVar7) goto LAB_10095a1b;
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar4 = (ulonglong)uVar6 * (ulonglong)uVar2 +
                  (ulonglong)CONCAT14(CARRY4(uVar11,local_b0[uVar7]),uVar11 + local_b0[uVar7]);
          local_b0[uVar7] = (uint)lVar4;
          uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + -4;
        } while (iVar9 != 0);
        uVar6 = param_3;
        if (uVar11 != 0) {
          uVar7 = param_3 + uVar12;
          if (0x27 < uVar7) {
LAB_10095a1b:
            FUN_10136b52(uVar7,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_b0[uVar7] = uVar11;
          uVar6 = param_3 + 1;
        }
        if (local_d4 <= uVar6 + uVar12) {
          local_d4 = uVar6 + uVar12;
        }
      }
    }
  }
  else {
    if (0x28 < uVar1) {
      FUN_10136a50(0,uVar1,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar5 = param_2 + param_3;
    local_d4 = 0;
    uVar10 = 0;
    while (uVar12 = uVar10, param_2 != puVar5) {
      uVar6 = *param_2;
      param_2 = param_2 + 1;
      uVar10 = uVar12 + 1;
      if (uVar6 != 0) {
        uVar11 = 0;
        uVar7 = uVar12;
        puVar8 = param_1;
        iVar9 = uVar1 * 4;
        do {
          if (0x27 < uVar7) goto LAB_10095a1b;
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar4 = (ulonglong)uVar6 * (ulonglong)uVar2 +
                  (ulonglong)CONCAT14(CARRY4(uVar11,local_b0[uVar7]),uVar11 + local_b0[uVar7]);
          local_b0[uVar7] = (uint)lVar4;
          uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + -4;
        } while (iVar9 != 0);
        uVar6 = uVar1;
        if (uVar11 != 0) {
          uVar7 = uVar12 + uVar1;
          if (0x27 < uVar7) goto LAB_10095a1b;
          local_b0[uVar7] = uVar11;
          uVar6 = uVar1 + 1;
        }
        if (local_d4 <= uVar6 + uVar12) {
          local_d4 = uVar6 + uVar12;
        }
      }
    }
  }
  memcpy(param_1,local_b0,0xa0);
  param_1[0x28] = local_d4;
  return param_1;
}
