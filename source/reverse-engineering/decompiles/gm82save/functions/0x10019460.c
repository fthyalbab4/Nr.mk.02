// rea decompile_all
// name: FUN_10019460
// address: 0x10019460
// body: available
// range: 0x10019460-0x10019507 inclusive
// range: 0x10019510-0x1001963c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10019460(uint *param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;

  uVar28 = param_1[1];
  uVar23 = uVar28;
  if ((0xff < uVar28) || (uVar23 = *param_1, 0xff < uVar23)) {
LAB_1001961f:
    FUN_10136b52(uVar23,0x100,&DAT_1013fb14);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar20 = *(int *)*param_3;
  iVar1 = ((int *)*param_3)[1];
  iVar25 = *(int *)(iVar20 + uVar28 * 4);
  iVar27 = *(int *)(iVar1 + uVar28 * 4);
  uVar28 = 2;
  iVar19 = iVar25 * iVar27;
  iVar22 = -(*(int *)(iVar20 + uVar23 * 4) * *(int *)(iVar1 + uVar23 * 4));
  if (-iVar19 < iVar22) {
    do {
      uVar23 = param_1[uVar28];
      if (0xff < uVar23) goto LAB_1001961f;
      iVar26 = iVar25 * iVar27;
      iVar25 = *(int *)(iVar20 + uVar23 * 4);
      iVar27 = *(int *)(iVar1 + uVar23 * 4);
      if (-iVar26 <= -(iVar25 * iVar27)) goto LAB_10019548;
      uVar28 = uVar28 + 1;
    } while (param_2 != uVar28);
  }
  else {
    do {
      uVar23 = param_1[uVar28];
      if (0xff < uVar23) goto LAB_1001961f;
      iVar26 = iVar25 * iVar27;
      iVar25 = *(int *)(iVar20 + uVar23 * 4);
      iVar27 = *(int *)(iVar1 + uVar23 * 4);
      if (-(iVar25 * iVar27) < -iVar26) goto LAB_10019548;
      uVar28 = uVar28 + 1;
    } while (param_2 != uVar28);
  }
LAB_10019551:
  if (-iVar19 < iVar22) {
    puVar29 = param_1 + 4;
    puVar30 = param_1 + (param_2 - 4);
    uVar23 = param_2 >> 1 & 0xffffff8;
    uVar28 = uVar23;
    do {
      uVar4 = puVar29[-4];
      uVar5 = puVar29[-3];
      uVar6 = puVar29[-2];
      uVar7 = puVar29[-1];
      uVar8 = *puVar29;
      uVar9 = puVar29[1];
      uVar10 = puVar29[2];
      uVar11 = puVar29[3];
      uVar12 = puVar30[-4];
      uVar13 = puVar30[-3];
      uVar14 = puVar30[-2];
      uVar15 = puVar30[-1];
      uVar16 = *puVar30;
      uVar17 = puVar30[1];
      uVar18 = puVar30[2];
      puVar29[-4] = puVar30[3];
      puVar29[-3] = uVar18;
      puVar29[-2] = uVar17;
      puVar29[-1] = uVar16;
      *puVar29 = uVar15;
      puVar29[1] = uVar14;
      puVar29[2] = uVar13;
      puVar29[3] = uVar12;
      *puVar30 = uVar7;
      puVar30[1] = uVar6;
      puVar30[2] = uVar5;
      puVar30[3] = uVar4;
      puVar30[-4] = uVar11;
      puVar30[-3] = uVar10;
      puVar30[-2] = uVar9;
      puVar30[-1] = uVar8;
      puVar29 = puVar29 + 8;
      puVar30 = puVar30 + -8;
      uVar28 = uVar28 - 8;
    } while (uVar28 != 0);
    iVar20 = (param_2 >> 1) - uVar23;
    if (iVar20 != 0) {
      uVar28 = param_2 * 2 & 0xffffffe0;
      puVar24 = (undefined4 *)((int)param_1 + (param_2 * 4 - uVar28));
      puVar21 = (undefined4 *)((int)param_1 + uVar28);
      do {
        puVar24 = puVar24 + -1;
        uVar2 = *puVar21;
        *puVar21 = *puVar24;
        *puVar24 = uVar2;
        puVar21 = puVar21 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
  }
  return;
LAB_10019548:
  if (uVar28 != param_2) {
    uVar28 = 0x1f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> uVar28 == 0; uVar28 = uVar28 - 1) {
      }
    }
    FUN_1001ae70(param_1,param_2,(uint *)0x0,(uVar28 ^ 0x1f) * 2 ^ 0x3e,param_3);
    return;
  }
  goto LAB_10019551;
}
