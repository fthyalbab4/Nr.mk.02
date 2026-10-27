// rea decompile_all
// name: FUN_1011b760
// address: 0x1011b760
// body: available
// range: 0x1011b760-0x1011b810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011b760(undefined8 *param_1,int *param_2,int param_3,int param_4)

{
  HANDLE hHeap;
  LPCWSTR local_34;
  LPCWSTR pWStack_30;
  LPCWSTR local_2c;
  int local_28;
  LPCWSTR local_24;
  LPCWSTR local_20;
  LPCWSTR local_1c;
  LPCWSTR local_18;
  LPCWSTR local_14;

  FUN_1010c620((undefined8 *)&local_1c,param_3,param_4);
  if (local_1c != (LPCWSTR)0xffffffff) {
    local_34 = local_1c;
    local_2c = local_14;
    pWStack_30 = local_18;
    FUN_1010fa40((undefined8 *)&local_28,(uint *)&local_34,'\x01');
    local_18 = local_24;
    local_14 = local_20;
    if (local_28 != -1) {
      FUN_1010ff70((char *)&local_34,local_24,param_2);
      if (local_28 != 0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,local_24);
      }
      local_18 = local_34;
      local_14 = pWStack_30;
      goto joined_r0x1011b7fd;
    }
  }
  local_34._0_1_ = (char)local_18;
joined_r0x1011b7fd:
  if ((char)local_34 == -1) {
    *(LPCWSTR *)((int)param_1 + 4) = local_14;
    *(undefined1 *)param_1 = 0xff;
  }
  else {
    *param_1 = CONCAT44(local_14,local_18);
  }
  return;
}
