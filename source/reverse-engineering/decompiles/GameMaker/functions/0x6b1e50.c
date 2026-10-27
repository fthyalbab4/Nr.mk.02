// rea decompile_all
// name: FUN_006b1e50
// address: 0x6b1e50
// body: available
// range: 0x6b1e50-0x6b1ff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b1e6c (push 0x6b1ff2 followed by fs-segment stack chaining); handler 0x6b1ff2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1e50(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  int iVar7;
  undefined4 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_006b1ff2;
  puStack_38 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_38;
  iVar7 = *(int *)(param_1 + 0x2fc);
  local_10 = *(int *)(param_1 + 0x2ec);
  local_c = iVar7;
  if (local_10 < iVar7) {
    local_c = local_10;
    local_10 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x2f0) < *(int *)(param_1 + 0x300)) {
    iVar7 = *(int *)(param_1 + 0x300);
  }
  if (iVar7 == 0) {
    local_10 = local_10 + -1;
  }
  iVar7 = local_10;
  FUN_006b1018(param_1,4,local_c,local_10,local_c,local_10);
  local_14 = *(int *)PTR_DAT_007817a0;
  if (local_c <= local_10) {
    iVar6 = (local_10 - local_c) + 1;
    iVar5 = local_c;
    do {
      FUN_006b7d0c(param_1,iVar5,&local_8);
      iVar7 = 0x6b1eea;
      iVar3 = FUN_006afea0(local_8);
      if (iVar3 < local_14) {
        iVar7 = 0x6b1efa;
        FUN_00415dd0(local_8,&local_18);
        if (local_18 != 0) {
          iVar7 = 0x6b1f08;
          local_14 = FUN_006afea0(local_8);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_14 != 0) {
    if (local_c <= local_10) {
      iVar6 = (local_10 - local_c) + 1;
      iVar5 = local_c;
      do {
        puStack_38 = &local_1c;
        FUN_006b7d0c(param_1,iVar5,&local_20,iVar7);
        FUN_004086a8(local_20,local_14 + 1,100000);
        FUN_006b7a68(param_1,iVar5,local_1c);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar7 = *(int *)(param_1 + 0x300) - local_14;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x300) = iVar7;
    iVar7 = *(int *)(param_1 + 0x2f0) - local_14;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x2f0) = iVar7;
    uVar1 = *(undefined4 *)(param_1 + 0x2d8);
    iVar7 = local_10;
    uVar4 = FUN_00409a20(uVar1);
    FUN_006ab16c(uVar1,uVar4,local_c,iVar7);
    FUN_006b311c(param_1,local_c,local_10);
    if (*(short *)(param_1 + 0x2d2) != 0) {
      (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
    }
    FUN_006b281c(param_1);
    FUN_004eed28(param_1);
  }
  puVar2 = puStack_30;
  *in_FS_OFFSET = (int)puStack_38;
  puStack_30 = &LAB_006b1ff9;
  puStack_34 = (undefined1 *)0x6b1fe9;
  thunk_FUN_00406e80(&local_20,3,puVar2);
  puStack_34 = (undefined1 *)0x6b1ff1;
  thunk_FUN_00406e5c(&local_8);
  return;
}
