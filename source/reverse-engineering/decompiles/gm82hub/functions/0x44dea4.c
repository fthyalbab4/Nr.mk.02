// rea decompile_all
// name: FUN_0044dea4
// address: 0x44dea4
// body: available
// range: 0x44dea4-0x44df0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0044dea4(undefined4 param_1,undefined4 param_2,undefined2 param_3,double *param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined4 uVar1;
  double local_14;
  undefined2 local_6;

  local_6 = param_3;
  uVar1 = FUN_00419260(param_1,param_2,param_3,param_4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00419118(param_8,param_7,param_6,&local_14,param_5);
    if ((char)uVar1 != '\0') {
      if (*param_4 < 0.0) {
        *param_4 = *param_4 - local_14;
      }
      else {
        *param_4 = *param_4 + local_14;
      }
    }
  }
  return uVar1;
}
