// rea decompile_all
// name: FUN_00543d98
// address: 0x543d98
// body: available
// range: 0x543d98-0x543de9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00543d98(undefined4 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  uVar1 = (longlong)(param_3 + 1) * (longlong)param_3;
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  for (; iVar2 <= param_2; param_2 = param_2 - iVar2) {
    iVar3 = iVar3 + param_3;
  }
  if (0 < param_2) {
    for (iVar2 = FUN_00543d44(param_2,(int)(uVar1 >> 0x20)); param_2 * 2 <= (iVar2 + 1) * iVar2;
        iVar2 = iVar2 + -1) {
    }
    for (; (iVar2 + 1) * iVar2 < param_2 * 2; iVar2 = iVar2 + 1) {
    }
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}
