// rea decompile_all
// name: FUN_0052f060
// address: 0x52f060
// body: available
// range: 0x52f060-0x52f104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52f07d (push 0x52f105 followed by fs-segment stack chaining); handler 0x52f105 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f060(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0052f105;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0043f488(param_1,&local_c,4);
  FUN_00407eb8(param_2,0);
  if (0 < local_c) {
    FUN_004078e4(&local_8,local_c,0xfde9);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      FUN_00407078(&local_8,local_8,CONCAT22(extraout_var,0xfde9));
    }
    uVar2 = thunk_FUN_00407688(&local_8);
    FUN_0043f488(param_1,uVar2,local_c);
    FUN_004080e4(param_2,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0052f10c;
  puStack_20 = (undefined1 *)0x52f104;
  FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
