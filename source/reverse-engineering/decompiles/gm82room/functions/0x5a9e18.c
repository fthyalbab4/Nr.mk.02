// rea decompile_all
// name: FUN_005a9e18
// address: 0x5a9e18
// body: available
// range: 0x5a9e18-0x5a9f3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9e18(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar1 + 0x30) == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))
                      (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4));
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
  }
  iVar2 = *(int *)(iVar1 + 0x44);
  if (iVar2 != 0) {
    if (iVar2 == 1) goto LAB_005a9ed6;
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
              (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4),iVar1 + 0x34,
               param_4,param_3,param_2,*(undefined4 *)(iVar1 + 0x48));
    if (*(uint *)(iVar1 + 0x34) < *(uint *)(iVar1 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(int *)(iVar1 + 0x48) = *(int *)(param_1 + 0x13c) + -1;
  if (*(int *)(iVar1 + 0x4c) == *(int *)(param_1 + 0x140)) {
    FUN_005a9c74(param_1);
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
LAB_005a9ed6:
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
            (param_1,*(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4),iVar1 + 0x34,param_4
             ,param_3,param_2,*(undefined4 *)(iVar1 + 0x48));
  if (*(uint *)(iVar1 + 0x48) <= *(uint *)(iVar1 + 0x34)) {
    if (*(int *)(iVar1 + 0x4c) == 1) {
      FUN_005a9b78(param_1);
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) ^ 1;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(int *)(iVar1 + 0x34) = *(int *)(param_1 + 0x13c) + 1;
    *(int *)(iVar1 + 0x48) = *(int *)(param_1 + 0x13c) + 2;
    *(undefined4 *)(iVar1 + 0x44) = 2;
  }
  return;
}
