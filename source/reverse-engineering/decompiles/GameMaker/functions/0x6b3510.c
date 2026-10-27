// rea decompile_all
// name: FUN_006b3510
// address: 0x6b3510
// body: available
// range: 0x6b3510-0x6b3615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b3535 (push 0x6b3616 followed by fs-segment stack chaining); handler 0x6b3616 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b3510(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = (undefined1 *)0x6b352a;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_006b3616;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_c);
  FUN_004086a8(local_c,1,*(undefined4 *)(param_1 + 0x2f0),&local_14);
  iVar8 = local_8;
  FUN_004086a8(local_c,*(int *)(param_1 + 0x300) + 1,100000,&local_18,local_8,local_14);
  uVar3 = local_18;
  FUN_00408480(&local_10,3);
  FUN_006b7a68(param_1,*(undefined4 *)(param_1 + 0x2ec),local_10);
  uVar1 = *(undefined4 *)(param_1 + 0x2ec);
  uVar2 = *(undefined4 *)(param_1 + 0x2d8);
  uVar7 = uVar1;
  uVar4 = FUN_00409a20(uVar2);
  FUN_006ab16c(uVar2,uVar4,uVar1,uVar7);
  FUN_006b315c(param_1,*(undefined4 *)(param_1 + 0x2ec));
  iVar5 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar5 = FUN_00407048(&local_8,local_8);
  }
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + -4);
  }
  *(int *)(param_1 + 0x300) = iVar6 + *(int *)(param_1 + 0x2f0);
  *in_FS_OFFSET = uVar3;
  thunk_FUN_00406e80(&local_18,5,iVar8,&LAB_006b361d);
  return;
}
