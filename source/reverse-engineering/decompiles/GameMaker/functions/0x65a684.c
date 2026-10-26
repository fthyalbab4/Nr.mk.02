// rea decompile_all
// name: FUN_0065a684
// address: 0x65a684
// body: available
// range: 0x65a684-0x65a6ed inclusive
// range: 0x65a6f5-0x65a6f9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65a6b7 (push 0x65a6ee followed by fs-segment stack chaining); handler 0x65a6ee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a684(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (*(short *)(param_1 + 0x62) != 0) {
    puStack_14 = (undefined1 *)0x65a699;
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
    return;
  }
  puStack_14 = (undefined1 *)0x65a6a9;
  uVar2 = FUN_004d5290(&PTR_FUN_004d4f9c,1,param_1);
  puStack_18 = &LAB_0065a6ee;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0050b0dc(uVar2,*(undefined4 *)(*(int *)PTR_DAT_00782280 + 0x54));
  FUN_00405d08(uVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = (undefined1 *)0x65a6f5;
  puStack_18 = (undefined1 *)0x65a6ed;
  FUN_00405a7c(uVar2,uStack_1c,puVar1);
  return;
}
