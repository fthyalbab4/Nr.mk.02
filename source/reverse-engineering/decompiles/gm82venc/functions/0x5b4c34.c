// rea decompile_all
// name: FUN_005b4c34
// address: 0x5b4c34
// body: available
// range: 0x5b4c34-0x5b4ce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b4c34(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  int *local_14;

  iVar1 = *(int *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      puVar3 = (undefined4 *)(iVar1 + 0x14);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xf0); iVar4 = iVar4 + 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0xc4);
    }
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  }
  local_14 = (int *)(param_1 + 0x110);
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x10c); local_18 = local_18 + 1) {
    iVar4 = *local_14;
    iVar2 = *(int *)(param_1 + 0xf4 + iVar4 * 4);
    FUN_005b4b5c(param_1,*param_2,*(undefined4 *)(iVar1 + 0x14 + iVar4 * 4),
                 *(undefined4 *)(iVar1 + 0x5c + *(int *)(iVar2 + 0x18) * 4),
                 *(undefined4 *)(iVar1 + 0x4c + *(int *)(iVar2 + 0x14) * 4));
    *(int *)(iVar1 + 0x14 + iVar4 * 4) = (int)*(short *)*param_2;
    param_2 = param_2 + 1;
    local_14 = local_14 + 1;
  }
  return 1;
}
