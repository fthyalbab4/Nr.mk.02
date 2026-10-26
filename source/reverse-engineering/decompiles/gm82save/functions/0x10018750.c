// rea decompile_all
// name: FUN_10018750
// address: 0x10018750
// body: available
// range: 0x10018750-0x100188e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10018750(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  LPVOID lpMem;
  BOOL BVar1;
  LPCWSTR pWVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  uint local_48;
  LPCWSTR pWStack_44;
  undefined4 local_40;
  int local_3c;
  LPCWSTR local_38;
  undefined4 local_34;
  LPCWSTR local_30;
  uint local_2c;
  LPCWSTR local_28;
  undefined4 local_24;
  LPCWSTR local_20;
  int local_1c;
  int local_18;

  lpMem = (LPVOID)param_2[1];
  FUN_1010c620((undefined8 *)&local_2c,(int)lpMem,param_2[2]);
  pWVar2 = local_28;
  uVar5 = local_24;
  if (local_2c != 0xffffffff) {
    local_48 = local_2c;
    local_40 = local_24;
    pWStack_44 = local_28;
    FUN_1010fa40((undefined8 *)&local_3c,&local_48,'\x01');
    pWVar2 = local_38;
    uVar5 = local_34;
    if (local_3c != -1) {
      local_18 = local_3c;
      local_30 = local_38;
      FUN_1010c620((undefined8 *)&local_2c,param_3,param_4);
      if (local_2c == 0xffffffff) {
LAB_10018875:
        param_1[1] = local_28;
        param_1[2] = local_24;
        *param_1 = 1;
      }
      else {
        local_48 = local_2c;
        local_40 = local_24;
        pWStack_44 = local_28;
        FUN_1010fa40((undefined8 *)&local_3c,&local_48,'\x01');
        local_28 = local_38;
        local_24 = local_34;
        if (local_3c == -1) goto LAB_10018875;
        local_1c = local_3c;
        pWStack_44 = (LPCWSTR)0x0;
        local_48 = 0;
        local_20 = local_38;
        BVar1 = CopyFileExW(local_30,local_38,(LPPROGRESS_ROUTINE)&LAB_1011c010,&local_48,
                            (LPBOOL)0x0,0);
        if (BVar1 == 0) {
          DVar3 = GetLastError();
          *(undefined1 *)(param_1 + 1) = 0;
          param_1[2] = DVar3;
          *param_1 = 1;
        }
        else {
          *(ulonglong *)(param_1 + 2) = CONCAT44(pWStack_44,local_48);
          *param_1 = 0;
        }
        if (local_1c != 0) {
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,local_20);
        }
      }
      if (local_18 != 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,local_30);
      }
      goto LAB_100188cb;
    }
  }
  param_1[1] = pWVar2;
  param_1[2] = uVar5;
  *param_1 = 1;
LAB_100188cb:
  if (*param_2 != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,lpMem);
  }
  return;
}
