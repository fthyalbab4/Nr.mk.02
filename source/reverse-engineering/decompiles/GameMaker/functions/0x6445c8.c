// rea decompile_all
// name: FUN_006445c8
// address: 0x6445c8
// body: available
// range: 0x6445c8-0x64460e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006445c8(int param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0x10;
  piVar1 = &DAT_0078a110;
  do {
    if (*piVar1 != 0) {
      FUN_00405a7c();
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_0078a150 = 0;
  DAT_0078a154 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x740) = 0;
  *(undefined1 *)(param_1 + 0x741) = 0;
  return;
}
