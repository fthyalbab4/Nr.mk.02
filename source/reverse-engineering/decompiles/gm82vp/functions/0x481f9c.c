// rea decompile_all
// name: FUN_00481f9c
// address: 0x481f9c
// body: available
// range: 0x481f9c-0x481fe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481fbc (push 0x481fe7 followed by fs-segment stack chaining); handler 0x481fe7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481f9c(int *param_1,uint param_2,HANDLE param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x481fb1;
  (**(code **)(*param_1 + 0x18))();
  puStack_18 = &LAB_00481fe7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00481620(param_1);
  SetClipboardData(param_2 & 0xffff,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00481fee;
  puStack_18 = (undefined1 *)0x481fe6;
  (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
  return;
}
