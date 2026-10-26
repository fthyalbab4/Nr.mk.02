// rea decompile_all
// name: FUN_0060d0ac
// address: 0x60d0ac
// body: available
// range: 0x60d0ac-0x60d111 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060d0ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;

  if (*(double *)(param_1 + 0x80) != (double)CONCAT44(param_5,param_4)) {
    *(undefined4 *)(param_1 + 0x80) = param_4;
    *(undefined4 *)(param_1 + 0x84) = param_5;
    iVar1 = FUN_004102e4();
    *(double *)(param_1 + 0x80) = *(double *)(param_1 + 0x80) - (double)(iVar1 * 0x168);
    FUN_0060ce50(param_1);
  }
  return;
}
