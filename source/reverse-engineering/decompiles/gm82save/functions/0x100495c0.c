// rea decompile_all
// name: FUN_100495c0
// address: 0x100495c0
// body: available
// range: 0x100495c0-0x100496d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100495c0(char *param_1,ushort *param_2)

{
  int iVar1;
  LPVOID lpMem;
  HANDLE pvVar2;
  int local_40;
  LPVOID local_3c;
  SIZE_T local_38;
  int local_34;
  LPVOID local_30;
  SIZE_T local_2c;
  int local_28;
  LPVOID local_24;
  SIZE_T local_20;
  undefined8 local_1c;
  undefined4 local_14;

  FUN_10049460(param_1,param_2);
  if (*param_1 == -1) {
    iVar1 = *(int *)(param_1 + 4);
    lpMem = *(LPVOID *)(param_1 + 8);
    FUN_10003040((undefined8 *)&local_28,(int)lpMem,*(SIZE_T *)(param_1 + 0xc),0x5c,0x5c5c);
    FUN_10003040((undefined8 *)&local_34,(int)local_24,local_20,0xd,0x725c);
    FUN_10003040((undefined8 *)&local_40,(int)local_30,local_2c,10,0x6e5c);
    FUN_10002ad0(&local_1c,(int)local_3c,local_38,"*/",2,"*\\/src\\asset.rs",3);
    if (local_40 != 0) {
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,local_3c);
    }
    if (local_34 != 0) {
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,local_30);
    }
    if (local_28 != 0) {
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,local_24);
    }
    if (iVar1 != 0) {
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,lpMem);
    }
    *(undefined4 *)(param_1 + 0xc) = local_14;
    *(undefined8 *)(param_1 + 4) = local_1c;
    *param_1 = -1;
  }
  return;
}
