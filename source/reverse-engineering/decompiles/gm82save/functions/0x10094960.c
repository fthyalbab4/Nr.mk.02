// rea decompile_all
// name: FUN_10094960
// address: 0x10094960
// body: available
// range: 0x10094960-0x10094995 inclusive
// range: 0x100949a0-0x100949e8 inclusive
// range: 0x100949f0-0x100949f4 inclusive
// range: 0x10094a00-0x10094a43 inclusive
// range: 0x10094a50-0x10094abe inclusive
// range: 0x10094ac0-0x10094baf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_10094960(undefined4 *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_24;

  uVar10 = 0;
  pcVar1 = (char *)param_1[2];
  uVar2 = *param_1;
  iVar3 = param_1[1];
  uVar6 = 0;
  uVar9 = 0;
  do {
    uVar11 = uVar10;
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    do {
      uVar10 = uVar11;
      if (param_3 < uVar11) {
LAB_10094b4f:
        uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
        uVar11 = uVar9;
        uVar8 = param_3;
        if (param_3 == uVar9) {
          return 0;
        }
        goto LAB_10094b5b;
      }
      uVar8 = param_3 - uVar11;
      uVar6 = param_2 + uVar11;
      uVar10 = param_3;
      if (uVar8 < 8) {
        if (param_3 == uVar11) goto LAB_10094b4f;
        uVar12 = 0;
        while (*(char *)(uVar6 + uVar12) != '\n') {
          uVar12 = uVar12 + 1;
          if (uVar8 == uVar12) goto LAB_10094b4f;
        }
      }
      else {
        uVar7 = (uVar6 + 3 & 0xfffffffc) - uVar6;
        if (uVar7 == 0) {
          uVar7 = 0;
LAB_10094a67:
          local_24 = uVar8 - 8;
          iVar13 = param_2 + 4 + uVar11;
          do {
            uVar12 = *(uint *)(iVar13 + -4 + uVar7);
            uVar4 = *(uint *)(iVar13 + uVar7);
            if ((~(((uVar4 ^ 0xf5f5f5f5) + 0x1010101 | uVar4) &
                  ((uVar12 ^ 0xf5f5f5f5) + 0x1010101 | uVar12)) & 0x80808080) != 0) break;
            uVar7 = uVar7 + 8;
          } while (uVar7 <= local_24);
        }
        else {
          uVar12 = 0;
          do {
            if (*(char *)(uVar6 + uVar12) == '\n') goto LAB_10094b26;
            uVar12 = uVar12 + 1;
          } while (uVar7 != uVar12);
          if (uVar7 <= uVar8 - 8) goto LAB_10094a67;
        }
        if (uVar8 == uVar7) goto LAB_10094b4f;
        iVar13 = 0;
        while (*(char *)(uVar6 + uVar7 + iVar13) != '\n') {
          iVar13 = iVar13 + 1;
          if ((param_3 - uVar7) - uVar11 == iVar13) goto LAB_10094b4f;
        }
        uVar12 = iVar13 + uVar7;
      }
LAB_10094b26:
      uVar10 = uVar11 + 1 + uVar12;
      uVar8 = uVar11 + uVar12;
      uVar11 = uVar10;
    } while ((param_3 <= uVar8) || (*(char *)(uVar6 + uVar12) != '\n'));
    uVar6 = 0;
    uVar8 = uVar10;
LAB_10094b5b:
    if ((*pcVar1 != '\0') &&
       (uVar7 = (**(code **)(iVar3 + 0xc))(uVar2,&DAT_10149ba3,4), (char)uVar7 != '\0')) break;
    if (uVar8 - uVar9 == 0) {
      bVar14 = false;
    }
    else {
      bVar14 = *(char *)(param_2 + -1 + uVar8) == '\n';
    }
    *pcVar1 = bVar14;
    cVar5 = (**(code **)(iVar3 + 0xc))(uVar2,uVar9 + param_2,uVar8 - uVar9);
    uVar7 = uVar6;
    uVar9 = uVar11;
  } while (cVar5 == '\0');
  return CONCAT31((int3)(uVar7 >> 8),1);
}
