// rea decompile_all
// name: FUN_00417c9c
// address: 0x417c9c
// body: available
// range: 0x417c9c-0x417e21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x417cd4 (push 0x417e22 followed by fs-segment stack chaining); handler 0x417e22 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417c9c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2018 [4056];
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined1 *puStack_102c;
  undefined1 *puStack_1028;
  int local_18;
  int local_8;

  puVar2 = (undefined4 *)0x2;
  do {
    puVar3 = puVar2;
    puVar2 = (undefined4 *)((int)puVar3 + -1);
  } while ((undefined4 *)((int)puVar3 + -1) != (undefined4 *)0x0);
  puStack_1028 = (undefined1 *)0x417cc9;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_102c = &LAB_00417e22;
  uStack_1030 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1030;
  iVar7 = 0x1000;
  iVar4 = local_8;
  puStack_1028 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1028 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    uStack_1034 = 0x417cf9;
    puStack_1028 = &stack0xfffffffc;
    iVar4 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  if (iVar5 < 0xc00) {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      uStack_1034 = 0x417d26;
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uStack_1034 = 0;
    if (iVar4 != 0) {
      uStack_1034 = *(undefined4 *)(iVar4 + -4);
    }
    uStack_103c = param_4;
    uStack_1040 = 0x417d4b;
    uStack_1038 = param_3;
    local_18 = FUN_00417be4(local_2018,0xfff,local_8);
  }
  else {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      uStack_1034 = 0x417d6d;
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    iVar7 = 0;
    local_18 = iVar7;
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + -4);
      local_18 = iVar7;
    }
  }
  if (local_18 < iVar7 + -1) {
    uStack_1034 = 0x417e0c;
    FUN_004082d0(puVar3,local_2018,local_18);
  }
  else {
    while (iVar7 + -1 <= local_18) {
      iVar7 = iVar7 * 2;
      uStack_1034 = 0x417d91;
      FUN_00408194(puVar3,0);
      uStack_1034 = 0x417d9b;
      FUN_00408520(puVar3,iVar7);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        uStack_1034 = 0x417db8;
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uStack_1034 = 0;
      if (iVar4 != 0) {
        uStack_1034 = *(undefined4 *)(iVar4 + -4);
      }
      uStack_103c = param_4;
      uStack_1040 = 0x417dd8;
      uStack_1038 = param_3;
      uVar6 = FUN_00408220(*puVar3);
      uStack_1040 = 0x417de3;
      local_18 = FUN_00417be4(uVar6,iVar7 + -1,local_8);
    }
    uStack_1034 = 0x417df9;
    FUN_00408520(puVar3,local_18);
  }
  puVar1 = puStack_1028;
  *in_FS_OFFSET = uStack_1030;
  puStack_1028 = &LAB_00417e29;
  puStack_102c = (undefined1 *)0x417e21;
  thunk_FUN_004072d8(&local_8,uStack_1030,puVar1);
  return;
}
