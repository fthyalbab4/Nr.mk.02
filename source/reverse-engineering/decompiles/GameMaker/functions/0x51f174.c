// rea decompile_all
// name: FUN_0051f174
// address: 0x51f174
// body: available
// range: 0x51f174-0x51f1f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f174(int param_1,int *param_2)

{
  int iVar1;
  WCHAR local_20c [256];
  int local_c;

  if ((*(char *)(param_1 + 0xac) == '\0') || (*(char *)(param_1 + 0xd3) != '\0')) {
    FUN_00407eb8(param_2,*(undefined4 *)(param_1 + 0x8c));
  }
  else {
    iVar1 = GetWindowTextW(*(HWND *)(param_1 + 0x170),local_20c,0x100);
    FUN_00407ff4(param_2,local_20c,iVar1);
    local_c = *param_2;
    iVar1 = 0;
    if (local_c != 0) {
      iVar1 = *(int *)(local_c + -4);
    }
    if (iVar1 == 0) {
      FUN_00407eb8(param_2,*(undefined4 *)(param_1 + 0x8c));
    }
  }
  return;
}
