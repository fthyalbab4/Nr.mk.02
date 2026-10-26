// rea decompile_all
// name: FUN_004e2aec
// address: 0x4e2aec
// body: available
// range: 0x4e2aec-0x4e2b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e2aec(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_004b7b58(*(undefined4 *)(*(int *)(param_2 + 4) + 4));
  if ((iVar1 == 0) || (*(char *)(*(int *)(param_2 + 4) + 8) == '\0')) {
    iVar1 = FUN_00409c34(*(undefined4 *)(param_1 + 0x354));
    FUN_00409dfc(param_1 + 0x354,&DAT_004d8f04,1,iVar1 + 1);
    *(undefined4 *)(*(int *)(param_1 + 0x354) + iVar1 * 8) = **(undefined4 **)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x354) + 4 + iVar1 * 8) = *(undefined4 *)(param_2 + 8);
  }
  return;
}
