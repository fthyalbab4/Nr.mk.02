// rea decompile_all
// name: FUN_00551c38
// address: 0x551c38
// body: available
// range: 0x551c38-0x551d3f inclusive
// range: 0x551d47-0x551d5c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551c55 (push 0x551d7f followed by fs-segment stack chaining); handler 0x551d7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551c74 (push 0x551d5d followed by fs-segment stack chaining); handler 0x551d5d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551cca (push 0x551d40 followed by fs-segment stack chaining); handler 0x551d40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551c38(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_2c = &LAB_00551d7f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x551c66;
  local_10 = (undefined4 *)FUN_0054ee84(&LAB_005487d0,1,param_1);
  puStack_38 = &LAB_00551d5d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x551c7e;
  puStack_34 = &stack0xfffffffc;
  uVar3 = (**(code **)*local_10)();
  puVar2 = puStack_34;
  if (extraout_EDX == 0) {
    if (uVar3 < 5) goto LAB_00551d47;
  }
  else if (extraout_EDX < 1) goto LAB_00551d47;
  if (*(int *)local_10[1] == DAT_006862e0) {
    puStack_40 = (undefined1 *)0x1000;
    puStack_44 = (undefined1 *)0x551cbc;
    local_14 = (int *)FUN_0043d8bc(&PTR_FUN_0043332c,1,local_10);
    puStack_44 = &LAB_00551d40;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_40 = &stack0xfffffffc;
    FUN_0044043c(local_14);
    (**(code **)(*local_14 + 0x28))(local_14,&local_15,&local_1c);
    FUN_00440460(local_14,&local_8);
    FUN_00440460(local_14,&local_c);
    uVar1 = *(undefined4 *)(*(int *)(param_4 + -4) + 0x6c);
    uVar4 = FUN_00551914(&DAT_0054b384,1,param_1,local_c,local_8,local_1c,local_15);
    FUN_00438d04(uVar1,uVar4);
    puVar2 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = (undefined1 *)0x551d47;
    puStack_44 = (undefined1 *)0x551d3f;
    FUN_00405fdc(local_14,uStack_48,puVar2);
    return;
  }
LAB_00551d47:
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00551d64;
  puStack_38 = (undefined1 *)0x551d5c;
  FUN_00405fdc(local_10,uStack_3c,puVar2);
  return;
}
