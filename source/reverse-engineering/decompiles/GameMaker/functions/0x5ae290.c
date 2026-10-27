// rea decompile_all
// name: FUN_005ae290
// address: 0x5ae290
// body: available
// range: 0x5ae290-0x5ae359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005ae290(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18;
  int local_14;

  local_18 = 0;
  local_14 = -1;
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = -1;
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      if (param_2 <= *(int *)(*(int *)(param_1 + 8) + iVar2 * 4)) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      iVar4 = -1;
    } while (iVar3 != 0);
  }
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  iVar3 = local_14;
  if (-1 < iVar2) {
    do {
      iVar3 = iVar2;
      if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) <= param_3) break;
      iVar2 = iVar2 + -1;
      iVar3 = local_14;
    } while (iVar2 != -1);
  }
  local_14 = iVar3;
  if ((-1 < iVar4) && (iVar4 <= local_14)) {
    if (iVar4 <= local_14) {
      iVar2 = (local_14 - iVar4) + 1;
      iVar3 = iVar4;
      do {
        FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar3 = local_14 + 1;
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    if (iVar3 <= iVar2) {
      iVar2 = (iVar2 - iVar3) + 1;
      do {
        iVar1 = (iVar3 + iVar4) - local_14;
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4);
        *(undefined4 *)(*(int *)(param_1 + 8) + -4 + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - ((local_14 - iVar4) + 1);
    local_18 = 1;
  }
  return local_18;
}
