// rea decompile_all
// name: FUN_00572498
// address: 0x572498
// body: available
// range: 0x572498-0x5724f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572498(void)

{
  int iVar1;
  int iVar2;

  if (DAT_00686ab4 != 0) {
    FUN_00405fdc(DAT_00686ab4);
  }
  DAT_00686ab4 = FUN_0056d9f4(&DAT_0056d730,1);
  FUN_00409dfc(&DAT_0084efb8,&DAT_00572470,1,10000);
  iVar1 = FUN_00409c34(DAT_0084efb8);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      *(undefined1 *)(DAT_0084efb8 + iVar2) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
