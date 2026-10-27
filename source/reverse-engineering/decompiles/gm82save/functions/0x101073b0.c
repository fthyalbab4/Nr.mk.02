// rea decompile_all
// name: FUN_101073b0
// address: 0x101073b0
// body: available
// range: 0x101073b0-0x101074e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101073b0(void)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD dwFlsIndex;
  DWORD dwFlsIndex_00;
  int iVar3;
  BOOL BVar4;
  bool bVar5;
  byte local_18 [8];
  char local_10 [4];
  int *local_c;

  LOCK();
  DAT_10163388 = DAT_10163388 + 1;
  UNLOCK();
  if (DAT_1016338c == '\0') {
    dwFlsIndex_00 = DAT_101631a0;
    if (DAT_101631a0 == 0xffffffff) {
      dwFlsIndex = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_101074f0);
      if (dwFlsIndex == 0xffffffff) {
        local_18[0] = 0;
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        local_18[4] = 0;
        FUN_10107090((undefined8 *)local_10,local_18,
                     (ushort *)"fatal runtime error: out of FLS keys, aborting\n",0x5f);
        FUN_10003b60(local_10[0],local_c);
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      dwFlsIndex_00 = 0xffffffff;
      LOCK();
      bVar5 = DAT_101631a0 != 0xffffffff;
      DVar2 = dwFlsIndex;
      if (bVar5) {
        dwFlsIndex_00 = DAT_101631a0;
        DVar2 = DAT_101631a0;
      }
      DAT_101631a0 = DVar2;
      UNLOCK();
      if (bVar5) {
        FlsFree(dwFlsIndex);
      }
      else {
        iVar3 = FUN_1012c5cc(&LAB_10107600);
        dwFlsIndex_00 = dwFlsIndex;
        if (iVar3 != 0) {
          local_18[0] = 0;
          local_18[1] = 0;
          local_18[2] = 0;
          local_18[3] = 0;
          local_18[4] = 0;
          FUN_10107090((undefined8 *)local_10,local_18,
                       (ushort *)
                       "fatal runtime error: failed to register fls atexit hook, aborting\n",0x85);
          FUN_10003b60(local_10[0],local_c);
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    BVar4 = FlsSetValue(dwFlsIndex_00,(PVOID)0x1);
    if (BVar4 == 0) {
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      local_18[4] = 0;
      FUN_10107090((undefined8 *)local_10,local_18,
                   (ushort *)"fatal runtime error: failed to set FLS value, aborting\n",0x6f);
      FUN_10003b60(local_10[0],local_c);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  LOCK();
  DAT_10163388 = DAT_10163388 + -1;
  UNLOCK();
  return;
}
