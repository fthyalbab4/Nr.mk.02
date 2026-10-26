// rea decompile_all
// name: FUN_00442394
// address: 0x442394
// body: available
// range: 0x442394-0x44243f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4423a7 (push 0x442440 followed by fs-segment stack chaining); handler 0x442440 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442394(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_c;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_18 = &LAB_00442440;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(*(int *)(in_stack_00000004 + 8) + -9) != '\0') {
    FUN_0042ce48(*(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -0x10),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -8),&local_8);
    puVar1 = puStack_14;
    if (*(int *)(in_stack_00000004 + -4) != local_8) {
      uVar3 = FUN_0040b268(&local_c);
      cVar2 = FUN_0041f1bc(local_8,&DAT_00442450,uVar3);
      puVar1 = puStack_14;
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*local_c + 0xc))();
        FUN_0044227c(uVar3,*(undefined4 *)(in_stack_00000004 + -8));
        puVar1 = puStack_14;
      }
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00442447;
  puStack_18 = (undefined1 *)0x442437;
  FUN_0040b268(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x44243f;
  FUN_0040b268(&local_8);
  return;
}
