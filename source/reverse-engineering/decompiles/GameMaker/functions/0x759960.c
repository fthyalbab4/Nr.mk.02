// rea decompile_all
// name: FUN_00759960
// address: 0x759960
// body: available
// range: 0x759960-0x7599e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00759960(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int local_8;

  local_8 = param_2;
  uVar1 = FUN_007598f0(param_1,param_2);
  FUN_00407eb8(param_4,0);
  *param_3 = 0;
  iVar2 = FUN_00738d14(param_1[9],0xc,&LAB_00759958,1,&local_8);
  if ((iVar2 != -1) && (uVar1 <= *(uint *)(param_1[9] + 4 + iVar2 * 0xc))) {
    FUN_00758c60(*param_1,*(undefined4 *)(param_1[9] + 8 + iVar2 * 0xc),1,param_4);
    *param_3 = local_8 - *(int *)(param_1[9] + 4 + iVar2 * 0xc);
  }
  return;
}
