// rea decompile_all
// name: FUN_00419534
// address: 0x419534
// body: available
// range: 0x419534-0x419577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419534(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  int iStack_c;

  uVar1 = (ulonglong)ROUND(param_4 * (double)DAT_00773c38);
  local_10 = (int)uVar1;
  iStack_c = (int)(uVar1 >> 0x20);
  if ((longlong)uVar1 < 0) {
    uVar1 = CONCAT44(-(uint)(local_10 != 0) - iStack_c,-local_10);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_00773c3c);
    iVar2 = -(int)(uVar1 / DAT_00773c3c);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_00773c3c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_00773c3c);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}
