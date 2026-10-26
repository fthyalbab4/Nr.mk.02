// rea decompile_all
// name: FUN_100797f0
// address: 0x100797f0
// body: available
// range: 0x100797f0-0x1007984d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100797f0(uint *param_1,ushort *param_2,uint param_3)

{
  code *pcVar1;
  LPVOID _Dst;
  uint _Size;

  if ((param_3 & 1) == 0) {
    FUN_10093970((undefined8 *)param_1,param_2,param_3);
  }
  else {
    _Size = param_3 >> 1;
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
      memcpy(_Dst,param_2,_Size);
    }
    *param_1 = _Size;
    param_1[1] = (uint)_Dst;
    param_1[2] = _Size;
  }
  return;
}
