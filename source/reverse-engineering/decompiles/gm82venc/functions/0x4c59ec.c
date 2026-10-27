// rea decompile_all
// name: FUN_004c59ec
// address: 0x4c59ec
// body: available
// range: 0x4c59ec-0x4c5a34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c59ec(undefined4 param_1,short param_2)

{
  int iVar1;

  iVar1 = FUN_004df914(param_1,1);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != 9) {
    if (param_2 == 0x12) {
      FUN_004bcb48(iVar1,0x127,0x20002,0);
      return;
    }
    if (3 < (ushort)(param_2 - 0x25U)) {
      return;
    }
  }
  FUN_004bcb48(iVar1,0x127,0x10002,0);
  return;
}
