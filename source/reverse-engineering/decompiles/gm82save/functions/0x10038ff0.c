// rea decompile_all
// name: FUN_10038ff0
// address: 0x10038ff0
// body: available
// range: 0x10038ff0-0x100390bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039059 to 0x10121040 FUN_10121040 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10038ff0(SIZE_T *param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  HANDLE hHeap;
  LPVOID _Dst;
  int local_2c;
  void *pvStack_28;
  SIZE_T local_24;
  int local_20;
  byte *local_1c;
  SIZE_T local_18;

  FUN_101125e0((undefined8 *)&local_20,(int)param_2);
  FUN_100935a0((undefined8 *)&local_2c,local_1c,local_18);
  if (local_2c == -1) {
    if (local_24 == 0) {
      _Dst = (LPVOID)0x1;
    }
    else {
      _Dst = FUN_10107380(0,local_24);
      if (_Dst == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(_Dst,pvStack_28,local_24);
    }
    *param_1 = local_24;
    param_1[1] = (SIZE_T)_Dst;
    param_1[2] = local_24;
  }
  else {
    param_1[2] = local_24;
    *(ulonglong *)param_1 = CONCAT44(pvStack_28,local_2c);
  }
  if (local_20 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_1c);
  }
  piVar1 = (int *)*param_2;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_10121040((LPVOID)*param_2);
    return;
  }
  return;
}
