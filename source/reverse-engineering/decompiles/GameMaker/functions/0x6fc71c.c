// rea decompile_all
// name: FUN_006fc71c
// address: 0x6fc71c
// body: available
// range: 0x6fc71c-0x6fc7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fc71c(void)

{
  int iVar1;
  int iVar2;

  if (DAT_0077f4fc != 0) {
    if (-1 < DAT_0077f50c + -1) {
      iVar1 = 0;
      iVar2 = DAT_0077f50c;
      do {
        FUN_00405a7c(*(undefined4 *)(DAT_0077f4fc + iVar1 * 4));
        FUN_00405a7c(*(undefined4 *)(DAT_0077f500 + iVar1 * 4));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409ce0(&DAT_0077f4fc,&DAT_006fc680);
    FUN_00409ce0(&DAT_0077f500,&DAT_006fc6a8);
    FUN_00409ce0(&DAT_0077f504,&DAT_006fc6d0);
    FUN_00409ce0(&DAT_0077f508,&DAT_006fc6f8);
    DAT_0077f50c = 0;
  }
  DAT_00790190 = 0;
  return;
}
