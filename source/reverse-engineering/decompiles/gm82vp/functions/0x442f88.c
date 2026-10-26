// rea decompile_all
// name: FUN_00442f88
// address: 0x442f88
// body: available
// range: 0x442f88-0x443044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442f9d (push 0x443045 followed by fs-segment stack chaining); handler 0x443045 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442f88(void)

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
  puStack_1c = &LAB_00443045;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042ce48(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -4),
               &local_8);
  if (local_8 == 0) {
    FUN_00442830();
    FUN_00443adc(*(undefined4 *)(in_stack_00000004 + -8),0xd,in_stack_00000004);
  }
  else {
    uVar3 = FUN_0040b268(&local_c);
    cVar2 = FUN_0041f1bc(local_8,&DAT_00443054,uVar3);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*local_c + 0xc))();
      FUN_00442c30(uVar3,&local_10);
      FUN_00442830();
      FUN_00441df8(*(undefined4 *)(in_stack_00000004 + -8),local_10,in_stack_00000004);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044304c;
  puStack_1c = (undefined1 *)0x443034;
  thunk_FUN_004072d8(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x44303c;
  FUN_0040b268(&local_c);
  puStack_1c = (undefined1 *)0x443044;
  FUN_0040b268(&local_8);
  return;
}
