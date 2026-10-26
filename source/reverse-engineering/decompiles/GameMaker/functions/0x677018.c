// rea decompile_all
// name: FUN_00677018
// address: 0x677018
// body: available
// range: 0x677018-0x6770cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00677018(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1[0x13];
  iVar1 = (**(code **)(*param_1 + 0x130))();
  if ((iVar1 != 0) && (2 < (byte)(*(char *)((int)param_1 + 0x5d) - 3U))) {
    iVar2 = param_1[0xaf] * 2 * (param_1[0xae] + -1) +
            param_1[0xb5] * param_1[0xae] + param_1[0xaf] * 2;
    if (((char)param_1[0xb1] != '\0') && (1 < param_1[0xae])) {
      iVar2 = iVar2 + (param_1[0xae] + -1) * 2;
    }
    if ((*(byte *)(param_1 + 0x9c) & 2) != 0) {
      if ((byte)(*(char *)((int)param_1 + 0x271) - 1U) < 2) {
        iVar2 = iVar2 + 1;
      }
      if ((byte)(*(char *)((int)param_1 + 0x272) - 1U) < 2) {
        iVar2 = iVar2 + 1;
      }
    }
    if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
      if ((byte)(*(char *)((int)param_1 + 0x271) - 1U) < 2) {
        iVar2 = iVar2 + 1;
      }
      if ((byte)(*(char *)((int)param_1 + 0x272) - 1U) < 2) {
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}
