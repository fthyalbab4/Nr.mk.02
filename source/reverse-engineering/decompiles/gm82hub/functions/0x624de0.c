// rea decompile_all
// name: FUN_00624de0
// address: 0x624de0
// body: available
// range: 0x624de0-0x624e6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624de0(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined1 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,undefined4 param_23)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    param_2 = param_2 % iVar1;
    if (param_2 < 0) {
      param_2 = param_2 + iVar1;
    }
    FUN_00622438(*(undefined4 *)(*(int *)(param_1 + 0x2c) + param_2 * 4),param_3,param_15,param_4,
                 param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                 param_14,param_16,param_17,param_18,param_19,param_20,param_21,param_22,param_23,
                 (double)*(int *)(param_1 + 0x10),(double)*(int *)(param_1 + 0xc));
  }
  return;
}
