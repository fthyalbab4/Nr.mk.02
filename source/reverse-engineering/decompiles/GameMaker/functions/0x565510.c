// rea decompile_all
// name: FUN_00565510
// address: 0x565510
// body: available
// range: 0x565510-0x565571 inclusive
// range: 0x56557e-0x56559b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x565531 (push 0x56559c followed by fs-segment stack chaining); handler 0x56559c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56555a (push 0x565572 followed by fs-segment stack chaining); handler 0x565572 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00565510(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x565526;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_0056559c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x565540;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_00405a4c(&LAB_0052e8fc,1);
  puStack_28 = (undefined1 *)0x56554d;
  FUN_00565444(param_1,uVar2);
  puStack_2c = &LAB_00565572;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0043fe70(uVar2,local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x565586;
  FUN_00405a7c(uVar2,uStack_30,puVar1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005655a3;
  puStack_20 = (undefined1 *)0x56559b;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
