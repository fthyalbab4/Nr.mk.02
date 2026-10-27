// rea decompile_all
// name: FUN_00614ef4
// address: 0x614ef4
// body: available
// range: 0x614ef4-0x614f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00614ef4(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;

  iVar1 = param_3 + 1;
  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar1 * 0x28));
  *param_4 = 0x1c;
  if (*(int *)(*(int *)(param_2 + 4) + iVar1 * 0x28) == 0x71) {
    iVar1 = param_3 + 2;
  }
  else {
    FUN_00610d7c(param_1,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + iVar1 * 0x28),
                 L"Symbol : expected.");
  }
  return iVar1;
}
