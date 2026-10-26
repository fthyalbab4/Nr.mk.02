// rea decompile_all
// name: FUN_00546284
// address: 0x546284
// body: available
// range: 0x546284-0x5462e0 inclusive
// range: 0x5462e8-0x5462eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5462a9 (push 0x5462e1 followed by fs-segment stack chaining); handler 0x5462e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546284(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  if (param_1 != 0) {
    puStack_10 = (undefined1 *)0x54629b;
    uVar2 = FUN_00462144(&PTR_FUN_004587d4,1);
    puStack_14 = &LAB_005462e1;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00463a4c(uVar2,param_1);
    FUN_0054612c(uVar2);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x5462e8;
    puStack_14 = (undefined1 *)0x5462d8;
    FUN_00464298(uVar2,uStack_18,puVar1);
    puStack_14 = (undefined1 *)0x5462e0;
    FUN_00405a7c(uVar2);
    return;
  }
  return;
}
