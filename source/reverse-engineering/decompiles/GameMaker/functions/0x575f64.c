// rea decompile_all
// name: FUN_00575f64
// address: 0x575f64
// body: available
// range: 0x575f64-0x575fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x575f7b (push 0x575ff0 followed by fs-segment stack chaining); handler 0x575ff0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575f64(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_00575ff0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(**(int **)(param_1 + 0x378) + 0x1c))(*(int **)(param_1 + 0x378),&local_8);
  uVar3 = local_8;
  FUN_0040b75c(PTR_PTR_007824d0,&local_10);
  uVar2 = local_10;
  FUN_0040b75c(PTR_PTR_007817a4,&local_14);
  uVar1 = local_14;
  FUN_00408480(&local_c,4);
  FUN_00408640(&DAT_0057600c,local_c);
  *in_FS_OFFSET = uVar1;
  thunk_FUN_00406e80(&local_14,4,uVar2,&LAB_00575ff7,uVar3);
  return;
}
