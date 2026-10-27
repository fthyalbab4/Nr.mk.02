// rea decompile_all
// name: FUN_00442990
// address: 0x442990
// body: available
// range: 0x442990-0x442a41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4429a2 (push 0x442a42 followed by fs-segment stack chaining); handler 0x442a42 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442990(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_00442a42;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_0044175c(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar2 == '\r') {
    FUN_004435d8(*(undefined4 *)(in_stack_00000004 + -4));
    FUN_0040b140(&local_8);
    FUN_0042e2e4(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc),
                 local_8);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x18);
    uVar5 = *(undefined4 *)(in_stack_00000004 + -0xc);
    uVar4 = 0;
    FUN_004422b0(*(undefined4 *)(in_stack_00000004 + -4),&local_c);
    uVar3 = FUN_00440b04(&LAB_00440a74,1,*(undefined4 *)(in_stack_00000004 + -8),local_c,uVar4,uVar5
                         ,uVar3);
    FUN_0043ae88(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x30),uVar3);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00442a49;
  puStack_14 = (undefined1 *)0x442a39;
  thunk_FUN_00406e5c(&local_c,uStack_18,puVar1);
  puStack_14 = (undefined1 *)0x442a41;
  FUN_0040b140(&local_8);
  return;
}
