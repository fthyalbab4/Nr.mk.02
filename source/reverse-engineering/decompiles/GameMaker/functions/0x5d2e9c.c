// rea decompile_all
// name: FUN_005d2e9c
// address: 0x5d2e9c
// body: available
// range: 0x5d2e9c-0x5d2f50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_005d2e9c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int local_14;
  undefined1 local_d;

  if (((param_5 < 0) ||
      (((param_3 < param_5 && (0 < param_4)) || (param_3 < param_4 + param_5 + -1)))) ||
     ((param_4 < 0 || (param_4 + param_5 < 0)))) {
    FUN_0041bfec(&PTR_LAB_004111bc,1,PTR_PTR_00782570);
    param_5 = FUN_00406618();
  }
  if (param_4 == 0) {
    *param_7 = param_5;
    local_d = 0;
  }
  else {
    local_d = 0;
    local_14 = param_4 + param_5 + -1;
    if (param_5 <= local_14) {
      do {
        iVar2 = ((uint)(local_14 - param_5) >> 1) + param_5;
        iVar1 = (**(code **)(*param_6 + 0xc))(param_6,*(undefined4 *)(param_2 + iVar2 * 4),param_8);
        if (iVar1 < 0) {
          param_5 = iVar2 + 1;
        }
        else {
          local_14 = iVar2 + -1;
          if (iVar1 == 0) {
            local_d = 1;
          }
        }
      } while (param_5 <= local_14);
    }
    *param_7 = param_5;
  }
  return local_d;
}
