// rea decompile_all
// name: FUN_00407100
// address: 0x407100
// body: available
// range: 0x407100-0x407204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4071ee to 0x4025b8 KERNEL32.DLL::ExitProcess (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407100(void)

{
  HMODULE hLibModule;
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;

  bVar6 = 0;
  if (DAT_0067c004 != 0) {
    FUN_00406fe0();
    FUN_00407070();
    DAT_0067c004 = 0;
  }
  if ((DAT_0068cb20 != 0) && (DVar2 = GetCurrentThreadId(), DVar2 == DAT_0068cb48)) {
    FUN_00406d20(&DAT_0068cb1c);
    FUN_00407044(&DAT_0068cb1c);
  }
  pcVar1 = DAT_0068a050;
  if (DAT_0068cb14 == 0) {
    while (DAT_0068a050 = pcVar1, pcVar1 != (code *)0x0) {
      DAT_0068a050 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_0068a050;
    }
  }
  while( true ) {
    if ((DAT_0068cb14 == 2) && (DAT_0067c000 == 0)) {
      DAT_0068caf8 = 0;
    }
    FUN_00406d48();
    if (((DAT_0068cb14 < 2) || (DAT_0067c000 != 0)) && (DAT_0068cafc != 0)) {
      FUN_0040b1f8(DAT_0068cafc);
      hLibModule = *(HMODULE *)(DAT_0068cafc + 0x10);
      if ((hLibModule != *(HMODULE *)(DAT_0068cafc + 4)) && (hLibModule != (HMODULE)0x0)) {
        FreeLibrary(hLibModule);
      }
    }
    FUN_00406d20(&DAT_0068caec);
    if (DAT_0068cb14 == 1) {
      (*DAT_0068cb10)();
    }
    if (DAT_0068cb14 != 0) {
      FUN_00407044(&DAT_0068caec);
    }
    if (DAT_0068caec == (undefined4 *)0x0) break;
    puVar4 = DAT_0068caec;
    puVar5 = &DAT_0068caec;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  if (DAT_0068a030 != (code *)0x0) {
    (*DAT_0068a030)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_0067c000);
}
