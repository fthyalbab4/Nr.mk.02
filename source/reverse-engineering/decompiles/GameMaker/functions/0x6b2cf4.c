// rea decompile_all
// name: FUN_006b2cf4
// address: 0x6b2cf4
// body: available
// range: 0x6b2cf4-0x6b2ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b2d17 (push 0x6b2ea8 followed by fs-segment stack chaining); handler 0x6b2ea8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2cf4(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 **local_30;
  undefined1 **local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int iVar4;
  int local_10;
  int local_c;

  local_20 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_24 = &LAB_006b2ea8;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_10 = *(int *)(param_1 + 0x2ec);
  iVar2 = *(int *)(param_1 + 0x2fc);
  local_c = iVar2;
  if (iVar2 < local_10) {
    iVar3 = *(int *)(param_1 + 0x300);
    iVar4 = *(int *)(param_1 + 0x2f0);
  }
  else if (local_10 < iVar2) {
    iVar4 = *(int *)(param_1 + 0x300);
    iVar3 = *(int *)(param_1 + 0x2f0);
    local_c = local_10;
    local_10 = iVar2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x300);
    iVar3 = iVar4;
    if (*(int *)(param_1 + 0x2f0) <= iVar4) {
      iVar3 = *(int *)(param_1 + 0x2f0);
    }
    if (iVar4 <= *(int *)(param_1 + 0x2f0)) {
      iVar4 = *(int *)(param_1 + 0x2f0);
    }
  }
  if (local_c == local_10) {
    local_2c = (undefined1 **)&stack0xffffffe8;
    local_30 = (undefined4 **)0x6b2da1;
    local_20 = &stack0xfffffffc;
    FUN_006b7d0c(param_1,local_c,&stack0xffffffe4);
    local_30 = (undefined4 **)0x6b2db1;
    FUN_004086a8(unaff_EDI,iVar3 + 1,iVar4 - iVar3);
    local_30 = (undefined4 **)0x6b2dbc;
    (**(code **)(*param_2 + 0x38))(param_2,unaff_ESI);
    local_30 = (undefined4 **)0x6b2dcf;
    iVar2 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10));
    if (iVar2 < iVar4) {
      local_30 = (undefined4 **)0x6b2de2;
      (**(code **)(*param_2 + 0x38))(param_2,0);
    }
  }
  else {
    local_2c = &local_20;
    local_30 = (undefined4 **)0x6b2df7;
    FUN_006b7d0c(param_1,local_c,&local_24);
    local_30 = (undefined4 **)0x6b2e07;
    FUN_004086a8(local_24,iVar3 + 1,100000);
    local_30 = (undefined4 **)0x6b2e12;
    (**(code **)(*param_2 + 0x38))(param_2,local_20);
    local_c = local_c + 1;
    if (local_c <= local_10 + -1) {
      iVar2 = ((local_10 + -1) - local_c) + 1;
      do {
        local_30 = (undefined4 **)0x6b2e2d;
        FUN_006b7d0c(param_1,local_c,&local_28);
        local_30 = (undefined4 **)0x6b2e38;
        (**(code **)(*param_2 + 0x38))(param_2,local_28);
        local_c = local_c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_30 = &local_2c;
    FUN_006b7d0c(param_1,local_10,&local_30);
    FUN_004086a8(local_30,1,iVar4);
    (**(code **)(*param_2 + 0x38))(param_2,local_2c);
    local_30 = (undefined4 **)0x6b2e7e;
    iVar2 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + local_10 * 0x10));
    if (iVar2 < iVar4) {
      local_30 = (undefined4 **)0x6b2e8d;
      (**(code **)(*param_2 + 0x38))(param_2,0);
    }
  }
  puVar1 = local_24;
  *in_FS_OFFSET = (int)local_2c;
  local_24 = &LAB_006b2eaf;
  local_28 = 0x6b2ea7;
  thunk_FUN_00406e80(&local_30,7,puVar1);
  return;
}
