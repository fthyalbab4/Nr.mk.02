// rea decompile_all
// name: FUN_1013c050
// address: 0x1013c050
// body: available
// range: 0x1013c050-0x1013c0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1013c050(void)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  LPVOID lpTlsValue;
  LPVOID lpTlsValue_00;
  bool bVar5;

  uVar2 = (uint)DAT_10163398;
  uVar4 = DAT_10163398._4_4_;
  do {
    if ((uVar2 & uVar4) == 0xffffffff) {
      FUN_1013c0e0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lpTlsValue = (LPVOID)(uVar2 + 1);
    lpTlsValue_00 = (LPVOID)(uVar4 + (0xfffffffe < uVar2));
    LOCK();
    bVar5 = CONCAT44(uVar4,uVar2) == DAT_10163398;
    if (bVar5) {
      DAT_10163398 = CONCAT44(lpTlsValue_00,lpTlsValue);
    }
    else {
      uVar4 = (uint)((ulonglong)DAT_10163398 >> 0x20);
      uVar2 = (uint)DAT_10163398;
    }
    UNLOCK();
  } while (!bVar5);
  if (DAT_10163364 == 0) {
    DVar3 = FUN_1013be20(&DAT_10163364);
  }
  else {
    DVar3 = DAT_10163364 - 1;
  }
  TlsSetValue(DVar3,lpTlsValue);
  if (DAT_10163374 == 0) {
    DVar3 = FUN_1013be20(&DAT_10163374);
  }
  else {
    DVar3 = DAT_10163374 - 1;
  }
  TlsSetValue(DVar3,lpTlsValue_00);
  return CONCAT44(lpTlsValue_00,lpTlsValue);
}
