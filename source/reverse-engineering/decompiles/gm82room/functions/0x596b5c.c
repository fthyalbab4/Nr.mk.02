// rea decompile_all
// name: FUN_00596b5c
// address: 0x596b5c
// body: available
// range: 0x596b5c-0x596ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596b5c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;

  cVar2 = FUN_00596b40(*param_1,param_1[1],*(undefined4 *)(param_4 + -8));
  if (cVar2 == '\0') {
    cVar2 = FUN_00596b40(*param_1,param_1[1],*(undefined4 *)(param_4 + -0x10));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00596b93;
    }
  }
  bVar1 = true;
LAB_00596b93:
  if (bVar1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
  }
  return;
}
