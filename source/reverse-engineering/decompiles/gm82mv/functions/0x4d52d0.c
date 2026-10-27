// rea decompile_all
// name: FUN_004d52d0
// address: 0x4d52d0
// body: available
// range: 0x4d52d0-0x4d5519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d5316 (push 0x4d5554 followed by fs-segment stack chaining); handler 0x4d5554 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d5355 (push 0x4d5537 followed by fs-segment stack chaining); handler 0x4d5537 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d53ef (push 0x4d551a followed by fs-segment stack chaining); handler 0x4d551a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d52d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;

  puStack_54 = (undefined1 *)0x4d52ed;
  local_8 = param_1;
  FUN_0043ca88(param_2,&local_1c,4);
  puStack_54 = (undefined1 *)0x4d52fc;
  FUN_0043ca88(param_2,&local_20,4);
  puStack_54 = (undefined1 *)0x4d5308;
  local_c = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_58 = &LAB_004d5554;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x4d5320;
  puStack_54 = &stack0xfffffffc;
  iVar1 = FUN_0043c834(param_2);
  puStack_60 = (undefined1 *)0x4d532c;
  (**(code **)(*local_c + 0x5c))(local_c,param_2);
  puStack_64 = (undefined1 *)(local_1c + iVar1);
  puStack_60 = (undefined1 *)((int)puStack_64 >> 0x1f);
  uStack_68 = 0x4d533b;
  FUN_0043c854(param_2);
  puStack_60 = (undefined1 *)0x4d5347;
  local_14 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_64 = &LAB_004d5537;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_6c = (undefined1 *)0x4d5362;
  puStack_60 = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x5c))(local_14,param_2);
  puStack_6c = (undefined1 *)0x4d536e;
  local_10 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_6c = (undefined1 *)0x4d537f;
  (**(code **)(*local_10 + 0x44))(local_10,*(undefined4 *)(local_8 + 0x38));
  puStack_6c = (undefined1 *)0x4d538d;
  (**(code **)(*local_10 + 0x38))(local_10,*(undefined4 *)(local_8 + 0x34));
  puStack_6c = (undefined1 *)0x4d5399;
  local_18 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_6c = (undefined1 *)0x4d53a6;
  FUN_00464330(local_18,1);
  puStack_6c = (undefined1 *)0x4d53b4;
  (**(code **)(*local_18 + 0x44))(local_18,*(undefined4 *)(local_8 + 0x38));
  puStack_6c = (undefined1 *)0x4d53c2;
  (**(code **)(*local_18 + 0x38))(local_18,*(undefined4 *)(local_8 + 0x34));
  puStack_6c = *(undefined1 **)(local_8 + 0x34);
  puStack_70 = local_34;
  uStack_74 = 0x4d53dc;
  FUN_00436ad0(0,0,*(undefined4 *)(local_8 + 0x38));
  puStack_6c = (undefined1 *)0x4d53e4;
  FUN_004d5948(local_8);
  puStack_70 = &LAB_004d551a;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_6c = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_c + 0x24))();
  iVar1 = iVar1 / *(int *)(local_8 + 0x34);
  if (-1 < iVar1 + -1) {
    iVar5 = 0;
    local_24 = iVar1;
    do {
      if (local_20 == 0) break;
      iVar1 = (**(code **)(*local_c + 0x30))();
      iVar1 = iVar1 / *(int *)(local_8 + 0x38);
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          if (local_20 == 0) break;
          FUN_00436af8(*(int *)(local_8 + 0x38) * iVar4,*(int *)(local_8 + 0x34) * iVar5,
                       *(undefined4 *)(local_8 + 0x38),local_44,*(undefined4 *)(local_8 + 0x34));
          puVar6 = local_44;
          uVar2 = FUN_00463124(local_c);
          uVar3 = FUN_00463124(local_10);
          FUN_0045cac0(uVar3,local_34,uVar2,puVar6);
          FUN_00436af8(*(int *)(local_8 + 0x38) * iVar4,*(int *)(local_8 + 0x34) * iVar5,
                       *(undefined4 *)(local_8 + 0x38),local_44,*(undefined4 *)(local_8 + 0x34));
          puVar6 = local_44;
          uVar2 = FUN_00463124(local_14);
          uVar3 = FUN_00463124(local_18);
          FUN_0045cac0(uVar3,local_34,uVar2,puVar6);
          FUN_004d3c00(local_8,local_10,local_18);
          local_20 = local_20 + -1;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  puVar6 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_004d5521;
  puStack_70 = (undefined1 *)0x4d5509;
  FUN_00405fdc(local_10,uStack_74,puVar6);
  puStack_70 = (undefined1 *)0x4d5511;
  FUN_00405fdc(local_18);
  puStack_70 = (undefined1 *)0x4d5519;
  FUN_004d594c(local_8);
  return;
}
