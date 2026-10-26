// rea decompile_all
// name: FUN_00520798
// address: 0x520798
// body: available
// range: 0x520798-0x5207ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00520798(undefined4 param_1,uint param_2,byte param_3,undefined1 *param_4,undefined1 *param_5,
            undefined1 *param_6,byte param_7)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = (param_2 & 0xff) * 0x4d;
  if ((uint)param_7 * 0x1d + (uint)param_3 * 0x96 + iVar1 < 0x7f01) {
    uVar2 = 0;
    *param_6 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *param_6 = 0xff;
    *param_5 = 0xff;
    *param_4 = 0xff;
  }
  return uVar2;
}
