// rea decompile_all
// name: FUN_0072b6bc
// address: 0x72b6bc
// body: available
// range: 0x72b6bc-0x72b747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72b6d0 (push 0x72b748 followed by fs-segment stack chaining); handler 0x72b748 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072b6bc(int param_1)

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
  puStack_18 = &LAB_0072b748;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(*(int *)(param_1 + 0x138) + 8) != 0) {
    uVar3 = FUN_007272d8(*(int *)(param_1 + 0x138),0);
    cVar2 = FUN_00405c98(uVar3,&PTR_LAB_00725010);
    puVar1 = puStack_14;
    if (cVar2 != '\0') {
      uVar3 = FUN_007272d8(*(undefined4 *)(param_1 + 0x138),0);
      FUN_00405cbc(uVar3,&PTR_LAB_00725010);
      goto LAB_0072b732;
    }
  }
  puStack_14 = puVar1;
  FUN_0040b75c(PTR_PTR_007827fc,&local_8);
  FUN_0072b474(param_1,&PTR_LAB_0072395c,local_8);
LAB_0072b732:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0072b74f;
  puStack_18 = (undefined1 *)0x72b747;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
