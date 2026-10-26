// rea decompile_all
// name: FUN_00406c64
// address: 0x406c64
// body: available
// range: 0x406c64-0x406d68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406d52 to 0x4025b0 KERNEL32.DLL::ExitProcess (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406c64(void)

{
  HMODULE hLibModule;
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;

  bVar6 = 0;
  if (DAT_00773004 != 0) {
    FUN_00406b44();
    FUN_00406bd4();
    DAT_00773004 = 0;
  }
  if ((DAT_00785b20 != 0) && (DVar2 = GetCurrentThreadId(), DVar2 == DAT_00785b48)) {
    FUN_00406884(&DAT_00785b1c);
    FUN_00406ba8(&DAT_00785b1c);
  }
  pcVar1 = DAT_00783050;
  if (DAT_00785b14 == 0) {
    while (DAT_00783050 = pcVar1, pcVar1 != (code *)0x0) {
      DAT_00783050 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_00783050;
    }
  }
  while( true ) {
    if ((DAT_00785b14 == 2) && (DAT_00773000 == 0)) {
      DAT_00785af8 = 0;
    }
    FUN_004068ac();
    if (((DAT_00785b14 < 2) || (DAT_00773000 != 0)) && (DAT_00785afc != 0)) {
      FUN_0040b0d0(DAT_00785afc);
      hLibModule = *(HMODULE *)(DAT_00785afc + 0x10);
      if ((hLibModule != *(HMODULE *)(DAT_00785afc + 4)) && (hLibModule != (HMODULE)0x0)) {
        FreeLibrary(hLibModule);
      }
    }
    FUN_00406884(&DAT_00785aec);
    if (DAT_00785b14 == 1) {
      (*DAT_00785b10)();
    }
    if (DAT_00785b14 != 0) {
      FUN_00406ba8(&DAT_00785aec);
    }
    if (DAT_00785aec == (undefined4 *)0x0) break;
    puVar4 = DAT_00785aec;
    puVar5 = &DAT_00785aec;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  if (DAT_00783030 != (code *)0x0) {
    (*DAT_00783030)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00773000);
}
