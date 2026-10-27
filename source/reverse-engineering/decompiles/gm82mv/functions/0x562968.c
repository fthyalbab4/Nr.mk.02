// rea decompile_all
// name: FUN_00562968
// address: 0x562968
// body: available
// range: 0x562968-0x562a35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562968(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21)

{
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if ((&DAT_007118f4)[param_1 * 0x50] == '\0') {
      DAT_0068641c = DAT_0068641c + 1;
    }
    (&DAT_007118f4)[param_1 * 0x50] = 1;
    *(undefined4 *)(&DAT_0071191c + param_1 * 0x50) = param_20;
    *(undefined4 *)(&DAT_00711920 + param_1 * 0x50) = param_21;
    *(undefined4 *)(&DAT_00711924 + param_1 * 0x50) = param_18;
    *(undefined4 *)(&DAT_00711928 + param_1 * 0x50) = param_19;
    *(undefined4 *)(&DAT_0071192c + param_1 * 0x50) = param_16;
    *(undefined4 *)(&DAT_00711930 + param_1 * 0x50) = param_17;
    *(undefined4 *)(&DAT_00711934 + param_1 * 0x50) = param_14;
    *(undefined4 *)(&DAT_00711938 + param_1 * 0x50) = param_15;
    *(undefined4 *)(&DAT_007118fc + param_1 * 0x50) = param_12;
    *(undefined4 *)(&DAT_00711900 + param_1 * 0x50) = param_13;
    *(undefined4 *)(&DAT_00711904 + param_1 * 0x50) = param_10;
    *(undefined4 *)(&DAT_00711908 + param_1 * 0x50) = param_11;
    *(undefined4 *)(&DAT_0071190c + param_1 * 0x50) = param_8;
    *(undefined4 *)(&DAT_00711910 + param_1 * 0x50) = param_9;
    *(undefined4 *)(&DAT_00711914 + param_1 * 0x50) = param_6;
    *(undefined4 *)(&DAT_00711918 + param_1 * 0x50) = param_7;
    *(undefined4 *)(&DAT_0071193c + param_1 * 0x50) = param_4;
    *(undefined4 *)(&DAT_00711940 + param_1 * 0x50) = param_5;
  }
  return;
}
