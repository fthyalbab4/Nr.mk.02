// rea decompile_all
// name: FUN_00640cc0
// address: 0x640cc0
// body: available
// range: 0x640cc0-0x640d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x640cde (push 0x640d64 followed by fs-segment stack chaining); handler 0x640d64 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00640cc0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00640d64;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (DAT_00688824 == (int *)0x0) {
    puStack_20 = &stack0xfffffffc;
    FUN_0061156c(&PTR_DAT_00640d80,0);
  }
  else {
    *in_stack_00000004 = 1;
    FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x40));
    puVar3 = &local_8;
    uVar4 = local_c;
    FUN_004083c0(&local_10,*(undefined4 *)(in_stack_0000000c + 0x28));
    uVar2 = local_10;
    FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x10));
    (**(code **)(*DAT_00688824 + 4))(DAT_00688824,local_14,uVar2,puVar3,uVar4);
    FUN_004083e8(in_stack_00000004 + 4,local_8,0xfde9);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00640d6b;
  puStack_24 = (undefined1 *)0x640d63;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
