// rea decompile_all
// name: FUN_0063cb7c
// address: 0x63cb7c
// body: available
// range: 0x63cb7c-0x63ccb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063cb7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  iVar8 = *(int *)(*(int *)PTR_DAT_00781e14 + 0x704);
  iVar1 = *(int *)(iVar8 + 0xc);
  iVar2 = *(int *)(iVar8 + 4);
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar6 = iVar2 + -1;
  if (*(int *)(param_1 + 0x2c) <= iVar2 + -1) {
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(iVar8 + 8) + -1;
  if (iVar8 < iVar3) {
    iVar3 = iVar8;
  }
  if (iVar5 <= iVar6) {
    iVar9 = (iVar6 - iVar5) + 1;
    iVar8 = iVar5;
    do {
      uVar4 = FUN_0063cb38(*(undefined4 *)
                            (iVar1 + ((int)((longlong)iVar7 * (longlong)iVar2) + iVar8) * 4),
                           (int)((ulonglong)((longlong)iVar7 * (longlong)iVar2) >> 0x20));
      *(undefined4 *)(iVar1 + (iVar7 * iVar2 + iVar8) * 4) = uVar4;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar5 <= iVar6) {
    iVar9 = (iVar6 - iVar5) + 1;
    iVar8 = iVar5;
    do {
      uVar4 = FUN_0063cb38(*(undefined4 *)
                            (iVar1 + ((int)((longlong)iVar3 * (longlong)iVar2) + iVar8) * 4),
                           (int)((ulonglong)((longlong)iVar3 * (longlong)iVar2) >> 0x20));
      *(undefined4 *)(iVar1 + (iVar3 * iVar2 + iVar8) * 4) = uVar4;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar8 = iVar7 + 1;
  if (iVar8 <= iVar3 + -1) {
    iVar9 = ((iVar3 + -1) - iVar8) + 1;
    do {
      uVar4 = FUN_0063cb38(*(undefined4 *)
                            (iVar1 + ((int)((longlong)iVar8 * (longlong)iVar2) + iVar5) * 4),
                           (int)((ulonglong)((longlong)iVar8 * (longlong)iVar2) >> 0x20));
      *(undefined4 *)(iVar1 + (iVar8 * iVar2 + iVar5) * 4) = uVar4;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar7 = iVar7 + 1;
  if (iVar7 <= iVar3 + -1) {
    iVar8 = ((iVar3 + -1) - iVar7) + 1;
    do {
      uVar4 = FUN_0063cb38(*(undefined4 *)
                            (iVar1 + ((int)((longlong)iVar7 * (longlong)iVar2) + iVar6) * 4),
                           (int)((ulonglong)((longlong)iVar7 * (longlong)iVar2) >> 0x20));
      *(undefined4 *)(iVar1 + (iVar7 * iVar2 + iVar6) * 4) = uVar4;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}
