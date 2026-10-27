// rea decompile_all
// name: FUN_0051c2ac
// address: 0x51c2ac
// body: available
// range: 0x51c2ac-0x51c330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51c2c0 (push 0x51c331 followed by fs-segment stack chaining); handler 0x51c331 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c2ac(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int *in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0051c331;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004080c8(&local_8,in_stack_00000004 + 0x1c,0x20);
  iVar2 = (**(code **)(*in_stack_00000010 + 0x14))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_stack_00000010 + 0x14))();
    (**(code **)(*in_stack_00000010 + 0xc))(in_stack_00000010,iVar2 + -1,&local_c);
    iVar2 = FUN_00415c5c(local_c,local_8);
    if (iVar2 == 0) goto LAB_0051c311;
  }
  (**(code **)(*in_stack_00000010 + 0x38))(in_stack_00000010,local_8);
LAB_0051c311:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0051c338;
  puStack_1c = (undefined1 *)0x51c330;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
