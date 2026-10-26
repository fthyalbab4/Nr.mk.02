// rea decompile_all
// name: FUN_00663970
// address: 0x663970
// body: available
// range: 0x663970-0x663a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663970(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = (**(code **)(*param_1 + 0x130))();
  if (iVar1 != 0) {
    FUN_004f3de8(param_1,*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x170));
    param_1[0xcf] = (int)param_1;
    iVar1 = FUN_006762e4(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x1a4))(param_1,0);
    }
    (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_1[0x13],param_1[0x12]);
    (**(code **)(*param_1 + 0x154))(param_1,1);
    uVar2 = FUN_00677f54(param_1);
    (**(code **)(*param_1 + 0x148))(param_1,uVar2);
    FUN_004ee5c0(param_1,1);
    (**(code **)(*param_1 + 0x1c0))();
  }
  return;
}
