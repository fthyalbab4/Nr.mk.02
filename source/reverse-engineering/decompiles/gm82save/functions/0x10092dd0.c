// rea decompile_all
// name: FUN_10092dd0
// address: 0x10092dd0
// body: available
// range: 0x10092dd0-0x10092e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_10092dd0(undefined4 *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;

  pvVar2 = FUN_10107380(0,0x140);
  if (pvVar2 != (LPVOID)0x0) {
    uVar3 = (uint)pvVar2 & 0xffffffc0;
    *(LPVOID *)(uVar3 + 0x3c) = pvVar2;
    *(undefined4 *)(uVar3 + 0x40) = 0;
    *(undefined4 *)(uVar3 + 0x44) = 0;
    *(undefined4 *)(uVar3 + 0x80) = 0;
    *(undefined4 *)(uVar3 + 0x84) = 0;
    *(undefined4 *)(uVar3 + 0xc0) = 0;
    *(undefined4 *)(uVar3 + 0xc4) = 0;
    *(undefined4 *)(uVar3 + 200) = 4;
    *(undefined4 *)(uVar3 + 0xcc) = 0;
    *(undefined4 *)(uVar3 + 0xd0) = 0;
    *(undefined4 *)(uVar3 + 0xd4) = 4;
    *(undefined4 *)(uVar3 + 0xd8) = 0;
    *(undefined1 *)(uVar3 + 0xdc) = 1;
    *(undefined4 *)(uVar3 + 0x100) = 1;
    *(undefined4 *)(uVar3 + 0x104) = 1;
    *(undefined1 *)(uVar3 + 0x108) = 0;
    *param_1 = 1;
    param_1[1] = uVar3 + 0x40;
    param_1[2] = 1;
    param_1[3] = uVar3 + 0x40;
    return;
  }
  FUN_1013679e(0x40,0x100);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
