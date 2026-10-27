// rea decompile_all
// name: FUN_004f4300
// address: 0x4f4300
// body: available
// range: 0x4f4300-0x4f43b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4300(int param_1,byte *param_2,undefined1 *param_3,undefined1 *param_4,byte *param_5)

{
  int local_8;

  local_8 = *(int *)(param_1 + 0x18);
  if (0 < local_8) {
    do {
      *param_5 = param_2[6];
      *param_3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[4]);
      param_3[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[2]);
      param_3[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)*param_2);
      param_3 = param_3 + 3;
      *param_4 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[5]);
      param_4[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[3]);
      param_4[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[1]);
      param_4 = param_4 + 3;
      param_2 = param_2 + 8;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
