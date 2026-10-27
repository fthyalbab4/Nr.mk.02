// rea decompile_all
// name: FUN_0058bd80
// address: 0x58bd80
// body: available
// range: 0x58bd80-0x58bdc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058bd80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;

  cVar2 = FUN_0058ba8c(param_1);
  iVar1 = DAT_00686b28;
  if (cVar2 != '\0') {
    *(undefined4 *)(DAT_00686b28 + 0x30 + param_1 * 0x120) = param_6;
    *(undefined4 *)(iVar1 + 0x34 + param_1 * 0x120) = param_7;
    iVar1 = DAT_00686b28;
    *(undefined4 *)(DAT_00686b28 + 0x38 + param_1 * 0x120) = param_4;
    *(undefined4 *)(iVar1 + 0x3c + param_1 * 0x120) = param_5;
  }
  return;
}
