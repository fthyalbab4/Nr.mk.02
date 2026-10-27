// rea decompile_all
// name: FUN_004076f0
// address: 0x4076f0
// body: available
// range: 0x4076f0-0x40774f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004076f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;

  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00407743;
    if (-1 < param_3) {
      if (iVar1 - iVar2 < param_3) {
        param_3 = iVar1 - iVar2;
      }
      if (*(short *)(param_1 + -10) == 1) {
        FUN_00406f94(param_4,iVar2 + param_1,param_3,*(undefined2 *)(param_1 + -0xc));
        return;
      }
      FUN_004070ac(param_4,iVar2 * 2 + param_1,param_3,_DAT_007838d0);
      return;
    }
  }
LAB_00407743:
  FUN_00406e5c(param_4);
  return;
}
