// rea decompile_all
// name: FUN_1007a660
// address: 0x1007a660
// body: available
// range: 0x1007a660-0x1007a73b inclusive
// range: 0x1007a740-0x1007a82b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007a660(void)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iStack_68;
  undefined8 uStack_64;
  PSRWLOCK local_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  PSRWLOCK pRStack_38;
  int local_34 [2];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 uStack_1c;

  LOCK();
  bVar3 = DAT_10163020 == '\0';
  if (bVar3) {
    DAT_10163020 = '\x01';
  }
  UNLOCK();
  pcVar1 = (code *)PTR_FUN_10163034;
  if (!bVar3) {
    FUN_10138380((byte *)&DAT_10163020);
    pcVar1 = (code *)PTR_FUN_10163034;
  }
  PTR_FUN_10163034 = pcVar1;
  if (DAT_10163024 == -1) {
    PTR_FUN_10163034 = (undefined *)0x0;
    if (pcVar1 == (code *)0x0) {
      FUN_101369c0("Lazy instance has previously been poisoned",0x55,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1013fd70);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*pcVar1)(&iStack_68);
    uStack_40 = uStack_64;
    pRStack_38 = local_5c;
    if (DAT_10163024 == -1) {
      DAT_10163024 = iStack_68;
      _DAT_10163028 = uStack_64;
      DAT_10163030 = local_5c;
    }
    else if (iStack_68 != -1) {
      FUN_10003bb0(&iStack_68);
      FUN_101369c0("reentrant initC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\core\\src\\cell\\once.rs"
                   ,0x1d,&PTR_s_C__Users_runneradmin__cargo_regi_1013f3c8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    iStack_68 = -1;
    FUN_10003bb0(&iStack_68);
  }
  while( true ) {
    FUN_100534d0(&iStack_68,DAT_1016302c,DAT_10163030);
    if (uStack_64._4_4_ == (PSRWLOCK)0xfffffffd) break;
    uStack_1c = uStack_44;
    uStack_24 = uStack_4c;
    uStack_2c = uStack_54;
    uStack_40 = CONCAT44((undefined4)uStack_64,iStack_68);
    pRStack_38 = uStack_64._4_4_;
    if (uStack_64._4_4_ == (PSRWLOCK)0xfffffffe) {
      pRStack_38 = uStack_64._4_4_;
      FUN_100071e0(local_34);
    }
    else {
      FUN_10005ed0((char *)&uStack_40);
    }
  }
  uVar2 = 0xffffff01;
  LOCK();
  bVar3 = DAT_10163020 == '\x01';
  if (bVar3) {
    DAT_10163020 = '\0';
  }
  else {
    uVar2 = CONCAT31(0xffffff,DAT_10163020);
  }
  UNLOCK();
  if (!bVar3) {
    uVar2 = FUN_10137fb0(&DAT_10163020);
  }
  if (DAT_10163038 != -1) {
    uVar2 = FUN_10005fc0(&DAT_10163038);
  }
  DAT_10163038 = 0xffffffff;
  return uVar2;
}
