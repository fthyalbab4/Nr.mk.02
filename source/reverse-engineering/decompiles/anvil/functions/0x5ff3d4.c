// rea decompile_all
// name: FUN_005ff3d4
// address: 0x5ff3d4
// body: available
// range: 0x5ff3d4-0x5ff4ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff3ee (push 0x5ff4cb followed by fs-segment stack chaining); handler 0x5ff4cb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ff3d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 fVar7;
  int in_stack_0000000c;
  undefined4 uVar8;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005ff4cb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(in_stack_0000000c + 0x30) == 1) {
    puStack_18 = &stack0xfffffffc;
    FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x40));
  }
  else {
    uVar1 = FUN_004048b8();
    if ((double)CONCAT44(extraout_EDX,uVar1) == *(double *)(in_stack_0000000c + 0x38)) {
      FUN_004048b8();
      FUN_004165b0(&local_8);
    }
    else {
      fVar7 = (float10)*(double *)(in_stack_0000000c + 0x38);
      FUN_00418ec8(CONCAT31((int3)((uint)&local_8 >> 8),2),10,2,&local_8,SUB104(fVar7,0),
                   (int)((unkuint10)fVar7 >> 0x20),(short)((unkuint10)fVar7 >> 0x40));
    }
  }
  FUN_004048b8();
  uVar2 = FUN_004048b8();
  uVar3 = FUN_004048b8();
  uVar4 = FUN_004048b8();
  uVar1 = *(undefined4 *)(in_stack_0000000c + 0xe4);
  uVar8 = *(undefined4 *)(in_stack_0000000c + 0xe0);
  uVar5 = FUN_004048b8();
  uVar6 = FUN_004048b8();
  FUN_005fcbd4(local_8,uVar6,uVar5,uVar8,uVar1,uVar4,uVar3,uVar2);
  *in_FS_OFFSET = uVar8;
  thunk_FUN_004072d8(&local_8,uVar8,uVar4,&LAB_005ff4d2);
  return;
}
