// rea decompile_all
// name: FUN_006bcff8
// address: 0x6bcff8
// body: available
// range: 0x6bcff8-0x6bd082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bcff8(void)

{
  int iVar1;
  int iVar2;

  if (-1 < DAT_0077f3f8 + -1) {
    iVar1 = 0;
    iVar2 = DAT_0077f3f8;
    do {
      FUN_00405a7c(*(undefined4 *)(DAT_0077f3f4 + iVar1 * 4));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00409be0(&DAT_0077f3f4,&DAT_006bc93c,1,DAT_0077f404);
  DAT_0077f3f8 = DAT_0077f404;
  if (-1 < DAT_0077f404 + -1) {
    iVar1 = 0;
    iVar2 = DAT_0077f404;
    do {
      *(undefined4 *)(DAT_0077f3f4 + iVar1 * 4) = *(undefined4 *)(DAT_0077f400 + iVar1 * 4);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_00790058 = 1;
  DAT_00790060 = DAT_00790068;
  DAT_00790064 = DAT_0079006c;
  return;
}
