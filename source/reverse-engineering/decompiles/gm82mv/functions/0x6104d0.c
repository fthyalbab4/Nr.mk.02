// rea decompile_all
// name: FUN_006104d0
// address: 0x6104d0
// body: available
// range: 0x6104d0-0x61064d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6104ed (push 0x61064e followed by fs-segment stack chaining); handler 0x61064e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006104d0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_0061064e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uStack_c = 0x1000000;
  FUN_006104a4(param_1);
  iVar3 = FUN_0050bbe0(param_2);
  if (iVar3 == 0x1b8) {
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar4;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar2;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x11) = uVar2;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    FUN_0050bc1c(param_2,&local_8);
    FUN_005892ac(local_8,param_1 + 0x18);
    if ((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 0x18) < 0)) {
      FUN_00408678(&local_14,&PTR_DAT_0061066c,local_8);
      FUN_004a17e4(local_14);
    }
    FUN_0050bc1c(param_2,&local_18);
    FUN_00408194(param_1 + 0x1c,local_18);
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    iVar3 = FUN_0050bbe0(param_2);
    if (-1 < iVar3 + -1) {
      local_10 = 0;
      do {
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(param_1 + 0x28 + local_10 * 4) = uVar4;
        local_10 = local_10 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x4c) = uVar2;
    iVar3 = FUN_0050bbe0(param_2);
    if (-1 < iVar3 + -1) {
      local_10 = 0;
      do {
        FUN_0050bc1c(param_2,&local_1c);
        FUN_00408194(param_1 + 0x50 + local_10 * 4,local_1c);
        local_10 = local_10 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x150) = uVar2;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00610655;
  puStack_30 = (undefined1 *)0x610645;
  thunk_FUN_004072fc(&local_1c,3,puVar1);
  puStack_30 = (undefined1 *)0x61064d;
  thunk_FUN_004072d8(&local_8);
  return;
}
