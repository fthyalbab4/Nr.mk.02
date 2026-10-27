// rea decompile_all
// name: FUN_00628d6c
// address: 0x628d6c
// body: available
// range: 0x628d6c-0x628f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x628d8a (push 0x628f8e followed by fs-segment stack chaining); handler 0x628f8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628d6c(int param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined3 uStack_8;
  char local_5;

  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  uStack_8 = 0;
  puStack_30 = &LAB_00628f8e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_5 = param_2;
  FUN_00628d50(param_1);
  if (*(char *)(param_1 + 5) == '\0') {
    if (local_5 == '\x01') {
      *(undefined1 *)(param_1 + 5) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  uVar3 = FUN_0062902c(param_1);
  iVar4 = (**(code **)PTR_DAT_007828e8)();
  *(int *)(param_1 + 0x24) = iVar4;
  if (iVar4 == 0) {
    FUN_0040b75c(PTR_PTR_007826cc,&local_c,uVar3);
    FUN_005df5ec(&PTR_LAB_00627230,1,local_c);
    FUN_00406618();
  }
  FUN_00623f20(*(undefined4 *)(param_1 + 0x24),4);
  (**(code **)PTR_DAT_007820c8)();
  (**(code **)PTR_DAT_007820e0)();
  (**(code **)PTR_DAT_00781e44)();
  if (*(int *)(param_1 + 8) != 0) {
    cVar2 = FUN_0062920c(param_1);
    if (cVar2 == '\0') {
      FUN_0040b75c(PTR_PTR_00781704,&local_10);
      FUN_00620120(&PTR_LAB_006272f0,local_10);
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar2 = FUN_00629234(param_1);
    if (cVar2 == '\0') {
      FUN_0040b75c(PTR_PTR_00781b98,&local_14);
      FUN_00620120(&PTR_LAB_006273b0,local_14);
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    cVar2 = FUN_0062925c(param_1);
    if (cVar2 == '\0') {
      FUN_0040b75c(PTR_PTR_00782304,&local_18);
      FUN_00620120(&PTR_LAB_00627468,local_18);
    }
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00623e3c(*(undefined4 *)(param_1 + 0x24),FUN_0062788c);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar4 = (**(code **)PTR_DAT_007825e8)();
  }
  else {
    FUN_00407670(*(undefined4 *)(param_1 + 0x20));
    iVar4 = (**(code **)PTR_DAT_007825e8)();
  }
  if (iVar4 < 1) {
    FUN_0040b75c(PTR_PTR_00781c2c,&local_1c);
    FUN_00620120(&PTR_LAB_00627468,local_1c);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00628fc8(param_1,*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x29));
  }
  if (local_5 == '\x01') {
    (**(code **)PTR_DAT_00781ad4)();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00407670(*(undefined4 *)(param_1 + 8));
    (**(code **)PTR_DAT_00782494)();
    (**(code **)PTR_DAT_00781b18)();
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00628f95;
  puStack_30 = (undefined1 *)0x628f8d;
  thunk_FUN_00406e80(&local_1c,5,puVar1);
  return;
}
