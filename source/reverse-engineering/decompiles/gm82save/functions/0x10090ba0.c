// rea decompile_all
// name: FUN_10090ba0
// address: 0x10090ba0
// body: available
// range: 0x10090ba0-0x10090c15 inclusive
// range: 0x10090c20-0x10090c62 inclusive
// range: 0x10090c70-0x10090cd7 inclusive
// range: 0x10090ce0-0x10090e43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10090ba0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint _Size;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint local_20;

  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0xc);
  uVar7 = 0;
  if (uVar8 <= uVar3 && uVar3 <= uVar2) {
    _Size = (uint)*(byte *)(param_2 + 0x18);
    iVar4 = *(int *)(param_2 + 4);
    bVar1 = *(byte *)(param_2 + 0x13 + _Size);
    if (_Size < 5) {
      do {
        iVar6 = iVar4 + uVar8;
        uVar13 = uVar3 - uVar8;
        if (uVar13 < 8) {
          if (uVar3 == uVar8) goto LAB_10090e17;
          uVar9 = 0;
          while (*(byte *)(iVar6 + uVar9) != bVar1) {
            uVar9 = uVar9 + 1;
            if (uVar13 == uVar9) goto LAB_10090e17;
          }
        }
        else {
          uVar12 = (iVar6 + 3U & 0xfffffffc) - iVar6;
          if (uVar12 == 0) {
            uVar12 = 0;
LAB_10090c87:
            local_20 = uVar13 - 8;
            iVar11 = iVar4 + 4 + uVar8;
            do {
              uVar9 = *(uint *)(iVar11 + -4 + uVar12) ^ (uint)bVar1 * 0x1010101;
              uVar10 = *(uint *)(iVar11 + uVar12) ^ (uint)bVar1 * 0x1010101;
              if ((~((0x1010100 - uVar10 | uVar10) & (0x1010100 - uVar9 | uVar9)) & 0x80808080) != 0
                 ) break;
              uVar12 = uVar12 + 8;
            } while (uVar12 <= local_20);
          }
          else {
            uVar9 = 0;
            do {
              if (*(byte *)(iVar6 + uVar9) == bVar1) goto LAB_10090d47;
              uVar9 = uVar9 + 1;
            } while (uVar12 != uVar9);
            if (uVar12 <= uVar13 - 8) goto LAB_10090c87;
          }
          if (uVar13 == uVar12) goto LAB_10090e17;
          iVar11 = 0;
          while (*(byte *)(iVar6 + uVar12 + iVar11) != bVar1) {
            iVar11 = iVar11 + 1;
            if ((uVar3 - uVar12) - uVar8 == iVar11) goto LAB_10090e17;
          }
          uVar9 = iVar11 + uVar12;
        }
LAB_10090d47:
        uVar8 = uVar8 + 1 + uVar9;
        *(uint *)(param_2 + 0xc) = uVar8;
        if ((uVar8 <= uVar2 && _Size <= uVar8) &&
           (iVar6 = memcmp((void *)(iVar4 + (uVar8 - _Size)),(void *)(param_2 + 0x14),_Size),
           iVar6 == 0)) {
          uVar7 = 1;
          param_1[1] = uVar8 - _Size;
          param_1[2] = uVar8;
          goto LAB_10090e1f;
        }
      } while (uVar8 <= uVar3);
    }
    else {
      do {
        uVar13 = uVar3 - uVar8;
        if (uVar13 < 8) {
          uVar12 = 0;
          if (uVar13 == 0) {
            uVar7 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar4 + uVar8 + uVar12) == bVar1) {
                uVar7 = 1;
                goto LAB_10090e10;
              }
              uVar12 = uVar12 + 1;
            } while (uVar13 != uVar12);
            uVar7 = 0;
            uVar12 = uVar13;
          }
LAB_10090e10:
          uVar14 = CONCAT44(uVar12,uVar7);
        }
        else {
          uVar14 = FUN_100974e0(bVar1,iVar4 + uVar8,uVar13);
        }
        if ((int)uVar14 != 1) goto LAB_10090e17;
        uVar8 = uVar8 + 1 + (int)((ulonglong)uVar14 >> 0x20);
        *(uint *)(param_2 + 0xc) = uVar8;
        if (uVar8 <= uVar2 && _Size <= uVar8) {
          FUN_10136a50(0,_Size,4,&PTR_s_C__Users_runneradmin__rustup_too_10156224);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      } while (uVar8 <= uVar3);
    }
    uVar7 = 0;
  }
LAB_10090e1f:
  *param_1 = uVar7;
  return;
LAB_10090e17:
  uVar7 = 0;
  *(uint *)(param_2 + 0xc) = uVar3;
  goto LAB_10090e1f;
}
