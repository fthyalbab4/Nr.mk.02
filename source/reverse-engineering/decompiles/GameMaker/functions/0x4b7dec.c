// rea decompile_all
// name: FUN_004b7dec
// address: 0x4b7dec
// body: available
// range: 0x4b7dec-0x4b7e42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7dec(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;

  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 8);
  if (-1 < iVar2 + -1) {
    unaff_ESI = 0;
    do {
      iVar1 = FUN_0043cd28(*(undefined4 *)(param_1 + 4),unaff_ESI);
      if (*(int *)(iVar1 + 0x24) < 0) break;
      unaff_ESI = unaff_ESI + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0043c8f0(param_1,unaff_ESI != *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 8));
  FUN_004b7cf0();
  return;
}
