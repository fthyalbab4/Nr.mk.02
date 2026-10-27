// rea decompile_all
// name: FUN_100b8b40
// address: 0x100b8b40
// body: available
// range: 0x100b8b40-0x100b8c3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b8b72) */
/* WARNING: Removing unreachable block (ram,0x100b8ba5) */
/* WARNING: Removing unreachable block (ram,0x100b8bb8) */
/* WARNING: Removing unreachable block (ram,0x100b8bbe) */
/* WARNING: Removing unreachable block (ram,0x100b8bc4) */
/* WARNING: Removing unreachable block (ram,0x100b8bca) */
/* WARNING: Removing unreachable block (ram,0x100b8bcd) */
/* WARNING: Removing unreachable block (ram,0x100b8bdd) */
/* WARNING: Removing unreachable block (ram,0x100b8c0d) */

void __fastcall FUN_100b8b40(int param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  uint in_EAX;
  undefined4 uVar4;
  undefined **ppuVar5;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504ec);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*(int *)(param_2 + 0xf0) != 0) goto LAB_100b8c26;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 < 4) {
LAB_100b8b98:
    ppuVar5 = &PTR_DAT_101511fc;
    uVar4 = 0;
  }
  else {
    ppuVar5 = *(undefined ***)(param_2 + 0x14);
    puVar2 = *ppuVar5;
    in_EAX = (uint)puVar2 >> 0x18 | ((uint)puVar2 & 0xff0000) >> 8 | ((uint)puVar2 & 0xff00) << 8 |
             (int)puVar2 << 0x18;
    if (uVar1 < 8) goto LAB_100b8b98;
    if (uVar1 == 8) {
      puVar2 = ppuVar5[1];
      uVar4 = 1;
      ppuVar5 = (undefined **)
                ((uint)puVar2 >> 0x18 | ((uint)puVar2 & 0xff0000) >> 8 |
                 ((uint)puVar2 & 0xff00) << 8 | (int)puVar2 << 0x18);
    }
    else {
      uVar4 = 0;
    }
  }
  *(undefined4 *)(param_2 + 0xf0) = uVar4;
  *(uint *)(param_2 + 0xf4) = in_EAX;
  *(undefined ***)(param_2 + 0xf8) = ppuVar5;
LAB_100b8c26:
  *(undefined1 *)(param_1 + 0x19) = 2;
  return;
}
