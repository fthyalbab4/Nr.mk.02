// rea decompile_all
// name: FUN_004f6500
// address: 0x4f6500
// body: available
// range: 0x4f6500-0x4f658b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f6514 (push 0x4f658c followed by fs-segment stack chaining); handler 0x4f658c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6500(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f658c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(*(int *)(param_1 + 0x138) + 8) != 0) {
    uVar3 = FUN_004f211c(*(int *)(param_1 + 0x138),0);
    cVar2 = FUN_004061f8(uVar3,&PTR_LAB_004efe54);
    puVar1 = puStack_14;
    if (cVar2 != '\0') {
      uVar3 = FUN_004f211c(*(undefined4 *)(param_1 + 0x138),0);
      FUN_0040621c(uVar3,&PTR_LAB_004efe54);
      goto LAB_004f6576;
    }
  }
  puStack_14 = puVar1;
  FUN_0040b9d0(PTR_LAB_0068957c,&local_8);
  FUN_004f62b8(param_1,&LAB_004ee7a0,local_8);
LAB_004f6576:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f6593;
  puStack_18 = (undefined1 *)0x4f658b;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
