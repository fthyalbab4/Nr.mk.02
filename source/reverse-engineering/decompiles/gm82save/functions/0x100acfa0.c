// rea decompile_all
// name: FUN_100acfa0
// address: 0x100acfa0
// body: available
// range: 0x100acfa0-0x100ad178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100acfa0(int param_1,int param_2,int param_3,HANDLE param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  byte bVar2;
  SIZE_T _Size;
  void *pvVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  LPOVERLAPPED lpOverlapped;
  BOOL BVar7;
  HANDLE hHeap;
  uint bWatchSubtree;
  undefined1 local_25;
  LPVOID local_20;
  LPVOID local_1c;
  SIZE_T local_18;
  DWORD local_14;

  _Size = *(SIZE_T *)(param_1 + 8);
  if (_Size == 0) {
    local_1c = (LPVOID)0x1;
    uVar1 = *(undefined1 *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    pvVar3 = *(void **)(param_1 + 4);
    local_1c = FUN_10107380(0,_Size);
    if (local_1c == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    memcpy(local_1c,pvVar3,_Size);
    uVar1 = *(undefined1 *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  if (iVar4 == -1) {
    local_18 = 0xffffffff;
  }
  else {
    local_18 = *(SIZE_T *)(param_1 + 0x18);
    if (local_18 == 0) {
      local_20 = (LPVOID)0x1;
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x14);
      local_20 = FUN_10107380(0,local_18);
      if (local_20 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      memcpy(local_20,pvVar3,local_18);
    }
    local_25 = *(undefined1 *)(param_1 + 0x1c);
  }
  iVar4 = *(int *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_1 + 0x24);
  piVar6 = FUN_10107380(0,0x403c);
  if (piVar6 == (int *)0x0) {
    FUN_1013679e(4,0x403c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *piVar6 = param_5;
  piVar6[1] = param_6;
  piVar6[2] = _Size;
  piVar6[3] = (int)local_1c;
  piVar6[4] = _Size;
  *(undefined1 *)(piVar6 + 5) = uVar1;
  piVar6[6] = local_18;
  piVar6[8] = local_18;
  piVar6[7] = (int)local_20;
  *(undefined1 *)(piVar6 + 9) = local_25;
  piVar6[10] = iVar4;
  *(byte *)(piVar6 + 0xb) = bVar2;
  piVar6[0xc] = param_2;
  piVar6[0xd] = param_3;
  memset(piVar6 + 0xe,0,0x4000);
  bWatchSubtree = 0;
  if (local_18 == 0xffffffff) {
    bWatchSubtree = (uint)bVar2;
  }
  piVar6[0x100e] = (int)param_4;
  lpOverlapped = FUN_10107380(8,0x14);
  lpOverlapped->hEvent = piVar6;
  local_14 = 0;
  BVar7 = ReadDirectoryChangesW
                    (param_4,piVar6 + 0xe,0x4000,bWatchSubtree,0x15f,&local_14,lpOverlapped,
                     FUN_100b0970);
  if (BVar7 == 0) {
    ReleaseSemaphore((HANDLE)piVar6[10],1,(LPLONG)0x0);
    FUN_100b10d0(piVar6);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpOverlapped);
  }
  return;
}
