// rea decompile_all
// name: FUN_005f96f8
// address: 0x5f96f8
// body: available
// range: 0x5f96f8-0x5f973b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f96f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  uVar2 = FUN_005e30b0(*(undefined4 *)(param_1 + 4),iVar1);
  uVar2 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x58))(*(int **)PTR_DAT_007826d0,uVar2);
  if (param_2 < 0) {
    FUN_005f9018(param_1,4);
  }
  return uVar2;
}
