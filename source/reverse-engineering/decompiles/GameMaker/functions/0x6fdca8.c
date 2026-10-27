// rea decompile_all
// name: FUN_006fdca8
// address: 0x6fdca8
// body: available
// range: 0x6fdca8-0x6fdcf9 inclusive
// range: 0x6fdd07-0x6fdd1c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fdcca (push 0x6fdd1d followed by fs-segment stack chaining); handler 0x6fdd1d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fdce3 (push 0x6fdcfa followed by fs-segment stack chaining); handler 0x6fdcfa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fdca8(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x6fdcbf;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_006fdd1d;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 != 0) {
    puStack_2c = &LAB_006fdcfa;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    puStack_1c = &stack0xfffffffc;
    FUN_00416900(local_8);
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_006fdd24;
  puStack_20 = (undefined1 *)0x6fdd1c;
  thunk_FUN_00406e5c(&local_8,local_24,puVar1);
  return;
}
