// rea decompile_all
// name: FUN_006124d0
// address: 0x6124d0
// body: available
// range: 0x6124d0-0x612595 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6124fc (push 0x6125c0 followed by fs-segment stack chaining); handler 0x6125c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612517 (push 0x612596 followed by fs-segment stack chaining); handler 0x612596 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006124d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  local_14 = 0;
  puStack_28 = (undefined1 *)0x6124f1;
  local_c = param_3;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_006125c0;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x612509;
  puStack_28 = &stack0xfffffffc;
  local_10 = (int *)FUN_006125d0(param_1,local_8);
  puStack_38 = &LAB_00612596;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  iVar2 = (**(code **)(*local_10 + 0x14))();
  if (SBORROW4(iVar2,1)) {
    FUN_00405944();
  }
  (**(code **)(*local_10 + 0xc))(local_10,iVar2 + -1,&local_14);
  (**(code **)(*param_1 + 0x20))(param_1,local_c,local_14);
  uVar3 = iVar2 - 2;
  if (SBORROW4(iVar2 + -1,1)) {
    FUN_00405944();
  }
  if (-1 < (int)uVar3) {
    do {
      (**(code **)(*local_10 + 0xc))(local_10,uVar3,&local_18);
      (**(code **)(*param_1 + 0x60))(param_1,local_c,local_18);
      bVar4 = SBORROW4(uVar3,1);
      uVar3 = uVar3 - 1;
      if (bVar4) {
        FUN_00405944();
      }
    } while (uVar3 < 0x80000000);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0061259d;
  puStack_38 = (undefined1 *)0x612595;
  FUN_0041ef80(&local_10,uStack_3c,puVar1);
  return;
}
