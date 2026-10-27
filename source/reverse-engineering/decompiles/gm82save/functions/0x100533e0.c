// rea decompile_all
// name: FUN_100533e0
// address: 0x100533e0
// body: available
// range: 0x100533e0-0x1005344b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100533e0(int param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;

  if (*(char *)(param_1 + 0x25) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    FUN_10090ba0(local_14,param_1);
    if (local_14[0] == 1) {
      iVar1 = iVar1 + *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x1c) = local_c;
    }
    else {
      iVar1 = 0;
      if (*(char *)(param_1 + 0x25) == '\0') {
        *(undefined1 *)(param_1 + 0x25) = 1;
        if (*(char *)(param_1 + 0x24) == '\x01') {
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1c);
          if (*(int *)(param_1 + 0x20) == iVar1) {
            return 0;
          }
        }
        iVar1 = iVar1 + *(int *)(param_1 + 4);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
