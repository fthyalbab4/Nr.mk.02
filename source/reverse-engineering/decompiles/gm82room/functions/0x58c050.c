// rea decompile_all
// name: FUN_0058c050
// address: 0x58c050
// body: available
// range: 0x58c050-0x58c0f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058c050(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  char cVar1;

  cVar1 = FUN_0058ba8c(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(DAT_00686b28 + 0xcc + param_1 * 0x120) = 3;
    *(double *)(DAT_00686b28 + 0xd0 + param_1 * 0x120) = (double)param_2;
    *(double *)(DAT_00686b28 + 0xd8 + param_1 * 0x120) = (double)param_3;
    *(double *)(DAT_00686b28 + 0xe0 + param_1 * 0x120) = (double)param_7;
    *(double *)(DAT_00686b28 + 0xe8 + param_1 * 0x120) = (double)param_6;
    *(double *)(DAT_00686b28 + 0xf0 + param_1 * 0x120) = (double)param_5;
    *(double *)(DAT_00686b28 + 0xf8 + param_1 * 0x120) = (double)param_4;
  }
  return;
}
