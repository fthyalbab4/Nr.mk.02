// rea decompile_all
// name: FUN_0043f6d4
// address: 0x43f6d4
// body: available
// range: 0x43f6d4-0x43f952 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43f70b (push 0x43f953 followed by fs-segment stack chaining); handler 0x43f953 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f6d4(undefined4 param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 auStack_104 [2];
  undefined4 auStack_100 [59];
  int *local_14;
  int local_c;
  int local_8;

  local_11c = 0;
  local_118 = 0;
  local_c = 0;
  puStack_128 = (undefined1 *)0x43f700;
  local_14 = param_3;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_12c = &LAB_0043f953;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_128 = &stack0xfffffffc;
  FUN_00415690(local_8,&local_118);
  uVar7 = local_118;
  uVar2 = FUN_00422068();
  FUN_004219a0(uVar2,uVar7,&local_c);
  iVar3 = FUN_00409a18(local_c);
  iVar4 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar4 = FUN_00407048(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  if (iVar5 < iVar3) {
    FUN_00415690(local_8,&local_11c);
    uVar7 = local_11c;
    uVar2 = FUN_0042202c();
    FUN_004219a0(uVar2,uVar7,&local_c);
    uVar6 = FUN_00409a18(local_c);
    iVar4 = (int)uVar6 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar6 & 1) != 0);
    }
    if (0x3f < iVar4) {
      uVar6 = 0x7e;
    }
    FUN_00409be0(&local_c,&DAT_004108f8,1,uVar6 + 2);
    *(undefined2 *)(local_c + uVar6) = 0;
    FUN_0043f4c0(param_1,&DAT_0077406c,0x20);
    iVar4 = FUN_0043f234(param_1);
    *local_14 = -(iVar4 + 4);
    local_114 = (undefined1  [4])0x0;
    local_110 = (undefined1  [4])(uVar6 + 0x1e);
    local_10c = 0xaffff;
    iVar4 = FUN_00409a18(local_c);
    uVar7 = FUN_00409a18(local_c);
    FUN_0040450c(local_c,&local_108,uVar7);
    *(undefined4 *)((int)&local_108 + iVar4) = 0;
    *(undefined2 *)((int)auStack_104 + iVar4) = 0;
    *(undefined2 *)((int)auStack_104 + iVar4 + 2) = 0x409;
    *(undefined4 *)((int)auStack_104 + iVar4 + 4) = 0;
    *(undefined4 *)((int)auStack_100 + iVar4 + 4) = 0;
    FUN_0043f4c0(param_1,local_114,iVar4 + 0x1c);
  }
  else {
    local_114._0_3_ = 0xaff;
    iVar4 = FUN_00409a18(local_c);
    if (0x3f < iVar4) {
      iVar4 = 0x40;
    }
    FUN_00409be0(&local_c,&DAT_004108f8,1,iVar4 + 1);
    *(undefined1 *)(local_c + iVar4) = 0;
    uVar7 = FUN_00409a18(local_c);
    FUN_0040450c(local_c,local_114 + 3,uVar7);
    iVar4 = FUN_00409a18(local_c);
    *(undefined2 *)(local_114 + iVar4 + 3) = 0x1030;
    *(undefined4 *)(local_110 + iVar4 + 1) = 0;
    FUN_0043f4c0(param_1,local_114,iVar4 + 9);
    iVar4 = FUN_0043f234(param_1);
    *local_14 = iVar4;
  }
  puVar1 = puStack_128;
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0043f95a;
  puStack_12c = (undefined1 *)0x43f93c;
  thunk_FUN_00406e80(&local_11c,2,puVar1);
  puStack_12c = (undefined1 *)0x43f94a;
  FUN_00409ce0(&local_c,&DAT_004108f8);
  puStack_12c = (undefined1 *)0x43f952;
  thunk_FUN_00406e5c(&local_8);
  return;
}
