// rea decompile_all
// name: FUN_1003dc80
// address: 0x1003dc80
// body: available
// range: 0x1003dc80-0x1003dcfc inclusive
// range: 0x1003dd00-0x1003dd48 inclusive
// range: 0x1003dd50-0x1003dedb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1003de24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003dc80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;

  _DAT_0079a9f0 = 0xffffff9c;
  uVar9 = 0;
  iVar2 = *(int *)(param_1 + 0x46c);
  uVar6 = (*(code *)0x4dee2c)();
  (*(code *)0x4de514)();
  (*(code *)0x4de0a0)(uVar6);
  iVar7 = 4;
  iVar8 = _DAT_0077f0d0;
  if (_DAT_0077f0d0 == 0) {
    iVar8 = 4;
  }
  if (_DAT_0077f0e0 != 0) {
    iVar1 = _DAT_0077f0e0 * 4;
    do {
      iVar3 = *(int *)(iVar8 + uVar9 * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) == iVar2)) {
        piStack_2c = (int *)(iVar8 + iVar7);
        if (uVar9 < _DAT_0077f0e0) {
          do {
            uVar10 = uVar9 + 1;
            iVar7 = _DAT_0077f0d8;
            if (_DAT_0077f0d8 == 0) {
              iVar7 = 4;
            }
            uVar4 = *(undefined4 *)(iVar7 + uVar9 * 4);
            uStack_24 = 0;
            uStack_20 = 3;
            uStack_1c = 1;
            uStack_18 = uVar9;
            (*(code *)0x407ea0)();
            (*(code *)0x71c3fc)(0,0,0,0,
                                "C:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\fdeflate-0.3.7\\src\\compress.rs"
                                ,0x68,uVar6,uVar10,0x49614c,0,uVar4,&uStack_24);
            uVar9 = uVar10;
            (*(code *)0x407ea8)();
            while( true ) {
              if (piStack_2c == (int *)(iVar8 + iVar1)) goto LAB_1003de77;
              iVar7 = *piStack_2c;
              piStack_2c = piStack_2c + 1;
              if ((iVar7 != 0) && (*(int *)(iVar7 + 0x14) == iVar2)) break;
              uVar9 = uVar9 + 1;
            }
          } while (uVar9 < _DAT_0077f0e0);
        }
        FUN_10136b52(uVar9,_DAT_0077f0e0,&PTR_s_src_lib_rs_10140568);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      iVar3 = _DAT_0077f0e0 * -4 + 4 + iVar7;
      uVar9 = uVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar3 != 4);
  }
  (*(code *)0x4d89cc)();
  (*(code *)0x4dbc6c)();
  (*(code *)0x407ea8)();
  (*(code *)0x4dbe60)();
  (*(code *)0x4dc190)();
LAB_1003de77:
  (*(code *)0x4fd580)();
  (*(code *)0x4def94)();
  (*(code *)0x51f71c)();
  (*(code *)0x62cde0)();
  (*(code *)0x405a7c)();
  return;
}
