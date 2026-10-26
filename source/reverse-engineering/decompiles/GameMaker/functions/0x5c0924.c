// rea decompile_all
// name: FUN_005c0924
// address: 0x5c0924
// body: available
// range: 0x5c0924-0x5c098d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c0940 (push 0x5c098e followed by fs-segment stack chaining); handler 0x5c098e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0924(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_005c098e;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  local_10 = 0x11;
  local_8 = 0x11;
  uVar2 = 1;
  local_14 = param_1;
  local_c = param_2;
  FUN_0040b75c(PTR_PTR_00782098,&local_18,0,1,&local_14);
  FUN_0041bef4(&PTR_LAB_005bfca8,1,local_18);
  FUN_00406618();
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uVar2;
  puStack_2c = &LAB_005c0995;
  thunk_FUN_00406e5c(&local_18,uVar2,puVar1);
  return;
}
