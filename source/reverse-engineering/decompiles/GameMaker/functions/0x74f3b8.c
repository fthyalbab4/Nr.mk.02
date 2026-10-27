// rea decompile_all
// name: FUN_0074f3b8
// address: 0x74f3b8
// body: available
// range: 0x74f3b8-0x74f4bf inclusive
// range: 0x74f4c7-0x74f4dc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74f3d5 (push 0x74f4ff followed by fs-segment stack chaining); handler 0x74f4ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74f3f4 (push 0x74f4dd followed by fs-segment stack chaining); handler 0x74f4dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74f44a (push 0x74f4c0 followed by fs-segment stack chaining); handler 0x74f4c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074f3b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined1 local_15;
  int *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_2c = &LAB_0074f4ff;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x74f3e6;
  local_10 = (undefined4 *)FUN_0074c604(&PTR_LAB_00745f50,1,param_1);
  puStack_38 = &LAB_0074f4dd;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x74f3fe;
  puStack_34 = &stack0xfffffffc;
  uVar3 = (**(code **)*local_10)();
  puVar2 = puStack_34;
  if (extraout_EDX == 0) {
    if (uVar3 < 5) goto LAB_0074f4c7;
  }
  else if (extraout_EDX < 1) goto LAB_0074f4c7;
  if (*(int *)local_10[1] == DAT_00781458) {
    puStack_40 = (undefined1 *)0x1000;
    puStack_44 = (undefined1 *)0x74f43c;
    local_14 = (int *)FUN_0044077c(&PTR_FUN_00435480,1,local_10);
    puStack_44 = &LAB_0074f4c0;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_40 = &stack0xfffffffc;
    FUN_004432fc(local_14);
    (**(code **)(*local_14 + 0x28))(local_14,&local_15,&local_1c);
    FUN_00443320(local_14,&local_8);
    FUN_00443320(local_14,&local_c);
    uVar1 = *(undefined4 *)(*(int *)(param_4 + -4) + 0x6c);
    uVar4 = FUN_0074f094(&DAT_00748b04,1,param_1,local_c,local_8,local_1c,local_15);
    FUN_0043ae88(uVar1,uVar4);
    puVar2 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = (undefined1 *)0x74f4c7;
    puStack_44 = (undefined1 *)0x74f4bf;
    FUN_00405a7c(local_14,uStack_48,puVar2);
    return;
  }
LAB_0074f4c7:
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0074f4e4;
  puStack_38 = (undefined1 *)0x74f4dc;
  FUN_00405a7c(local_10,uStack_3c,puVar2);
  return;
}
