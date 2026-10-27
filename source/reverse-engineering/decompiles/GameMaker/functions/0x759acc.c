// rea decompile_all
// name: FUN_00759acc
// address: 0x759acc
// body: available
// range: 0x759acc-0x759b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00759acc(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_0075929c(param_1);
  FUN_00409be0(param_1 + 0x20,&DAT_00755e08,1,*(undefined4 *)(param_1 + 0x30));
  FUN_00409be0(param_1 + 0x24,&DAT_00755e40,1,*(undefined4 *)(param_1 + 0x3c));
  FUN_00409be0(param_1 + 0x28,&DAT_00755e78,1,*(undefined4 *)(param_1 + 0x40));
  FUN_00738c94(*(undefined4 *)(param_1 + 0x20),0xc,&LAB_00759ab4);
  FUN_00738c94(*(undefined4 *)(param_1 + 0x24),0xc,&LAB_00759abc);
  FUN_00738c94(*(undefined4 *)(param_1 + 0x28),0x10,&LAB_00759ac4);
  FUN_00738c94(*(undefined4 *)(param_1 + 0x2c),0xc,&LAB_00759abc);
  return;
}
