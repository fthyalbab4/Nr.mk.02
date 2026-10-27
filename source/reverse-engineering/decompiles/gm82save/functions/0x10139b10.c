// rea decompile_all
// name: FUN_10139b10
// address: 0x10139b10
// body: available
// range: 0x10139b10-0x10139b91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10139b10(undefined4 *param_1,int param_2,LPVOID param_3,uint param_4,uint param_5)

{
  uint dwBytes;
  int iVar1;
  HANDLE hHeap;
  undefined1 *puVar2;
  undefined4 uVar3;

  uVar3 = 1;
  dwBytes = (uint)((ulonglong)param_5 * (ulonglong)param_4);
  if (0x7ffffffc < dwBytes || (int)((ulonglong)param_5 * (ulonglong)param_4 >> 0x20) != 0) {
    dwBytes = 0;
    iVar1 = 4;
    goto LAB_10139b88;
  }
  if (param_2 == 0) {
    if (dwBytes == 0) {
      puVar2 = &DAT_00000004;
    }
    else {
      puVar2 = FUN_10107380(0,dwBytes);
      if (puVar2 == (undefined1 *)0x0) goto LAB_10139b70;
    }
LAB_10139b7e:
    param_1[1] = puVar2;
    uVar3 = 0;
  }
  else {
    hHeap = GetProcessHeap();
    puVar2 = HeapReAlloc(hHeap,0,param_3,dwBytes);
    if (puVar2 != (undefined1 *)0x0) goto LAB_10139b7e;
LAB_10139b70:
    param_1[1] = 4;
  }
  iVar1 = 8;
LAB_10139b88:
  *(uint *)((int)param_1 + iVar1) = dwBytes;
  *param_1 = uVar3;
  return;
}
