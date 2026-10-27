// rea decompile_all
// name: FUN_100c0800
// address: 0x100c0800
// body: available
// range: 0x100c0800-0x100c090f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100c0800(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  HANDLE pvVar3;
  int *piVar4;
  LPVOID lpMem;
  char local_1c;
  undefined2 local_1b;
  int *local_18;
  char *local_14;
  char **local_10;

  local_1c = '\x04';
  if (DAT_10163110 != 0) {
    local_14 = &local_1c;
    local_10 = &local_14;
    FUN_1013c400((uint *)&DAT_10163110,0,&local_10,0x1015133c,
                 &PTR_s_C__Users_runneradmin__cargo_regi_10151474);
  }
  piVar4 = local_18;
  if (local_1c != -1) {
    if (DAT_101632f0 == 0) {
      FUN_10136c40(&DAT_10151558,0x30,&local_1c,&PTR_FUN_10151548,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10151588);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    piVar4 = &DAT_101632f0;
    if (local_1c == '\x03') {
      puVar1 = (undefined4 *)local_18[1];
      lpMem = (LPVOID)*local_18;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lpMem,local_1b);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          lpMem = *(LPVOID *)((int)lpMem + -4);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,lpMem);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,local_18);
      piVar4 = &DAT_101632f0;
    }
  }
  return piVar4;
}
