// rea decompile_all
// name: FUN_10113930
// address: 0x10113930
// body: available
// range: 0x10113930-0x10113a04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10113930(int param_1)

{
  char cVar1;
  code *pcVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  char *pcVar5;
  bool bVar6;
  HANDLE local_1c;
  int iStack_18;
  int *piStack_14;
  code *pcStack_10;

  LOCK();
  pcVar5 = (char *)(param_1 + 0x18);
  *pcVar5 = *pcVar5 + -1;
  UNLOCK();
  if (*pcVar5 != '\0') {
    pcVar5 = (char *)(param_1 + 0x18);
    if (DAT_10163390 == (code *)0x0) {
      pvVar4 = DAT_101631bc;
      if (DAT_101631bc == (HANDLE)0xffffffff) {
        local_1c = (HANDLE)0xffffffff;
        iStack_18 = (*(code *)PTR_FUN_101631a4)(&local_1c,0xc0000000,0,0);
        if (iStack_18 != 0) {
          piStack_14 = &iStack_18;
          pcStack_10 = FUN_1009c910;
          FUN_101369c0(&DAT_10158e08,&piStack_14,&PTR_s_C__Users_runneradmin__rustup_too_10158ec8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        LOCK();
        bVar6 = DAT_101631bc == (HANDLE)0xffffffff;
        pvVar3 = DAT_101631bc;
        if (bVar6) {
          DAT_101631bc = local_1c;
          pvVar3 = (HANDLE)0xffffffff;
        }
        UNLOCK();
        pvVar4 = local_1c;
        if (!bVar6) {
          CloseHandle(local_1c);
          pvVar4 = pvVar3;
        }
      }
      (*(code *)PTR_FUN_101631ac)(pvVar4,pcVar5,0,0);
      LOCK();
      *pcVar5 = '\0';
      UNLOCK();
    }
    else {
      do {
        if (DAT_10163390 == (code *)0x0) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10158cc8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        (*DAT_10163390)(pcVar5,&DAT_10157460,1,0xffffffff);
        LOCK();
        cVar1 = *pcVar5;
        if (cVar1 == '\x01') {
          *pcVar5 = '\0';
        }
        UNLOCK();
      } while (cVar1 != '\x01');
    }
  }
  return;
}
