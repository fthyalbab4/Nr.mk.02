// rea decompile_all
// name: FUN_006f5304
// address: 0x6f5304
// body: available
// range: 0x6f5304-0x6f539f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f5304(void)

{
  int iVar1;
  int iVar2;

  if (DAT_0077f4c4 != 0) {
    if (-1 < DAT_0077f4d8 + -1) {
      iVar1 = 0;
      iVar2 = DAT_0077f4d8;
      do {
        FUN_00405a7c(*(undefined4 *)(DAT_0077f4c4 + iVar1 * 4));
        FUN_00405a7c(*(undefined4 *)(DAT_0077f4c8 + iVar1 * 4));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409ce0(&DAT_0077f4c4,&DAT_006f522c);
    FUN_00409ce0(&DAT_0077f4c8,&DAT_006f5258);
    FUN_00409ce0(&DAT_0077f4cc,&DAT_006f5284);
    FUN_00409ce0(&DAT_0077f4d0,&DAT_006f52b0);
    FUN_00409ce0(&DAT_0077f4d4,&DAT_006f52dc);
    DAT_0077f4d8 = 0;
  }
  DAT_00790170 = 0;
  return;
}
