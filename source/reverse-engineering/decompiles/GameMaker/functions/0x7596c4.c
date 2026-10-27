// rea decompile_all
// name: FUN_007596c4
// address: 0x7596c4
// body: available
// range: 0x7596c4-0x759730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_007596c4(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int local_14;
  undefined4 local_10;

  local_14 = param_2;
  uVar1 = FUN_007598f0(param_1,param_2);
  local_10 = 0;
  *param_3 = 0;
  iVar2 = FUN_00738d14(*(undefined4 *)(param_1 + 0x20),0xc,&LAB_007596bc,1,&local_14);
  if ((iVar2 != -1) && (uVar1 <= *(uint *)(*(int *)(param_1 + 0x20) + 4 + iVar2 * 0xc))) {
    local_10 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8 + iVar2 * 0xc);
    *param_3 = local_14 - *(int *)(*(int *)(param_1 + 0x20) + 4 + iVar2 * 0xc);
  }
  return local_10;
}
