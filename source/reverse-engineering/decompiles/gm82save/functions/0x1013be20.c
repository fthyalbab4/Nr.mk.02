// rea decompile_all
// name: FUN_1013be20
// address: 0x1013be20
// body: available
// range: 0x1013be20-0x1013bf3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD __fastcall FUN_1013be20(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  DWORD dwTlsIndex;
  int *piVar3;
  int iVar4;
  bool bVar5;
  byte local_24 [8];
  BOOL local_1c;
  char local_18 [4];
  int *local_14;
  BOOL local_10;

  if (param_1[1] == 0) {
    dwTlsIndex = TlsAlloc();
    if (dwTlsIndex == 0xffffffff) {
      local_24[0] = 0;
      local_24[1] = 0;
      local_24[2] = 0;
      local_24[3] = 0;
      local_24[4] = 0;
      FUN_10107090((undefined8 *)local_18,local_24,
                   (ushort *)
                   "fatal runtime error: out of TLS indexes, aborting\nC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\thread_local\\key\\windows.rs"
                   ,0x65);
      FUN_10003b60(local_18[0],local_14);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    LOCK();
    iVar4 = *param_1;
    bVar5 = iVar4 == 0;
    if (bVar5) {
      *param_1 = dwTlsIndex + 1;
      iVar4 = 0;
    }
    UNLOCK();
    if (!bVar5) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = iVar4 - 1;
    }
  }
  else {
    local_1c = 0;
    local_10 = InitOnceBeginInitialize((LPINIT_ONCE)(param_1 + 3),0,&local_1c,(LPVOID *)0x0);
    if (local_10 != 1) {
      FUN_1013bf3e();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_1c == 0) {
      dwTlsIndex = *param_1 - 1;
    }
    else {
      dwTlsIndex = TlsAlloc();
      if (dwTlsIndex == 0xffffffff) {
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        local_24[4] = 0;
        FUN_10107090((undefined8 *)local_18,local_24,
                     (ushort *)
                     "fatal runtime error: out of TLS indexes, aborting\nC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\thread_local\\key\\windows.rs"
                     ,0x65);
        FUN_10003b60(local_18[0],local_14);
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_101073b0();
      piVar3 = DAT_10163384;
      do {
        param_1[2] = (int)piVar3;
        LOCK();
        bVar5 = piVar3 != DAT_10163384;
        piVar2 = param_1;
        if (bVar5) {
          piVar3 = DAT_10163384;
          piVar2 = DAT_10163384;
        }
        DAT_10163384 = piVar2;
        UNLOCK();
      } while (bVar5);
      *param_1 = dwTlsIndex + 1;
      InitOnceComplete((LPINIT_ONCE)(param_1 + 3),0,(LPVOID)0x0);
    }
  }
  return dwTlsIndex;
}
