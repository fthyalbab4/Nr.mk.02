// rea decompile_all
// name: FUN_1010d550
// address: 0x1010d550
// body: available
// range: 0x1010d550-0x1010d5a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010d550(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 local_18;
  uint local_14;
  int *local_c;

  uVar1 = ((undefined4 *)*param_1)[1];
  if ((uVar1 & 1) == 0) {
    iVar3 = param_1[2];
    local_18 = 0xffffffff;
    ppuVar4 = &PTR_FUN_10156dd4;
    local_c = param_1;
  }
  else {
    local_18 = *(undefined4 *)*param_1;
    local_14 = uVar1 >> 1;
    iVar3 = param_1[2];
    ppuVar4 = (undefined **)&DAT_10156db8;
  }
  FUN_10106a19(&local_18,(int)ppuVar4,param_1[1],*(char *)(iVar3 + 8),*(char *)(iVar3 + 9));
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
