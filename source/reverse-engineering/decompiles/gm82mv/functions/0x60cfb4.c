// rea decompile_all
// name: FUN_0060cfb4
// address: 0x60cfb4
// body: available
// range: 0x60cfb4-0x60d031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060cfb4(int param_1,undefined4 param_2)

{
  int iVar1;

  *(undefined4 *)(param_1 + 0xcc) = param_2;
  iVar1 = FUN_00571fac(param_2);
  *(int *)(param_1 + 0xd0) = iVar1;
  if (iVar1 != 0) {
    FUN_0060cf60(param_1,*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x18);
    *(double *)(param_1 + 0x48) = (double)*(int *)(*(int *)(param_1 + 0xd0) + 0xc);
    *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(*(int *)(param_1 + 0xd0) + 8);
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(*(int *)(param_1 + 0xd0) + 9);
    *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x10);
    FUN_0060c7c8(param_1);
  }
  return;
}
