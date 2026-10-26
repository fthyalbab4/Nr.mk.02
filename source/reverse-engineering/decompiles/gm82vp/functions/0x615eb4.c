// rea decompile_all
// name: FUN_00615eb4
// address: 0x615eb4
// body: available
// range: 0x615eb4-0x615f3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615eb4(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = param_2[10];
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00615eb4(param_1,*(int *)param_2[0xb] + iVar2 * 0x38);
      if (*PTR_PTR_00688e10 != '\0') {
        return;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*param_2 == 0x1d) {
    FUN_00615ba8(param_1,param_2);
  }
  if (*param_2 == 7) {
    FUN_00615c10(param_1,param_2);
  }
  if (*param_2 == 7) {
    FUN_00615c78(param_1,param_2);
  }
  if (*param_2 == 0x3f2) {
    FUN_00615d20(param_1,param_2);
  }
  if (*param_2 == 0x3f3) {
    FUN_00615d98(param_1,param_2);
  }
  return;
}
