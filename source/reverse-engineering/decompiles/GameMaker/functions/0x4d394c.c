// rea decompile_all
// name: FUN_004d394c
// address: 0x4d394c
// body: available
// range: 0x4d394c-0x4d3b0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d397f (push 0x4d3b0b followed by fs-segment stack chaining); handler 0x4d3b0b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d394c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 *puVar7;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined *local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined *local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined *local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_8c = &stack0xfffffffc;
  local_78 = 0;
  local_7c = 0;
  local_24 = 0;
  local_1c = 0;
  local_20 = (undefined1 *)0x0;
  local_18 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_90 = &LAB_004d3b0b;
  puStack_94 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_94;
  local_14 = param_2;
  FUN_00407e58(0x2d,0x1b,&local_18);
  FUN_0040839c(&local_8,local_18,&DAT_004d3b28);
  iVar3 = FUN_00449834(param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      uVar4 = FUN_00449808(param_1,iVar6);
      cVar2 = FUN_00405c98(uVar4,&PTR_LAB_00476d5c);
      if (cVar2 != '\0') {
        uVar4 = local_c;
        uVar5 = FUN_00449808(param_1,iVar6);
        FUN_004ee6a0(uVar5,&local_1c);
        FUN_00407e58(CONCAT22(extraout_var,0x20),3,&local_20,local_1c,uVar4);
        puStack_94 = local_20;
        FUN_00408480(&local_c,3);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar7 = &local_24;
  FUN_0041e164(local_c,&DAT_004d3b40,0,puVar7,1);
  FUN_00407f0c(&local_c,local_24);
  local_74 = local_8;
  local_70 = 0x11;
  uVar4 = local_14;
  FUN_004ee6a0(param_1,&local_78);
  local_6c = local_78;
  local_68 = 0x11;
  local_64 = &DAT_004d3b50;
  local_60 = 0xb;
  local_5c = local_8;
  local_58 = 0x11;
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x388),&local_7c);
  local_54 = local_7c;
  local_50 = 0x11;
  local_4c = &DAT_004d3b50;
  local_48 = 0xb;
  local_44 = local_8;
  local_40 = 0x11;
  local_3c = local_c;
  local_38 = 0x11;
  local_34 = &DAT_004d3b50;
  local_30 = 0xb;
  local_2c = local_8;
  local_28 = 0x11;
  FUN_00417d4c(L"%s%s%s%s%s%s%s%s%s%s",&local_74,9,uVar4);
  puVar1 = puStack_94;
  *in_FS_OFFSET = (int)puVar7;
  puStack_94 = &LAB_004d3b12;
  thunk_FUN_00406e80(&local_7c,2,puVar1);
  thunk_FUN_00406e80(&local_24,2);
  thunk_FUN_00406e5c(&local_1c);
  thunk_FUN_00406e5c(&local_18);
  thunk_FUN_00406e80(&local_c,2);
  return;
}
