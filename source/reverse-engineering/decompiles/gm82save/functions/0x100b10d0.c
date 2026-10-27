// rea decompile_all
// name: FUN_100b10d0
// address: 0x100b10d0
// body: available
// range: 0x100b10d0-0x100b1135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b10d0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;

  piVar1 = (int *)param_1[0xc];
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_100aedf0((LPVOID)param_1[0xc],(undefined4 *)param_1[0xd]);
  }
  if (param_1[2] != 0) {
    pvVar2 = (LPVOID)param_1[3];
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  if (0 < param_1[6]) {
    pvVar2 = (LPVOID)param_1[7];
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar2);
  }
  FUN_100ae510(*param_1,(PSRWLOCK)param_1[1]);
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,param_1);
  return;
}
