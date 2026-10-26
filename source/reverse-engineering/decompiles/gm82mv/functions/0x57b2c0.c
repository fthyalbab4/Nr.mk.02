// rea decompile_all
// name: FUN_0057b2c0
// address: 0x57b2c0
// body: available
// range: 0x57b2c0-0x57b52e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057b2c0(int param_1,double *param_2,double *param_3,double *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;

  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0x40590000;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar5 = *(int *)(param_1 + 0x1c);
    if ((iVar5 == 1) || (*(double *)(param_1 + 0x20) == 0.0)) {
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      *(undefined4 *)param_2 = *puVar1;
      *(undefined4 *)((int)param_2 + 4) = puVar1[1];
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined4 *)param_3 = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar5 + 0xc);
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined4 *)param_4 = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar5 + 0x14);
    }
    else {
      if ((double)CONCAT44(param_6,param_5) < 0.0) {
        param_5 = 0;
        param_6 = 0;
      }
      if (1.0 < (double)CONCAT44(param_6,param_5)) {
        param_5 = 0;
        param_6 = 0x3ff00000;
      }
      if ((double)CONCAT44(param_6,param_5) == 0.0) {
        puVar1 = *(undefined4 **)(param_1 + 0x18);
        *(undefined4 *)param_2 = *puVar1;
        *(undefined4 *)((int)param_2 + 4) = puVar1[1];
        iVar5 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_3 = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar5 + 0xc);
        iVar5 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_4 = *(undefined4 *)(iVar5 + 0x10);
        *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar5 + 0x14);
      }
      else if ((double)CONCAT44(param_6,param_5) == 1.0) {
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + -0x20 + iVar5 * 0x20);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar2 + -0x1c + iVar5 * 0x20);
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_3 = *(undefined4 *)(iVar2 + -0x18 + iVar5 * 0x20);
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar2 + -0x14 + iVar5 * 0x20);
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_4 = *(undefined4 *)(iVar2 + -0x10 + iVar5 * 0x20);
        *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar2 + -0xc + iVar5 * 0x20);
      }
      else {
        dVar3 = *(double *)(param_1 + 0x20) * (double)CONCAT44(param_6,param_5);
        for (iVar5 = 0;
            (iVar5 < *(int *)(param_1 + 0x1c) + -2 &&
            (*(double *)(*(int *)(param_1 + 0x18) + 0x38 + iVar5 * 0x20) <= dVar3));
            iVar5 = iVar5 + 1) {
        }
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + iVar5 * 0x20);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar2 + 4 + iVar5 * 0x20);
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_3 = *(undefined4 *)(iVar2 + 8 + iVar5 * 0x20);
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar2 + 0xc + iVar5 * 0x20);
        iVar2 = *(int *)(param_1 + 0x18);
        *(undefined4 *)param_4 = *(undefined4 *)(iVar2 + 0x10 + iVar5 * 0x20);
        *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar2 + 0x14 + iVar5 * 0x20);
        dVar3 = dVar3 - *(double *)(*(int *)(param_1 + 0x18) + 0x18 + iVar5 * 0x20);
        dVar4 = *(double *)(*(int *)(param_1 + 0x18) + 0x38 + iVar5 * 0x20) -
                *(double *)(*(int *)(param_1 + 0x18) + 0x18 + iVar5 * 0x20);
        if (dVar4 != 0.0) {
          *param_2 = ((*(double *)(*(int *)(param_1 + 0x18) + 0x20 + iVar5 * 0x20) -
                      *(double *)(*(int *)(param_1 + 0x18) + iVar5 * 0x20)) * dVar3) / dVar4 +
                     *param_2;
          *param_3 = ((*(double *)(*(int *)(param_1 + 0x18) + 0x28 + iVar5 * 0x20) -
                      *(double *)(*(int *)(param_1 + 0x18) + 8 + iVar5 * 0x20)) * dVar3) / dVar4 +
                     *param_3;
          *param_4 = ((*(double *)(*(int *)(param_1 + 0x18) + 0x30 + iVar5 * 0x20) -
                      *(double *)(*(int *)(param_1 + 0x18) + 0x10 + iVar5 * 0x20)) * dVar3) / dVar4
                     + *param_4;
        }
      }
    }
  }
  return;
}
