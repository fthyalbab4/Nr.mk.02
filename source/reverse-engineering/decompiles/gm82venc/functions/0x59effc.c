// rea decompile_all
// name: FUN_0059effc
// address: 0x59effc
// body: available
// range: 0x59effc-0x59f063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f015 (push 0x59f064 followed by fs-segment stack chaining); handler 0x59f064 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059effc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0059f064;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 < 0) {
    FUN_0040b9d0(PTR_LAB_00689324,&local_8);
    FUN_00438dc8(&PTR_LAB_0042e000,local_8,param_2);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  FUN_0059ec5c(*(undefined4 *)(param_1 + 4),param_2,param_3);
  puVar1 = puStack_18;
  *(int *)(param_1 + 8) = *(int *)(*(int *)(param_1 + 4) + 0x10) + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0059f06b;
  puStack_1c = (undefined1 *)0x59f063;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
