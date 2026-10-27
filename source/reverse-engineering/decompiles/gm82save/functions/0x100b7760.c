// rea decompile_all
// name: FUN_100b7760
// address: 0x100b7760
// body: available
// range: 0x100b7760-0x100b781d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b7760(int param_1)

{
  void *_Dst;
  LPVOID pvVar1;
  HANDLE pvVar2;
  undefined1 auStack_3c0 [944];

  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1009e3d0(auStack_3c0);
  _Dst = *(void **)(param_1 + 0xc);
  pvVar1 = *(LPVOID *)((int)_Dst + 0x378);
  pvVar2 = GetProcessHeap();
  HeapFree(pvVar2,0,pvVar1);
  if (*(int *)((int)_Dst + 0x360) != 0) {
    pvVar1 = *(LPVOID *)((int)_Dst + 0x364);
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar1);
  }
  pvVar1 = *(LPVOID *)((int)_Dst + 0x37c);
  pvVar2 = GetProcessHeap();
  HeapFree(pvVar2,0,pvVar1);
  if (*(int *)((int)_Dst + 0x36c) != 0) {
    pvVar1 = *(LPVOID *)((int)_Dst + 0x370);
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,pvVar1);
  }
  memcpy(_Dst,auStack_3c0,0x3a8);
  return;
}
