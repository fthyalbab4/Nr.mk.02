// rea decompile_all
// name: FUN_00442460
// address: 0x442460
// body: available
// range: 0x442460-0x44251c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442475 (push 0x44251d followed by fs-segment stack chaining); handler 0x44251d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442460(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = 0;
  puStack_20 = &LAB_0044251d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0042ce48(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               &local_8);
  if (local_8 != 0) {
    uVar3 = FUN_0040b268(&local_10);
    cVar2 = FUN_0041f1bc(local_8,&DAT_0044252c,uVar3);
    if (cVar2 != '\0') {
      local_c = (**(code **)(*local_10 + 0xc))();
      FUN_00442394();
      goto LAB_004424f7;
    }
  }
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    FUN_0042ce48(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 &local_14);
  }
LAB_004424f7:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00442524;
  puStack_20 = (undefined1 *)0x44250c;
  FUN_0040b268(&local_14,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x442514;
  FUN_0040b268(&local_10);
  puStack_20 = (undefined1 *)0x44251c;
  FUN_0040b268(&local_8);
  return;
}
