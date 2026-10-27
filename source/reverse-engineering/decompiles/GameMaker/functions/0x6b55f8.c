// rea decompile_all
// name: FUN_006b55f8
// address: 0x6b55f8
// body: available
// range: 0x6b55f8-0x6b575b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b5611 (push 0x6b575c followed by fs-segment stack chaining); handler 0x6b575c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b55f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_006b575c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar7 = *(undefined4 *)(param_1 + 0x2ec);
  FUN_006b1018(param_1,4,uVar7,uVar7,uVar7,uVar7);
  FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_8);
  iVar3 = FUN_006aff9c(local_8,*(undefined4 *)(param_1 + 0x2f0));
  iVar4 = FUN_006b0028(local_8,*(undefined4 *)(param_1 + 0x2f0));
  FUN_006bb3c4(*(undefined4 *)(param_1 + 0x350),&local_c);
  FUN_004086a8(local_8,1,iVar3,&local_10);
  iVar8 = local_c;
  FUN_004086a8(local_8,iVar4 + 1,100000,&local_14,local_c,local_10);
  uVar2 = local_14;
  FUN_00408480(&local_8,3);
  FUN_006b7a68(param_1,*(undefined4 *)(param_1 + 0x2ec),local_8);
  uVar7 = *(undefined4 *)(param_1 + 0x2ec);
  uVar1 = *(undefined4 *)(param_1 + 0x2d8);
  uVar5 = FUN_00409a20(uVar1);
  FUN_006ab16c(uVar1,uVar5,*(undefined4 *)(param_1 + 0x2ec),uVar7);
  FUN_006b315c(param_1,*(undefined4 *)(param_1 + 0x2ec));
  if (*(short *)(param_1 + 0x2d2) != 0) {
    (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
  }
  iVar4 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar4 = FUN_00407048(&local_c,local_c);
  }
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + -4);
  }
  *(int *)(param_1 + 0x2f0) = iVar6 + iVar3;
  FUN_006b2a1c(param_1);
  FUN_006b281c(param_1);
  FUN_004eed28(param_1);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_00406e80(&local_14,4,iVar8,&LAB_006b5763);
  return;
}
