// rea decompile_all
// name: FUN_100b89b0
// address: 0x100b89b0
// body: available
// range: 0x100b89b0-0x100b8b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b8b1f) */
/* WARNING: Removing unreachable block (ram,0x100b8a4f) */
/* WARNING: Removing unreachable block (ram,0x100b8b27) */
/* WARNING: Removing unreachable block (ram,0x100b8a05) */
/* WARNING: Removing unreachable block (ram,0x100b8a22) */
/* WARNING: Removing unreachable block (ram,0x100b8a82) */
/* WARNING: Removing unreachable block (ram,0x100b8a96) */
/* WARNING: Removing unreachable block (ram,0x100b8a9c) */
/* WARNING: Removing unreachable block (ram,0x100b8aa2) */
/* WARNING: Removing unreachable block (ram,0x100b8aa8) */
/* WARNING: Removing unreachable block (ram,0x100b8aab) */
/* WARNING: Removing unreachable block (ram,0x100b8abb) */

void __fastcall FUN_100b89b0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 in_AL;
  byte bVar4;
  undefined1 local_1c;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504dc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((*(char *)(param_2 + 0x1a8) != '\0') || (*(int *)(param_2 + 0x138) != -2)) ||
     (*(char *)(param_2 + 0x168) != '\x02')) goto LAB_100b8b13;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
LAB_100b8ad3:
    bVar4 = 2;
    local_1c = in_AL;
  }
  else {
    puVar2 = *(undefined1 **)(param_2 + 0x14);
    local_1c = *puVar2;
    in_AL = local_1c;
    if (((iVar1 == 1) || (in_AL = puVar2[1], iVar1 == 2)) ||
       ((iVar1 == 3 || ((bVar4 = 2, iVar1 != 4 || (puVar2[2] != '\0')))))) goto LAB_100b8ad3;
    if ((byte)puVar2[3] < 2) {
      bVar4 = puVar2[3];
    }
  }
  *(byte *)(param_2 + 0x168) = bVar4;
  *(undefined1 *)(param_2 + 0x169) = local_1c;
  *(undefined1 *)(param_2 + 0x16a) = in_AL;
  *(undefined1 *)(param_2 + 0x16b) = 0;
LAB_100b8b13:
  *(undefined1 *)(param_1 + 0x19) = 2;
  return;
}
