// rea decompile_all
// name: FUN_00407d2c
// address: 0x407d2c
// body: available
// range: 0x407d2c-0x407dac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00407d2c(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;

  piVar1 = param_1;
  if (param_1 != param_2) {
    if (param_1 == (int *)0x0) {
      piVar1 = (int *)-param_2[-1];
    }
    else if (param_2 == (int *)0x0) {
      piVar1 = (int *)param_1[-1];
    }
    else {
      uVar2 = param_2[-1];
      piVar1 = (int *)(param_1[-1] - uVar2);
      if ((uint)param_1[-1] < uVar2 || piVar1 == (int *)0x0) {
        uVar2 = uVar2 + (int)piVar1;
      }
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 2) {
        if (*param_1 != *param_2) {
          return piVar1;
        }
        if (uVar3 == 1) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          break;
        }
        if (param_1[1] != param_2[1]) {
          return piVar1;
        }
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      }
      if (((uVar2 & 2) == 0) || ((short)*param_1 == (short)*param_2)) {
        piVar1 = (int *)((int)piVar1 * 2);
      }
    }
  }
  return piVar1;
}
