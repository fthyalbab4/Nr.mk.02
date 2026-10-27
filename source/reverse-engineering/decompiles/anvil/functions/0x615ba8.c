// rea decompile_all
// name: FUN_00615ba8
// address: 0x615ba8
// body: available
// range: 0x615ba8-0x615be5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615ba8(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  if ((*param_2 == 0x1d) && (iVar1 = param_2[10], -1 < iVar1 + -1)) {
    iVar2 = 0;
    do {
      (&DAT_00850ec8)[DAT_00688678] = *(undefined4 *)(*(int *)param_2[0xb] + 4 + iVar2 * 0x38);
      DAT_00688678 = DAT_00688678 + 1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
