// rea decompile_all
// name: FUN_005a1e34
// address: 0x5a1e34
// body: available
// range: 0x5a1e34-0x5a1e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a1e4d (push 0x5a1e99 followed by fs-segment stack chaining); handler 0x5a1e99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1e34(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_005a1e99;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_c = *(undefined4 *)(*param_1 + 0x14);
  local_8 = 0;
  uVar2 = 0;
  FUN_0040b9d0(PTR_LAB_006890b0,&local_10,param_3,0,&local_c);
  FUN_0041bd88(&LAB_005a1dec,1,local_10);
  FUN_00406ab4();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_005a1ea0;
  thunk_FUN_004072d8(&local_10,uVar2,puVar1);
  return;
}
