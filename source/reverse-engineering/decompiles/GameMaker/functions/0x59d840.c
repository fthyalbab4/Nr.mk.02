// rea decompile_all
// name: FUN_0059d840
// address: 0x59d840
// body: available
// range: 0x59d840-0x59d9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59d85f (push 0x59dd0a followed by fs-segment stack chaining); handler 0x59dd0a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59d8a6 (push 0x59dced followed by fs-segment stack chaining); handler 0x59dced lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59d948 (push 0x59d9b1 followed by fs-segment stack chaining); handler 0x59d9b1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059d840(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 local_50 [16];
  undefined4 local_40 [10];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;

  puStack_64 = &stack0xfffffffc;
  local_40[0] = 0;
  puStack_68 = &LAB_0059dd0a;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  uStack_70 = 0;
  uStack_74 = 0;
  piStack_78 = param_1 + 0x2d;
  uStack_7c = 0x59d87c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040b75c(PTR_PTR_00782258,local_40);
  uStack_7c = local_40[0];
  puStack_80 = (undefined1 *)0x59d891;
  FUN_00405d08(local_8,local_8,0);
  local_18 = 0;
  local_14 = 0;
  puStack_84 = &LAB_0059dced;
  uStack_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_88;
  puStack_8c = (undefined1 *)0x59d8b1;
  puStack_80 = &stack0xfffffffc;
  cVar1 = FUN_00462b64(local_8);
  if (cVar1 == '\0') {
    puStack_8c = (undefined1 *)0x59d8cb;
    iVar2 = FUN_0059e168(local_8,*(undefined1 *)((int)local_c + 9),*(undefined1 *)(local_c + 2));
    local_8[0x39] = iVar2;
  }
  if (*(char *)(local_c + 2) == '\x10') {
    local_10 = local_8[0x39] >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((local_8[0x39] & 1U) != 0);
    }
  }
  else {
    local_10 = local_8[0x39];
  }
  if (local_8[0x3a] != 0) {
    puStack_8c = (undefined1 *)0x59d915;
    (**(code **)(*local_8 + 0x3c))(local_8,local_8[0x3a]);
  }
  puStack_8c = (undefined1 *)0x59d922;
  (**(code **)(*local_8 + 0x44))(local_8,*local_c);
  puStack_8c = (undefined1 *)0x59d930;
  (**(code **)(*local_8 + 0x38))(local_8,local_c[1]);
  puStack_8c = (undefined1 *)0x59d938;
  FUN_00462a64(local_8);
  puStack_8c = (undefined1 *)0x59d93d;
  FUN_0045be3c();
  puStack_90 = &LAB_0059d9b1;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  puStack_8c = &stack0xfffffffc;
  iVar2 = FUN_00462a64(local_8);
  FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),local_8[0x3d]);
  uVar3 = (**(code **)(*local_8 + 0x24))();
  puVar6 = local_50;
  uVar4 = (**(code **)(*local_8 + 0x30))();
  FUN_00438c38(0,0,uVar4,puVar6,uVar3);
  puVar6 = local_50;
  piVar5 = (int *)FUN_00462a64(local_8);
  (**(code **)(*piVar5 + 0x4c))(piVar5,puVar6);
  puVar6 = puStack_8c;
  *in_FS_OFFSET = uStack_94;
  puStack_8c = &LAB_0059d9b8;
  puStack_90 = (undefined1 *)0x59d9ab;
  FUN_00462a64(local_8,uStack_94,puVar6);
  puStack_90 = (undefined1 *)0x59d9b0;
  FUN_0045bf40();
  return;
}
