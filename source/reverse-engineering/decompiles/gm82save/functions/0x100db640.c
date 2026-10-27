// rea decompile_all
// name: FUN_100db640
// address: 0x100db640
// body: available
// range: 0x100db640-0x100db6be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100db640(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;

  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    iVar2 = *(int *)(param_2 + 0x3c);
    if (iVar2 == *(int *)(param_2 + 0x34)) {
      FUN_10135f30((uint *)(param_2 + 0x34));
    }
    puVar1 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar2 * 0x10);
    *puVar1 = 7;
    puVar1[1] = 0;
    puVar1[2] = 4;
    puVar1[3] = 0;
    *(int *)(param_2 + 0x3c) = iVar2 + 1;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar3 = *(uint *)(param_2 + 0x30),
       uVar3 < (uint)((iVar2 + 1) * 0x10 + *(int *)(param_2 + 0x58)))) {
      *param_1 = 0x26;
      param_1[1] = uVar3;
    }
    else {
      param_1[1] = iVar2;
      *param_1 = 0xfffffffe;
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    return;
  }
  FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101524d4);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
