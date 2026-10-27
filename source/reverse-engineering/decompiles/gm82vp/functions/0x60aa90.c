// rea decompile_all
// name: FUN_0060aa90
// address: 0x60aa90
// body: available
// range: 0x60aa90-0x60aad0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0060aa90(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_00409c34(*(undefined4 *)(param_1 + 0x84));
    if (((param_2 < iVar1) && (-1 < param_3)) &&
       (param_3 < *(int *)(*(int *)(param_1 + 0x84) + param_2 * 4))) {
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x80) + param_2 * 4) + param_3 * 4);
    }
  }
  return uVar2;
}
