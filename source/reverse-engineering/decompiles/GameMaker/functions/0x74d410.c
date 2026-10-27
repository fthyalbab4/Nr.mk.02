// rea decompile_all
// name: FUN_0074d410
// address: 0x74d410
// body: available
// range: 0x74d410-0x74d521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74d42b (push 0x74d522 followed by fs-segment stack chaining); handler 0x74d522 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074d410(void)

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
  puStack_20 = &LAB_0074d522;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = FUN_0074fa04(*(undefined4 *)(in_stack_00000004 + -4));
  if (iVar3 == 0) {
    *(undefined1 *)(*piVar5 + 100) = 2;
  }
  else {
    *(undefined1 *)(*piVar5 + 100) = 1;
    *(undefined1 *)(*piVar5 + 4) = 1;
    FUN_007365dc(*(undefined4 *)(in_stack_00000004 + -4),&local_8);
    FUN_00407eb8(*piVar5 + 0x14,local_8);
    FUN_0040810c(&local_c,*(undefined4 *)(*piVar5 + 0x14),0);
    uVar4 = FUN_00407670(local_c);
    *(undefined4 *)(*piVar5 + 0x1c) = uVar4;
    *(undefined4 *)(*piVar5 + 0x20) = 0xffffffff;
    *(undefined4 *)(*piVar5 + 0x24) = *(undefined4 *)(in_stack_00000004 + -4);
    *(int *)(*piVar5 + 0x28) = iVar3;
    *(uint *)(*piVar5 + 0x30) = (uint)*(ushort *)(iVar3 + 6);
    uVar4 = FUN_0074fb08(iVar3);
    *(undefined4 *)(*piVar5 + 0x34) = uVar4;
    *(undefined4 *)(*piVar5 + 0x2c) = uVar4;
    uVar1 = *(ushort *)(iVar3 + 0x16);
    *(uint *)(*piVar5 + 0x38) = (uint)uVar1;
    *(char *)(*piVar5 + 0x3c) = -((uVar1 & 0x1000) != 0);
    *(undefined1 *)(*piVar5 + 0x3d) = 0;
    *(undefined4 *)(*piVar5 + 0x48) = *(undefined4 *)(iVar3 + 0x50);
    FUN_0074e6e8(*piVar5);
    FUN_00405d08(*piVar5);
  }
  FUN_0074e65c(*piVar5);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0074d529;
  puStack_20 = (undefined1 *)0x74d519;
  FUN_00406e5c(&local_c,uStack_24,puVar2);
  puStack_20 = (undefined1 *)0x74d521;
  thunk_FUN_00406e5c(&local_8);
  return;
}
