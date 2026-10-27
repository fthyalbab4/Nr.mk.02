// rea decompile_all
// name: FUN_00462be8
// address: 0x462be8
// body: available
// range: 0x462be8-0x462c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00462be8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_004623c8(param_1,param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((param_2 < 0) || (*(int *)(iVar1 + 0x20) <= param_2)) {
    FUN_0045d0b4(PTR_PTR_007824d8);
  }
  FUN_00462e7c(param_1);
  GdiFlush();
  if (0 < *(int *)(iVar1 + 0x38)) {
    param_2 = (*(int *)(iVar1 + 0x38) - param_2) + -1;
  }
  iVar2 = FUN_0045d394(*(undefined4 *)(iVar1 + 0x34),*(undefined2 *)(iVar1 + 0x3e),0x20);
  return iVar2 * param_2 + *(int *)(iVar1 + 0x2c);
}
