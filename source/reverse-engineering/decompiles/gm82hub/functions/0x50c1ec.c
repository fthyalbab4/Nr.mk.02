// rea decompile_all
// name: FUN_0050c1ec
// address: 0x50c1ec
// body: available
// range: 0x50c1ec-0x50c255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c1ec(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  FUN_0050c044(param_2);
  if (param_4 < 1) {
    param_4 = (**(code **)*param_1)();
    param_4 = param_4 - param_3;
  }
  iVar1 = param_4 + param_3 + -1;
  if ((int)param_3 <= iVar1) {
    iVar1 = (iVar1 - param_3) + 1;
    do {
      uVar3 = param_3 & 0x800000ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
      }
      iVar2 = (byte)(&DAT_0068f854)[*(byte *)(param_1[1] + param_3)] - uVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x100;
      }
      *(char *)(param_1[1] + param_3) = (char)iVar2;
      param_3 = param_3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
