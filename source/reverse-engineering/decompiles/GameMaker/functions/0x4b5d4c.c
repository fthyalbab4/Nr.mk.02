// rea decompile_all
// name: FUN_004b5d4c
// address: 0x4b5d4c
// body: available
// range: 0x4b5d4c-0x4b5e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5d6f (push 0x4b5eb9 followed by fs-segment stack chaining); handler 0x4b5eb9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5db5 (push 0x4b5e8e followed by fs-segment stack chaining); handler 0x4b5e8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5dc3 (push 0x4b5e68 followed by fs-segment stack chaining); handler 0x4b5e68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5d4c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  int **ppiVar7;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  char local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  code *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_8 = 0;
  puStack_44 = &LAB_004b5eb9;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_10 = *(int *)(param_1 + 0x24);
  puVar2 = &stack0xfffffffc;
  local_c = param_1;
  if (local_10 == 0) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x2d4);
    puStack_4c = (undefined1 *)0x4b5d91;
    local_10 = (*(code *)*puVar1)(puVar1,1);
    puVar2 = puStack_40;
  }
  puStack_40 = puVar2;
  local_2c = local_10;
  local_24 = *(char *)(local_c + 0x20);
  puStack_50 = &LAB_004b5e8e;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_5c = &LAB_004b5e68;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_1c = &local_2c;
  local_14 = FUN_004b5670;
  local_18 = 0;
  local_28 = param_2;
  local_20 = param_3;
  if (local_24 == '\0') {
    uVar5 = 2;
    puStack_58 = &stack0xfffffffc;
    puStack_4c = &stack0xfffffffc;
  }
  else {
    uVar5 = 0x11;
    puStack_58 = &stack0xfffffffc;
    puStack_4c = &stack0xfffffffc;
    if (param_3 != (int *)0x0) {
      puStack_58 = &stack0xfffffffc;
      puStack_4c = &stack0xfffffffc;
      (**(code **)(*param_3 + 0x18))(param_3,&local_8);
      iVar3 = FUN_00409a18(local_8);
      if (0 < iVar3) {
        uVar4 = FUN_00409a18(local_8);
        FUN_0043f4c0(param_2,local_8,uVar4);
      }
    }
  }
  ppiVar7 = &local_1c;
  uVar6 = 1;
  uVar4 = FUN_004f76a8(*(undefined4 *)(local_c + 0x1c));
  FUN_0040efd0(uVar4,0x44a,uVar5,uVar6,ppiVar7);
  if (local_18 != 0) {
    FUN_0040b75c(PTR_PTR_00781614,&local_30);
    FUN_0041beb8(&PTR_LAB_0042efc8,1,local_30);
    FUN_00406618();
  }
  *in_FS_OFFSET = uStack_60;
  return;
}
