// rea decompile_all
// name: FUN_00440628
// address: 0x440628
// body: available
// range: 0x440628-0x4406b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440641 (push 0x4406ba followed by fs-segment stack chaining); handler 0x4406ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440628(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_1c = &LAB_004406ba;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  if (*(char *)(in_stack_00000004 + 8) == '\0') {
    FUN_00408074(&local_8,*(undefined4 *)(in_stack_00000004 + -4));
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_0041666c(*(undefined4 *)(in_stack_00000004 + -4),&local_8);
  }
  local_10 = local_8;
  local_c = 0x11;
  puVar3 = &local_10;
  uVar2 = 0;
  FUN_0040b75c(PTR_PTR_00781f14,&local_14);
  FUN_0041bef4(&PTR_LAB_0042ecc0,1,local_14,uVar2,puVar3);
  FUN_00406618();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_004406c1;
  thunk_FUN_00406e5c(&local_14,uVar2,puVar1);
  thunk_FUN_00406e5c(&local_8);
  return;
}
