// rea decompile_all
// name: FUN_00624b78
// address: 0x624b78
// body: available
// range: 0x624b78-0x624bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00624b78(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 double param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    param_2 = param_2 % iVar1;
    if (param_2 < 0) {
      param_2 = param_2 + iVar1;
    }
    FUN_00621974(*(undefined4 *)(*(int *)(param_1 + 0x2c) + param_2 * 4),param_3,param_3,param_4,
                 param_5,(double)((_DAT_00624bf8 * (float10)param_6) / (float10)180.0),param_7,
                 param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                 (double)*(int *)(param_1 + 0x10),(double)*(int *)(param_1 + 0xc));
  }
  return;
}
