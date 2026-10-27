// rea decompile_all
// name: FUN_00420878
// address: 0x420878
// body: available
// range: 0x420878-0x4208b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420878(int param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_0041febc(param_1);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  if (*(int *)(param_1 + 8) <= iVar1 >> 2) {
    uVar2 = FUN_0041febc(param_1);
    iVar1 = (int)uVar2 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
    }
    if (iVar1 < *(int *)(param_1 + 8)) {
      iVar1 = *(int *)(param_1 + 8);
    }
    FUN_00420d68(param_1,iVar1);
  }
  return;
}
