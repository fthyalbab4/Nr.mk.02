// rea decompile_all
// name: FUN_100f6790
// address: 0x100f6790
// body: available
// range: 0x100f6790-0x100f6986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f6790(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_34;
  undefined4 uStack_30;

  iVar6 = *param_2;
  if (iVar6 == -1) {
    uVar15 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)param_2;
  }
  else {
    iVar7 = param_2[6];
    iVar10 = param_2[1];
    iVar11 = param_2[2];
    iVar12 = param_2[3];
    iVar13 = param_2[4];
    iVar8 = param_2[5];
    if (iVar6 != *param_3) {
LAB_100f6924:
      *param_1 = iVar6;
      param_1[1] = iVar10;
      uVar15 = *(undefined8 *)(param_2 + 10);
      param_1[2] = iVar11;
      param_1[3] = iVar12;
      param_1[4] = iVar13;
      param_1[5] = iVar8;
      uVar4 = *(undefined8 *)(param_2 + 7);
      iVar6 = param_2[9];
      param_1[6] = iVar7;
      *(undefined8 *)(param_1 + 7) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      param_1[9] = iVar6;
      *(undefined8 *)(param_1 + 10) = uVar15;
      *(undefined8 *)(param_1 + 0xc) = uVar4;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      return;
    }
    switch(iVar6) {
    case 0xd:
    case 0xe:
    case 0x11:
      auVar16._0_4_ = -(uint)(param_3[1] == iVar10);
      auVar16._4_4_ = -(uint)(param_3[2] == iVar11);
      auVar16._8_4_ = -(uint)(param_3[3] == iVar12);
      auVar16._12_4_ = -(uint)(param_3[4] == iVar13);
      iVar14 = movmskps(param_3,auVar16);
      if (((iVar14 != 0xf) || (iVar8 != param_3[5])) || (iVar7 != param_3[6])) goto LAB_100f6924;
      break;
    case 0x17:
      if (iVar10 != param_3[1]) goto LAB_100f6924;
    }
    uVar15 = *(undefined8 *)(param_2 + 7);
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    uStack_34 = (undefined4)uVar15;
    uStack_30 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar2 = *(undefined8 *)(param_2 + 10);
    uVar9 = *(undefined4 *)(param_4 + 3);
    uVar15 = param_4[1];
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *param_4;
    uVar5 = param_4[2];
    *(ulonglong *)(param_1 + 8) = CONCAT44(param_2[9],uStack_30);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_34,uVar9);
    *(undefined8 *)(param_1 + 4) = uVar5;
  }
  *(undefined8 *)(param_1 + 2) = uVar15;
  *(undefined8 *)param_1 = uVar4;
  return;
}
