// rea decompile_all
// name: FUN_100cec70
// address: 0x100cec70
// body: available
// range: 0x100cec70-0x100cecb1 inclusive
// range: 0x100cee45-0x100cee57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100cec70(void *this)

{
  code *pcVar1;
  uint in_stack_00000018;

  if (in_stack_00000018 < *(uint *)((int)this + 0x150)) {
                    /* WARNING: Could not recover jumptable at 0x100cecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_100cee6c +
                       *(int *)(*(int *)((int)this + 0x14c) + in_stack_00000018 * 0x14) * 4) +
              0x100cec86))();
    return;
  }
  FUN_10136b52(in_stack_00000018,*(uint *)((int)this + 0x150),
               &PTR_s_C__Users_runneradmin__cargo_regi_101525f4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
