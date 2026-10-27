// rea decompile_all
// name: FUN_00741020
// address: 0x741020
// body: available
// range: 0x741020-0x741034 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00741020(int param_1)

{
  short sVar1;
  ushort uVar2;

  uVar2 = (ushort)(param_1 + -9);
  sVar1 = uVar2 - 5;
  if ((4 < uVar2) && (sVar1 = 0, uVar2 != 0x17)) {
    return 0;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)(param_1 + -9) >> 0x10),sVar1) >> 8),1);
}
