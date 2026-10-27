// rea decompile_all
// name: FUN_004d2388
// address: 0x4d2388
// body: available
// range: 0x4d2388-0x4d2410 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d23b3 (push 0x4d2411 followed by fs-segment stack chaining); handler 0x4d2411 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d2388(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x4d23a4;
    param_1 = FUN_00405fb0();
  }
  puStack_34 = &LAB_004d2411;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_004d2190(param_1,0);
  puVar2 = &local_8;
  FUN_0040b75c(PTR_PTR_00782088,&local_c);
  local_14 = *(int *)(param_1 + 8) + 1;
  local_10 = 0;
  FUN_00417d4c(local_c,&local_14,0,puVar2);
  FUN_004d2314(param_1,local_8);
  puVar1 = puStack_30;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004d2418;
  puStack_34 = (undefined1 *)0x4d2410;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
