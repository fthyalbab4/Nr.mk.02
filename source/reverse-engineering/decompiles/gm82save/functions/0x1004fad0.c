// rea decompile_all
// name: FUN_1004fad0
// address: 0x1004fad0
// body: available
// range: 0x1004fad0-0x1004fbae inclusive
// range: 0x1004fbc7-0x1004fbde inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong __fastcall FUN_1004fad0(int param_1)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;

  if (*(int *)(param_1 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141b94);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = *(uint *)(param_1 + 0x238);
  if (uVar4 != 0) {
    bVar5 = *(byte *)(param_1 + 0x1a0);
    if ((uVar4 & 1) == 0 || bVar5 != 0x10) {
      bVar3 = 8;
      if (7 < bVar5) {
        bVar3 = bVar5;
      }
    }
    else {
      bVar5 = 8;
      bVar3 = 8;
    }
    if ((uVar4 & 0x10010) != 0) {
      bVar5 = bVar3;
    }
    if ((bVar5 & bVar5 - 1) != 0) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141ba4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    iVar2 = 0;
    for (uVar4 = (uint)bVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      iVar2 = iVar2 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x1004fbad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)((&DAT_1004fbe0)[iVar2] + 0x1004fadc))();
    return uVar6;
  }
  return (ulonglong)CONCAT14(*(undefined1 *)(param_1 + 0x1a0),(uint)*(byte *)(param_1 + 0x19f));
}
