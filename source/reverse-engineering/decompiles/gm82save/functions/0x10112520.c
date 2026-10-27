// rea decompile_all
// name: FUN_10112520
// address: 0x10112520
// body: available
// range: 0x10112520-0x101125d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10112520(undefined8 *param_1,int *param_2)

{
  void *_Src;
  SIZE_T _Size;
  code *pcVar1;
  LPVOID _Dst;
  HANDLE hHeap;
  SIZE_T local_30;
  LPVOID pvStack_2c;
  SIZE_T local_28;
  uint uStack_24;
  int local_20;
  byte *local_1c;
  uint local_18;

  _Src = *(void **)(*param_2 + 0xc);
  _Size = *(SIZE_T *)(*param_2 + 0x10);
  FUN_101125e0((undefined8 *)&local_20,(int)param_2);
  if (_Size == 0) {
    _Dst = (LPVOID)0x1;
  }
  else {
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy(_Dst,_Src,_Size);
  }
  uStack_24 = uStack_24 & 0xffffff00;
  local_30 = _Size;
  pvStack_2c = _Dst;
  local_28 = _Size;
  FUN_10111020(&local_30,local_1c,local_18);
  param_1[1] = CONCAT44(uStack_24,local_28);
  *param_1 = CONCAT44(pvStack_2c,local_30);
  if (local_20 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_1c);
  }
  return;
}
