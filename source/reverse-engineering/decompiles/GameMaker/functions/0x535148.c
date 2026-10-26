// rea decompile_all
// name: FUN_00535148
// address: 0x535148
// body: available
// range: 0x535148-0x535188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535148(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;

  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0x3ff00000;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x18);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
  }
  return;
}
