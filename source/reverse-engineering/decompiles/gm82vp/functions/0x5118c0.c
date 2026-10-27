// rea decompile_all
// name: FUN_005118c0
// address: 0x5118c0
// body: available
// range: 0x5118c0-0x51195e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005118c0(void)

{
  char cVar1;

  if (DAT_006840ac != (int *)0x0) {
    FUN_00511dd8();
    if (DAT_006840ac != (int *)0x0) {
      (**(code **)(*DAT_006840ac + 0x98))();
    }
    FUN_0040b268(&DAT_006840ac);
    FUN_0040b268(&DAT_006840b0);
    if (DAT_006840b8 == 0) {
      return 0;
    }
    cVar1 = FUN_00510ce8(DAT_006840b8);
    if (cVar1 == '\x02') {
      FUN_0050fe40(DAT_006840b8);
    }
    FUN_0050fb8c(DAT_006840b8);
    FUN_00405fdc(DAT_006840b8);
    DAT_006840b8 = 0;
    FUN_004847fc(DAT_006840bc,0);
    FUN_00405fdc(DAT_006840bc);
    DAT_006840bc = 0;
  }
  return 1;
}
