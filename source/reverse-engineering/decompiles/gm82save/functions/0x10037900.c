// rea decompile_all
// name: FUN_10037900
// address: 0x10037900
// body: available
// range: 0x10037900-0x1003798f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10037900(undefined1 *param_1,undefined4 *param_2)

{
  SIZE_T _Size;
  void *_Src;
  code *pcVar1;
  LPVOID _Dst;
  undefined4 local_18;
  undefined1 *local_14;

  _Size = param_2[1];
  if (_Size == 0) {
    _Dst = (LPVOID)0x1;
  }
  else {
    _Src = (void *)*param_2;
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy(_Dst,_Src,_Size);
  }
  local_18 = param_2[2];
  local_14 = &LAB_100922c0;
  FUN_10093970((undefined8 *)(param_1 + 0x18),(ushort *)&DAT_1013f9b3,(uint)&local_18);
  *(SIZE_T *)(param_1 + 0xc) = _Size;
  *(LPVOID *)(param_1 + 0x10) = _Dst;
  *(SIZE_T *)(param_1 + 0x14) = _Size;
  *(undefined **)(param_1 + 4) = &DAT_1013f94f;
  *(undefined4 *)(param_1 + 8) = 6;
  *param_1 = 5;
  return;
}
