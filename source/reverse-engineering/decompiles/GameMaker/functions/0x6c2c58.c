// rea decompile_all
// name: FUN_006c2c58
// address: 0x6c2c58
// body: available
// range: 0x6c2c58-0x6c2cad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c2c58(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;

  FUN_004ee5c0(DAT_0079007c[0x1cf],*PTR_DAT_0078258c);
  iVar1 = (**(code **)(*DAT_0079007c + 0x110))();
  if (iVar1 == 1) {
    *param_1 = DAT_00790080;
    *param_2 = DAT_00790084;
    return;
  }
  *param_1 = 0xffffffff;
  *param_2 = 0xffffffff;
  return;
}
