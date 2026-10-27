// rea decompile_all
// name: FUN_004abfac
// address: 0x4abfac
// body: available
// range: 0x4abfac-0x4abff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abfac(int param_1)

{
  int iVar1;

  if ((PTR_DAT_00689688[0xd] != '\0') && (*(char *)(param_1 + 0x41) != '\0')) {
    iVar1 = FUN_004a4fe8(param_1 + 0x60);
    if (iVar1 == 0) {
      FUN_004ab53c(param_1,*(undefined1 *)(*(int *)PTR_DAT_0068917c + 0x35));
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
    else {
      FUN_004ab53c(param_1,*(undefined1 *)(iVar1 + 0x61));
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
  return;
}
