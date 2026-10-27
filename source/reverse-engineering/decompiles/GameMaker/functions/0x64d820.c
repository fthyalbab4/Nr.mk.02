// rea decompile_all
// name: FUN_0064d820
// address: 0x64d820
// body: available
// range: 0x64d820-0x64d8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d820(void)

{
  int iVar1;
  int iVar2;

  if (DAT_0077f1ac != 0) {
    if (-1 < DAT_0077f1c0 + -1) {
      iVar1 = 0;
      iVar2 = DAT_0077f1c0;
      do {
        FUN_00405a7c(*(undefined4 *)(DAT_0077f1ac + iVar1 * 4));
        FUN_00405a7c(*(undefined4 *)(DAT_0077f1b0 + iVar1 * 4));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409ce0(&DAT_0077f1ac,&DAT_0064d734);
    FUN_00409ce0(&DAT_0077f1b0,&DAT_0064d764);
    FUN_00409ce0(&DAT_0077f1b4,&DAT_0064d794);
    FUN_00409ce0(&DAT_0077f1b8,&DAT_0064d7c4);
    FUN_00409ce0(&DAT_0077f1bc,&DAT_0064d7f4);
    DAT_0077f1c0 = 0;
  }
  DAT_0078a168 = 0;
  return;
}
