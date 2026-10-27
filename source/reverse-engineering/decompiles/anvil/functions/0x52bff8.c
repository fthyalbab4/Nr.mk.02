// rea decompile_all
// name: FUN_0052bff8
// address: 0x52bff8
// body: available
// range: 0x52bff8-0x52c07a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52c015 (push 0x52c07b followed by fs-segment stack chaining); handler 0x52c07b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052bff8(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;

  puStack_10 = (undefined1 *)0x52c00a;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_14 = &LAB_0052c07b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = local_8;
  puStack_10 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_10 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_10 = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < 8) {
    FUN_00404f38(param_1 + 0xc,8,0x20);
  }
  FUN_004176d4(param_1 + 0xc,local_8,8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052c082;
  puStack_14 = (undefined1 *)0x52c07a;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
