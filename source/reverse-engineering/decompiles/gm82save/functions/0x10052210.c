// rea decompile_all
// name: FUN_10052210
// address: 0x10052210
// body: available
// range: 0x10052210-0x10052286 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10052210(undefined8 *param_1,int *param_2,undefined1 (*param_3) [16],int *param_4)

{
  int *piVar1;
  int local_1c;
  undefined4 uStack_18;
  undefined4 local_14;

  while( true ) {
    if (param_4 == (int *)0x0) {
      *(undefined4 *)param_1 = 0xffffffff;
      return;
    }
    piVar1 = (int *)0x7fffffff;
    if (param_4 < (int *)0x7fffffff) {
      piVar1 = param_4;
    }
    FUN_100182e0(&local_1c,param_2,0x54414449,param_3,piVar1);
    if (local_1c != -1) break;
    param_3 = (undefined1 (*) [16])(*param_3 + (int)piVar1);
    param_4 = (int *)((int)param_4 - (int)piVar1);
    local_1c = -1;
  }
  *(undefined4 *)(param_1 + 1) = local_14;
  *param_1 = CONCAT44(uStack_18,local_1c);
  return;
}
