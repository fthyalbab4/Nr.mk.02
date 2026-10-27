// rea decompile_all
// name: FUN_006ff288
// address: 0x6ff288
// body: available
// range: 0x6ff288-0x6ff443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ff2a3 (push 0x6ff444 followed by fs-segment stack chaining); handler 0x6ff444 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ff288(int *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_006ff444;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = 0;
  local_c = FUN_00714e30(*(undefined4 *)(*param_1 + 4),*(undefined4 *)(*param_1 + 8));
  if (local_c != 0) {
    iVar4 = DAT_007901a0[0x105];
    *(undefined4 *)(iVar4 + 0x1c0) = *(undefined4 *)(local_c + 0x10);
    uVar3 = *(undefined4 *)(local_c + 0x14);
    *(undefined4 *)(iVar4 + 0x1c4) = uVar3;
    FUN_004ee5c0(DAT_007901a0[0xef],CONCAT31((int3)((uint)uVar3 >> 8),1));
    FUN_004ee5c0(DAT_007901a0[0xe2],0);
    FUN_006fed54(*(undefined4 *)(*param_1 + 0x44),*(undefined1 *)(local_c + 0x31));
    FUN_004ee6d8(DAT_007901a0,*(undefined4 *)(local_c + 0x1c));
    iVar4 = 0;
    do {
      FUN_006fdd30(iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 6);
    iVar4 = *(int *)(local_c + 0x34);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        FUN_006fde5c(*param_1,iVar5);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_004ee5c0(DAT_007901a0[0xfd],*(undefined1 *)(local_c + 0x32));
    (**(code **)(*(int *)DAT_007901a0[0xfd] + 0xf0))
              ((int *)DAT_007901a0[0xfd],*(undefined1 *)(*param_1 + 0x48));
    FUN_004ee5c0(DAT_007901a0[0x108],*(undefined1 *)(local_c + 0x30));
    (**(code **)(*(int *)DAT_007901a0[0x108] + 0xf0))
              ((int *)DAT_007901a0[0x108],*(undefined1 *)(*param_1 + 0x6c));
    iVar4 = (**(code **)(*DAT_007901a0 + 0x110))();
    if (iVar4 == 1) {
      uVar3 = FUN_006fee5c();
      *(undefined4 *)(*param_1 + 0x44) = uVar3;
      iVar4 = *(int *)(local_c + 0x34);
      if (-1 < iVar4 + -1) {
        iVar5 = 0;
        do {
          FUN_006fe5cc(iVar5,&local_10);
          FUN_007104dc(*param_1,iVar5,local_10);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar2 = (**(code **)(*(int *)DAT_007901a0[0xfd] + 0xec))();
      *(undefined1 *)(*param_1 + 0x48) = uVar2;
      uVar2 = (**(code **)(*(int *)DAT_007901a0[0x108] + 0xec))();
      *(undefined1 *)(*param_1 + 0x6c) = uVar2;
      local_5 = 1;
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006ff44b;
  puStack_24 = (undefined1 *)0x6ff443;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
