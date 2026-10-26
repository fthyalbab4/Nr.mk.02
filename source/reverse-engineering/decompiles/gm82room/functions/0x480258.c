// rea decompile_all
// name: FUN_00480258
// address: 0x480258
// body: available
// range: 0x480258-0x4802bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48026a (push 0x4802bd followed by fs-segment stack chaining); handler 0x4802bd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480258(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_004802bd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x1c)) {
    if (param_2 == '\0') {
      FUN_0040b9d0(PTR_LAB_00688f88,&local_c);
      FUN_0047fa64(local_c);
      puVar1 = puStack_10;
    }
    else {
      puStack_10 = &stack0xfffffffc;
      FUN_0040b9d0(PTR_LAB_006894ac,&local_8);
      FUN_0047fa64(local_8);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004802c4;
  puStack_14 = (undefined1 *)0x4802bc;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
