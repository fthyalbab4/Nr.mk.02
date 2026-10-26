// rea decompile_all
// name: FUN_005d93bc
// address: 0x5d93bc
// body: available
// range: 0x5d93bc-0x5d9498 inclusive
// range: 0x5d94a0-0x5d9548 inclusive
// range: 0x5d9550-0x5d95fc inclusive
// range: 0x5d9604-0x5d96b2 inclusive
// range: 0x5d96ba-0x5d97ed inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9452 (push 0x5d9499 followed by fs-segment stack chaining); handler 0x5d9499 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9502 (push 0x5d9549 followed by fs-segment stack chaining); handler 0x5d9549 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d95b6 (push 0x5d95fd followed by fs-segment stack chaining); handler 0x5d95fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d966c (push 0x5d96b3 followed by fs-segment stack chaining); handler 0x5d96b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d93bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar1 = *(int **)(param_1 + 0xb0);
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xd0) == 0) {
    if (param_2 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(param_1 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5);
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d96e6;
      FUN_0043c854(piVar1);
      puStack_28 = (undefined1 *)0x5d96fb;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_c,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (local_10 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d9732;
      FUN_0043c854(piVar1);
      puStack_28 = (undefined1 *)0x5d9747;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_10,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (param_7 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * 2 * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d9782;
      FUN_0043c854(piVar1);
      puStack_28 = (undefined1 *)0x5d9797;
      (**(code **)(*piVar1 + 0xc))(piVar1,param_7,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (param_6 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * 3 * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d97d1;
      FUN_0043c854(piVar1);
      puStack_28 = (undefined1 *)0x5d97e6;
      (**(code **)(*piVar1 + 0xc))(piVar1,param_6,*(int *)(param_1 + 0x4c) * param_4);
    }
  }
  else {
    if (param_2 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + param_5 * 4) + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d9425;
      FUN_0043c854(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + param_5 * 4) * param_4;
      puStack_28 = (undefined1 *)0x5d9444;
      local_14 = FUN_00404324(param_4);
      puStack_2c = &LAB_005d9499;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&local_c,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5d94a0;
      if (local_14 != 0) {
        FUN_00404340(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_3 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) + param_5) * 4) +
                   *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d94d4;
      FUN_0043c854(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x5d94f4;
      local_14 = FUN_00404324(param_4);
      puStack_2c = &LAB_005d9549;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&local_10,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5d9550;
      if (local_14 != 0) {
        FUN_00404340(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_7 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) * 2 + param_5) * 4)
                   + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d9586;
      FUN_0043c854(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) * 2 + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x5d95a8;
      local_14 = FUN_00404324(param_4);
      puStack_2c = &LAB_005d95fd;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&param_7,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5d9604;
      if (local_14 != 0) {
        FUN_00404340(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_6 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) * 3 + param_5) * 4)
                   + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5d963b;
      FUN_0043c854(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) * 3 + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x5d965e;
      local_14 = FUN_00404324(param_4);
      puStack_2c = &LAB_005d96b3;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&param_6,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5d97e6;
      if (local_14 != 0) {
        FUN_00404340(local_14,uVar3,uVar2);
      }
      return;
    }
  }
  return;
}
