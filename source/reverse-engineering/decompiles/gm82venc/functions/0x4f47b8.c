// rea decompile_all
// name: FUN_004f47b8
// address: 0x4f47b8
// body: available
// range: 0x4f47b8-0x4f493f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f47d8 (push 0x4f4940 followed by fs-segment stack chaining); handler 0x4f4940 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f47b8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined1 local_54 [64];
  uint local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_68 = &stack0xfffffffc;
  local_58 = 0;
  puStack_6c = &LAB_004f4940;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_8 = param_3;
  uVar3 = FUN_004f211c(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x138),0);
  iVar4 = FUN_0040621c(uVar3,&PTR_LAB_004efe54);
  *(int *)(param_1 + 0x14) = iVar4;
  if (*(char *)(iVar4 + 0x20) != '\0') {
    FUN_004f350c(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x458);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x45c);
  local_14 = FUN_004f1638(0xffffffff,&local_8,4);
  FUN_004f6154(*(undefined4 *)(param_1 + 0xc),param_1 + 0x20,param_1 + 0x24);
  FUN_004f1918(param_2,local_54);
  iVar4 = FUN_0043c834(param_2);
  *(int *)(param_1 + 0x4c) = iVar4 + param_4;
  uVar3 = FUN_00404324(*(int *)(param_1 + 0x20) + 1);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_00404324(*(int *)(param_1 + 0x20) + 1);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_00404f38(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x20) + 1,0);
  *(undefined1 *)(param_1 + 0x48) = 1;
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x134);
  if (cVar1 == '\0') {
    FUN_004f4420(param_1,param_2,local_54,&local_14,param_4);
  }
  else if (cVar1 == '\x01') {
    FUN_004f3e1c(param_1,param_2,local_54,&local_14,param_4);
  }
  FUN_004f19cc(local_54);
  FUN_00404340(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x20) + 1);
  FUN_00404340(*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x20) + 1);
  (**(code **)(*param_2 + 0xc))(param_2,&local_10,4);
  local_14 = local_14 ^ 0xffffffff;
  local_10 = FUN_004f16d8(local_10);
  local_9 = local_10 == local_14;
  if (!(bool)local_9) {
    FUN_0040b9d0(PTR_LAB_006893cc,&local_58);
    FUN_004f62b8(*(undefined4 *)(param_1 + 0xc),&LAB_004ede60,local_58);
  }
  puVar2 = puStack_68;
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_004f4947;
  puStack_6c = (undefined1 *)0x4f493f;
  thunk_FUN_004072d8(&local_58,uStack_70,puVar2);
  return;
}
