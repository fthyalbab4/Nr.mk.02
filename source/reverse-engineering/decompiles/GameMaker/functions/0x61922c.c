// rea decompile_all
// name: FUN_0061922c
// address: 0x61922c
// body: available
// range: 0x61922c-0x6192c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00619282) */

void FUN_0061922c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar3;
  int local_14;
  int local_10;

  if ((param_7 == 0) || (-1 < param_7)) {
    FUN_0043f254(param_2,param_2,param_3,param_6,param_7);
  }
  uVar1 = (**(code **)*param_2)();
  iVar3 = extraout_EDX;
  uVar2 = FUN_0043f234(param_2);
  local_14 = uVar1 - uVar2;
  local_10 = (iVar3 - extraout_EDX_00) - (uint)(uVar1 < uVar2);
  if ((param_5 == 0) || (-1 < param_5)) {
    local_14 = FUN_005e188c();
    local_10 = extraout_EDX_01;
  }
  (**(code **)*param_1)(param_1,param_2,param_3,local_14,local_10);
  return;
}
