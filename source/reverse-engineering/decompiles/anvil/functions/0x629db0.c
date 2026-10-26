// rea decompile_all
// name: FUN_00629db0
// address: 0x629db0
// body: available
// range: 0x629db0-0x629e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629de4 (push 0x629e38 followed by fs-segment stack chaining); handler 0x629e38 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629db0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_1c = (undefined1 *)0x629dc9;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040b2dc(param_1);
  puStack_1c = (undefined1 *)0x629dd1;
  thunk_FUN_00407ad0(local_c);
  puStack_1c = (undefined1 *)0x629dd9;
  thunk_FUN_00407ad0(local_10);
  puStack_20 = &LAB_00629e38;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != (int *)0x0) &&
     (puStack_1c = &stack0xfffffffc, iVar2 = FUN_00629b3c(local_c,local_10), iVar2 != 0)) {
    (**(code **)(*local_8 + 0x98))();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00629e3f;
  puStack_20 = (undefined1 *)0x629e2f;
  thunk_FUN_004072fc(&local_10,2,puVar1);
  puStack_20 = (undefined1 *)0x629e37;
  FUN_0040b268(&local_8);
  return;
}
