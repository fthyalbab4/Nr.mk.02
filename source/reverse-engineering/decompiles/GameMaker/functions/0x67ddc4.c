// rea decompile_all
// name: FUN_0067ddc4
// address: 0x67ddc4
// body: available
// range: 0x67ddc4-0x67dee4 inclusive
// range: 0x67deec-0x67df01 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67dddf (push 0x67df02 followed by fs-segment stack chaining); handler 0x67df02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67de1d (push 0x67dee5 followed by fs-segment stack chaining); handler 0x67dee5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067ddc4(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0067df02;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 8) + 8) != 0) {
      puStack_2c = (undefined1 *)0x67de0f;
      local_8 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      puStack_30 = &LAB_0067dee5;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + 8) + 8);
      puStack_2c = &stack0xfffffffc;
      if (-1 < iVar4 + -1) {
        iVar6 = 0;
        puStack_2c = &stack0xfffffffc;
        local_c = iVar4;
        do {
          iVar4 = FUN_0067ed84(*(undefined4 *)(param_1 + 0x38),iVar6);
          if (iVar4 != 0) {
            iVar4 = FUN_0067ed84(*(undefined4 *)(param_1 + 0x38),iVar6);
            if (*(int *)(iVar4 + 0x18) != 0) {
              cVar3 = FUN_0067eeac(*(undefined4 *)(param_1 + 0x3c),
                                   *(undefined4 *)(*(int *)(iVar4 + 0x18) + 8));
              if (cVar3 != '\0') {
                (**(code **)(*local_8 + 0x3c))
                          (local_8,*(undefined4 *)(*(int *)(iVar4 + 0x18) + 8),iVar4);
              }
            }
          }
          iVar6 = iVar6 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      FUN_0067edf0(*(undefined4 *)(param_1 + 0x3c));
      iVar4 = (**(code **)(*local_8 + 0x14))();
      if (0 < iVar4) {
        iVar4 = (**(code **)(*local_8 + 0x14))();
        if (-1 < iVar4 + -1) {
          iVar6 = 0;
          local_c = iVar4;
          do {
            (**(code **)(*local_8 + 0xc))(local_8,iVar6,&local_10);
            uVar1 = local_10;
            uVar5 = (**(code **)(*local_8 + 0x18))(local_8,iVar6);
            FUN_0067edb0(*(undefined4 *)(param_1 + 0x3c),uVar1,uVar5);
            iVar6 = iVar6 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
      }
      puVar2 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = (undefined1 *)0x67deec;
      puStack_30 = (undefined1 *)0x67dee4;
      FUN_00405a7c(local_8,uStack_34,puVar2);
      return;
    }
    puStack_2c = (undefined1 *)0x67ddfe;
    puStack_20 = &stack0xfffffffc;
    FUN_0067edf0(*(undefined4 *)(param_1 + 0x3c));
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0067df09;
  puStack_24 = (undefined1 *)0x67df01;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar2);
  return;
}
