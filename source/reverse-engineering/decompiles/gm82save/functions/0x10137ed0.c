// rea decompile_all
// name: FUN_10137ed0
// address: 0x10137ed0
// body: available
// range: 0x10137ed0-0x10137f24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_10137ed0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  uint uVar2;
  char local_14 [4];
  uint local_10;
  undefined4 local_c;

  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_10137f30((undefined4 *)local_14,*param_1,(LPVOID)param_1[1],uVar2);
  if (local_14[0] != '\0') {
    return CONCAT44(local_c,local_10);
  }
  param_1[1] = local_10;
  *param_1 = uVar2;
  return CONCAT44(extraout_EDX,0xffffffff);
}
