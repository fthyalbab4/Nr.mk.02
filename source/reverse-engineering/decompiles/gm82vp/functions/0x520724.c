// rea decompile_all
// name: FUN_00520724
// address: 0x520724
// body: available
// range: 0x520724-0x520758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520724(undefined4 param_1,uint param_2,uint param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,byte param_7)

{
  undefined1 uVar1;

  uVar1 = (undefined1)
          ((uint)param_7 * 0x1d + (param_3 & 0xff) * 0x96 + (param_2 & 0xff) * 0x4d >> 8);
  *param_6 = uVar1;
  *param_5 = uVar1;
  *param_4 = uVar1;
  return;
}
