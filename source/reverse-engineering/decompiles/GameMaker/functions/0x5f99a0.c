// rea decompile_all
// name: FUN_005f99a0
// address: 0x5f99a0
// body: available
// range: 0x5f99a0-0x5f9a0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f99a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;

  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x20);
    if (SCARRY4(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x20))) {
      FUN_00405944();
    }
    iVar1 = param_3 + 4;
    if (SCARRY4(param_3,4)) {
      iVar1 = FUN_00405944();
    }
    FUN_00409be0(param_1 + 4,&DAT_004108f8,1,iVar1);
  }
  uVar2 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x30))(*(int **)PTR_DAT_007826d0,param_2);
  FUN_005e0790(uVar2,param_1 + 4,param_3);
  if (*(int *)(param_1 + 0x20) <= param_3) {
    if (SCARRY4(param_3,4)) {
      FUN_00405944();
    }
    *(int *)(param_1 + 0x20) = param_3 + 4;
  }
  return;
}
