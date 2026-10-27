// rea decompile_all
// name: FUN_005724f8
// address: 0x5724f8
// body: available
// range: 0x5724f8-0x57257c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005724f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = param_1 + -100000;
  if (-1 < iVar3) {
    iVar1 = FUN_00409c34(DAT_0084efb8);
    if (iVar1 <= iVar3) {
      iVar1 = FUN_00409c34(DAT_0084efb8);
      FUN_00409dfc(&DAT_0084efb8,&DAT_00572470,1,param_1 + -99000);
      iVar2 = FUN_00409c34(DAT_0084efb8);
      if (iVar1 <= iVar2 + -1) {
        iVar2 = ((iVar2 + -1) - iVar1) + 1;
        do {
          *(undefined1 *)(DAT_0084efb8 + iVar1) = 0;
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    *(undefined1 *)(DAT_0084efb8 + iVar3) = 1;
    FUN_0056dddc(DAT_00686ab4,param_1);
  }
  return;
}
