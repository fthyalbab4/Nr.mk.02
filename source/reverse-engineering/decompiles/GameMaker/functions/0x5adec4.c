// rea decompile_all
// name: FUN_005adec4
// address: 0x5adec4
// body: available
// range: 0x5adec4-0x5adf39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005adec4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;

  local_14 = *(int *)(param_1 + 0xc);
  if (-1 < local_14 + -1) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      iVar5 = *(int *)(param_1 + 0xc) + -1;
      if (iVar4 <= iVar5) {
        iVar5 = (iVar5 - iVar4) + 1;
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
          if (*(int *)(*(int *)(param_1 + 8) + iVar4 * 4) < iVar1) {
            uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4);
            *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = uVar2;
            *(int *)(*(int *)(param_1 + 8) + iVar4 * 4) = iVar1;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
