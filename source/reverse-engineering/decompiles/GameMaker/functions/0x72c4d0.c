// rea decompile_all
// name: FUN_0072c4d0
// address: 0x72c4d0
// body: available
// range: 0x72c4d0-0x72c57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c4fa (push 0x72c57c followed by fs-segment stack chaining); handler 0x72c57c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072c4d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 local_20 [16];
  int *local_10;
  undefined4 local_c;

  puStack_30 = (undefined1 *)0x72c4ec;
  local_c = param_3;
  local_10 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_34 = &LAB_0072c57c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  uVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*local_10 + 0x44))(local_10,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x24))();
  (**(code **)(*local_10 + 0x38))(local_10,uVar1);
  uVar1 = (**(code **)(*local_10 + 0x24))();
  puVar3 = local_20;
  uVar2 = (**(code **)(*local_10 + 0x30))();
  FUN_00438c38(0,0,uVar2,puVar3,uVar1);
  puVar3 = local_20;
  uVar1 = FUN_00462a64(local_10);
  (**(code **)(*param_1 + 0x14))(param_1,uVar1,puVar3);
  (**(code **)(*local_10 + 0x68))(local_10,param_2,local_c);
  puVar3 = puStack_34;
  *in_FS_OFFSET = param_4;
  puStack_34 = &LAB_0072c583;
  uStack_38 = 0x72c57b;
  FUN_00405a7c(local_10,param_4,puVar3);
  return;
}
