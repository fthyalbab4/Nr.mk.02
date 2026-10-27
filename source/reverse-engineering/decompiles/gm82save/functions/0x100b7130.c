// rea decompile_all
// name: FUN_100b7130
// address: 0x100b7130
// body: available
// range: 0x100b7130-0x100b7217 inclusive
// range: 0x100b7220-0x100b7290 inclusive
// range: 0x100b72a0-0x100b7310 inclusive
// range: 0x100b7320-0x100b73a2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b7130(int param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  undefined4 *puVar4;
  int iVar5;

  if (0 < *(int *)(param_1 + 0xc0)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xc4);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xcc)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xd0);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xd8)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xdc);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xe4)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xe8);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xf0)) {
    pvVar1 = *(LPVOID *)(param_1 + 0xf4);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  if (0 < *(int *)(param_1 + 0xfc)) {
    pvVar1 = *(LPVOID *)(param_1 + 0x100);
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0xa4);
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)((int)pvVar1 + 0x10);
    do {
      if (puVar4[-4] != 0) {
        pvVar2 = (LPVOID)puVar4[-3];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      if (puVar4[-1] != 0) {
        pvVar2 = (LPVOID)*puVar4;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  iVar5 = *(int *)(param_1 + 0xb0);
  pvVar1 = *(LPVOID *)(param_1 + 0xac);
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)((int)pvVar1 + 0x14);
    do {
      if (puVar4[-1] != 0) {
        pvVar2 = (LPVOID)*puVar4;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      if (puVar4[-4] != 0) {
        pvVar2 = (LPVOID)puVar4[-3];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      puVar4 = puVar4 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  iVar5 = *(int *)(param_1 + 0xbc);
  pvVar1 = *(LPVOID *)(param_1 + 0xb8);
  if (iVar5 != 0) {
    puVar4 = (undefined4 *)((int)pvVar1 + 0x2c);
    do {
      if (puVar4[-7] != 0) {
        pvVar2 = (LPVOID)puVar4[-6];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      if (puVar4[-4] != 0) {
        pvVar2 = (LPVOID)puVar4[-3];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      if (puVar4[-1] != 0) {
        pvVar2 = (LPVOID)*puVar4;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      if (puVar4[-10] != 0) {
        pvVar2 = (LPVOID)puVar4[-9];
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      puVar4 = puVar4 + 0xe;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pvVar1);
  }
  return;
}
