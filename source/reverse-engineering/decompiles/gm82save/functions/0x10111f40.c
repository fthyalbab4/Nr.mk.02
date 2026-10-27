// rea decompile_all
// name: FUN_10111f40
// address: 0x10111f40
// body: available
// range: 0x10111f40-0x1011200a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte __fastcall FUN_10111f40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *lpMem;
  HANDLE pvVar2;
  ushort uVar3;
  char cVar4;
  LPVOID lpMem_00;
  uint local_70;
  uint local_6c;
  ushort local_68;
  int *local_64;
  int *local_24;
  byte local_1d;
  ushort uVar5;

  FUN_10112010(&local_70,param_1,param_2);
  if ((local_70 & local_6c) == 0xffffffff) {
    cVar4 = (char)local_68;
    lpMem = local_64;
    uVar5 = local_68;
  }
  else {
    uVar3 = 0x1ff;
    if (((uint)local_24 & 0x400) != 0) {
      uVar3 = (ushort)((local_1d & 0x20) == 0) << 8 | 0xff;
    }
    uVar5 = 0xff;
    if (((uint)local_24 & 0x10) != 0) {
      uVar5 = uVar3;
    }
    cVar4 = (char)uVar5;
    lpMem = local_24;
  }
  if (cVar4 == '\x03') {
    puVar1 = (undefined4 *)lpMem[1];
    lpMem_00 = (LPVOID)*lpMem;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(lpMem_00);
    }
    if (puVar1[1] != 0) {
      if (8 < (uint)puVar1[2]) {
        lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
      }
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,lpMem_00);
    }
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,lpMem);
  }
  return (byte)(uVar5 >> 8) & 1 & (char)uVar5 == -1;
}
