// rea decompile_all
// name: FUN_006080c0
// address: 0x6080c0
// body: available
// range: 0x6080c0-0x608312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6080e2 (push 0x608313 followed by fs-segment stack chaining); handler 0x608313 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006080c0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint extraout_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_2c = &LAB_00608313;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_00607524(param_1);
  if (*(int **)(local_8 + 0x100) == (int *)0x0) {
    FUN_00407f0c(&local_c,*(undefined4 *)(local_8 + 0x9c));
    uVar5 = *(uint *)(local_8 + 0xb8);
    uVar4 = (uint)*(byte *)(local_8 + 0x106);
  }
  else {
    cVar3 = (**(code **)(**(int **)(local_8 + 0x100) + 0x44))();
    if (cVar3 == '\0') {
      FUN_00407f0c(&local_c,*(undefined4 *)(local_8 + 0x9c));
      uVar5 = *(uint *)(local_8 + 0xb8);
      uVar4 = (uint)*(byte *)(local_8 + 0x106);
    }
    else {
      iVar1 = *(int *)(local_8 + 0x100);
      FUN_00407f0c(&local_c,*(undefined4 *)(iVar1 + 0x90));
      uVar5 = (uint)*(ushort *)(iVar1 + 0x98);
      uVar4 = (uint)*(byte *)(iVar1 + 0x9a);
    }
  }
  if ((char)uVar4 == '\0') {
    cVar3 = FUN_005f3f1c(*(undefined4 *)PTR_DAT_007826d0,local_c);
    if (cVar3 == '\0') {
      if (*(short *)(local_8 + 0x3a) != 0) {
        local_18 = local_c;
        local_14 = 0x11;
        FUN_005f51cc(local_8,0,&local_18,0);
      }
      FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,local_c,*(undefined1 *)(local_8 + 0x106),
                   &local_10);
    }
    else {
      FUN_00407f0c(&local_10,local_c);
    }
  }
  else {
    FUN_005e109c(local_c,&local_10);
    if (local_10 == 0) {
      if (*(short *)(local_8 + 0x3a) != 0) {
        local_18 = local_c;
        local_14 = 0x11;
        FUN_005f51cc(local_8,0,&local_18,0);
      }
      FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,local_c,uVar4,&local_10);
    }
    else {
      FUN_00407f0c(&local_10,local_c);
    }
  }
  if (0xffff < uVar5) {
    thunk_FUN_00404478();
    uVar5 = extraout_ECX;
  }
  FUN_005f69d4(*(undefined4 *)(local_8 + 0xd8),local_10,uVar5,uVar4);
  if (*(short *)(local_8 + 0x3a) != 0) {
    local_18 = *(undefined4 *)(*(int *)(local_8 + 0xd8) + 0x1c);
    local_14 = 0x11;
    FUN_005f51cc(local_8,1,&local_18,0);
  }
  if (*(int *)(local_8 + 0x94) == 0) {
    cVar3 = FUN_005f58b0(&PTR_FUN_005f54dc);
    if (cVar3 == '\0') {
      (**(code **)(**(int **)(local_8 + 0xd8) + 0x24))();
    }
    else {
      FUN_00607f20(120000);
    }
  }
  else {
    FUN_00607f20();
  }
  if (*(int **)(local_8 + 0x100) != (int *)0x0) {
    cVar3 = (**(code **)(**(int **)(local_8 + 0x100) + 0x44))();
    if (cVar3 != '\0') {
      uVar5 = *(uint *)(local_8 + 0xb8);
      if (0xffff < uVar5) {
        uVar5 = thunk_FUN_00404478();
      }
      FUN_00601384(*(undefined4 *)(local_8 + 0x100),local_8,*(undefined4 *)(local_8 + 0x9c),
                   *(undefined1 *)(local_8 + 0x106),uVar5);
    }
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0060831a;
  puStack_2c = (undefined1 *)0x608312;
  thunk_FUN_00406e80(&local_10,2,puVar2);
  return;
}
