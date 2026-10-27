// rea decompile_all
// name: FUN_00419704
// address: 0x419704
// body: available
// range: 0x419704-0x419747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419704(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;

  iVar1 = 0x100 - *(int *)(param_4 + -0x204);
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  if (iVar1 != 0) {
    FUN_00404514(param_1,param_4 + -0x200 + *(int *)(param_4 + -0x204) * 2,iVar1 * 2);
  }
  *(int *)(param_4 + -0x204) = *(int *)(param_4 + -0x204) + iVar1;
  return;
}
