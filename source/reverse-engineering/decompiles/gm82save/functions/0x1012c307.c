// rea decompile_all
// name: ___scrt_acquire_startup_lock
// address: 0x1012c307
// body: available
// range: 0x1012c307-0x1012c338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___scrt_acquire_startup_lock

   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___scrt_acquire_startup_lock(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int unaff_FS_OFFSET;

  bVar3 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x18) + 4);
    while( true ) {
      iVar4 = 0;
      LOCK();
      iVar2 = iVar1;
      if (DAT_101633cc != 0) {
        iVar4 = DAT_101633cc;
        iVar2 = DAT_101633cc;
      }
      DAT_101633cc = iVar2;
      UNLOCK();
      if (iVar4 == 0) break;
      if (iVar1 == iVar4) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
  }
  return 0;
}
