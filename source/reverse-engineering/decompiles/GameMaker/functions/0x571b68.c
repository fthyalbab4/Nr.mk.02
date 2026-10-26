// rea decompile_all
// name: FUN_00571b68
// address: 0x571b68
// body: available
// range: 0x571b68-0x571c05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571b81 (push 0x571c06 followed by fs-segment stack chaining); handler 0x571c06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571b68(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00571c06;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x304) == 0) {
    FUN_0056b83c(param_1 + 0x304,*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x294));
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  if (*(int *)(param_1 + 0x2c0) <= param_2) {
    FUN_0040b75c(PTR_PTR_00782338,&local_8);
    FUN_0056b460(local_8);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x304) + 4 + param_2 * 4);
  if (param_3 != iVar1) {
    FUN_0056f9fc(param_1,param_2,iVar1,param_3);
    *(int *)(*(int *)(param_1 + 0x304) + 4 + param_2 * 4) = param_3;
    FUN_00405d08(param_1);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00571c0d;
  puStack_1c = (undefined1 *)0x571c05;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
