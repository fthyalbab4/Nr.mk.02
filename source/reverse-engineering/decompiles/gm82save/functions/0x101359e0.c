// rea decompile_all
// name: FUN_101359e0
// address: 0x101359e0
// body: available
// range: 0x101359e0-0x10135a52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101359e0(uint *param_1,uint param_2,uint param_3,LPVOID param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int local_18;
  uint local_14;

  if (CARRY4(param_2,param_3)) {
    FUN_101366bc(0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = *param_1 * 2;
  if (uVar3 < param_2 + param_3) {
    uVar3 = param_2 + param_3;
  }
  uVar1 = (uint)(param_5 == 1) * 4 + 4;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  FUN_10136460(&local_18,*param_1,(LPVOID)param_1[1],uVar3,param_4,param_5);
  if (local_18 != 1) {
    param_1[1] = local_14;
    *param_1 = uVar3;
    return;
  }
  FUN_101366bc(local_14);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
