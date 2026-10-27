// rea decompile_all
// name: FUN_0056b8e8
// address: 0x56b8e8
// body: available
// range: 0x56b8e8-0x56b950 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056b8e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  char cVar1;
  undefined4 extraout_ECX;

  cVar1 = FUN_0056b4d0(param_1);
  if (cVar1 != '\0') {
    FUN_00621974(*(undefined4 *)(DAT_0084527c + param_1 * 0x14),param_2,extraout_ECX,param_4,param_5
                 ,(double)((_DAT_0056b954 * (float10)param_6) / (float10)180.0),param_7,param_8,
                 param_9,param_10,param_11,param_12,param_13,param_14,0,0,0,0);
  }
  return;
}
