// rea decompile_all
// name: FUN_00511d30
// address: 0x511d30
// body: available
// range: 0x511d30-0x511dd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00511d30(int param_1)

{
  if (DAT_0068fda8 == '\0') {
    if (DAT_006840ac == 0) {
      FUN_0051162c(DAT_0068fda4,1);
    }
    if (((-1 < param_1) && (param_1 < DAT_006840b4)) &&
       (*(char *)(DAT_0068fda0 + param_1 * 0x14) != '\0')) {
      FUN_005121b0(param_1);
      if (*(int *)(DAT_0068fda0 + 8 + param_1 * 0x14) != 0) {
        (**(code **)(**(int **)(DAT_0068fda0 + 8 + param_1 * 0x14) + 0x78))();
        (**(code **)(*DAT_006840b0 + 0x34))();
        (**(code **)(*DAT_006840b0 + 0x30))();
      }
      *(undefined1 *)(DAT_0068fda0 + param_1 * 0x14) = 0;
      FUN_0040b268(DAT_0068fda0 + 8 + param_1 * 0x14);
      FUN_0040b268(DAT_0068fda0 + 0xc + param_1 * 0x14);
    }
  }
  return;
}
