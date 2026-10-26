// rea decompile_all
// name: FUN_005b0c74
// address: 0x5b0c74
// body: available
// range: 0x5b0c74-0x5b0dc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0c74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;

  if ((param_1 != 0) && (local_14 = *(int *)(param_1 + 8), -1 < local_14 + -1)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4);
      if (-1 < iVar3 + -1) {
        iVar1 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0xc) + 3 + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4)
              == '\0') {
            if ((iVar1 < 1) ||
               (*(char *)(*(int *)(param_1 + 0xc) + -1 + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4
                         ) == '\0')) {
              if ((iVar1 < *(int *)(param_1 + 4) + -1) &&
                 (*(char *)(*(int *)(param_1 + 0xc) + 7 +
                           (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4) != '\0')) {
                *(undefined4 *)
                 (*(int *)(param_1 + 0xc) + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 0xc) + 4 + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4);
              }
              else if ((iVar2 < 1) ||
                      (*(char *)(*(int *)(param_1 + 0xc) + 3 +
                                ((iVar2 + -1) * *(int *)(param_1 + 4) + iVar1) * 4) == '\0')) {
                if ((iVar2 < *(int *)(param_1 + 8) + -1) &&
                   (*(char *)(*(int *)(param_1 + 0xc) + 3 +
                             ((iVar2 + 1) * *(int *)(param_1 + 4) + iVar1) * 4) != '\0')) {
                  *(undefined4 *)
                   (*(int *)(param_1 + 0xc) + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4) =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0xc) + ((iVar2 + 1) * *(int *)(param_1 + 4) + iVar1) * 4
                        );
                }
              }
              else {
                *(undefined4 *)
                 (*(int *)(param_1 + 0xc) + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 0xc) + ((iVar2 + -1) * *(int *)(param_1 + 4) + iVar1) * 4)
                ;
              }
            }
            else {
              *(undefined4 *)(*(int *)(param_1 + 0xc) + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4)
                   = *(undefined4 *)
                      (*(int *)(param_1 + 0xc) + -4 + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4);
            }
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 3 + (iVar2 * *(int *)(param_1 + 4) + iVar1) * 4) = 0;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
