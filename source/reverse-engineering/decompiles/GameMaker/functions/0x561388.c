// rea decompile_all
// name: FUN_00561388
// address: 0x561388
// body: available
// range: 0x561388-0x56145c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561388(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int *local_34;
  int local_30 [4];
  int local_20 [4];

  iVar2 = *(int *)(param_1 + 0x168);
  FUN_0054e1d0();
  FUN_0054e1d0();
  local_34 = (int *)(param_1 + 0xf4);
  for (local_38 = 0; local_38 < *(int *)(param_1 + 0xf0); local_38 = local_38 + 1) {
    iVar5 = *(int *)(*local_34 + 0x14);
    iVar3 = *(int *)(*local_34 + 0x18);
    if (local_30[iVar5] == 0) {
      piVar1 = (int *)(param_1 + 0x54 + iVar5 * 4);
      if (*piVar1 == 0) {
        iVar4 = FUN_0055b008(param_1);
        *piVar1 = iVar4;
      }
      FUN_005611a4(param_1,*piVar1,*(undefined4 *)(iVar2 + 0x4c + iVar5 * 4));
      local_30[iVar5] = 1;
    }
    if (local_20[iVar3] == 0) {
      piVar1 = (int *)(param_1 + 100 + iVar3 * 4);
      if (*piVar1 == 0) {
        iVar5 = FUN_0055b008(param_1);
        *piVar1 = iVar5;
      }
      FUN_005611a4(param_1,*piVar1,*(undefined4 *)(iVar2 + 0x5c + iVar3 * 4));
      local_20[iVar3] = 1;
    }
    local_34 = local_34 + 1;
  }
  return;
}
