// rea decompile_all
// name: FUN_00655154
// address: 0x655154
// body: available
// range: 0x655154-0x6551db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655154(void)

{
  int iVar1;
  int iVar2;

  if (DAT_0077f2cc != 0) {
    if (-1 < DAT_0077f2dc + -1) {
      iVar1 = 0;
      iVar2 = DAT_0077f2dc;
      do {
        FUN_00405a7c(*(undefined4 *)(DAT_0077f2cc + iVar1 * 4));
        FUN_00405a7c(*(undefined4 *)(DAT_0077f2d0 + iVar1 * 4));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409ce0(&DAT_0077f2cc,&DAT_006550a8);
    FUN_00409ce0(&DAT_0077f2d0,&DAT_006550d4);
    FUN_00409ce0(&DAT_0077f2d4,&DAT_00655100);
    FUN_00409ce0(&DAT_0077f2d8,&DAT_0065512c);
    DAT_0077f2dc = 0;
  }
  DAT_0078a1b8 = 0;
  return;
}
