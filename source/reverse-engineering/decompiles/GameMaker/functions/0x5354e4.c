// rea decompile_all
// name: FUN_005354e4
// address: 0x5354e4
// body: available
// range: 0x5354e4-0x535784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005354e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0 < *(int *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_00535260(param_1);
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar1 = *(int *)(param_1 + 8) + -3;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) + -1;
    }
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      iVar5 = 0;
      do {
        iVar2 = (iVar5 + 1) % *(int *)(param_1 + 8);
        iVar3 = (iVar5 + 1) % *(int *)(param_1 + 8);
        iVar4 = (iVar5 + 1) % *(int *)(param_1 + 8);
        FUN_00535340(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                     (*(double *)
                       (*(int *)(param_1 + 4) + 0x10 + ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18)
                     + *(double *)
                        (*(int *)(param_1 + 4) + 0x10 + ((iVar5 + 2) % *(int *)(param_1 + 8)) * 0x18
                        )) / 2.0,
                     (*(double *)
                       (*(int *)(param_1 + 4) + 8 + ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18) +
                     *(double *)
                      (*(int *)(param_1 + 4) + 8 + ((iVar5 + 2) % *(int *)(param_1 + 8)) * 0x18)) /
                     2.0,(*(double *)
                           (*(int *)(param_1 + 4) + ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18) +
                         *(double *)
                          (*(int *)(param_1 + 4) + ((iVar5 + 2) % *(int *)(param_1 + 8)) * 0x18)) /
                         2.0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10 + iVar4 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 0x14 + iVar4 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar3 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar3 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 0x18),
                     (*(double *)
                       (*(int *)(param_1 + 4) + 0x10 + (iVar5 % *(int *)(param_1 + 8)) * 0x18) +
                     *(double *)
                      (*(int *)(param_1 + 4) + 0x10 + ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18))
                     / 2.0,(*(double *)
                             (*(int *)(param_1 + 4) + 8 + (iVar5 % *(int *)(param_1 + 8)) * 0x18) +
                           *(double *)
                            (*(int *)(param_1 + 4) + 8 +
                            ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18)) / 2.0,
                     (*(double *)(*(int *)(param_1 + 4) + (iVar5 % *(int *)(param_1 + 8)) * 0x18) +
                     *(double *)
                      (*(int *)(param_1 + 4) + ((iVar5 + 1) % *(int *)(param_1 + 8)) * 0x18)) / 2.0)
        ;
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_00535260(param_1);
    }
    else {
      FUN_00535260(param_1);
    }
  }
  return;
}
