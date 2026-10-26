// rea decompile_all
// name: FUN_0043fad0
// address: 0x43fad0
// body: available
// range: 0x43fad0-0x43fb81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43fae2 (push 0x43fb82 followed by fs-segment stack chaining); handler 0x43fb82 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043fad0(void)

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
  puStack_14 = &LAB_0043fb82;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_0043e89c(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar2 == '\r') {
    FUN_00440718(*(undefined4 *)(in_stack_00000004 + -4));
    FUN_0040b268(&local_8);
    FUN_0042cec8(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc),
                 local_8);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x18);
    uVar5 = *(undefined4 *)(in_stack_00000004 + -0xc);
    uVar4 = 0;
    FUN_0043f3f0(*(undefined4 *)(in_stack_00000004 + -4),&local_c);
    uVar3 = FUN_0043dc44(&PTR_FUN_0043dbb4,1,*(undefined4 *)(in_stack_00000004 + -8),local_c,uVar4,
                         uVar5,uVar3);
    FUN_00438d04(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x30),uVar3);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043fb89;
  puStack_14 = (undefined1 *)0x43fb79;
  thunk_FUN_004072d8(&local_c,uStack_18,puVar1);
  puStack_14 = (undefined1 *)0x43fb81;
  FUN_0040b268(&local_8);
  return;
}
