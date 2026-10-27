// rea decompile_all
// name: FUN_00643e5c
// address: 0x643e5c
// body: available
// range: 0x643e5c-0x643eb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643e5c(void)

{
  char cVar1;
  int iVar2;

  iVar2 = 0;
  FUN_004048b8();
  cVar1 = FUN_005700dc();
  if (cVar1 != '\0') {
    FUN_004048b8();
    FUN_005701d8();
    iVar2 = FUN_0056fe34();
  }
  if (iVar2 == 0) {
    FUN_0061156c(&PTR_DAT_00643ec0,0);
  }
  else {
    FUN_005b5e6c(iVar2);
    FUN_00405fdc(iVar2);
  }
  return;
}
