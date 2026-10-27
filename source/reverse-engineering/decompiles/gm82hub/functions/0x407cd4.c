// rea decompile_all
// name: FUN_00407cd4
// address: 0x407cd4
// body: available
// range: 0x407cd4-0x407d2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407cfb to 0x40582c FUN_0040582c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407cd4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;

  local_c = 0;
  if (param_2 != 0) {
    local_c = *(int *)(param_2 + -4);
    param_3 = param_3 - local_c;
  }
  uVar2 = FUN_00405880(param_1,param_3);
  iVar1 = local_c;
  if ((param_2 != 0) && (*(short *)(param_2 + -10) != 1)) {
    local_c = 0;
    FUN_004083e8(&local_c,param_2,_DAT_0068a8d0);
    FUN_0040582c(uVar2,local_c,iVar1);
    FUN_004072d8(&stack0xfffffff8);
    return uVar2;
  }
  uVar2 = FUN_0040582c(uVar2,param_2);
  return uVar2;
}
