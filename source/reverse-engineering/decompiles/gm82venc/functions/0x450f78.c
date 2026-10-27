// rea decompile_all
// name: FUN_00450f78
// address: 0x450f78
// body: available
// range: 0x450f78-0x45107b inclusive
// range: 0x4510a0-0x4510ca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450f95 (push 0x4510cb followed by fs-segment stack chaining); handler 0x4510cb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450fd1 (push 0x451099 followed by fs-segment stack chaining); handler 0x451099 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x451032 (push 0x45107c followed by fs-segment stack chaining); handler 0x45107c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450f78(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_24 = &LAB_004510cb;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 4) != 0) {
    puStack_2c = (undefined1 *)0x450faa;
    cVar2 = FUN_00416b0c(*(undefined4 *)(param_1 + 4));
    puVar1 = puStack_20;
    if (cVar2 != '\0') {
      puStack_2c = (undefined1 *)0x20;
      puStack_30 = (undefined1 *)0x450fc3;
      local_10 = (int *)FUN_0043d208(&PTR_LAB_004315a0,1,*(undefined4 *)(param_1 + 4));
      puStack_30 = &LAB_00451099;
      iStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_34;
      puStack_38 = (undefined1 *)0x450fdb;
      puStack_2c = &stack0xfffffffc;
      iVar3 = (**(code **)*local_10)();
      puStack_38 = (undefined1 *)0x450fe5;
      iVar4 = FUN_0043c834(local_10);
      puStack_3c = (undefined1 *)0x450ffb;
      puStack_38 = (undefined1 *)(iVar3 - iVar4);
      FUN_00409dfc(&local_8,&DAT_00410758,1);
      puStack_38 = (undefined1 *)0x45100b;
      (**(code **)(*local_10 + 0xc))(local_10,local_8,iVar3 - iVar4);
      puStack_38 = (undefined1 *)0x451016;
      iVar3 = FUN_00421628(local_8,param_1 + 0xc);
      puStack_38 = (undefined1 *)0x451024;
      local_c = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
      puStack_3c = &LAB_0045107c;
      puStack_40 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&puStack_40;
      puStack_38 = &stack0xfffffffc;
      iVar4 = FUN_00409c34(local_8);
      puVar5 = &local_14;
      FUN_00422150(*(undefined4 *)(param_1 + 0xc),local_8,iVar3,puVar5,iVar4 - iVar3);
      (**(code **)(*local_c + 0x2c))(local_c,local_14);
      FUN_0045138c(param_1,local_c);
      puVar1 = puStack_40;
      *in_FS_OFFSET = (int)puVar5;
      puStack_40 = &LAB_00451083;
      FUN_00405fdc(local_c,puVar5,puVar1);
      return;
    }
  }
  puStack_20 = puVar1;
  puStack_2c = (undefined1 *)0x4510a7;
  FUN_00450d7c(param_1);
  puVar1 = puStack_20;
  *in_FS_OFFSET = iStack_28;
  puStack_20 = &LAB_004510d2;
  puStack_24 = (undefined1 *)0x4510bc;
  thunk_FUN_004072d8(&local_14,iStack_28,puVar1);
  puStack_24 = (undefined1 *)0x4510ca;
  FUN_00409e08(&local_8,&DAT_00410758);
  return;
}
