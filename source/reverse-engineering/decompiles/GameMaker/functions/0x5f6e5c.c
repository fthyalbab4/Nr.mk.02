// rea decompile_all
// name: FUN_005f6e5c
// address: 0x5f6e5c
// body: available
// range: 0x5f6e5c-0x5f6eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f6e6c (push 0x5f6eb4 followed by fs-segment stack chaining); handler 0x5f6eb4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f6e5c(int param_1,char param_2)

{
  undefined1 *puVar1;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_005f6eb4;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x29)) {
    puVar1 = &stack0xfffffffc;
    if (*(char *)(param_1 + 0x14) != '\0') {
      FUN_0040b75c(PTR_PTR_00781bcc,&local_8);
      FUN_005df5ec(&PTR_LAB_005df578,1,local_8);
      param_1 = FUN_00406618();
      param_2 = extraout_DL;
      puVar1 = puStack_c;
    }
    puStack_c = puVar1;
    *(char *)(param_1 + 0x29) = param_2;
    puVar1 = puStack_c;
  }
  puStack_c = puVar1;
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_005f6ebb;
  puStack_10 = (undefined1 *)0x5f6eb3;
  thunk_FUN_00406e5c(&local_8,uStack_14,puVar1);
  return;
}
