// rea decompile_all
// name: FUN_0071076c
// address: 0x71076c
// body: available
// range: 0x71076c-0x7108f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71078f (push 0x7108f5 followed by fs-segment stack chaining); handler 0x7108f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071076c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_5;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  puStack_30 = &LAB_007108f5;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_5 = 0;
  FUN_00710638(param_1);
  local_c = FUN_0052f024(param_2);
  if (local_c == 0x1b8) {
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x11) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    FUN_0052f060(param_2,&local_14);
    FUN_00407eb8(param_1 + 0x18,local_14);
    FUN_0052f060(param_2,&local_18);
    FUN_00407eb8(param_1 + 0x1c,local_18);
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    iVar4 = FUN_0052f024(param_2);
    if (-1 < iVar4 + -1) {
      local_10 = 0;
      do {
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(param_1 + 0x24 + local_10 * 4) = uVar3;
        local_10 = local_10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00710544(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x48) = uVar2;
    iVar4 = FUN_0052f024(param_2);
    if (-1 < iVar4 + -1) {
      local_10 = 0;
      do {
        FUN_0052f060(param_2,&local_1c);
        FUN_00407eb8(param_1 + 0x4c + local_10 * 4,local_1c);
        local_10 = local_10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = local_c == 0x1b8;
    if ((bool)uVar2) {
      uVar2 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 0x6c) = uVar2;
    }
    else {
      FUN_00408640(*(undefined4 *)(param_1 + 0x68),&DAT_00710914);
      *(undefined1 *)(param_1 + 0x6c) = uVar2;
    }
    local_5 = 1;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_007108fc;
  puStack_30 = (undefined1 *)0x7108f4;
  thunk_FUN_00406e80(&local_1c,3,puVar1);
  return;
}
