// rea decompile_all
// name: FUN_00503370
// address: 0x503370
// body: available
// range: 0x503370-0x5033f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x503385 (push 0x5033f1 followed by fs-segment stack chaining); handler 0x5033f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503370(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005033f1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(param_1 + 0x2f4) = param_2;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    FUN_00446174(param_2,param_1);
    FUN_00503268(param_1,&local_8);
    if (local_8 == 0) {
      FUN_004bb690(*(undefined4 *)(param_1 + 0x2f4),*(undefined4 *)(param_1 + 0x2ec));
      puVar1 = puStack_14;
    }
    else {
      FUN_00503268(param_1,&local_c);
      FUN_004bb690(*(undefined4 *)(param_1 + 0x2f4),local_c);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005033f8;
  puStack_18 = (undefined1 *)0x5033f0;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
