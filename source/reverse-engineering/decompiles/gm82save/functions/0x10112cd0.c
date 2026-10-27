// rea decompile_all
// name: FUN_10112cd0
// address: 0x10112cd0
// body: available
// range: 0x10112cd0-0x10112d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10112cd0(undefined4 *param_1,int param_2,int param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int local_30;
  LPCWSTR local_2c;
  undefined4 local_28;
  uint local_24;
  LPCWSTR local_20;
  undefined4 local_1c;
  uint local_18;
  LPCWSTR local_14;
  undefined4 local_10;

  FUN_1010c620((undefined8 *)&local_24,param_2,param_3);
  if (local_24 != 0xffffffff) {
    local_18 = local_24;
    local_10 = local_1c;
    local_14 = local_20;
    FUN_1010fa40((undefined8 *)&local_30,&local_18,'\x01');
    local_20 = local_2c;
    local_1c = local_28;
    if (local_30 != -1) {
      BVar1 = CreateDirectoryW(local_2c,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        *(undefined1 *)param_1 = 0;
        param_1[1] = DVar2;
      }
      else {
        *(undefined1 *)param_1 = 0xff;
      }
      if (local_30 == 0) {
        return;
      }
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,local_2c);
      return;
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  return;
}
