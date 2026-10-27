// rea decompile_all
// name: FUN_100a3340
// address: 0x100a3340
// body: available
// range: 0x100a3340-0x100a339e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a3340(undefined1 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;

  puVar2 = FUN_10107380(0,0xc);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar2 = *param_2;
    puVar3 = FUN_10107380(0,0xc);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar2;
      puVar3[1] = &DAT_1014f578;
      *(undefined1 *)(puVar3 + 2) = 0x28;
      *param_1 = 3;
      *(undefined4 **)(param_1 + 4) = puVar3;
      return;
    }
  }
  FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
