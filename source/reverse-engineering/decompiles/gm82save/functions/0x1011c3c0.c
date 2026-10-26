// rea decompile_all
// name: FUN_1011c3c0
// address: 0x1011c3c0
// body: available
// range: 0x1011c3c0-0x1011c692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011c3c0(undefined4 *param_1,void *param_2,SIZE_T param_3)

{
  code *pcVar1;
  SIZE_T SVar2;
  LPCWSTR _Dst;
  LPCWSTR pWVar3;
  HANDLE pvVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int local_278;
  LPCWSTR local_274;
  SIZE_T local_270;
  SIZE_T local_26c;
  LPCWSTR local_268;
  SIZE_T local_264;
  SIZE_T local_260;
  LPCWSTR local_25c;
  SIZE_T local_258;
  undefined1 local_254;

  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 3;
    *param_1 = 0xffffffff;
    return;
  }
  _Dst = FUN_10107380(0,param_3);
  if (_Dst == (LPCWSTR)0x0) {
LAB_1011c685:
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  memcpy(_Dst,param_2,param_3);
  pWVar3 = FUN_10107380(0,param_3);
  if (pWVar3 == (LPCWSTR)0x0) goto LAB_1011c685;
  memcpy(pWVar3,param_2,param_3);
  local_260 = param_3;
  local_258 = param_3;
  local_254 = 0;
  local_25c = pWVar3;
  FUN_10111020(&local_260,&DAT_1015855c,1);
  pWVar3 = local_25c;
  SVar2 = local_260;
  FUN_1010c620((undefined8 *)&local_26c,(int)local_25c,local_258);
  if (local_26c == 0xffffffff) {
LAB_1011c589:
    param_1[1] = local_268;
    param_1[2] = local_264;
    *param_1 = 0xffffffff;
  }
  else {
    local_260 = local_26c;
    local_258 = local_264;
    local_25c = local_268;
    FUN_1010fa40((undefined8 *)&local_278,&local_260,'\x01');
    local_268 = local_274;
    local_264 = local_270;
    if (local_278 == -1) goto LAB_1011c589;
    memset(&local_260,0,0x250);
    pvVar4 = FindFirstFileExW(local_274,FindExInfoBasic,&local_260,FindExSearchNameMatch,(LPVOID)0x0
                              ,0);
    if (pvVar4 != (HANDLE)0xffffffff) {
      puVar5 = FUN_10107380(0,0x18);
      if (puVar5 == (undefined4 *)0x0) {
LAB_1011c674:
        FUN_1013679e(4,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *puVar5 = 1;
      puVar5[1] = 1;
      puVar5[2] = param_3;
      puVar5[3] = _Dst;
      puVar5[4] = param_3;
      *(undefined1 *)(puVar5 + 5) = 0;
      memcpy(param_1 + 3,&local_260,0x250);
      *param_1 = 1;
      param_1[1] = pvVar4;
      param_1[2] = 1;
      param_1[0x97] = puVar5;
      if (local_278 != 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,local_274);
      }
joined_r0x1011c627:
      if (SVar2 == 0) {
        return;
      }
      pvVar4 = GetProcessHeap();
      _Dst = pWVar3;
      goto LAB_1011c630;
    }
    DVar6 = GetLastError();
    if (DVar6 == 2) {
      puVar5 = FUN_10107380(0,0x18);
      if (puVar5 == (undefined4 *)0x0) goto LAB_1011c674;
      *puVar5 = 1;
      puVar5[1] = 1;
      puVar5[2] = param_3;
      puVar5[3] = _Dst;
      puVar5[4] = param_3;
      *(undefined1 *)(puVar5 + 5) = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[0x97] = puVar5;
      if (local_278 != 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,local_274);
      }
      goto joined_r0x1011c627;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = DVar6;
    *param_1 = 0xffffffff;
    if (local_278 != 0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,local_274);
    }
  }
  if (SVar2 != 0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,pWVar3);
  }
  pvVar4 = GetProcessHeap();
LAB_1011c630:
  HeapFree(pvVar4,0,_Dst);
  return;
}
