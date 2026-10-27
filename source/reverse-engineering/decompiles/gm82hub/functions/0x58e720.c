// rea decompile_all
// name: FUN_0058e720
// address: 0x58e720
// body: available
// range: 0x58e720-0x58e973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e720(int param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  double local_24;
  double local_14;
  int local_8;

  if (0 < *(int *)(param_1 + 0xc)) {
    cVar6 = FUN_005798a4(*(undefined4 *)(DAT_00686b28 + 4 + *(int *)(param_1 + 4) * 0x120));
    if (cVar6 == '\0') {
      iVar7 = *(int *)(DAT_00686b28 + 0xc + *(int *)(param_1 + 4) * 0x120);
      if (iVar7 < 0) {
        return;
      }
      if (0xd < iVar7) {
        return;
      }
      iVar7 = *(int *)(PTR_DAT_006888f4 + iVar7 * 4);
    }
    else {
      iVar7 = FUN_005799a0(*(undefined4 *)(DAT_00686b28 + 4 + *(int *)(param_1 + 4) * 0x120));
    }
    if (0 < *(int *)(iVar7 + 4)) {
      if (*(char *)(DAT_00686b28 + 8 + *(int *)(param_1 + 4) * 0x120) == '\0') {
        local_8 = *(int *)(param_1 + 0x60);
      }
      else if (*(char *)(DAT_00686b28 + 9 + *(int *)(param_1 + 4) * 0x120) == '\0') {
        local_8 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 8);
      }
      else {
        lVar3 = (longlong)*(int *)(iVar7 + 4) * (longlong)*(int *)(param_1 + 8);
        local_8 = FUN_004102e4((int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
        local_8 = local_8 + *(int *)(param_1 + 0x60);
      }
      uVar8 = *(int *)(param_1 + 8) + *(int *)(param_1 + 100) * 2 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      local_24 = (double)((float)(int)uVar8 / 4.0);
      if (2.0 < local_24) {
        local_24 = (double)(4.0 - (float)(int)uVar8 / 4.0);
      }
      dVar4 = local_24 - 1.0;
      local_14 = *(double *)(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 4);
      if (*(char *)(DAT_00686b28 + 200 + iVar2 * 0x120) != '\0') {
        local_14 = local_14 + *(double *)(param_1 + 0x38);
      }
      dVar1 = *(double *)(DAT_00686b28 + 0xc0 + iVar2 * 0x120);
      uVar8 = *(int *)(param_1 + 8) + *(int *)(param_1 + 100) & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      local_24 = (double)((float)(int)uVar8 / 4.0);
      if (2.0 < local_24) {
        local_24 = (double)(4.0 - (float)(int)uVar8 / 4.0);
      }
      dVar5 = (local_24 - 1.0) * *(double *)(DAT_00686b28 + 0x28 + iVar2 * 0x120) +
              *(double *)(param_1 + 0x58);
      if (*(char *)(DAT_00686b28 + 0x118 + iVar2 * 0x120) != '\0') {
        FUN_0061eabc(1);
      }
      param_5 = *(double *)(param_1 + 0x10) + param_5;
      FUN_00624b78(iVar7,local_8,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x54),dVar4 * dVar1 + local_14,
                   *(double *)(DAT_00686b28 + 0x38 + *(int *)(param_1 + 4) * 0x120) * dVar5,
                   *(double *)(DAT_00686b28 + 0x30 + *(int *)(param_1 + 4) * 0x120) * dVar5,
                   *(double *)(param_1 + 0x18) + param_4,SUB84(param_5,0),
                   (short)((ulonglong)param_5 >> 0x20));
      if (*(char *)(DAT_00686b28 + 0x118 + *(int *)(param_1 + 4) * 0x120) != '\0') {
        FUN_0061eabc(0);
      }
    }
  }
  return;
}
