// rea decompile_all
// name: FUN_00696744
// address: 0x696744
// body: available
// range: 0x696744-0x6967b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00696744(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;

  FUN_0052f12c(param_1,800);
  FUN_0052f12c(param_1,DAT_0077f3c4);
  if (-1 < DAT_0077f3c4 + -1) {
    iVar1 = 0;
    iVar2 = DAT_0077f3c4;
    do {
      FUN_0052f168(param_1,*(undefined4 *)(DAT_0078c14c + iVar1 * 4));
      FUN_0052f168(param_1,*(undefined4 *)(DAT_0078c150 + iVar1 * 4));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 == '\0') {
    FUN_0052f140(param_1);
  }
  return 1;
}
