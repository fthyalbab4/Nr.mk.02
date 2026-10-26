// rea decompile_all
// name: FUN_10053270
// address: 0x10053270
// body: available
// range: 0x10053270-0x100532f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10053270(int param_1,int *param_2)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  HANDLE hHeap;
  undefined1 *_Dst;
  uint uVar3;

  uVar1 = param_2[2];
  *(uint *)(param_1 + 0x2f8) = uVar1;
  (*(code *)0x409be0)(uVar1);
  _Dst = *(undefined1 **)(param_1 + 0x2fc);
  if (_Dst == (undefined1 *)0x0) {
    _Dst = &DAT_00000004;
    uVar3 = 0;
    if (uVar1 != 0) goto LAB_100532e6;
  }
  else {
    uVar3 = *(uint *)(_Dst + -4);
    if (uVar3 < uVar1) {
LAB_100532e6:
      FUN_10136a50(0,uVar1,uVar3,&DAT_10141dc8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  _Src = (void *)param_2[1];
  memcpy(_Dst,_Src,uVar1 * 0x28);
  if (*param_2 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,_Src);
  }
  return;
}
