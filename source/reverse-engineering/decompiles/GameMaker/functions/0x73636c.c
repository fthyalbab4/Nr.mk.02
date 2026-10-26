// rea decompile_all
// name: FUN_0073636c
// address: 0x73636c
// body: available
// range: 0x73636c-0x7363e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0073636c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;

  uVar1 = (**(code **)*param_1)();
  uVar2 = FUN_0043f234(param_1);
  iVar3 = (extraout_EDX - extraout_EDX_00) - (uint)(uVar1 < uVar2);
  if ((int)param_3 >> 0x1f == iVar3) {
    if (uVar1 - uVar2 < param_3) {
      return 0;
    }
  }
  else if (iVar3 < (int)param_3 >> 0x1f) {
    return 0;
  }
  iVar3 = FUN_0043f234(param_1,uVar1 - uVar2);
  FUN_0040450c(param_2,iVar3 + param_1[1],param_3);
  FUN_0043f234(param_1);
  FUN_0043f254(param_1);
  return param_3;
}
