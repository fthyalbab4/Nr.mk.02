// rea decompile_all
// name: FUN_005c084c
// address: 0x5c084c
// body: available
// range: 0x5c084c-0x5c08e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c084c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;

  local_14 = (int *)((int)param_1 + 0x13e);
  for (local_18 = 0; local_18 < *(int *)((int)param_1 + 0x13a); local_18 = local_18 + 1) {
    iVar1 = *local_14;
    if (*(int *)(iVar1 + 0x4c) == 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if (((iVar2 < 0) || (3 < iVar2)) || (param_1[iVar2 + 0x28] == 0)) {
        iVar3 = *param_1;
        *(undefined4 *)(iVar3 + 0x14) = 0x33;
        *(int *)(iVar3 + 0x18) = iVar2;
        (**(code **)*param_1)();
      }
      uVar4 = (**(code **)param_1[1])(param_1,1,0x84);
      FUN_005bf29c();
      *(undefined4 *)(iVar1 + 0x4c) = uVar4;
    }
    local_14 = local_14 + 1;
  }
  return;
}
