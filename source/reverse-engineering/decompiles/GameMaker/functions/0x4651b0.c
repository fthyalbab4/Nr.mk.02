// rea decompile_all
// name: FUN_004651b0
// address: 0x4651b0
// body: available
// range: 0x4651b0-0x465200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4651c0 (push 0x465201 followed by fs-segment stack chaining); handler 0x465201 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004651b0(uint param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_00465201;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puVar1 = &stack0xfffffffc;
  if ((param_1 & 0x80000000) != 0) {
    FUN_0040b75c(PTR_PTR_00781e34,&local_8);
    FUN_0041beb8(&PTR_LAB_0045419c,1,local_8);
    FUN_00406618();
    puVar1 = puStack_c;
  }
  puStack_c = puVar1;
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00465208;
  puStack_10 = (undefined1 *)0x465200;
  thunk_FUN_00406e5c(&local_8,uStack_14,puVar1);
  return;
}
