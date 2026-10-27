// rea decompile_all
// name: FUN_0058ddfc
// address: 0x58ddfc
// body: available
// range: 0x58ddfc-0x58dfa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ddfc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;

  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_10 = *(int *)(iVar1 + 0x28);
  if (-1 < local_10 + -1) {
    iVar3 = 0;
    do {
      if ((((*(double *)(*(int *)(iVar1 + 0x24) + 8 + iVar3 * 0x38) <
             *(double *)(*(int *)(iVar1 + 0x24) + 0x10 + iVar3 * 0x38)) &&
           (*(double *)(*(int *)(iVar1 + 0x24) + 0x18 + iVar3 * 0x38) <
            *(double *)(*(int *)(iVar1 + 0x24) + 0x20 + iVar3 * 0x38))) &&
          (*(char *)(*(int *)(iVar1 + 0x24) + iVar3 * 0x38) != '\0')) &&
         (iVar4 = *(int *)(iVar1 + 8), -1 < iVar4 + -1)) {
        local_14 = 0;
        do {
          iVar2 = *(int *)(iVar1 + 4) + local_14 * 0x68;
          if (((*(double *)(*(int *)(iVar1 + 0x24) + 8 + iVar3 * 0x38) <= *(double *)(iVar2 + 0x10))
              && (*(double *)(iVar2 + 0x10) <=
                  *(double *)(*(int *)(iVar1 + 0x24) + 0x10 + iVar3 * 0x38))) &&
             ((*(double *)(*(int *)(iVar1 + 0x24) + 0x18 + iVar3 * 0x38) <=
               *(double *)(iVar2 + 0x18) &&
              (*(double *)(iVar2 + 0x18) <=
               *(double *)(*(int *)(iVar1 + 0x24) + 0x20 + iVar3 * 0x38))))) {
            if (*(int *)(*(int *)(iVar1 + 0x24) + 0x28 + iVar3 * 0x38) == 1) {
              *(double *)(iVar2 + 0x38) = (double)(180.0 - (float)*(double *)(iVar2 + 0x38));
              if (*(double *)(iVar2 + 0x38) < 0.0) {
                *(double *)(iVar2 + 0x38) = *(double *)(iVar2 + 0x38) + 360.0;
              }
              *(double *)(iVar2 + 0x10) =
                   *(double *)(iVar2 + 0x20) -
                   (*(double *)(iVar2 + 0x10) - *(double *)(iVar2 + 0x20));
              *(double *)(iVar2 + 0x30) =
                   *(double *)(iVar2 + 0x30) -
                   *(double *)(*(int *)(iVar1 + 0x24) + 0x30 + iVar3 * 0x38);
              if (*(double *)(iVar2 + 0x30) < 0.0) {
                *(undefined4 *)(iVar2 + 0x30) = 0;
                *(undefined4 *)(iVar2 + 0x34) = 0;
              }
            }
            else {
              *(double *)(iVar2 + 0x38) = (double)(360.0 - (float)*(double *)(iVar2 + 0x38));
              *(double *)(iVar2 + 0x18) =
                   *(double *)(iVar2 + 0x28) -
                   (*(double *)(iVar2 + 0x18) - *(double *)(iVar2 + 0x28));
              *(double *)(iVar2 + 0x30) =
                   *(double *)(iVar2 + 0x30) -
                   *(double *)(*(int *)(iVar1 + 0x24) + 0x30 + iVar3 * 0x38);
              if (*(double *)(iVar2 + 0x30) < 0.0) {
                *(undefined4 *)(iVar2 + 0x30) = 0;
                *(undefined4 *)(iVar2 + 0x34) = 0;
              }
            }
          }
          local_14 = local_14 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
