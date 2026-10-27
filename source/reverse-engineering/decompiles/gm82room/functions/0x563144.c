// rea decompile_all
// name: FUN_00563144
// address: 0x563144
// body: available
// range: 0x563144-0x5631df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00563144(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;

  if (DAT_0068641c == 0) {
    FUN_00562768(param_1,param_2,param_3,param_4);
  }
  else {
    iVar2 = 0x1f;
    pcVar1 = &DAT_007122a4;
    do {
      if ((((*pcVar1 != '\0') &&
           (FUN_00562a80(iVar2,param_1,param_2,param_4,param_3),
           *(double *)(pcVar1 + 8) <= (double)*param_3)) &&
          ((double)*param_3 < *(double *)(pcVar1 + 8) + *(double *)(pcVar1 + 0x18))) &&
         ((*(double *)(pcVar1 + 0x10) <= (double)*param_4 &&
          ((double)*param_4 < *(double *)(pcVar1 + 0x10) + *(double *)(pcVar1 + 0x20))))) {
        return;
      }
      iVar2 = iVar2 + -1;
      pcVar1 = pcVar1 + -0x50;
    } while (iVar2 != -1);
  }
  return;
}
