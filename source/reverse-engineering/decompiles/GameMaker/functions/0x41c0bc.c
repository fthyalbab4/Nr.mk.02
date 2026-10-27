// rea decompile_all
// name: FUN_0041c0bc
// address: 0x41c0bc
// body: available
// range: 0x41c0bc-0x41c127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41c0e3 (push 0x41c128 followed by fs-segment stack chaining); handler 0x41c128 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c0bc(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x41c0d2;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0041c128;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar2 = &local_8;
  puStack_2c = &stack0xfffffffc;
  FUN_0040b75c(param_3,&local_c);
  FUN_00417d4c(local_c,param_5,param_4,puVar2);
  FUN_00407eb8(param_1 + 4,local_8);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0041c12f;
  puStack_30 = (undefined1 *)0x41c127;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
