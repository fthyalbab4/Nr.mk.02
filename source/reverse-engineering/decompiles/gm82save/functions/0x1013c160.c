// rea decompile_all
// name: FUN_1013c160
// address: 0x1013c160
// body: available
// range: 0x1013c160-0x1013c28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __fastcall FUN_1013c160(int param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  int *piVar6;
  undefined8 uVar7;
  char local_10 [4];
  int *local_c [2];

  if (param_1 == 0) {
    if (DAT_10163350 == 0) {
      DVar3 = FUN_1013be20(&DAT_10163350);
    }
    else {
      DVar3 = DAT_10163350 - 1;
    }
    TlsSetValue(DVar3,(LPVOID)0x1);
    if (DAT_10163364 == 0) {
      DVar3 = FUN_1013be20(&DAT_10163364);
    }
    else {
      DVar3 = DAT_10163364 - 1;
    }
    pvVar4 = TlsGetValue(DVar3);
    if (DAT_10163374 == 0) {
      DVar3 = FUN_1013be20(&DAT_10163374);
    }
    else {
      DVar3 = DAT_10163374 - 1;
    }
    pvVar5 = TlsGetValue(DVar3);
    uVar7 = CONCAT44(pvVar5,pvVar4);
    if (pvVar4 == (LPVOID)0x0 && pvVar5 == (LPVOID)0x0) {
      uVar7 = FUN_1013c050();
    }
    local_c[0] = (int *)0xffffffff;
    piVar6 = (int *)FUN_1010c9e0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(uint *)local_c);
    FUN_101073b0();
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    if (*piVar6 != 0 && SCARRY4(iVar1,1) == *piVar6 < 0) {
      if (DAT_10163350 == 0) {
        DVar3 = FUN_1013be20(&DAT_10163350);
      }
      else {
        DVar3 = DAT_10163350 - 1;
      }
      TlsSetValue(DVar3,piVar6 + 2);
      return piVar6;
    }
  }
  else {
    if (param_1 == 1) {
      FUN_10107090((undefined8 *)local_10,&stack0xffffffe8,
                   (ushort *)
                   "fatal runtime error: init_current() was re-entrant, which indicates a bug in the Rust threading implementation, aborting\n"
                   ,0xf3);
      FUN_10003b60(local_10[0],local_c[0]);
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_101369c0("use of std::thread::current() is not possible after the thread\'s local data has been destroyedC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\thread\\current.rs"
                 ,0xbd,&DAT_101584c0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
