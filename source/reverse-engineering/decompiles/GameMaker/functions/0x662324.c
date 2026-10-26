// rea decompile_all
// name: FUN_00662324
// address: 0x662324
// body: available
// range: 0x662324-0x6623b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662324(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;

  if ((*(char *)(*(int *)(param_4 + -4) + 0x2e8) != '\0') &&
     (*(int *)(*(int *)(*param_1 + 0x44) + 0x44) == -0x7fffffff)) {
    if (*(char *)(param_4 + -5) == '\0') {
      iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x304);
      if (*(char *)(iVar1 + 0x59) == '\0') {
        FUN_006684b8(*(undefined4 *)(param_4 + -4));
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x300);
      if (*(char *)(iVar1 + 0x59) == '\0') {
        FUN_006686cc(*(undefined4 *)(param_4 + -4),0);
      }
    }
    do {
      if (*(int *)(*(int *)(*param_1 + 0x44) + 0x44) != -0x7fffffff) {
        return;
      }
      FUN_00405d08(iVar1);
    } while (*(char *)(iVar1 + 0x59) != '\0');
  }
  return;
}
