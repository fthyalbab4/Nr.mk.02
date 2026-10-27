// rea decompile_all
// name: FUN_1005b040
// address: 0x1005b040
// body: available
// range: 0x1005b040-0x1005b140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1005b040(undefined1 *param_1,void *param_2,SIZE_T param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  uint local_70;
  uint local_6c;
  char local_68;
  int *local_64;

  FUN_1011c320(&local_70,(int)param_2,param_3);
  if ((local_70 & local_6c) == 0xffffffff) {
    if (local_68 == '\x03') {
      puVar1 = (undefined4 *)local_64[1];
      pvVar4 = (LPVOID)*local_64;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar4);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar4 = *(LPVOID *)((int)pvVar4 + -4);
        }
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar4);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,local_64);
    }
    FUN_1010d340((undefined1 *)&local_70,0,&DAT_10141fa5,0xe);
    if (param_3 == 0) {
      pvVar4 = (LPVOID)0x1;
    }
    else {
      pvVar4 = FUN_10107380(0,param_3);
      if (pvVar4 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(pvVar4,param_2,param_3);
    }
    *(SIZE_T *)(param_1 + 0xc) = param_3;
    *(LPVOID *)(param_1 + 0x10) = pvVar4;
    *(SIZE_T *)(param_1 + 0x14) = param_3;
    param_1[0x18] = 0;
    *param_1 = 1;
    *(uint *)(param_1 + 8) = local_6c;
    *(uint *)(param_1 + 4) = local_70;
  }
  else {
    *param_1 = 0xff;
  }
  return;
}
