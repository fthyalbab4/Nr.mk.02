// rea decompile_all
// name: FUN_004edd48
// address: 0x4edd48
// body: available
// range: 0x4edd48-0x4ede68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eddd6 (push 0x4ede69 followed by fs-segment stack chaining); handler 0x4ede69 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004edd48(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;

  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_8 = param_1;
  if (param_2 != *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 0x90);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c4) != 0)) {
      puStack_28 = (undefined1 *)0x4edd90;
      FUN_0043b258(*(undefined4 *)(iVar1 + 0x1c4),param_1,0);
      puStack_28 = (undefined1 *)0x4edda1;
      FUN_0044924c(*(undefined4 *)(local_8 + 0x90),local_8);
    }
    if (((param_2 != 0) && (param_2 != -1)) && (*(int *)(param_2 + 0x1c4) != 0)) {
      puStack_28 = (undefined1 *)0x4eddc1;
      FUN_0043ae88(*(undefined4 *)(param_2 + 0x1c4),local_8);
    }
  }
  *(uint *)(local_8 + 0x54) = *(uint *)(local_8 + 0x54) | 0x400;
  puStack_2c = &LAB_004ede69;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (param_2 != -1) {
    puStack_28 = &stack0xfffffffc;
    FUN_00405d08(local_8,param_2,&local_18);
  }
  iVar1 = *(int *)(local_8 + 0x90);
  if (param_2 != iVar1) {
    if (param_2 == -1) {
      *(undefined4 *)(local_8 + 0x90) = 0;
    }
    else {
      *(int *)(local_8 + 0x90) = param_2;
      if (param_2 != 0) {
        FUN_00405d08(param_2,local_8,&local_18);
        FUN_00448f68(*(undefined4 *)(local_8 + 0x90),local_8);
      }
    }
    if (iVar1 != 0) {
      FUN_00405d08(iVar1,local_8);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(uint *)(local_8 + 0x54) = *(uint *)(local_8 + 0x54) & 0xfffffbff;
  return;
}
