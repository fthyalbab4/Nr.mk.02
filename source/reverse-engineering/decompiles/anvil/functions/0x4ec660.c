// rea decompile_all
// name: FUN_004ec660
// address: 0x4ec660
// body: available
// range: 0x4ec660-0x4ec6e4 inclusive
// range: 0x4ec6ec-0x4ec6f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec6c0 (push 0x4ec6e5 followed by fs-segment stack chaining); handler 0x4ec6e5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec660(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x4ec674;
  FUN_0040891c(*(undefined4 *)(param_1 + 0x54),param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x4ec680;
    FUN_00408194(param_1 + 0x54,param_2);
    if (*(short *)(param_1 + 0x12a) == 0) {
      puStack_14 = (undefined1 *)0x4ec6a8;
      uVar2 = FUN_004a2450(&PTR_FUN_004a2358,1,param_1);
      puStack_14 = (undefined1 *)0x4ec6b5;
      FUN_004d7f58(uVar2,param_2);
      puStack_18 = &LAB_004ec6e5;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00406268(uVar2);
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x4ec6ec;
      puStack_18 = (undefined1 *)0x4ec6e4;
      FUN_00405fdc(uVar2,uStack_1c,puVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x4ec698;
    (**(code **)(param_1 + 0x128))(*(undefined4 *)(param_1 + 300),param_1);
  }
  return;
}
