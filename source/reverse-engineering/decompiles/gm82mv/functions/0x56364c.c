// rea decompile_all
// name: FUN_0056364c
// address: 0x56364c
// body: available
// range: 0x56364c-0x563741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056364c(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5
                 )

{
  uint uVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  uint local_34;
  uint local_1c;

  if ((char)PTR_FUN_00686410 != '\0') {
    return;
  }
  if (_DAT_00686408 <= 0.0) {
    return;
  }
  uVar1 = *param_3 - _DAT_00686414;
  local_1c = FUN_004048b8();
  if ((int)uVar1 >> 0x1f == extraout_EDX) {
    if (local_1c < uVar1) {
LAB_005636b6:
      local_1c = uVar1;
    }
  }
  else if (extraout_EDX < (int)uVar1 >> 0x1f) goto LAB_005636b6;
  *param_3 = local_1c + _DAT_00686414;
  local_34 = *param_5 - _DAT_00686418;
  uVar1 = FUN_004048b8();
  if ((int)local_34 >> 0x1f == extraout_EDX_00) {
    if (uVar1 < local_34) goto LAB_0056372f;
  }
  else if (extraout_EDX_00 < (int)local_34 >> 0x1f) goto LAB_0056372f;
  local_34 = uVar1;
LAB_0056372f:
  *param_5 = local_34 + _DAT_00686418;
  return;
}
