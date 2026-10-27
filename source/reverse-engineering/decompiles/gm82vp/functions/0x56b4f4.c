// rea decompile_all
// name: FUN_0056b4f4
// address: 0x56b4f4
// body: available
// range: 0x56b4f4-0x56b599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056b4f4(int param_1)

{
  char cVar1;
  int iVar2;

  cVar1 = FUN_0056b4d0(param_1);
  if (cVar1 != '\0') {
    if (param_1 == DAT_006869b0) {
      FUN_0056b800();
    }
    if (DAT_006869a0 == 0) {
      DAT_006869a0 = FUN_0056c2b0(&LAB_0056aa04,1);
    }
    iVar2 = FUN_00405fac(&DAT_0056a35c,1);
    *(undefined4 *)(iVar2 + 4) = 0x3c;
    FUN_0040b280(iVar2 + 8,*(undefined4 *)(DAT_0084527c + 0x10 + param_1 * 0x14));
    FUN_0056c47c(DAT_006869a0,iVar2);
    FUN_006210d0(*(undefined4 *)(DAT_0084527c + param_1 * 0x14));
    FUN_0040b268(DAT_0084527c + 0x10 + param_1 * 0x14);
    *(undefined4 *)(DAT_0084527c + param_1 * 0x14) = 0xffffffff;
    *(undefined1 *)(DAT_0084527c + 0xc + param_1 * 0x14) = 0;
  }
  return;
}
