// rea decompile_all
// name: FUN_006b8720
// address: 0x6b8720
// body: available
// range: 0x6b8720-0x6b892e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b8740 (push 0x6b892f followed by fs-segment stack chaining); handler 0x6b892f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b8720(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined *puStackY_48;
  undefined4 in_stack_ffffffc0;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar3 = 4;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24 = &LAB_006b892f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  cVar1 = FUN_006b288c(param_1);
  if (cVar1 != '\0') {
    local_c = *(int *)(param_1 + 0x2ec);
    iVar5 = *(int *)(param_1 + 0x2fc);
    iVar3 = iVar5;
    if (iVar5 < local_c) {
      iVar4 = *(int *)(param_1 + 0x300);
      local_10 = *(int *)(param_1 + 0x2f0);
    }
    else if (local_c < iVar5) {
      local_10 = *(int *)(param_1 + 0x300);
      iVar4 = *(int *)(param_1 + 0x2f0);
      iVar3 = local_c;
      local_c = iVar5;
    }
    else {
      local_10 = *(int *)(param_1 + 0x300);
      iVar4 = local_10;
      if (*(int *)(param_1 + 0x2f0) <= local_10) {
        iVar4 = *(int *)(param_1 + 0x2f0);
      }
      if (local_10 <= *(int *)(param_1 + 0x2f0)) {
        local_10 = *(int *)(param_1 + 0x2f0);
      }
    }
    if (iVar3 == local_c) {
      FUN_006b7d0c(param_1,iVar3,&stack0xffffffec,&local_8);
      FUN_004086a8(unaff_EBX,iVar4 + 1,local_10 - iVar4);
      iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar3 * 0x10));
      if (iVar3 < local_10) {
        FUN_00408480(&local_8,3);
      }
      uVar2 = FUN_004895b4();
      FUN_00489078(uVar2,local_8);
    }
    else {
      FUN_006b7d0c(param_1,iVar3,&stack0xffffffe4,&stack0xffffffe8);
      FUN_004086a8(unaff_EDI,iVar4 + 1,100000);
      puVar7 = &DAT_006b894c;
      puVar6 = &DAT_006b895c;
      FUN_00408480(&local_8,3);
      iVar3 = iVar3 + 1;
      if (iVar3 <= local_c + -1) {
        iVar5 = ((local_c + -1) - iVar3) + 1;
        do {
          FUN_006b7d0c(param_1,iVar3,&local_20,local_8,puVar6,puVar7,unaff_ESI);
          puVar6 = &DAT_006b895c;
          FUN_00408480(&local_8,4);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_006b7d0c(param_1,local_c,&local_28,&local_24,puVar6,puVar7,unaff_ESI);
      FUN_004086a8(local_28,1,local_10);
      FUN_004082dc(&local_8,local_24);
      in_stack_ffffffc0 = 0x6b88e0;
      iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10));
      if (iVar3 < local_10) {
        puStackY_48 = &DAT_006b895c;
        in_stack_ffffffc0 = local_8;
        FUN_00408480(&local_8,3);
      }
      uVar2 = FUN_004895b4();
      FUN_00489078(uVar2,local_8);
    }
  }
  *in_FS_OFFSET = puStackY_48;
  thunk_FUN_00406e80(&local_28,6,in_stack_ffffffc0,&LAB_006b8936);
  thunk_FUN_00406e5c(&local_8);
  return;
}
