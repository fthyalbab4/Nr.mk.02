// rea decompile_all
// name: FUN_005c05d0
// address: 0x5c05d0
// body: available
// range: 0x5c05d0-0x5c0632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c05e8 (push 0x5c0633 followed by fs-segment stack chaining); handler 0x5c0633 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c05d0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005c0633;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  thunk_FUN_00406e5c(&local_8);
  (**(code **)(*param_1 + 0x3c))();
  FUN_0040b250();
  uVar2 = local_8;
  FUN_00408130(&local_c,param_2);
  FUN_00415a34(uVar2,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_1;
  puStack_20 = &LAB_005c063a;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
