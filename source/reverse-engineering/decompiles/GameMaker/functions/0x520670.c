// rea decompile_all
// name: FUN_00520670
// address: 0x520670
// body: available
// range: 0x520670-0x5206f4 inclusive
// range: 0x5206fc-0x520700 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5206d0 (push 0x5206f5 followed by fs-segment stack chaining); handler 0x5206f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520670(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x520684;
  FUN_00408640(*(undefined4 *)(param_1 + 0x54),param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x520690;
    FUN_00407eb8(param_1 + 0x54,param_2);
    if (*(short *)(param_1 + 0x12a) == 0) {
      puStack_14 = (undefined1 *)0x5206b8;
      uVar2 = FUN_004d5290(&PTR_FUN_004d4f9c,1,param_1);
      puStack_14 = (undefined1 *)0x5206c5;
      FUN_0050b0dc(uVar2,param_2);
      puStack_18 = &LAB_005206f5;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00405d08(uVar2);
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x5206fc;
      puStack_18 = (undefined1 *)0x5206f4;
      FUN_00405a7c(uVar2,uStack_1c,puVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x5206a8;
    (**(code **)(param_1 + 0x128))(*(undefined4 *)(param_1 + 300),param_1);
  }
  return;
}
