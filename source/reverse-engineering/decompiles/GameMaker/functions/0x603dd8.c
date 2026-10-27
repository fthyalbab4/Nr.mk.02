// rea decompile_all
// name: FUN_00603dd8
// address: 0x603dd8
// body: available
// range: 0x603dd8-0x604043 inclusive
// range: 0x604064-0x6040e9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x603e01 (push 0x6040ea followed by fs-segment stack chaining); handler 0x6040ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x603e2a (push 0x604044 followed by fs-segment stack chaining); handler 0x604044 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00603dd8(int param_1,int *param_2,undefined4 param_3,undefined1 param_4,undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  byte local_d;
  int *local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_14 = 8;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_006040ea;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (undefined1 *)0x603e0c;
  local_c = param_2;
  local_8 = local_14;
  local_d = FUN_006008dc(param_2);
  local_d = local_d ^ 1;
  if (local_d != 0) {
    local_30 = (undefined1 *)0x603e1f;
    FUN_00600964(local_c);
  }
  local_34 = &LAB_00604044;
  local_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_38;
  local_3c = 0;
  local_40 = 0x603e39;
  local_30 = &stack0xfffffffc;
  FUN_005e29f0(4,&local_14);
  local_40 = 0x603e4a;
  (**(code **)(*local_c + 0x80))(local_c,local_14,0xffffffff);
  local_40 = 0;
  local_44 = 0x603e58;
  FUN_005e29f0(param_4,&stack0xffffffe8);
  local_44 = 0x603e69;
  (**(code **)(*local_c + 0x80))(local_c,unaff_EBX,0xffffffff);
  local_44 = 0x603e79;
  uVar1 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x2c))(*(int **)PTR_DAT_007826d0,param_5);
  local_44 = 0;
  local_48 = (int *)0x603e87;
  FUN_005e29b8(uVar1,&stack0xffffffe4);
  local_48 = (int *)0x603e98;
  (**(code **)(*local_c + 0x80))(local_c,unaff_ESI,0xffffffff);
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    local_48 = (int *)0x603eae;
    FUN_00407f0c(&local_8,L"0.0.0.1");
  }
  else {
    local_48 = &local_8;
    local_4c = 0x603ec4;
    FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,0,0);
  }
  local_48 = (int *)0x0;
  local_4c = 1;
  FUN_005e07ec(&local_8,&LAB_00604124,1,&local_24);
  uVar1 = FUN_005e25f0(local_24);
  FUN_005e29f0(uVar1,&stack0xffffffe0);
  (**(code **)(*local_c + 0x80))(local_c,unaff_EDI,0xffffffff);
  FUN_005e07ec(&local_8,&LAB_00604124,1,&local_2c,1,0);
  uVar1 = FUN_005e25f0(local_2c);
  FUN_005e29f0(uVar1,&local_28);
  (**(code **)(*local_c + 0x80))(local_c,local_28,0xffffffff);
  FUN_005e07ec(&local_8,&LAB_00604124,1,&local_34,1,0);
  uVar1 = FUN_005e25f0(local_34);
  FUN_005e29f0(uVar1,&local_30);
  (**(code **)(*local_c + 0x80))(local_c,local_30,0xffffffff);
  uVar2 = 1;
  FUN_005e07ec(&local_8,&LAB_00604124,1,&local_3c,1,0);
  uVar1 = FUN_005e25f0(local_3c);
  FUN_005e29f0(uVar1,&local_38);
  (**(code **)(*local_c + 0x80))(local_c,local_38,0xffffffff);
  FUN_005e2694(*(undefined4 *)(param_1 + 0x9c),0,&local_40,0);
  (**(code **)(*local_c + 0x80))(local_c,local_40,0xffffffff);
  FUN_005e29f0(0,&local_44);
  (**(code **)(*local_c + 0x80))(local_c,local_44,0xffffffff);
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    FUN_005e2694(0,0,&local_48,0);
    (**(code **)(*local_c + 0x80))(local_c,local_48,0xffffffff);
    uVar1 = 0;
    FUN_005e29f0(0,&local_4c);
    (**(code **)(*local_c + 0x80))(local_c,local_4c,0xffffffff,uVar1);
  }
  if (local_d != 0) {
    (**(code **)(*local_c + 0xc4))();
  }
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = uVar2;
  FUN_00408e44(&local_4c,&DAT_004108f8,4,&LAB_006040f1);
  thunk_FUN_00406e5c(&local_3c);
  FUN_00409ce0(&local_38,&DAT_004108f8);
  thunk_FUN_00406e5c(&local_34);
  FUN_00409ce0(&local_30,&DAT_004108f8);
  thunk_FUN_00406e5c(&local_2c);
  FUN_00409ce0(&local_28,&DAT_004108f8);
  thunk_FUN_00406e5c(&local_24);
  FUN_00408e44(&stack0xffffffe0,&DAT_004108f8,4);
  thunk_FUN_00406e5c(&local_8);
  return;
}
