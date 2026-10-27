// rea decompile_all
// name: FUN_00662cb0
// address: 0x662cb0
// body: available
// range: 0x662cb0-0x662e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x662cc5 (push 0x662e2c followed by fs-segment stack chaining); handler 0x662e2c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662cb0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  bool bVar6;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  puStack_18 = &stack0xfffffffc;
  uStack_8 = 0;
  local_c = 0;
  local_10 = 0;
  uVar5 = 1;
  puStack_1c = &LAB_00662e2c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0045b3a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 100),&local_c);
  uVar2 = local_c;
  FUN_0045b3a0(*(undefined4 *)(*(int *)PTR_DAT_007828e0 + 0x84),&local_10);
  FUN_00408640(uVar2,local_10);
  if ((bool)uVar5) {
    cVar3 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_007828e0 + 0x84) + 0x10) + 0x1d);
    uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
    bVar6 = cVar3 == *(char *)(*(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 100) + 0x10) +
                              0x1d);
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    bVar6 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 100) + 0x18) ==
            *(int *)(*(int *)(*(int *)PTR_DAT_007828e0 + 0x84) + 0x18);
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    cVar3 = FUN_0045b4d8(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 100));
    cVar4 = FUN_0045b4d8(*(undefined4 *)(*(int *)PTR_DAT_007828e0 + 0x84));
    bVar6 = cVar3 == cVar4;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    bVar6 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 100) + 0x1c) ==
            *(int *)(*(int *)(*(int *)PTR_DAT_007828e0 + 0x84) + 0x1c);
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    bVar6 = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_007828e0 + 0x84) + 0x10) + 0x14) ==
            *(int *)(*(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 100) + 0x10) + 0x14);
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_0045b450(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 100));
    FUN_0045b450(*(undefined4 *)(*(int *)PTR_DAT_007828e0 + 0x84));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00662e33;
  puStack_1c = (undefined1 *)0x662e2b;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
