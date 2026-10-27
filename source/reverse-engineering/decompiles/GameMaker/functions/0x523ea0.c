// rea decompile_all
// name: FUN_00523ea0
// address: 0x523ea0
// body: available
// range: 0x523ea0-0x523ee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523ea0(int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xc + (uVar2 & 0x7f) * 4);
    if (iVar1 != -1) {
      FUN_00523c74(*(undefined4 *)(param_1 + 8),iVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (uVar2 & 0x7f) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x04');
  FUN_00523d78(DAT_00778edc,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
