// rea decompile_all
// name: FUN_005683d4
// address: 0x5683d4
// body: available
// range: 0x5683d4-0x5684b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005683d4(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;

  if (param_4 != 0) {
    if (param_4 == -1) {
      if (*param_2 != *param_3) {
        iVar1 = FUN_00404324(*param_3 * 0x24);
        if (0 < *param_3) {
          FUN_00404514(*param_1,iVar1,*param_3 * 0x24);
          FUN_00404340(*param_1);
        }
        *param_2 = *param_3;
        *param_1 = iVar1;
      }
    }
    else if (*param_2 < *param_3 + param_4) {
      if (*param_2 == 0) {
        *param_2 = param_4;
      }
      while (*param_2 < *param_3 + param_4) {
        *param_2 = *param_2 << 1;
      }
      iVar1 = FUN_00404324(*param_2 * 0x24);
      if (*param_1 != 0) {
        FUN_00404514(*param_1,iVar1,*param_3 * 0x24);
        FUN_00404340(*param_1);
      }
      *param_1 = iVar1;
      *param_3 = *param_3 + param_4;
    }
    else {
      *param_3 = *param_3 + param_4;
    }
  }
  return;
}
