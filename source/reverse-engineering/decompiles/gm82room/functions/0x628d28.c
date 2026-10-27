// rea decompile_all
// name: FUN_00628d28
// address: 0x628d28
// body: available
// range: 0x628d28-0x628d8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x628d45 (push 0x628d8e followed by fs-segment stack chaining); handler 0x628d8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628d28(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18 [2];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x628d3a;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_00628d8e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004ca46c(*(undefined4 *)PTR_DAT_00689560,local_10);
  FUN_004ca46c(*(undefined4 *)PTR_DAT_00689560,local_18);
  FUN_00628bb0(local_18[0],local_c,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00628d95;
  puStack_24 = (undefined1 *)0x628d8d;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
