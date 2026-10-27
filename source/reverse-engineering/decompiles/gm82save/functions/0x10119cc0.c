// rea decompile_all
// name: FUN_10119cc0
// address: 0x10119cc0
// body: available
// range: 0x10119cc0-0x10119d9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10119cc0(DWORD *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  int *lpMem_00;
  DWORD local_34;
  LPCWSTR local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;

  FUN_1010c620((undefined8 *)&local_28,param_2,param_3);
  lpMem_00 = local_20;
  if (local_28 != 0xffffffff) {
    local_1c = local_28;
    local_18 = local_24;
    local_14 = local_20;
    FUN_10119da0(&local_34,&local_1c);
    if (local_34 != 0xffffffff) {
      DVar2 = GetFileAttributesW(local_30);
      if (DVar2 != 0xffffffff) {
        *param_1 = local_34;
        param_1[1] = (DWORD)local_30;
        param_1[2] = (DWORD)local_2c;
        return;
      }
      *param_1 = 0xffffffff;
      if (local_34 == 0) {
        return;
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,local_30);
      return;
    }
    local_24 = (uint)local_30 & 0xff;
    lpMem_00 = local_2c;
  }
  if ((char)local_24 == '\x03') {
    puVar1 = (undefined4 *)lpMem_00[1];
    lpMem = (LPVOID)*lpMem_00;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(lpMem);
    }
    if (puVar1[1] != 0) {
      if (8 < (uint)puVar1[2]) {
        lpMem = *(LPVOID *)((int)lpMem + -4);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,lpMem_00);
  }
  *param_1 = 0xffffffff;
  return;
}
