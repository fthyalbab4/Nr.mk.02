// rea decompile_all
// name: FUN_00630f54
// address: 0x630f54
// body: available
// range: 0x630f54-0x63116e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x630f77 (push 0x63116f followed by fs-segment stack chaining); handler 0x63116f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630f54(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_4c = (undefined1 *)0x630f6c;
  local_8 = param_3;
  thunk_FUN_00407660(param_5);
  puStack_50 = &LAB_0063116f;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  iVar2 = (**(code **)(*DAT_0077f0e4 + 0x30))();
  if (iVar2 < *(int *)(param_1 + 4)) {
    (**(code **)(*DAT_0077f0e4 + 0x44))(DAT_0077f0e4,*(undefined4 *)(param_1 + 4));
  }
  iVar2 = (**(code **)(*DAT_0077f0e4 + 0x24))();
  if (iVar2 < *(int *)(param_1 + 8)) {
    (**(code **)(*DAT_0077f0e4 + 0x38))(DAT_0077f0e4,*(undefined4 *)(param_1 + 8));
  }
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  (**(code **)(**(int **)(iVar2 + 0x40) + 8))(*(int **)(iVar2 + 0x40),DAT_0078a0f8);
  uVar3 = FUN_00462a64(DAT_0077f0e4);
  iVar2 = FUN_0045bec4(uVar3,param_5);
  uVar3 = FUN_00462a64(DAT_0077f0e4);
  local_14 = FUN_0045bea4(uVar3,param_5);
  local_18 = param_2 + -2;
  if (local_18 < 0) {
    local_18 = 0;
  }
  local_1c = local_8 + -2;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_20 = FUN_0045b450(DAT_0078a0f8);
  local_20 = local_20 + iVar2 + param_2;
  if (*(int *)(param_1 + 4) < local_20) {
    local_20 = *(int *)(param_1 + 4);
  }
  local_24 = FUN_0045b450(DAT_0078a0f8);
  local_24 = local_24 + local_8 + local_14;
  if (*(int *)(param_1 + 8) < local_24) {
    local_24 = *(int *)(param_1 + 8);
  }
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),0);
  FUN_00438c38(local_18,local_1c,local_20,local_3c,local_24);
  puVar7 = local_3c;
  piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
  (**(code **)(*piVar4 + 0x4c))(piVar4,puVar7);
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045b0d0(*(undefined4 *)(iVar2 + 0x40),0xffffff);
  uVar3 = param_5;
  piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
  (**(code **)(*piVar4 + 0x88))(piVar4,param_2,local_8);
  local_10 = DAT_0078a0e4;
  if (local_1c <= local_24 + -1) {
    local_28 = ((local_24 + -1) - local_1c) + 1;
    iVar2 = local_1c;
    do {
      local_c = FUN_00462be8(DAT_0077f0e4,iVar2);
      if (local_18 <= local_20 + -1) {
        local_2c = ((local_20 + -1) - local_18) + 1;
        iVar6 = local_18;
        do {
          uVar1 = *(uint *)(local_c + iVar6 * 4);
          if (uVar1 != 0) {
            local_10 = CONCAT13((char)(((DAT_0078a0e4 >> 0x18) * (uVar1 >> 0x10)) / 0xff),
                                (undefined3)local_10);
            uVar5 = FUN_005a58cc(*(undefined4 *)
                                  (*(int *)(param_1 + 0xc) +
                                  (iVar2 * *(int *)(param_1 + 4) + iVar6) * 4),local_10,DAT_0078a0f0
                                );
            *(undefined4 *)(*(int *)(param_1 + 0xc) + (iVar2 * *(int *)(param_1 + 4) + iVar6) * 4) =
                 uVar5;
          }
          iVar6 = iVar6 + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      iVar2 = iVar2 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  FUN_00438c38(local_18,local_1c,local_20,param_4,local_24);
  puVar7 = puStack_50;
  *in_FS_OFFSET = uVar3;
  puStack_50 = &LAB_00631176;
  uStack_54 = 0x63116e;
  thunk_FUN_00406e5c(&param_5,uVar3,puVar7);
  return;
}
