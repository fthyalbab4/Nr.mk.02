// rea decompile_all
// name: FUN_00562c74
// address: 0x562c74
// body: available
// range: 0x562c74-0x562e21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562c74(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_004048b8();
  *param_2 = uVar1;
  uVar1 = FUN_004048b8();
  *param_3 = uVar1;
  if (((-1 < param_1) && (param_1 < 0x20)) && ((&DAT_007118f4)[param_1 * 0x50] != '\0')) {
    param_1 = param_1 * 0x50;
    if ((*(double *)(&DAT_0071190c + param_1) != 0.0) &&
       (*(double *)(&DAT_00711914 + param_1) != 0.0)) {
      if (_DAT_00562e28 <= ABS((float10)*(double *)(&DAT_0071193c + param_1))) {
        FUN_00404864();
        FUN_00404874();
        uVar1 = FUN_004048b8();
        *param_2 = uVar1;
        FUN_00404874();
        FUN_00404864();
        uVar1 = FUN_004048b8();
        *param_3 = uVar1;
      }
      else {
        uVar1 = FUN_004048b8();
        *param_2 = uVar1;
        uVar1 = FUN_004048b8();
        *param_3 = uVar1;
      }
    }
  }
  return;
}
