// rea decompile_all
// name: FUN_0068bd20
// address: 0x68bd20
// body: available
// range: 0x68bd20-0x68be8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68bd3e (push 0x68be8f followed by fs-segment stack chaining); handler 0x68be8f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068bd20(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [28];
  int local_1c;
  int local_10;
  char local_9;
  int local_8;

  puStack_50 = &stack0xfffffffc;
  local_3c = 0;
  local_40 = 0;
  puStack_54 = &LAB_0068be8f;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  *(undefined4 *)(param_1 + 0x1618) = 0;
  FUN_00659210(*(undefined4 *)(param_1 + 0x61c),0,0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x61c) + 0x2f8);
  if (-1 < iVar3 + -1) {
    local_8 = 0;
    local_10 = iVar3;
    do {
      local_9 = '\x01';
      iVar3 = *(int *)(param_1 + 0x1618);
      if (-1 < iVar3 + -1) {
        iVar4 = 0;
        do {
          FUN_00657698(*(undefined4 *)(param_1 + 0x61c),local_8,local_38);
          if (local_1c == *(int *)(param_1 + 0x674 + iVar4 * 4)) {
            local_9 = '\0';
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (local_9 != '\0') {
        *(int *)(param_1 + 0x1618) = *(int *)(param_1 + 0x1618) + 1;
        FUN_00657698(*(undefined4 *)(param_1 + 0x61c),local_8,local_38);
        *(int *)(param_1 + 0x670 + *(int *)(param_1 + 0x1618) * 4) = local_1c;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (*(int *)(param_1 + 0x1618) == 0) {
    *(undefined4 *)(param_1 + 0x1618) = 1;
    *(undefined4 *)(param_1 + 0x674) = 1000000;
  }
  piVar1 = *(int **)(param_1 + 0x518);
  (**(code **)(*(int *)piVar1[0xab] + 0x44))();
  if (-1 < *(int *)(param_1 + 0x1618) + -1) {
    local_8 = 0;
    local_10 = *(int *)(param_1 + 0x1618);
    do {
      FUN_0041666c(*(undefined4 *)(param_1 + 0x674 + local_8 * 4),&local_40);
      FUN_0040839c(&local_3c,L"Layer ",local_40);
      (**(code **)(*(int *)piVar1[0xab] + 0x38))((int *)piVar1[0xab],local_3c);
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  (**(code **)(*piVar1 + 0xf0))(piVar1,0);
  puVar2 = puStack_50;
  *(undefined4 *)(param_1 + 0x161c) = *(undefined4 *)(param_1 + 0x674);
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0068be96;
  puStack_54 = (undefined1 *)0x68be8e;
  thunk_FUN_00406e80(&local_40,2,puVar2);
  return;
}
