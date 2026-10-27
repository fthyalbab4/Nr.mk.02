// rea decompile_all
// name: FUN_101079b0
// address: 0x101079b0
// body: available
// range: 0x101079b0-0x10107a65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_101079b0(void)

{
  byte bVar1;
  HANDLE hHeap;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int local_1c;
  int *local_18;
  int local_14;

  if ((byte)(DAT_101632fc - 1) < 3) {
    return DAT_101632fc - 1;
  }
  FUN_1010c370((undefined8 *)&local_1c,0x101579e0,0xe);
  if (local_1c == -1) {
    bVar4 = 3;
    bVar2 = 2;
    goto LAB_10107a33;
  }
  if (local_14 == 4) {
    if (*local_18 != 0x6c6c7566) goto LAB_10107a12;
    bVar1 = 2;
    bVar4 = 2;
    bVar3 = 1;
    bVar2 = 1;
  }
  else if ((local_14 == 1) && ((char)*local_18 == '0')) {
    bVar1 = 3;
    bVar4 = 3;
    bVar3 = 2;
    bVar2 = 2;
  }
  else {
LAB_10107a12:
    bVar3 = 0;
    bVar1 = 1;
    bVar4 = 1;
    bVar2 = 0;
  }
  if (local_1c != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_18);
    bVar4 = bVar1;
    bVar2 = bVar3;
  }
LAB_10107a33:
  bVar1 = 0;
  LOCK();
  bVar5 = DAT_101632fc != 0;
  if (bVar5) {
    bVar1 = DAT_101632fc;
    bVar4 = DAT_101632fc;
  }
  DAT_101632fc = bVar4;
  UNLOCK();
  if (bVar5) {
    bVar2 = 0xff;
    if (bVar1 < 4) {
      bVar2 = bVar1 - 1;
    }
  }
  return bVar2;
}
