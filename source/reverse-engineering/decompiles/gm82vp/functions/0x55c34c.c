// rea decompile_all
// name: FUN_0055c34c
// address: 0x55c34c
// body: available
// range: 0x55c34c-0x55c3fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c34c(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_0055bb1c(param_1);
  FUN_00409dfc(param_1 + 0x20,&DAT_00558688,1,*(undefined4 *)(param_1 + 0x30));
  FUN_00409dfc(param_1 + 0x24,&DAT_005586c0,1,*(undefined4 *)(param_1 + 0x3c));
  FUN_00409dfc(param_1 + 0x28,&DAT_005586f8,1,*(undefined4 *)(param_1 + 0x40));
  FUN_0053b0f0(*(undefined4 *)(param_1 + 0x20),0xc,&LAB_0055c334);
  FUN_0053b0f0(*(undefined4 *)(param_1 + 0x24),0xc,&LAB_0055c33c);
  FUN_0053b0f0(*(undefined4 *)(param_1 + 0x28),0x10,&LAB_0055c344);
  FUN_0053b0f0(*(undefined4 *)(param_1 + 0x2c),0xc,&LAB_0055c33c);
  return;
}
