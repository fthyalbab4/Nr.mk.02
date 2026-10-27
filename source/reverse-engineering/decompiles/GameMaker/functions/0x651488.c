// rea decompile_all
// name: FUN_00651488
// address: 0x651488
// body: available
// range: 0x651488-0x6514e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651488(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  if ((*(char *)(param_1 + 0x3fc) == '\0') &&
     (iVar1 = *(int *)(param_1 + 1000),
     (float)*(int *)(*(int *)(param_1 + 0x3d4) + 0x290) / 100.0 != (float)*(double *)(iVar1 + 0x18))
     ) {
    FUN_0064fb1c(iVar1,iVar1,param_3,
                 (double)((float)*(int *)(*(int *)(param_1 + 0x3d4) + 0x290) / 100.0));
    FUN_00652468(*(undefined4 *)(param_1 + 0x3f8));
    *(undefined1 *)(param_1 + 0x3f4) = 1;
  }
  return;
}
