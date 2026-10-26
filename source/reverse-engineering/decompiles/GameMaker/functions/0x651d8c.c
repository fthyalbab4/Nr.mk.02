// rea decompile_all
// name: FUN_00651d8c
// address: 0x651d8c
// body: available
// range: 0x651d8c-0x651e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651d8c(void)

{
  int iVar1;
  int iVar2;

  if (DAT_0077f2b8 != 0) {
    if (-1 < DAT_0077f2c8 + -1) {
      iVar1 = 0;
      iVar2 = DAT_0077f2c8;
      do {
        FUN_00405a7c(*(undefined4 *)(DAT_0077f2b8 + iVar1 * 4));
        FUN_00405a7c(*(undefined4 *)(DAT_0077f2bc + iVar1 * 4));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409ce0(&DAT_0077f2b8,&DAT_00651ce0);
    FUN_00409ce0(&DAT_0077f2bc,&DAT_00651d0c);
    FUN_00409ce0(&DAT_0077f2c0,&DAT_00651d38);
    FUN_00409ce0(&DAT_0077f2c4,&DAT_00651d64);
    DAT_0077f2c8 = 0;
  }
  DAT_0078a1b0 = 0;
  return;
}
