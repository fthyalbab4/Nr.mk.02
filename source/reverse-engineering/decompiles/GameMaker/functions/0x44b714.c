// rea decompile_all
// name: FUN_0044b714
// address: 0x44b714
// body: available
// range: 0x44b714-0x44b7ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44b733 (push 0x44b7cf followed by fs-segment stack chaining); handler 0x44b7cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044b714(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  uint local_c;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_0044b7cf;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_0044a8ec(param_2);
  local_c = FUN_00404884();
  if ((extraout_EDX == 0) || (-1 < extraout_EDX)) {
    if (extraout_EDX == 0) {
      if (local_c < 0x80000000) goto LAB_0044b7a6;
    }
    else if (extraout_EDX < 1) goto LAB_0044b7a6;
  }
  FUN_0044a8d8(param_2,&local_18);
  local_14 = local_18;
  local_10 = 0x11;
  puVar3 = &local_14;
  uVar2 = 0;
  FUN_0040b75c(PTR_PTR_0078225c,&local_1c);
  FUN_0041bef4(&PTR_LAB_004111bc,1,local_1c,uVar2,puVar3);
  FUN_00406618();
LAB_0044b7a6:
  (**(code **)(*param_1 + 8))(param_1,local_c);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0044b7d6;
  puStack_2c = (undefined1 *)0x44b7ce;
  thunk_FUN_00406e80(&local_1c,2,puVar1);
  return;
}
