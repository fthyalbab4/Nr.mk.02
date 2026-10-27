// rea decompile_all
// name: FUN_00593558
// address: 0x593558
// body: available
// range: 0x593558-0x593634 inclusive
// range: 0x59363c-0x5936e4 inclusive
// range: 0x5936ec-0x593798 inclusive
// range: 0x5937a0-0x59384e inclusive
// range: 0x593856-0x593989 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5935ee (push 0x593635 followed by fs-segment stack chaining); handler 0x593635 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59369e (push 0x5936e5 followed by fs-segment stack chaining); handler 0x5936e5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x593752 (push 0x593799 followed by fs-segment stack chaining); handler 0x593799 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x593808 (push 0x59384f followed by fs-segment stack chaining); handler 0x59384f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593558(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
      uStack_30 = 0x593882;
      FUN_0043f254(piVar1);
      puStack_28 = (undefined1 *)0x593897;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_c,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (local_10 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5938ce;
      FUN_0043f254(piVar1);
      puStack_28 = (undefined1 *)0x5938e3;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_10,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (param_7 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * 2 * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x59391e;
      FUN_0043f254(piVar1);
      puStack_28 = (undefined1 *)0x593933;
      (**(code **)(*piVar1 + 0xc))(piVar1,param_7,*(int *)(param_1 + 0x4c) * param_4);
    }
    if (param_6 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(local_8 + 0xac) + 0x200 + *(int *)(param_1 + 0x4c) * param_5 +
                   *(int *)(param_1 + 0x4c) * 3 * *(int *)(param_1 + 0x50));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x59396d;
      FUN_0043f254(piVar1);
      puStack_28 = (undefined1 *)0x593982;
      (**(code **)(*piVar1 + 0xc))(piVar1,param_6,*(int *)(param_1 + 0x4c) * param_4);
    }
  }
  else {
    if (param_2 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + param_5 * 4) + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5935c1;
      FUN_0043f254(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + param_5 * 4) * param_4;
      puStack_28 = (undefined1 *)0x5935e0;
      local_14 = FUN_0040431c(param_4);
      puStack_2c = &LAB_00593635;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&local_c,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x59363c;
      if (local_14 != 0) {
        FUN_00404338(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_3 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) + param_5) * 4) +
                   *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x593670;
      FUN_0043f254(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x593690;
      local_14 = FUN_0040431c(param_4);
      puStack_2c = &LAB_005936e5;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&local_10,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5936ec;
      if (local_14 != 0) {
        FUN_00404338(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_7 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) * 2 + param_5) * 4)
                   + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x593722;
      FUN_0043f254(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) * 2 + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x593744;
      local_14 = FUN_0040431c(param_4);
      puStack_2c = &LAB_00593799;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&param_7,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x5937a0;
      if (local_14 != 0) {
        FUN_00404338(local_14,uVar3,uVar2);
      }
      return;
    }
    if (param_6 != 0) {
      puStack_2c = (undefined1 *)
                   (*(int *)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 0x50) * 3 + param_5) * 4)
                   + *(int *)(param_1 + 0xac));
      puStack_28 = (undefined1 *)0x0;
      uStack_30 = 0x5937d7;
      FUN_0043f254(piVar1);
      param_4 = *(int *)(*(int *)(local_8 + 0xcc) + (*(int *)(param_1 + 0x50) * 3 + param_5) * 4) *
                param_4;
      puStack_28 = (undefined1 *)0x5937fa;
      local_14 = FUN_0040431c(param_4);
      puStack_2c = &LAB_0059384f;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      (**(code **)(*piVar1 + 0xc))(piVar1,local_14,param_4);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      (**(code **)**(undefined4 **)(local_8 + 0xd0))
                (*(undefined4 **)(local_8 + 0xd0),&local_14,&param_6,uVar3,param_4);
      uVar2 = uStack_30;
      *in_FS_OFFSET = uVar3;
      uStack_30 = 0x593982;
      if (local_14 != 0) {
        FUN_00404338(local_14,uVar3,uVar2);
      }
      return;
    }
  }
  return;
}
