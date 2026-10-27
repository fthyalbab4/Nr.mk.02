// rea decompile_all
// name: FUN_0041c6bc
// address: 0x41c6bc
// body: available
// range: 0x41c6bc-0x41c757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41c6de (push 0x41c758 followed by fs-segment stack chaining); handler 0x41c758 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c6bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  puStack_38 = &LAB_0041c758;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  if (param_1 == 0) {
    FUN_0040b9d0(PTR_LAB_00689230,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_004081e8(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0x11;
  local_14 = 0x11;
  local_c = 0;
  puVar3 = &local_20;
  uVar2 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_0040b9d0(PTR_LAB_006893ec,&local_24);
  FUN_0041bd88(&LAB_00411f60,1,local_24,uVar2,puVar3);
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uVar2;
  puStack_3c = &LAB_0041c75f;
  thunk_FUN_004072d8(&local_24,uVar2,puVar1);
  thunk_FUN_004072d8(&local_8);
  return;
}
