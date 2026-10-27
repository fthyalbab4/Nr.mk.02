// rea decompile_all
// name: FUN_0056e3dc
// address: 0x56e3dc
// body: available
// range: 0x56e3dc-0x56e4b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e3dc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  if ((param_1 != 0) && (local_18 = *(int *)(param_1 + 8), -1 < local_18 + -1)) {
    local_1c = 0;
    do {
      local_14 = *(int *)(param_1 + 4);
      if (-1 < local_14 + -1) {
        local_20 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0xc) + 3 +
                       (local_1c * *(int *)(param_1 + 4) + local_20) * 4) == '\0') {
            iVar4 = local_1c + -1;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            iVar2 = *(int *)(param_1 + 8) + -1;
            if (local_1c + 1 <= iVar2) {
              iVar2 = local_1c + 1;
            }
            if (iVar4 <= iVar2) {
              local_10 = (iVar2 - iVar4) + 1;
              do {
                iVar2 = local_20 + -1;
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                iVar3 = *(int *)(param_1 + 4) + -1;
                if (local_20 + 1 <= iVar3) {
                  iVar3 = local_20 + 1;
                }
                if (iVar2 <= iVar3) {
                  iVar3 = (iVar3 - iVar2) + 1;
                  do {
                    iVar5 = iVar4 * *(int *)(param_1 + 4) + iVar2;
                    if (0x1f < *(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar5 * 4)) {
                      pcVar1 = (char *)(*(int *)(param_1 + 0xc) + 3 + iVar5 * 4);
                      *pcVar1 = *pcVar1 + -0x20;
                    }
                    iVar2 = iVar2 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                iVar4 = iVar4 + 1;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
          }
          local_20 = local_20 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
