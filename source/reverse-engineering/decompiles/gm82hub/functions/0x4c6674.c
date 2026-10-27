// rea decompile_all
// name: FUN_004c6674
// address: 0x4c6674
// body: available
// range: 0x4c6674-0x4c66f8 inclusive
// range: 0x4c6723-0x4c6726 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c66ae (push 0x4c671c followed by fs-segment stack chaining); handler 0x4c671c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c66cd (push 0x4c66f9 followed by fs-segment stack chaining); handler 0x4c66f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6674(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  if ((*(int *)(param_2 + 4) != 0) && ((*(byte *)(param_1 + 7) & 8) == 0)) {
    puStack_10 = (undefined1 *)0x4c66a3;
    FUN_0045c4fc(param_1[0x6a]);
    puStack_14 = &LAB_004c671c;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x4c66c2;
    puStack_10 = &stack0xfffffffc;
    FUN_0045d574(param_1[0x6a],*(undefined4 *)(param_2 + 4));
    puStack_20 = &LAB_004c66f9;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xa0))();
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_004c6700;
    puStack_20 = (undefined1 *)0x4c66f8;
    FUN_0045d574(param_1[0x6a],0,puVar1);
    return;
  }
  return;
}
