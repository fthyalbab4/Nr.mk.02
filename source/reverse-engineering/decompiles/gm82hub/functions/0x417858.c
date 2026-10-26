// rea decompile_all
// name: FUN_00417858
// address: 0x417858
// body: available
// range: 0x417858-0x4178a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00417858(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;

  while( true ) {
    uVar1 = *param_1;
    uVar2 = *param_2;
    if ((ushort)(uVar1 - 0x61) < 0x1a) {
      uVar1 = uVar1 ^ 0x20;
    }
    if ((ushort)(uVar2 - 0x61) < 0x1a) {
      uVar2 = uVar2 ^ 0x20;
    }
    if ((uVar2 != uVar1) || (uVar1 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)uVar1 - (uint)uVar2;
}
