// rea decompile_all
// name: FUN_00627844
// address: 0x627844
// body: available
// range: 0x627844-0x6278d9 inclusive
// range: 0x6278f8-0x627993 inclusive
// range: 0x6279a1-0x627a89 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x627863 (push 0x627a8a followed by fs-segment stack chaining); handler 0x627a8a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6278c2 (push 0x6278da followed by fs-segment stack chaining); handler 0x6278da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62790a (push 0x627994 followed by fs-segment stack chaining); handler 0x627994 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00627a4f) */

void FUN_00627844(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_8 = 0;
  puStack_34 = &LAB_00627a8a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_9 = 0;
  puStack_3c = (undefined1 *)0x627879;
  FUN_004ec280(*(undefined4 *)PTR_DAT_0068917c,&local_8);
  puStack_3c = (undefined1 *)0x627884;
  FUN_004172fc(local_8,&local_20);
  puStack_3c = (undefined1 *)0x627891;
  FUN_00416f54(local_20,0,&local_1c);
  puStack_3c = (undefined1 *)0x6278a0;
  FUN_004eb244(*(undefined4 *)PTR_DAT_0068917c,local_1c);
  puStack_3c = (undefined1 *)0x6278ac;
  local_10 = (int *)FUN_00405fac(&PTR_LAB_0050b4b8,1);
  puStack_3c = (undefined1 *)0x6278b7;
  FUN_0050c6fc(local_10);
  puStack_40 = &LAB_006278da;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_0043d544(local_10,local_8);
  *in_FS_OFFSET = uStack_44;
  local_14 = 0x306e70;
  puStack_40 = &LAB_00627994;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  do {
    uVar2 = (**(code **)*local_10)();
    iVar4 = (int)(local_14 + 8U) >> 0x1f;
    if (iVar4 == extraout_EDX) {
      if (uVar2 < local_14 + 8U) {
LAB_00627930:
        FUN_004a17e4(L"Error: Not a valid game file.",uVar2);
        *in_FS_OFFSET = uStack_44;
        goto LAB_00627a67;
      }
    }
    else if (extraout_EDX < iVar4) goto LAB_00627930;
    (**(code **)(*local_10 + 0x14))(local_10,local_14,0);
    local_18 = FUN_0050bbe0(local_10);
    uVar2 = FUN_0050bbe0(local_10);
    iVar4 = local_14;
    local_18 = (local_18 & 0xff00ff00) + (uVar2 & 0xff00ff);
    if (local_18 == 0xf7140067) {
      *in_FS_OFFSET = uStack_44;
      local_14 = local_14 + -1;
      puStack_3c = (undefined1 *)0x6279bf;
      (**(code **)(*local_10 + 0x14))(local_10,iVar4,0);
      puStack_3c = (undefined1 *)0x6279c7;
      local_18 = FUN_0050bbe0(local_10);
      puStack_3c = (undefined1 *)0x6279d2;
      uVar2 = FUN_0050bbe0(local_10);
      local_18 = (local_18 & 0xff00ff) + (uVar2 & 0xff00ff00);
      iVar4 = local_14 + 0x11;
      puStack_3c = (undefined1 *)0x6279f9;
      (**(code **)(*local_10 + 0x14))(local_10,iVar4,0);
      puStack_3c = (undefined1 *)0x627a01;
      uVar2 = FUN_0050bbe0(local_10);
      local_18 = local_18 ^ uVar2;
      puStack_3c = (undefined1 *)0x627a10;
      (**(code **)(*local_10 + 0x14))(local_10,iVar4,0);
      puStack_3c = (undefined1 *)0x627a1b;
      FUN_0050bce8(local_10,local_18);
      puStack_3c = (undefined1 *)0x627a2b;
      (**(code **)(*local_10 + 0x14))(local_10,local_14 + 9,0);
      puStack_3c = (undefined1 *)0x627a33;
      uVar3 = FUN_0043c834(local_10);
      puStack_3c = (undefined1 *)0x627a3d;
      FUN_0050c7b4(local_10,uVar3);
      puStack_3c = (undefined1 *)0x627a45;
      FUN_0050bbe0(local_10);
      puStack_3c = (undefined1 *)0x627a4d;
      FUN_0050bbe0(local_10);
      puStack_3c = (undefined1 *)0x627a5c;
      local_9 = FUN_00627468(local_10);
      puStack_3c = (undefined1 *)0x627a67;
      FUN_00405fdc(local_10);
LAB_00627a67:
      puVar1 = puStack_30;
      *in_FS_OFFSET = uStack_38;
      puStack_30 = &LAB_00627a91;
      puStack_34 = (undefined1 *)0x627a81;
      thunk_FUN_004072fc(&local_20,2,puVar1);
      puStack_34 = (undefined1 *)0x627a89;
      thunk_FUN_004072d8(&local_8);
      return;
    }
    local_14 = local_14 + 1;
  } while( true );
}
