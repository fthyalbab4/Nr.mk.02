// rea decompile_all
// name: FUN_0065a47c
// address: 0x65a47c
// body: available
// range: 0x65a47c-0x65a4d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65a492 (push 0x65a4d9 followed by fs-segment stack chaining); handler 0x65a4d9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a47c(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0065a4d9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = FUN_0050bbe0(param_1);
  *param_2 = uVar2;
  FUN_0050bbf4(param_1);
  *(double *)(param_2 + 2) = (double)in_ST0;
  FUN_0050bc1c(param_1,&local_8);
  FUN_004083e8(param_2 + 4,local_8,0xfde9);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0065a4e0;
  puStack_18 = (undefined1 *)0x65a4d8;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
