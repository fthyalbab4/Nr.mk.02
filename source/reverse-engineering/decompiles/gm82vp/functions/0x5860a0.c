// rea decompile_all
// name: FUN_005860a0
// address: 0x5860a0
// body: available
// range: 0x5860a0-0x5860dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005860a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = -100;
  if (-1 < DAT_00686b0c + -1) {
    iVar3 = 0;
    iVar2 = DAT_00686b0c;
    do {
      iVar1 = FUN_005759e4(*(undefined4 *)(DAT_00686b08 + iVar3 * 4),param_1);
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 0x14);
      }
      if (-1 < iVar4) {
        return iVar4;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}
