// rea decompile_all
// name: FUN_0055b8d8
// address: 0x55b8d8
// body: available
// range: 0x55b8d8-0x55b920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0055b8d8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;

  if (param_2 < 5) {
    *param_1 = param_2;
    iVar1 = 0;
    piVar2 = param_1;
    if (0 < param_2) {
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    param_1 = param_1 + 9;
  }
  else {
    param_1 = (int *)FUN_0055b89c(param_1,param_2,0,param_4,param_3,0);
  }
  return param_1;
}
