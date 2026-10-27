// rea decompile_all
// name: FUN_0056ff18
// address: 0x56ff18
// body: available
// range: 0x56ff18-0x56ff6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056ff18(void)

{
  int iVar1;
  int iVar2;

  if (DAT_00686a3c != 0) {
    if (-1 < DAT_00686a44 + -1) {
      iVar2 = 0;
      iVar1 = DAT_00686a44;
      do {
        FUN_00405fdc(*(undefined4 *)(DAT_00686a3c + iVar2 * 4));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00409e08(&DAT_00686a3c,&DAT_0056febc);
    FUN_00409e08(&DAT_00686a40,&DAT_0056feec);
    DAT_00686a44 = 0;
  }
  return;
}
