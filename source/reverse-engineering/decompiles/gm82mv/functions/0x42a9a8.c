// rea decompile_all
// name: FUN_0042a9a8
// address: 0x42a9a8
// body: available
// range: 0x42a9a8-0x42aa0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a9a8(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;

  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 < 0x10f) && (uVar2 < 0x10f)) {
    FUN_0042a3d8();
    return;
  }
  if (uVar1 == 0x400c) {
    FUN_0042a9a8(*(undefined4 *)(param_1 + 4));
  }
  else if (uVar2 == 0x400c) {
    FUN_0042a9a8(param_1,*(undefined4 *)(param_2 + 4));
  }
  else if (((uVar1 & 0xfff) < 0x10f) && ((uVar2 & 0xfff) < 0x10f)) {
    FUN_0042a3d8();
  }
  else {
    FUN_0042a584();
  }
  return;
}
