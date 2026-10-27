// rea decompile_all
// name: FUN_00482dfc
// address: 0x482dfc
// body: available
// range: 0x482dfc-0x482f2a inclusive
// range: 0x482f32-0x482f4f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x482e1f (push 0x482f50 followed by fs-segment stack chaining); handler 0x482f50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x482e4c (push 0x482f2b followed by fs-segment stack chaining); handler 0x482f2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482dfc(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_28 = &LAB_00482f50;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_1;
  if (1 < (byte)(*(char *)(param_1[7] + 0x2a0) - 3U)) {
    puStack_30 = (undefined1 *)0x482e41;
    FUN_0043d354(param_1);
    puStack_34 = &LAB_00482f2b;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,param_2,&local_8);
    local_10 = FUN_00405d08(local_c[7],param_2);
    (**(code **)(*local_c + 0xc))(local_c,param_3,&local_14);
    (**(code **)(*local_c + 0x20))(local_c,param_2,local_14);
    uVar2 = FUN_00405d08(local_c[7],param_3);
    FUN_00405d08(local_c[7],param_2,uVar2);
    (**(code **)(*local_c + 0x20))(local_c,param_3,local_8);
    FUN_00405d08(local_c[7],param_3,local_10);
    iVar3 = (**(code **)(*(int *)local_c[7] + 0xec))();
    if (param_2 == iVar3) {
      (**(code **)(*(int *)local_c[7] + 0xf0))((int *)local_c[7],param_3);
    }
    else {
      iVar3 = (**(code **)(*(int *)local_c[7] + 0xec))();
      if (param_3 == iVar3) {
        (**(code **)(*(int *)local_c[7] + 0xf0))((int *)local_c[7],param_2);
      }
    }
    puVar1 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = (undefined1 *)0x482f32;
    puStack_34 = (undefined1 *)0x482f2a;
    FUN_0043d41c(local_c,uStack_38,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00482f57;
  puStack_28 = (undefined1 *)0x482f47;
  thunk_FUN_00406e5c(&local_14,uStack_2c,&stack0xfffffffc);
  puStack_28 = (undefined1 *)0x482f4f;
  thunk_FUN_00406e5c(&local_8);
  return;
}
