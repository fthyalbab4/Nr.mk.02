// rea decompile_all
// name: FUN_0054fc90
// address: 0x54fc90
// body: available
// range: 0x54fc90-0x54fda1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54fcab (push 0x54fda2 followed by fs-segment stack chaining); handler 0x54fda2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054fc90(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  piVar5 = (int *)(in_stack_00000004 + -8);
  puStack_20 = &LAB_0054fda2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = FUN_00552284(*(undefined4 *)(in_stack_00000004 + -4));
  if (iVar3 == 0) {
    *(undefined1 *)(*piVar5 + 100) = 2;
  }
  else {
    *(undefined1 *)(*piVar5 + 100) = 1;
    *(undefined1 *)(*piVar5 + 4) = 1;
    FUN_00538a38(*(undefined4 *)(in_stack_00000004 + -4),&local_8);
    FUN_00408194(*piVar5 + 0x14,local_8);
    FUN_004083e8(&local_c,*(undefined4 *)(*piVar5 + 0x14),0);
    uVar4 = FUN_00407ae0(local_c);
    *(undefined4 *)(*piVar5 + 0x1c) = uVar4;
    *(undefined4 *)(*piVar5 + 0x20) = 0xffffffff;
    *(undefined4 *)(*piVar5 + 0x24) = *(undefined4 *)(in_stack_00000004 + -4);
    *(int *)(*piVar5 + 0x28) = iVar3;
    *(uint *)(*piVar5 + 0x30) = (uint)*(ushort *)(iVar3 + 6);
    uVar4 = FUN_00552388(iVar3);
    *(undefined4 *)(*piVar5 + 0x34) = uVar4;
    *(undefined4 *)(*piVar5 + 0x2c) = uVar4;
    uVar1 = *(ushort *)(iVar3 + 0x16);
    *(uint *)(*piVar5 + 0x38) = (uint)uVar1;
    *(char *)(*piVar5 + 0x3c) = -((uVar1 & 0x1000) != 0);
    *(undefined1 *)(*piVar5 + 0x3d) = 0;
    *(undefined4 *)(*piVar5 + 0x48) = *(undefined4 *)(iVar3 + 0x50);
    FUN_00550f68(*piVar5);
    FUN_00406268(*piVar5);
  }
  FUN_00550edc(*piVar5);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054fda9;
  puStack_20 = (undefined1 *)0x54fd99;
  FUN_004072d8(&local_c,uStack_24,puVar2);
  puStack_20 = (undefined1 *)0x54fda1;
  thunk_FUN_004072d8(&local_8);
  return;
}
