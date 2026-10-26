// rea decompile_all
// name: FUN_004bcbcc
// address: 0x4bcbcc
// body: available
// range: 0x4bcbcc-0x4bcc3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004bcbcc(int *param_1)

{
  uint uVar1;

  uVar1 = (**(code **)(*param_1 + 0x60))();
  if ((char)uVar1 != '\0') {
    param_1[0x27] = param_1[0x13];
    param_1[0x26] = param_1[0x12];
    return param_1[0x12];
  }
  if (param_1[0x24] != 0) {
    if (((char)param_1[0x23] == '\x02') || ((byte)(*(char *)(param_1[0x24] + 0x5d) - 1U) < 2)) {
      uVar1 = param_1[0x13];
      param_1[0x29] = uVar1;
    }
    else if (((char)param_1[0x23] == '\x01') ||
            (uVar1 = (uint)(byte)(*(char *)(param_1[0x24] + 0x5d) - 5),
            (byte)(*(char *)(param_1[0x24] + 0x5d) - 3U) < 2)) {
      uVar1 = param_1[0x12];
      param_1[0x28] = uVar1;
    }
  }
  return uVar1;
}
