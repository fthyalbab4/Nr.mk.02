// rea decompile_all
// name: FUN_00483f78
// address: 0x483f78
// body: available
// range: 0x483f78-0x4840a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483f78(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = FUN_004604a4(*(undefined4 *)(param_1 + 0x1b0));
  iVar2 = FUN_004604bc(*(undefined4 *)(param_1 + 0x1b0));
  iVar3 = FUN_004baf44(param_1);
  iVar4 = FUN_004baf84(param_1);
  if ((((*(char *)(param_1 + 0x1c0) != '\0') ||
       ((iVar6 = iVar1, iVar5 = iVar2, *(char *)(param_1 + 0x1c5) != '\0' &&
        ((iVar3 < iVar1 || (iVar4 < iVar2)))))) &&
      (iVar6 = iVar3, iVar5 = iVar4, *(char *)(param_1 + 0x1c5) != '\0')) &&
     ((0 < iVar1 && (0 < iVar2)))) {
    if (iVar2 < iVar1) {
      iVar5 = FUN_004048c4();
      if (iVar4 < iVar5) {
        iVar6 = FUN_004048c4();
        iVar5 = iVar4;
      }
    }
    else {
      iVar6 = FUN_004048c4();
      if (iVar3 < iVar6) {
        iVar5 = FUN_004048c4();
        iVar6 = iVar3;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = iVar6;
  param_2[3] = iVar5;
  if (*(char *)(param_1 + 0x1c1) != '\0') {
    iVar1 = iVar4 - iVar5 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((iVar4 - iVar5 & 1U) != 0);
    }
    iVar2 = iVar3 - iVar6 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar3 - iVar6 & 1U) != 0);
    }
    FUN_0040c4a8(param_2,iVar2,iVar1);
  }
  return;
}
