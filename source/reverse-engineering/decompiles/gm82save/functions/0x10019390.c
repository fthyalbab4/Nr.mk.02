// rea decompile_all
// name: FUN_10019390
// address: 0x10019390
// body: available
// range: 0x10019390-0x10019458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_10019390(undefined4 *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *lpMem;
  HANDLE hHeap;
  uint uVar3;
  undefined4 local_1010 [1023];
  undefined4 uStack_14;

  uStack_14 = 0x1001939e;
  uVar2 = param_2 - (param_2 >> 1);
  uVar3 = 2000000;
  if (param_2 < 2000000) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 0x401) {
    FUN_10019ca0(param_1,param_2,local_1010,0x400,param_2 < 0x41);
  }
  else {
    if (0x3fffffff < uVar2 || 0x7ffffffc < uVar3 * 4) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lpMem = FUN_10107380(0,uVar3 * 4);
    if (lpMem == (undefined4 *)0x0) {
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_10019ca0(param_1,param_2,lpMem,uVar3,param_2 < 0x41);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}
