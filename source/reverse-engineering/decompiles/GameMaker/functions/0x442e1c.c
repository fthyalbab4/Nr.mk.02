// rea decompile_all
// name: FUN_00442e1c
// address: 0x442e1c
// body: available
// range: 0x442e1c-0x44305c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442e4a (push 0x44313c followed by fs-segment stack chaining); handler 0x44313c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442e6f (push 0x44311a followed by fs-segment stack chaining); handler 0x44311a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442e7d (push 0x4430db followed by fs-segment stack chaining); handler 0x4430db lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442f55 (push 0x443080 followed by fs-segment stack chaining); handler 0x443080 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442f9d (push 0x44305d followed by fs-segment stack chaining); handler 0x44305d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442e1c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;

  puStack_44 = &stack0xfffffffc;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_48 = &LAB_0044313c;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x442e55;
  local_c = param_2;
  local_8 = param_1;
  FUN_004432fc(param_1);
  local_10 = (int *)0x0;
  puStack_50 = (undefined1 *)0x442e64;
  (**(code **)(*DAT_00787f5c + 0x14))();
  puStack_54 = &LAB_0044311a;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_60 = &LAB_004430db;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  uStack_68 = 0x442e8e;
  puStack_5c = &stack0xfffffffc;
  puStack_50 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x28))(local_8,&local_15,&local_14);
  if (local_c == (int *)0x0) {
    uStack_68 = 0x442e9f;
    FUN_00443320(local_8,&local_20);
    uStack_68 = 0x442ea7;
    iVar2 = FUN_0043a380(local_20);
    uStack_68 = 0x442eae;
    local_10 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,0);
    uStack_68 = 0x442ebc;
    FUN_00443320(local_8,&local_24);
    uStack_68 = 0x442ec7;
    (**(code **)(*local_10 + 0x18))(local_10,local_24);
  }
  else {
    local_10 = local_c;
    uStack_68 = 0x442eda;
    FUN_00443320(local_8,&local_28);
    if ((*(byte *)(local_10 + 7) & 0x10) == 0) {
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 1;
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 2;
      uStack_68 = 0x442f0b;
      FUN_00443320(local_8,&local_34);
      uStack_68 = 0x442f16;
      FUN_00442db4(local_34,&local_30);
      uStack_68 = 0x442f21;
      (**(code **)(*local_10 + 0x18))(local_10,local_30);
    }
    else {
      uStack_68 = 0x442eee;
      FUN_00443320(local_8,&local_2c);
    }
  }
  local_8[6] = (int)local_10;
  uStack_68 = 1;
  puStack_6c = (undefined1 *)0x442f41;
  iVar2 = FUN_0043a008(&DAT_00434694,1,*local_10);
  local_8[0x21] = iVar2;
  puStack_70 = &LAB_00443080;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_8[7] = (int)local_10;
  puStack_78 = (undefined1 *)0x442f66;
  puStack_6c = &stack0xfffffffc;
  iVar2 = FUN_0040bd38();
  local_1c = *(int *)(iVar2 + 0xc);
  if (local_1c == 0) {
    puStack_78 = (undefined1 *)0x442f8c;
    iVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
    local_8[0xd] = iVar2;
  }
  else {
    local_8[0xd] = local_1c;
  }
  puStack_7c = &LAB_0044305d;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  puStack_78 = &stack0xfffffffc;
  iVar2 = FUN_0043b0b0(local_8[0xd],local_8[6]);
  if (iVar2 < 0) {
    FUN_0043ae88(local_8[0xd],local_8[6]);
  }
  local_8[10] = local_8[6];
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 1;
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 2;
  (**(code **)(*(int *)local_8[6] + 0x14))((int *)local_8[6],local_8);
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) & 0xfffd;
  if ((local_1c == 0) && (iVar2 = *(int *)(local_8[0xd] + 8), -1 < iVar2 + -1)) {
    local_14 = 0;
    do {
      piVar3 = (int *)FUN_0043b048(local_8[0xd],local_14);
      (**(code **)(*piVar3 + 0xc))();
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_78;
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_00443064;
  if (local_1c == 0) {
    puStack_7c = (undefined1 *)0x443054;
    FUN_00405a7c(local_8[0xd],uStack_80,puVar1);
  }
  local_8[0xd] = 0;
  return;
}
