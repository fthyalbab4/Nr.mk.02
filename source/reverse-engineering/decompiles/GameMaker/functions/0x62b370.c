// rea decompile_all
// name: FUN_0062b370
// address: 0x62b370
// body: available
// range: 0x62b370-0x62b4bc inclusive
// range: 0x62b52c-0x62b554 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62b3a1 (push 0x62b555 followed by fs-segment stack chaining); handler 0x62b555 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62b491 (push 0x62b4bd followed by fs-segment stack chaining); handler 0x62b4bd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b370(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [13];
  undefined4 *local_18;
  undefined4 local_14;
  int *local_c;
  undefined4 local_8;

  puStack_68 = &stack0xfffffffc;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c[0] = 0;
  local_8 = 0;
  puStack_6c = &LAB_0062b555;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  uStack_74 = 0x62b3ae;
  local_14 = param_2;
  local_c = param_1;
  FUN_00407eb8(param_2,0);
  uStack_74 = 0;
  puStack_78 = (undefined4 *)0x62b3c3;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  if (local_c[1] == 1) {
    uStack_74 = 0x62b3df;
    FUN_00611c14(local_4c);
    uStack_74 = 0x62b3ed;
    FUN_00407eb8(local_c + 5,local_4c[0]);
    uStack_74 = 0x62b401;
    FUN_0062461c(local_c[6],local_c[5],&local_50);
    uStack_74 = 0x62b411;
    FUN_0040839c(local_14,L"NTLM ",local_50);
  }
  else if (local_c[1] == 2) {
    uStack_74 = 0x62b421;
    iVar2 = FUN_00408238(local_c[4]);
    if (iVar2 == 0) {
      uStack_74 = 0x62b435;
      FUN_0061542c(local_c,L"NTLM",&local_54);
      uStack_74 = 0x62b443;
      FUN_00407eb8(local_c + 4,local_54);
      uStack_74 = 1;
      puStack_78 = &local_58;
      puStack_7c = (undefined1 *)0x62b45b;
      FUN_005e07ec(local_c + 4,&LAB_0062b59c,1);
    }
    puStack_7c = (undefined1 *)0x62b466;
    iVar2 = FUN_00408238(local_c[4]);
    if (iVar2 == 0) {
      puStack_7c = (undefined1 *)0x62b472;
      (**(code **)(*local_c + 0x20))();
      puStack_7c = (undefined1 *)0x62b477;
      FUN_0041bea4();
    }
    puStack_7c = (undefined1 *)0x62b483;
    local_18 = (undefined4 *)FUN_005e3fb4(&PTR_FUN_00614b48,1);
    puStack_80 = &LAB_0062b4bd;
    uStack_84 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_84;
    puStack_7c = &stack0xfffffffc;
    FUN_00613340(*local_18,local_c[4],&local_8);
    puVar1 = puStack_7c;
    *in_FS_OFFSET = uStack_84;
    puStack_7c = &DAT_0062b4c4;
    puStack_80 = (undefined1 *)0x62b4bc;
    FUN_00405a7c(local_18,uStack_84,puVar1);
    return;
  }
  puVar1 = puStack_68;
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_0062b55c;
  puStack_6c = (undefined1 *)0x62b546;
  thunk_FUN_00406e80(&local_64,7,puVar1);
  puStack_6c = (undefined1 *)0x62b554;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
