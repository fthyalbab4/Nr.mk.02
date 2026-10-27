// rea decompile_all
// name: FUN_004f9788
// address: 0x4f9788
// body: available
// range: 0x4f9788-0x4f980c inclusive
// range: 0x4f9837-0x4f983a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f97c2 (push 0x4f9830 followed by fs-segment stack chaining); handler 0x4f9830 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f97e1 (push 0x4f980d followed by fs-segment stack chaining); handler 0x4f980d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9788(int *param_1,int param_2)

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
    puStack_10 = (undefined1 *)0x4f97b7;
    FUN_0045be3c(param_1[0x6a]);
    puStack_14 = &LAB_004f9830;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x4f97d6;
    puStack_10 = &stack0xfffffffc;
    FUN_0045ceb4(param_1[0x6a],*(undefined4 *)(param_2 + 4));
    puStack_20 = &LAB_004f980d;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xa0))();
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_004f9814;
    puStack_20 = (undefined1 *)0x4f980c;
    FUN_0045ceb4(param_1[0x6a],0,puVar1);
    return;
  }
  return;
}
