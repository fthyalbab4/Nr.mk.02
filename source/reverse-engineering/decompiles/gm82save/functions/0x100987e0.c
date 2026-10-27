// rea decompile_all
// name: FUN_100987e0
// address: 0x100987e0
// body: available
// range: 0x100987e0-0x1009895f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_100987e0(int param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  undefined1 uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;

  pbVar1 = (byte *)(param_1 + param_2);
  uVar3 = *param_3;
  iVar4 = param_3[1];
  uVar9 = 0;
LAB_10098806:
  uVar10 = param_2;
  if (uVar9 == param_2) {
LAB_1009890d:
    if (uVar10 != 0) {
      uVar7 = (**(code **)(iVar4 + 0xc))
                        (uVar3,(undefined1 (*) [16])(param_1 + uVar10),
                         (undefined1 *)(param_2 - uVar10));
      return uVar7;
    }
    uVar7 = FUN_10093f00(param_3,(undefined1 (*) [16])(param_1 + uVar10),
                         (undefined1 *)(param_2 - uVar10));
    return uVar7;
  }
  pbVar11 = (byte *)(param_1 + uVar9);
  uVar13 = uVar9;
  do {
    bVar2 = *pbVar11;
    pbVar8 = pbVar11 + 1;
    iVar12 = 1;
    uVar10 = uVar9;
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        iVar12 = 2;
        if (pbVar8 != pbVar1) {
          pbVar8 = pbVar11 + 2;
        }
      }
      else if (bVar2 == 0xed) {
        if ((pbVar8 == pbVar1) || (pbVar11 + 2 == pbVar1)) goto LAB_1009890d;
        if (0x9f < pbVar11[1]) break;
        iVar12 = 3;
        pbVar8 = pbVar11 + 3;
      }
      else {
        iVar12 = 3;
        pbVar11 = pbVar11 + 2;
        if (pbVar8 == pbVar1) {
          pbVar11 = pbVar8;
        }
        pbVar8 = pbVar11 + (pbVar11 != pbVar1);
        if (0xef < bVar2) {
          iVar12 = 4;
          pbVar8 = pbVar8 + (pbVar8 != pbVar1);
        }
      }
    }
    uVar13 = uVar13 + iVar12;
    pbVar11 = pbVar8;
    if (pbVar8 == pbVar1) goto LAB_1009890d;
  } while( true );
  if ((uVar13 < uVar9) || (param_2 < uVar13)) {
    FUN_10136a50(uVar9,uVar13,param_2,&PTR_s_C__Users_runneradmin__rustup_too_10149cc0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  cVar6 = (**(code **)(iVar4 + 0xc))(uVar3,(byte *)(param_1 + uVar9),uVar13 - uVar9);
  if ((cVar6 != '\0') || (cVar6 = (**(code **)(iVar4 + 0x10))(uVar3,0xfffd), cVar6 != '\0')) {
    return 1;
  }
  uVar9 = uVar13 + 3;
  if (param_2 < uVar9) {
    FUN_10136a50(uVar9,param_2,param_2,&PTR_s_C__Users_runneradmin__rustup_too_101454a4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  goto LAB_10098806;
}
