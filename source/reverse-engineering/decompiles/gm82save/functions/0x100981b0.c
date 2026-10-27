// rea decompile_all
// name: FUN_100981b0
// address: 0x100981b0
// body: available
// range: 0x100981b0-0x10098375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_100981b0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  short sStack_26;
  int iStack_24;
  byte *pbStack_20;
  code *pcStack_1c;
  short *psStack_18;
  undefined1 *puStack_14;

  pcVar2 = *(code **)(param_4 + 0x10);
  cVar3 = (*pcVar2)(param_3,0x22);
  if (cVar3 != '\0') {
    return 1;
  }
  pbVar10 = (byte *)(param_1 + param_2);
  uVar7 = 0;
  iStack_24 = param_1;
  pcStack_1c = pcVar2;
LAB_100981e8:
  uVar8 = param_2;
  if (uVar7 == param_2) {
LAB_10098323:
    uVar6 = FUN_10098380(param_3,param_4,(byte *)(iStack_24 + uVar8),param_2 - uVar8);
    if ((char)uVar6 != '\0') {
      return 1;
    }
    uVar4 = (*pcStack_1c)(param_3,0x22);
    return uVar4;
  }
  pbStack_20 = (byte *)(iStack_24 + uVar7);
  pbVar9 = pbStack_20;
  uVar12 = uVar7;
  do {
    bVar1 = *pbVar9;
    pbVar5 = pbVar9 + 1;
    iVar11 = 1;
    uVar8 = uVar7;
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xe0) {
        iVar11 = 2;
        if (pbVar5 != pbVar10) {
          pbVar5 = pbVar9 + 2;
        }
      }
      else if (bVar1 == 0xed) {
        if ((pbVar5 == pbVar10) || (pbVar9 + 2 == pbVar10)) goto LAB_10098323;
        if (0x9f < pbVar9[1]) break;
        iVar11 = 3;
        pbVar5 = pbVar9 + 3;
      }
      else {
        iVar11 = 3;
        pbVar9 = pbVar9 + 2;
        if (pbVar5 == pbVar10) {
          pbVar9 = pbVar5;
        }
        pbVar5 = pbVar9 + (pbVar9 != pbVar10);
        if (0xef < bVar1) {
          iVar11 = 4;
          pbVar5 = pbVar5 + (pbVar5 != pbVar10);
        }
      }
    }
    uVar12 = uVar12 + iVar11;
    pbVar9 = pbVar5;
    if (pbVar5 == pbVar10) goto LAB_10098323;
  } while( true );
  sStack_26 = (pbVar9[1] & 0x1f) * 0x40 + -0x2800 + (pbVar9[2] & 0x3f);
  if ((uVar12 < uVar7) || (param_2 < uVar12)) {
    FUN_10136a50(uVar7,uVar12,param_2,&PTR_s_C__Users_runneradmin__rustup_too_10149cb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar6 = FUN_10098380(param_3,param_4,pbStack_20,uVar12 - uVar7);
  if ((char)uVar6 != '\0') {
    return 1;
  }
  psStack_18 = &sStack_26;
  puStack_14 = &LAB_10098770;
  uVar6 = FUN_10093d70(param_3,param_4,(ushort *)&DAT_10149ca8,(uint)&psStack_18);
  if ((char)uVar6 != '\0') {
    return 1;
  }
  uVar7 = uVar12 + 3;
  if (param_2 < uVar7) {
    FUN_10136a50(uVar7,param_2,param_2,&PTR_s_C__Users_runneradmin__rustup_too_101454a4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  goto LAB_100981e8;
}
