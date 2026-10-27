// rea decompile_all
// name: FUN_005b7888
// address: 0x5b7888
// body: available
// range: 0x5b7888-0x5b7a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b7888(int param_1,char param_2,char param_3)

{
  char cVar1;

  cVar1 = FUN_005798a4(*(undefined4 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_005799a0(*(undefined4 *)(param_1 + 8));
    FUN_00623b18();
    FUN_005799a0(*(undefined4 *)(param_1 + 8));
    FUN_00623b30();
  }
  if (param_2 != '\0') {
    if ((*(double *)(param_1 + 0xa8) < 0.0) && (*(double *)(param_1 + 0x50) < 0.0)) {
      FUN_0060ddec(param_1);
    }
    if ((0.0 < *(double *)(param_1 + 0xa8)) &&
       ((double)*(int *)(*(int *)PTR_DAT_0068939c + 0xc) <= *(double *)(param_1 + 0x50))) {
      FUN_0060ddec(param_1);
    }
  }
  if (param_3 != '\0') {
    if ((*(double *)(param_1 + 0xb0) < 0.0) && (*(double *)(param_1 + 0x58) < 0.0)) {
      FUN_0060ddec(param_1);
    }
    if ((0.0 < *(double *)(param_1 + 0xb0)) &&
       ((double)*(int *)(*(int *)PTR_DAT_0068939c + 0x10) <= *(double *)(param_1 + 0x58))) {
      FUN_0060ddec(param_1);
    }
  }
  return;
}
