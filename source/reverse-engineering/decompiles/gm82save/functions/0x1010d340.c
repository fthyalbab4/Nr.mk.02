// rea decompile_all
// name: FUN_1010d340
// address: 0x1010d340
// body: available
// range: 0x1010d340-0x1010d3d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010d340(undefined1 *param_1,undefined1 param_2,void *param_3,SIZE_T param_4)

{
  code *pcVar1;
  LPVOID _Dst;
  SIZE_T *pSVar2;
  undefined4 *puVar3;

  _Dst = FUN_10107380(0,param_4);
  if (_Dst == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  memcpy(_Dst,param_3,param_4);
  pSVar2 = FUN_10107380(0,0xc);
  if (pSVar2 != (SIZE_T *)0x0) {
    *pSVar2 = param_4;
    pSVar2[1] = (SIZE_T)_Dst;
    pSVar2[2] = param_4;
    puVar3 = FUN_10107380(0,0xc);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = pSVar2;
      puVar3[1] = &PTR_FUN_10159414;
      *(undefined1 *)(puVar3 + 2) = param_2;
      *param_1 = 3;
      *(undefined4 **)(param_1 + 4) = puVar3;
      return;
    }
  }
  FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
