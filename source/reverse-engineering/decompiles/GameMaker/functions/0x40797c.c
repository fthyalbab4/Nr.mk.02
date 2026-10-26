// rea decompile_all
// name: FUN_0040797c
// address: 0x40797c
// body: available
// range: 0x40797c-0x4079d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4079a3 to 0x405470 FUN_00405470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040797c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;

  local_c = 0;
  if (param_2 != 0) {
    local_c = *(int *)(param_2 + -4);
    param_3 = param_3 - local_c;
  }
  uVar2 = FUN_004054c4(param_1,param_3);
  iVar1 = local_c;
  if ((param_2 != 0) && (*(short *)(param_2 + -10) != 1)) {
    local_c = 0;
    FUN_0040810c(&local_c,param_2,_DAT_007838d0);
    FUN_00405470(uVar2,local_c,iVar1);
    FUN_00406e5c(&stack0xfffffff8);
    return uVar2;
  }
  uVar2 = FUN_00405470(uVar2,param_2);
  return uVar2;
}
