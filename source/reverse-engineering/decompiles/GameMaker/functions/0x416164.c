// rea decompile_all
// name: FUN_00416164
// address: 0x416164
// body: available
// range: 0x416164-0x41629d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416164(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;

  FUN_00407eb8(param_3,0);
  if ((*param_1 != 0) && (sVar4 = (short)param_2, sVar4 == *(short *)*param_1)) {
    *param_1 = *param_1 + 2;
    iVar2 = 1;
    iVar3 = *param_1;
    iVar1 = FUN_0041dc5c(*param_1,param_2);
    *param_1 = iVar1;
    while ((*param_1 != 0 && (*param_1 = *param_1 + 2, sVar4 == *(short *)*param_1))) {
      *param_1 = *param_1 + 2;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0041dc5c(*param_1,param_2);
      *param_1 = iVar1;
    }
    if (*param_1 == 0) {
      iVar1 = FUN_00417690(iVar3);
      *param_1 = iVar1;
    }
    iVar1 = *param_1 - iVar3 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((*param_1 - iVar3 & 1U) != 0);
    }
    if ((1 < iVar1) && (iVar1 != iVar2)) {
      if (iVar2 == 1) {
        FUN_00407ff4(param_3,iVar3,iVar1 + -1);
      }
      else {
        FUN_00408244(param_3,iVar1 - iVar2);
        iVar1 = FUN_00407f44(*param_3);
        iVar2 = FUN_0041dc5c(iVar3,param_2);
        *param_1 = iVar2;
        while ((*param_1 != 0 && (*param_1 = *param_1 + 2, sVar4 == *(short *)*param_1))) {
          iVar2 = *param_1 - iVar3 >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((*param_1 - iVar3 & 1U) != 0);
          }
          FUN_0040450c(iVar3,iVar1,iVar2 * 2);
          iVar2 = *param_1 - iVar3 >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((*param_1 - iVar3 & 1U) != 0);
          }
          iVar1 = iVar1 + iVar2 * 2;
          *param_1 = *param_1 + 2;
          iVar3 = *param_1;
          iVar2 = FUN_0041dc5c(*param_1,param_2);
          *param_1 = iVar2;
        }
        if (*param_1 == 0) {
          iVar2 = FUN_00417690(iVar3);
          *param_1 = iVar2;
        }
        iVar2 = *param_1 - iVar3 >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((*param_1 - iVar3 & 1U) != 0);
        }
        FUN_0040450c(iVar3,iVar1,(iVar2 + -1) * 2);
      }
    }
  }
  return;
}
