// rea decompile_all
// name: FUN_10103300
// address: 0x10103300
// body: available
// range: 0x10103300-0x1010336c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10103300(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (uint)param_1[1]) && (*(char *)(iVar3 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + -1;
      if (((bVar5) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
         (cVar2 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                               (undefined1 *)0x2), cVar2 != '\0')) {
        return 1;
      }
      cVar2 = FUN_10101fc0(param_1,'\x01');
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = *param_1;
    } while (iVar3 != 0);
  }
  return 0;
}
