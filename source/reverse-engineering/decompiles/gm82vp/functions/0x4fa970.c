// rea decompile_all
// name: FUN_004fa970
// address: 0x4fa970
// body: available
// range: 0x4fa970-0x4fa9b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa970(int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xc + (uVar2 & 0x7f) * 4);
    if (iVar1 != -1) {
      FUN_004fa744(*(undefined4 *)(param_1 + 8),iVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (uVar2 & 0x7f) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x04');
  FUN_004fa848(DAT_00681dd8,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
