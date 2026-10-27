// rea decompile_all
// name: FUN_10121ec0
// address: 0x10121ec0
// body: available
// range: 0x10121ec0-0x1012208d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10121ec0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  uint _Size;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;

  uVar19 = param_1[1];
  uVar4 = param_1[2];
  _Size = param_4 - param_3;
  uVar17 = uVar19 - uVar4;
  if (uVar17 < _Size + 8) {
    uVar21 = param_2[2];
    if ((uint)param_2[1] < uVar21) {
      FUN_10136a50(0,uVar21,param_2[1],&DAT_1015ba68);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if ((param_4 < param_3) || (uVar21 < param_4)) {
      FUN_10136a50(param_3,param_4,uVar21,&DAT_10159950);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (uVar19 < uVar4) {
      FUN_10136a50(uVar4,uVar19,uVar19,&DAT_10159940);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (uVar17 < _Size) {
      FUN_10136a50(0,_Size,uVar17,&DAT_10159930);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    memcpy((void *)(*param_1 + uVar4),(void *)(param_3 + *param_2),_Size);
  }
  else if (param_4 != param_3) {
    iVar5 = *param_2;
    iVar6 = *param_1;
    puVar16 = (undefined8 *)(param_4 + iVar5);
    puVar15 = (undefined8 *)(iVar5 + 8 + param_3);
    *(undefined8 *)(iVar6 + uVar4) = *(undefined8 *)(iVar5 + param_3);
    if (puVar15 < puVar16) {
      puVar20 = (undefined8 *)(iVar6 + uVar4);
      puVar18 = (undefined8 *)(param_3 + 0x10 + iVar5);
      if (puVar18 <= puVar16) {
        puVar18 = puVar16;
      }
      uVar19 = (int)puVar18 + (-9 - (param_3 + iVar5));
      if ((0x37 < uVar19) && (0x1f < (iVar6 + uVar4) - (param_3 + iVar5))) {
        iVar5 = param_3 + 0x18 + iVar5;
        uVar19 = (uVar19 >> 3) + 1;
        uVar17 = uVar19 & 0xfffffffc;
        puVar15 = puVar15 + uVar17;
        puVar20 = puVar20 + uVar17;
        iVar6 = uVar4 + 0x18 + iVar6;
        uVar21 = 0;
        do {
          puVar2 = (undefined4 *)(iVar5 + -0x10 + uVar21 * 8);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar1 = (undefined4 *)(iVar5 + uVar21 * 8);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar1 = (undefined4 *)(iVar6 + -0x10 + uVar21 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(iVar6 + uVar21 * 8);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          uVar21 = uVar21 + 4;
        } while (uVar17 != uVar21);
        if (uVar19 == uVar17) goto LAB_10122032;
      }
      do {
        puVar20 = puVar20 + 1;
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        *puVar20 = uVar3;
      } while (puVar15 < puVar16);
    }
  }
LAB_10122032:
  param_1[2] = uVar4 + _Size;
  return;
}
