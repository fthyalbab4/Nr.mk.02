// rea decompile_all
// name: FUN_1012c130
// address: 0x1012c130
// body: available
// range: 0x1012c130-0x1012c1a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012c1a2 to 0x1012b140 FUN_1012b140 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012c130(int *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;

  bVar3 = *(byte *)(param_1 + 6);
  bVar2 = bVar3 + 3;
  if (bVar2 < 0x40) {
    uVar4 = 2 << (bVar3 & 0x1f);
    uVar5 = uVar4;
    uVar1 = 0 << (bVar3 & 0x1f) | 2U >> 0x20 - (bVar3 & 0x1f);
    if ((bVar3 & 0x20) != 0) {
      uVar5 = 0;
      uVar1 = uVar4;
    }
    param_1[4] = param_1[4] | uVar5;
    param_1[5] = param_1[5] | uVar1;
    *(byte *)(param_1 + 6) = bVar2;
    bVar3 = bVar3 + 10;
  }
  else {
    FUN_1012a990(param_1,2,0,bVar2);
    bVar3 = (char)param_1[6] + 7;
  }
  if (bVar3 < 0x40) {
    *(byte *)(param_1 + 6) = bVar3;
  }
  else {
    FUN_1012a990(param_1,0,0,bVar3);
  }
  FUN_1012b140(param_1);
  return;
}
