// rea decompile_all
// name: FUN_00566200
// address: 0x566200
// body: available
// range: 0x566200-0x56626f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566200(uint param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = param_1 & 0x800000ff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
  }
  uVar2 = param_1;
  if ((int)param_1 < 0) {
    uVar2 = param_1 + 0xff;
  }
  uVar2 = (int)uVar2 >> 8 & 0x800000ff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
  }
  if ((int)param_1 < 0) {
    param_1 = param_1 + 0xffff;
  }
  FUN_00510fb4(uVar1,uVar2,(int)param_1 >> 0x10,0x3f800000,0);
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x90))();
  return;
}
