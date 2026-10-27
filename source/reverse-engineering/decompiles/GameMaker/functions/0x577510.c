// rea decompile_all
// name: FUN_00577510
// address: 0x577510
// body: available
// range: 0x577510-0x577614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x577535 (push 0x577650 followed by fs-segment stack chaining); handler 0x577650 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x577552 (push 0x577615 followed by fs-segment stack chaining); handler 0x577615 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00577510(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  puStack_30 = &LAB_00577650;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x577544;
  local_10 = param_2;
  local_c = param_1;
  local_14 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_3c = &LAB_00577615;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  uVar2 = (**(code **)(*local_c + 0x14))();
  FUN_0043b328(local_14,uVar2);
  uVar2 = (**(code **)(*local_c + 0x14))();
  FUN_00409bec(local_c[0x12],&DAT_00575394,0,&local_8,uVar2);
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar5,&local_18);
      FUN_0043b1f4(local_14,iVar5,local_18);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043f13c(local_c,local_10);
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar5,&local_1c);
      iVar4 = FUN_0043b0b0(local_14,local_1c);
      *(undefined4 *)(local_c[0x12] + iVar5 * 4) = *(undefined4 *)(local_8 + iVar4 * 4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0057761c;
  puStack_3c = (undefined1 *)0x577614;
  FUN_00405a7c(local_14,uStack_40,puVar1);
  return;
}
