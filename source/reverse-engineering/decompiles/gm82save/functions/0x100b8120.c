// rea decompile_all
// name: FUN_100b8120
// address: 0x100b8120
// body: available
// range: 0x100b8120-0x100b81ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b81ab) */

void __fastcall FUN_100b8120(undefined1 *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015059c);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(char *)(param_2 + 0x1a8) != '\0') {
    *param_1 = 5;
    *(undefined4 *)(param_1 + 1) = 0x4c546361;
    param_1[0x19] = 0xff;
    return;
  }
  if (*(char *)(param_2 + 0x19e) != -1) {
    *param_1 = 9;
    *(undefined4 *)(param_1 + 1) = 0x42475273;
    param_1[0x19] = 0xff;
    return;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    bVar1 = **(byte **)(param_2 + 0x14);
    if (bVar1 < 4) {
      *(byte *)(param_2 + 0x19e) = bVar1;
      *(undefined4 *)(param_2 + 0x98) = 1;
      *(undefined4 *)(param_2 + 0x9c) = 0xb18f;
      *(undefined4 *)(param_2 + 0xa0) = 1;
      *(undefined4 *)(param_2 + 0xa4) = 0x7a26;
      *(undefined4 *)(param_2 + 0xa8) = 0x8084;
      *(undefined4 *)(param_2 + 0xac) = 64000;
      *(undefined4 *)(param_2 + 0xb0) = 33000;
      *(undefined4 *)(param_2 + 0xb4) = 30000;
      *(undefined4 *)(param_2 + 0xb8) = 60000;
      *(undefined4 *)(param_2 + 0xbc) = 15000;
      *(undefined4 *)(param_2 + 0xc0) = 6000;
      param_1[0x19] = 2;
      return;
    }
    *param_1 = 0x17;
    param_1[1] = bVar1;
    param_1[0x19] = 0xff;
    return;
  }
  *param_1 = 0x22;
  param_1[4] = 2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x11fc0000;
  *(undefined2 *)(param_1 + 10) = 0x1015;
  param_1[0x19] = 0xff;
  return;
}
