// rea decompile_all
// name: FUN_00564d10
// address: 0x564d10
// body: available
// range: 0x564d10-0x564d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564d10(int param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      if ((param_2 != '\0') ||
         (*(char *)(*(int *)(*(int *)(param_1 + 0x18) + iVar1 * 4) + 0x18) == '\0')) {
        (**(code **)(*(int *)*param_3 + 0x38))
                  ((int *)*param_3,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar1 * 4) + 4));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
