// rea decompile_all
// name: FUN_100e8010
// address: 0x100e8010
// body: available
// range: 0x100e8010-0x100e8137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100e8010(undefined4 *param_1,uint *param_2)

{
  uint dwBytes;
  code *pcVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  undefined4 *puVar3;
  byte local_1c [12];

  dwBytes = param_2[2];
  if (dwBytes < *param_2) {
    pvVar2 = (LPVOID)param_2[1];
    hHeap = GetProcessHeap();
    if (dwBytes == 0) {
      HeapFree(hHeap,0,pvVar2);
LAB_100e80d2:
      puVar3 = FUN_10107380(0,0x34);
      if (puVar3 == (undefined4 *)0x0) goto LAB_100e8127;
      *puVar3 = 1;
      puVar3[1] = 0;
      puVar3[2] = 1;
      puVar3[3] = 0;
      puVar3[4] = 1;
      puVar3[0xb] = 0;
      *(undefined8 *)(puVar3 + 5) = 0;
      *(undefined8 *)(puVar3 + 7) = 0;
      *(undefined8 *)(puVar3 + 9) = 0;
      *(undefined2 *)(puVar3 + 0xc) = 1;
      *(undefined1 *)((int)puVar3 + 0x32) = 0;
      *param_1 = 0;
      goto LAB_100e811c;
    }
    pvVar2 = HeapReAlloc(hHeap,0,pvVar2,dwBytes);
    if (pvVar2 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    if (dwBytes == 0) goto LAB_100e80d2;
    pvVar2 = (LPVOID)param_2[1];
  }
  FUN_10095490((undefined4 *)local_1c,(int)pvVar2,dwBytes);
  puVar3 = FUN_10107380(0,0x34);
  if (puVar3 == (undefined4 *)0x0) {
LAB_100e8127:
    FUN_1013679e(4,0x34);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar3 = 1;
  puVar3[1] = dwBytes;
  puVar3[2] = 1;
  puVar3[3] = dwBytes;
  puVar3[4] = 1;
  puVar3[0xb] = 0;
  *(undefined8 *)(puVar3 + 5) = 0;
  *(undefined8 *)(puVar3 + 7) = 0;
  *(undefined8 *)(puVar3 + 9) = 0;
  *(byte *)(puVar3 + 0xc) = local_1c[0] ^ 1;
  *(undefined2 *)((int)puVar3 + 0x31) = 0x101;
  *param_1 = 1;
  param_1[1] = pvVar2;
  param_1[2] = dwBytes;
LAB_100e811c:
  param_1[6] = puVar3;
  return;
}
