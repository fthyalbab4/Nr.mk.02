// rea decompile_all
// name: FUN_00639878
// address: 0x639878
// body: available
// range: 0x639878-0x639912 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639878(int *param_1)

{
  int iVar1;

  param_1[0x105] = param_1[0x102];
  param_1[0x104] = param_1[0x101];
  param_1[0x106] = param_1[0x103];
  param_1[0x10d] = param_1[0x10c];
  param_1[0x108] = 0;
  param_1[0x109] = 0x3ff00000;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0x3ff00000;
  iVar1 = (**(code **)(*param_1 + 0x110))();
  if (iVar1 == 1) {
    param_1[0x102] = param_1[0x105];
    param_1[0x101] = param_1[0x104];
    param_1[0x103] = param_1[0x106];
    param_1[0x10c] = param_1[0x10d];
  }
  return;
}
