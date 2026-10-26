// rea decompile_all
// name: FUN_100b1140
// address: 0x100b1140
// body: available
// range: 0x100b1140-0x100b1215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b1140(int *param_1)

{
  SIZE_T _Size;
  void *_Src;
  code *pcVar1;
  LPVOID _Dst;
  int iVar2;
  HANDLE hHeap;
  uint local_58;
  PSRWLOCK local_54;
  LPVOID local_50;
  uint local_38;
  SIZE_T local_34;
  LPVOID local_30;
  SIZE_T local_2c;
  undefined1 local_28;

  _Size = param_1[4];
  if (_Size == 0) {
    _Dst = (LPVOID)0x1;
  }
  else {
    _Src = (void *)param_1[3];
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy(_Dst,_Src,_Size);
  }
  local_28 = (undefined1)param_1[5];
  local_38 = 4;
  local_34 = _Size;
  local_30 = _Dst;
  local_2c = _Size;
  FUN_100b1220((int *)&local_58,*param_1,(PSRWLOCK)param_1[1],&local_38);
  if (local_58 != 0xffffffff) {
    iVar2 = 3;
    if (2 < local_58) {
      iVar2 = local_58 - 3;
    }
    if ((iVar2 == 0) || (iVar2 == 1)) {
      if (local_54 != (PSRWLOCK)0x0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,local_50);
      }
    }
    else if (iVar2 != 2) {
      FUN_100ae070(local_58,local_54);
    }
  }
  return;
}
