// rea decompile_all
// name: FUN_1010b3c0
// address: 0x1010b3c0
// body: available
// range: 0x1010b3c0-0x1010b49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1010b3c0(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  undefined3 uVar7;
  int iVar8;

  if (*(char *)((int)param_1 + 0x1e) == '\0') {
    bVar1 = *(byte *)(param_1 + 2);
    uVar6 = 0;
    if ((bVar1 != 0xff) && (bVar1 != 5)) {
      return 0;
    }
    iVar3 = *param_1;
    uVar4 = param_1[1];
    if ((bVar1 != 0xff) && ((char)param_1[7] == '\0')) {
      uVar6 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1) {
      default:
        uVar6 = param_1[4] + 4;
        break;
      case 1:
        iVar8 = param_1[6] + 1;
        if (param_1[6] == 0) {
          iVar8 = 0;
        }
        uVar6 = param_1[4] + 8 + iVar8;
        break;
      case 2:
        break;
      case 4:
        iVar8 = param_1[6] + 1;
        if (param_1[6] == 0) {
          iVar8 = 0;
        }
        uVar6 = param_1[4] + 2 + iVar8;
        break;
      case 5:
        uVar6 = 2;
      }
      if (uVar4 < uVar6) {
        FUN_10136a50(uVar6,uVar4,uVar4,&PTR_s_C__Users_runneradmin__rustup_too_10157cac);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    uVar7 = (undefined3)(uVar6 >> 8);
    if (uVar4 - uVar6 == 1) {
      return CONCAT31(uVar7,*(char *)(iVar3 + uVar6) == '.');
    }
    if ((uVar4 != uVar6) && (*(char *)(iVar3 + uVar6) == '.')) {
      cVar2 = *(char *)(iVar3 + 1 + uVar6);
      if (bVar1 < 3) {
        return CONCAT31(uVar7,cVar2 == '\\');
      }
      return CONCAT31(uVar7,cVar2 == '/' || cVar2 == '\\');
    }
  }
  return 0;
}
