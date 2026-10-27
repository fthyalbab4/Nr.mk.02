// rea decompile_all
// name: FUN_0064ea0c
// address: 0x64ea0c
// body: available
// range: 0x64ea0c-0x64ea9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0064ea0c(void)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_0064ee10();
  if (DAT_0077f2a4 != (int *)0x0) {
    (**(code **)(*DAT_0077f2a4 + 0x98))();
  }
  FUN_0040b140(&DAT_0077f2a4);
  FUN_0040b140(&DAT_0077f2a8);
  if (DAT_0077f2b0 != 0) {
    cVar1 = FUN_005ad734(DAT_0077f2b0);
    if (cVar1 == '\x02') {
      FUN_005ac88c(DAT_0077f2b0);
    }
    FUN_005ac5d8(DAT_0077f2b0);
    FUN_00405a7c(DAT_0077f2b0);
    DAT_0077f2b0 = 0;
    FUN_0048e1e4(DAT_0077f2b4,0);
    FUN_00405a7c(DAT_0077f2b4);
    DAT_0077f2b4 = 0;
    uVar2 = 1;
  }
  return uVar2;
}
