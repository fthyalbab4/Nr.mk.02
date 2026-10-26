// rea decompile_all
// name: FUN_0056e4bc
// address: 0x56e4bc
// body: available
// range: 0x56e4bc-0x56e4f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e4bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if ((param_1 != 0) && (iVar4 = *(int *)(param_1 + 8), -1 < iVar4 + -1)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 4);
      if (-1 < iVar2 + -1) {
        iVar1 = 0;
        do {
          *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + (iVar3 * *(int *)(param_1 + 4) + iVar1) * 4)
               = 0xff;
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
