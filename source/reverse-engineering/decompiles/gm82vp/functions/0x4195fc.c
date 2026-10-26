// rea decompile_all
// name: FUN_004195fc
// address: 0x4195fc
// body: available
// range: 0x4195fc-0x41968b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004195fc(short *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  short local_10;

  if (param_4 < 0) {
    local_10 = -1;
  }
  else {
    local_10 = 1;
  }
  *param_1 = *param_1 + (short)(param_4 / 0xc);
  *param_2 = *param_2 + (short)(param_4 % 0xc);
  if (0xb < (ushort)(*param_2 - 1)) {
    *param_1 = *param_1 + local_10;
    *param_2 = *param_2 + local_10 * -0xc;
  }
  uVar1 = FUN_00419224(*param_1);
  if (*(ushort *)(&DAT_0067cb9a + (uint)*param_2 * 2 + (uVar1 & 0x7f) * 0x18) < *param_3) {
    *param_3 = *(ushort *)(&DAT_0067cb9a + (uint)*param_2 * 2 + (uVar1 & 0x7f) * 0x18);
  }
  return;
}
