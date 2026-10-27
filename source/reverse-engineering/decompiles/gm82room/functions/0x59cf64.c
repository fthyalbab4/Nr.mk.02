// rea decompile_all
// name: FUN_0059cf64
// address: 0x59cf64
// body: available
// range: 0x59cf64-0x59cfee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59cf7c (push 0x59cfef followed by fs-segment stack chaining); handler 0x59cfef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059cf64(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0059cfef;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 != param_1[0xa8]) {
    puVar1 = &stack0xfffffffc;
    if (param_2 < 0) {
      FUN_0040b9d0(PTR_LAB_006891f4,&local_8);
      FUN_00596aa4(local_8);
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    if (param_1[0xb0] <= param_2) {
      FUN_0040b9d0(PTR_LAB_00689194,&local_c);
      FUN_00596aa4(local_c);
    }
    param_1[0xa8] = param_2;
    FUN_0059a6a4(param_1);
    (**(code **)(*param_1 + 0x90))();
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0059cff6;
  puStack_1c = (undefined1 *)0x59cfee;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
