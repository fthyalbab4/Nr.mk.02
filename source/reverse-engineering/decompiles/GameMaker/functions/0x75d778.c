// rea decompile_all
// name: FUN_0075d778
// address: 0x75d778
// body: available
// range: 0x75d778-0x75d81a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75d799 (push 0x75d838 followed by fs-segment stack chaining); handler 0x75d838 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75d7b7 (push 0x75d81b followed by fs-segment stack chaining); handler 0x75d81b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075d778(undefined4 param_1,int *param_2,undefined1 param_3,byte param_4,byte param_5,
                 undefined1 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined1 local_d;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_0075d838;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x75d7a4;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0075d6cc(param_1);
  puStack_2c = (undefined1 *)0x75d7ac;
  FUN_0043d354(local_c);
  puStack_30 = &LAB_0075d81b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar2 = FUN_0075d75c(local_8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      uVar3 = (uint)param_5;
      uVar4 = (uint)param_4;
      puVar7 = &local_14;
      FUN_0075d848(local_8,iVar6);
      uVar5 = FUN_0075d4b0();
      FUN_0075c380(uVar5,local_d,param_6,puVar7,uVar4,uVar3);
      (**(code **)(*local_c + 0x38))(local_c,local_14);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0075d822;
  puStack_30 = (undefined1 *)0x75d81a;
  FUN_0043d41c(local_c,uStack_34,puVar1);
  return;
}
