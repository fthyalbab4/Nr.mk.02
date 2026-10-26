// rea decompile_all
// name: FUN_100053b0
// address: 0x100053b0
// body: available
// range: 0x100053b0-0x10005505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100053b0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  undefined1 uStack_21;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;

  if ((int)param_1[0xb] != -1) {
    FUN_1004f710((undefined2 *)&local_20,param_1);
    if ((char)local_20 == '\x03') {
      puVar1 = (undefined4 *)local_1c[1];
      pvVar5 = (LPVOID)*local_1c;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar5);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar5 = *(LPVOID *)((int)pvVar5 + -4);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,pvVar5);
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,local_1c);
    }
    if (0 < (int)param_1[0xb]) {
      pvVar5 = *(LPVOID *)((int)param_1 + 0x5c);
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar5);
    }
  }
  local_18 = *(int *)(*(int *)((int)param_1 + 0x3c) + 0xa4);
  local_14 = *(uint *)(*(int *)((int)param_1 + 0x3c) + 0xa8);
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  if (*(code **)((int)param_1 + 0x44) == (code *)&DAT_101210f0) {
    if (local_14 == 0) {
      local_20 = &local_18;
      local_1c = (int *)&LAB_101092d0;
      FUN_101369ea(1,&local_14,&DAT_10159960,0x10159964,&local_20,
                   &PTR_s_C__Users_runneradmin__cargo_regi_101599e0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (0x7fffffc0 < local_14) {
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_21,&DAT_1015ddb8,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015ddc8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pvVar5 = *(LPVOID *)(local_18 + -4);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar5);
    iVar2 = *(int *)((int)param_1 + 100);
  }
  else {
    (**(code **)((int)param_1 + 0x44))((int)param_1[9],*(undefined4 *)(local_18 + -4));
    iVar2 = *(int *)((int)param_1 + 100);
  }
  if (iVar2 != 0) {
    pvVar5 = *(LPVOID *)(param_1 + 0xd);
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pvVar5);
  }
  return;
}
