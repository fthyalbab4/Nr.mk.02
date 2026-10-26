// rea decompile_all
// name: FUN_006136dc
// address: 0x6136dc
// body: available
// range: 0x6136dc-0x613725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6136fd (push 0x613726 followed by fs-segment stack chaining); handler 0x613726 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006136dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x6136ef;
  uVar2 = FUN_005e403c(param_1,1,0);
  puStack_18 = &LAB_00613726;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00613434(uVar2,param_2,param_3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = param_4;
  puStack_18 = &LAB_0061372d;
  uStack_1c = 0x613725;
  FUN_00405a7c(uVar2,param_4,puVar1);
  return;
}
