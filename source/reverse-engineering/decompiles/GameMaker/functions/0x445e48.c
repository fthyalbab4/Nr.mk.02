// rea decompile_all
// name: FUN_00445e48
// address: 0x445e48
// body: available
// range: 0x445e48-0x445f04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445e5d (push 0x445f05 followed by fs-segment stack chaining); handler 0x445f05 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445e48(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = 0;
  puStack_1c = &LAB_00445f05;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042e264(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -4),
               &local_8);
  if (local_8 == 0) {
    FUN_004456f0();
    FUN_0044699c(*(undefined4 *)(in_stack_00000004 + -8),0xd,in_stack_00000004);
  }
  else {
    uVar3 = FUN_0040b140(&local_c);
    cVar2 = FUN_0041ef90(local_8,&DAT_00445f14,uVar3);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*local_c + 0xc))();
      FUN_00445af0(uVar3,&local_10);
      FUN_004456f0();
      FUN_00444cb8(*(undefined4 *)(in_stack_00000004 + -8),local_10,in_stack_00000004);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00445f0c;
  puStack_1c = (undefined1 *)0x445ef4;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x445efc;
  FUN_0040b140(&local_c);
  puStack_1c = (undefined1 *)0x445f04;
  FUN_0040b140(&local_8);
  return;
}
