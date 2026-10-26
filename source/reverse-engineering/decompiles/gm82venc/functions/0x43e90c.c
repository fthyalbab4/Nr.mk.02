// rea decompile_all
// name: FUN_0043e90c
// address: 0x43e90c
// body: available
// range: 0x43e90c-0x43e945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e90c(int param_1)

{
  int iVar1;

  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    FUN_0041be80(&LAB_0042d618,1,PTR_LAB_00689488);
    FUN_00406ab4();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
