// rea decompile_all
// name: FUN_1010d8c0
// address: 0x1010d8c0
// body: available
// range: 0x1010d8c0-0x1010d980 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010d8c0(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  HANDLE pvVar5;
  LPVOID lpMem;
  int *piVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  local_1c = param_1[3];
  local_20 = 1;
  piVar4 = FUN_1010d990((char *)&local_20);
  if (piVar4 != (int *)0x0) {
    if (local_20 == 1) {
      local_14 = *piVar4;
      *piVar4 = local_1c;
      FUN_1010d190(&local_14);
    }
    local_18 = *param_1;
    piVar4 = (int *)param_1[1];
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      piVar6 = piVar4;
      do {
        lpMem = (LPVOID)*piVar6;
        iVar2 = piVar6[1];
        (**(code **)(iVar2 + 0xc))(lpMem);
        if (*(int *)(iVar2 + 4) != 0) {
          if (8 < *(uint *)(iVar2 + 8)) {
            lpMem = *(LPVOID *)((int)lpMem + -4);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,lpMem);
        }
        piVar6 = piVar6 + 2;
      } while (piVar6 != piVar4 + iVar1 * 2);
    }
    if (local_18 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,piVar4);
    }
    return;
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10156590);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
