// rea decompile_all
// name: FUN_0043ff5c
// address: 0x43ff5c
// body: available
// range: 0x43ff5c-0x44019c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ff8a (push 0x44027c followed by fs-segment stack chaining); handler 0x44027c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ffaf (push 0x44025a followed by fs-segment stack chaining); handler 0x44025a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ffbd (push 0x44021b followed by fs-segment stack chaining); handler 0x44021b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440095 (push 0x4401c0 followed by fs-segment stack chaining); handler 0x4401c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4400dd (push 0x44019d followed by fs-segment stack chaining); handler 0x44019d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ff5c(int *param_1,int *param_2)

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
  puStack_48 = &LAB_0044027c;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x43ff95;
  local_c = param_2;
  local_8 = param_1;
  FUN_0044043c(param_1);
  local_10 = (int *)0x0;
  puStack_50 = (undefined1 *)0x43ffa4;
  (**(code **)(*DAT_0068ef5c + 0x14))();
  puStack_54 = &LAB_0044025a;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_60 = &LAB_0044021b;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  uStack_68 = 0x43ffce;
  puStack_5c = &stack0xfffffffc;
  puStack_50 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x28))(local_8,&local_15,&local_14);
  if (local_c == (int *)0x0) {
    uStack_68 = 0x43ffdf;
    FUN_00440460(local_8,&local_20);
    uStack_68 = 0x43ffe7;
    iVar2 = FUN_004381fc(local_20);
    uStack_68 = 0x43ffee;
    local_10 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,0);
    uStack_68 = 0x43fffc;
    FUN_00440460(local_8,&local_24);
    uStack_68 = 0x440007;
    (**(code **)(*local_10 + 0x18))(local_10,local_24);
  }
  else {
    local_10 = local_c;
    uStack_68 = 0x44001a;
    FUN_00440460(local_8,&local_28);
    if ((*(byte *)(local_10 + 7) & 0x10) == 0) {
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 1;
      *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 2;
      uStack_68 = 0x44004b;
      FUN_00440460(local_8,&local_34);
      uStack_68 = 0x440056;
      FUN_0043fef4(local_34,&local_30);
      uStack_68 = 0x440061;
      (**(code **)(*local_10 + 0x18))(local_10,local_30);
    }
    else {
      uStack_68 = 0x44002e;
      FUN_00440460(local_8,&local_2c);
    }
  }
  local_8[6] = (int)local_10;
  uStack_68 = 1;
  puStack_6c = (undefined1 *)0x440081;
  iVar2 = FUN_00437e84(&DAT_00432540,1,*local_10);
  local_8[0x21] = iVar2;
  puStack_70 = &LAB_004401c0;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_8[7] = (int)local_10;
  puStack_78 = (undefined1 *)0x4400a6;
  puStack_6c = &stack0xfffffffc;
  iVar2 = FUN_0040bfac();
  local_1c = *(int *)(iVar2 + 0xc);
  if (local_1c == 0) {
    puStack_78 = (undefined1 *)0x4400cc;
    iVar2 = FUN_00405fac(&PTR_LAB_0042e000,1);
    local_8[0xd] = iVar2;
  }
  else {
    local_8[0xd] = local_1c;
  }
  puStack_7c = &LAB_0044019d;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  puStack_78 = &stack0xfffffffc;
  iVar2 = FUN_00438f2c(local_8[0xd],local_8[6]);
  if (iVar2 < 0) {
    FUN_00438d04(local_8[0xd],local_8[6]);
  }
  local_8[10] = local_8[6];
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 1;
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) | 2;
  (**(code **)(*(int *)local_8[6] + 0x14))((int *)local_8[6],local_8);
  *(ushort *)(local_8[6] + 0x1c) = *(ushort *)(local_8[6] + 0x1c) & 0xfffd;
  if ((local_1c == 0) && (iVar2 = *(int *)(local_8[0xd] + 8), -1 < iVar2 + -1)) {
    local_14 = 0;
    do {
      piVar3 = (int *)FUN_00438ec4(local_8[0xd],local_14);
      (**(code **)(*piVar3 + 0xc))();
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_78;
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_004401a4;
  if (local_1c == 0) {
    puStack_7c = (undefined1 *)0x440194;
    FUN_00405fdc(local_8[0xd],uStack_80,puVar1);
  }
  local_8[0xd] = 0;
  return;
}
