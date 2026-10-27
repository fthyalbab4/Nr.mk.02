// rea decompile_all
// name: FUN_00523c3c
// address: 0x523c3c
// body: available
// range: 0x523c3c-0x523c92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x523c66 (push 0x523c93 followed by fs-segment stack chaining); handler 0x523c93 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523c3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint *in_FS_OFFSET;
  uint uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x6;
  puStack_1c = (undefined1 *)0x523c58;
  uVar2 = FUN_0051f5f4(&PTR_LAB_0051f250,1,param_1);
  puStack_1c = &LAB_00523c93;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00523b20(uVar2,param_2,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (uint)param_4;
  puStack_1c = &LAB_00523c9a;
  uStack_20 = 0x523c92;
  FUN_00405fdc(uVar2,(uint)param_4,puVar1);
  return;
}
