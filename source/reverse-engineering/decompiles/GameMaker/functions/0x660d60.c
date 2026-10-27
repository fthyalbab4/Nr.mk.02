// rea decompile_all
// name: FUN_00660d60
// address: 0x660d60
// body: available
// range: 0x660d60-0x660df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00660d60(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x33c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x310) = 0;
    FUN_00663240(iVar1,0);
  }
  if (*(int *)(param_1 + 0x324) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x324) + 0x30c) = 0;
  }
  *(undefined1 *)(param_1 + 0x31a) = 0;
  iVar1 = *(int *)(param_1 + 0x33c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 900) != 0)) {
    iVar1 = FUN_00660100(*(undefined4 *)(iVar1 + 900));
    if (iVar1 == *(int *)(param_1 + 0x33c)) {
      *(undefined1 *)(param_1 + 0x31a) = 0;
      iVar1 = FUN_006619bc(param_1);
      if (iVar1 != 0) {
        iVar1 = FUN_006619bc(param_1);
        (**(code **)(**(int **)(iVar1 + 0x44) + 0xf4))(*(int **)(iVar1 + 0x44),0);
      }
    }
    else {
      FUN_0066010c(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 900));
    }
  }
  return;
}
