// rea decompile_all
// name: FUN_006ed608
// address: 0x6ed608
// body: available
// range: 0x6ed608-0x6ed800 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ed626 (push 0x6ed801 followed by fs-segment stack chaining); handler 0x6ed801 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed608(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_006ed801;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_14 = *(undefined4 *)(param_1 + 0x5f0);
  local_18 = *(int *)(param_1 + 0x388);
  FUN_004b961c(*(undefined4 *)(local_18 + 0x29c));
  if (*(int *)(param_1 + 0x5e8) != 0) {
    FUN_0050752c(*(undefined4 *)(local_18 + 0x280));
    uVar2 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
    FUN_00506b18(*(undefined4 *)(local_18 + 0x280),uVar2);
    uVar2 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    FUN_00506b54(*(undefined4 *)(local_18 + 0x280),uVar2);
    *(undefined1 *)(*(int *)(local_18 + 0x280) + 0x45) = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x5e8) + 4);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
        uVar3 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
        local_8 = FUN_005b5764(uVar3,uVar2);
        uVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),iVar4);
        FUN_007034e0(local_8,0,0,1,uVar2);
        local_c = FUN_0070399c(local_8);
        FUN_00405a7c(local_8);
        FUN_00506d84(*(undefined4 *)(local_18 + 0x280),local_c,0);
        FUN_00405a7c(local_c);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x5e8) + 4);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        local_10 = FUN_004b9478(*(undefined4 *)(local_18 + 0x29c));
        FUN_004b8f80(local_10,0,iVar4);
        FUN_0041666c(iVar4,&local_20);
        FUN_0040839c(&local_1c,L"image ",local_20);
        FUN_004b8d5c(local_10,local_1c);
        if (iVar4 == *(int *)(param_1 + 0x5f0)) {
          FUN_004bdea8(local_18,local_10);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x5f0) = local_14;
    FUN_006ed82c(param_1);
    if (-1 < *(int *)(param_1 + 0x5f0)) {
      iVar5 = *(int *)(param_1 + 0x388);
      uVar2 = FUN_004b9534(*(undefined4 *)(iVar5 + 0x29c),*(int *)(param_1 + 0x5f0));
      FUN_004bdf94(iVar5,uVar2);
      iVar5 = *(int *)(param_1 + 0x388);
      uVar2 = FUN_004b9534(*(undefined4 *)(iVar5 + 0x29c),*(undefined4 *)(param_1 + 0x5f0));
      FUN_004bdea8(iVar5,uVar2);
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_006ed808;
  puStack_34 = (undefined1 *)0x6ed800;
  thunk_FUN_00406e80(&local_20,2,puVar1);
  return;
}
