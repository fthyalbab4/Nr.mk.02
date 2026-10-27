// rea decompile_all
// name: FUN_00514e78
// address: 0x514e78
// body: available
// range: 0x514e78-0x514f9c inclusive
// range: 0x514fbb-0x514fd4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514ea5 (push 0x514ff7 followed by fs-segment stack chaining); handler 0x514ff7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514ec9 (push 0x514fd5 followed by fs-segment stack chaining); handler 0x514fd5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514f32 (push 0x514f9d followed by fs-segment stack chaining); handler 0x514f9d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514e78(int *param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;

  local_18 = 0;
  local_1c = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x514e94;
    param_1 = (int *)FUN_00405fb0();
    local_9 = extraout_DL;
  }
  puStack_3c = &LAB_00514ff7;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x514eb2;
  puStack_38 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_005143ac(param_1,0);
  puStack_44 = (undefined1 *)0x514ebe;
  (**(code **)(**(int **)PTR_DAT_007828cc + 0x14))();
  puStack_48 = &LAB_00514fd5;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  cVar3 = *(char *)(DAT_007882ec + 0xd1);
  *(char *)(local_8 + 0xdc) = cVar3;
  if (cVar3 != '\0') {
    *(undefined1 *)(DAT_007882ec + 0xd1) = 0;
  }
  puStack_50 = (undefined1 *)0x514efd;
  puStack_44 = &stack0xfffffffc;
  FUN_00405d08(local_8);
  puVar2 = puStack_44;
  if (((undefined **)*local_8 != &PTR_LAB_0050eaf4) && ((*(byte *)(local_8 + 7) & 0x10) == 0)) {
    *(byte *)(local_8 + 0xe1) = *(byte *)(local_8 + 0xe1) | 1;
    puStack_54 = &LAB_00514f9d;
    uStack_58 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_58;
    puStack_50 = &stack0xfffffffc;
    cVar3 = FUN_0043abb4(local_8,&PTR_LAB_0050eaf4);
    if (cVar3 == '\0') {
      FUN_00405954(*local_8,&local_18);
      local_14 = local_18;
      local_10 = 0x11;
      puVar5 = &local_14;
      uVar4 = 0;
      FUN_0040b75c(PTR_PTR_00781f14,&local_1c);
      FUN_0041bef4(&PTR_LAB_0042ecc0,1,local_1c,uVar4,puVar5);
      FUN_00406618();
    }
    *in_FS_OFFSET = uStack_58;
    *(byte *)(local_8 + 0xe1) = *(byte *)(local_8 + 0xe1) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00514fdc;
  iVar1 = **(int **)PTR_DAT_007828cc;
  puStack_48 = (undefined1 *)0x514fd4;
  (**(code **)(iVar1 + 0x18))(*(int **)PTR_DAT_007828cc,iVar1,puVar2);
  return;
}
