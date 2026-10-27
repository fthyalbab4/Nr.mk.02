// rea decompile_all
// name: FUN_0057e7c8
// address: 0x57e7c8
// body: available
// range: 0x57e7c8-0x57e834 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057e7c8(int param_1)

{
  FUN_00408194(param_1 + 4,0);
  *(undefined4 *)(param_1 + 8) = 0xc;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  *(undefined4 *)(param_1 + 0x1c) = 0x80;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 3;
  FUN_00409dfc(param_1 + 0x182c,&DAT_0057c1dc,1,0);
  FUN_0057ebac(param_1);
  *(undefined4 *)(param_1 + 0x1830) = 0xffffffff;
  return;
}
