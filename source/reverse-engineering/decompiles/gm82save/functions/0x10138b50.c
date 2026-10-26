// rea decompile_all
// name: FUN_10138b50
// address: 0x10138b50
// body: available
// range: 0x10138b50-0x10138bfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10138b50(undefined4 *param_1,int param_2,void *param_3,uint param_4)

{
  LPVOID pvVar1;
  HANDLE hHeap;
  undefined4 uVar2;
  uint uVar3;
  void *_Dst;

  uVar3 = param_4 * 0x40;
  if (param_4 < 0x4000000 && uVar3 < 0x7fffffc1) {
    if (param_2 == 0) {
      pvVar1 = FUN_10107380(0,uVar3 + 0x40);
      if (pvVar1 == (LPVOID)0x0) goto LAB_10138be8;
      *(LPVOID *)(((uint)pvVar1 & 0xffffffc0) + 0x3c) = pvVar1;
      _Dst = (void *)(((uint)pvVar1 & 0xffffffc0) + 0x40);
    }
    else {
      pvVar1 = FUN_10107380(0,uVar3 + 0x40);
      if (pvVar1 == (LPVOID)0x0) {
LAB_10138be8:
        param_1[1] = 0x40;
        param_1[2] = uVar3;
        goto LAB_10138bf2;
      }
      *(LPVOID *)(((uint)pvVar1 & 0xffffffc0) + 0x3c) = pvVar1;
      _Dst = (void *)(((uint)pvVar1 & 0xffffffc0) + 0x40);
      memcpy(_Dst,param_3,param_2 << 6);
      pvVar1 = *(LPVOID *)((int)param_3 + -4);
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,pvVar1);
    }
    uVar2 = 0;
    param_1[1] = _Dst;
    param_1[2] = uVar3;
  }
  else {
    param_1[1] = 0;
LAB_10138bf2:
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}
