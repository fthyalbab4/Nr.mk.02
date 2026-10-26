// rea decompile_all
// name: FUN_0062e380
// address: 0x62e380
// body: available
// range: 0x62e380-0x62e3f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62e3a4 (push 0x62e3f9 followed by fs-segment stack chaining); handler 0x62e3f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062e380(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_14 = (undefined1 *)0x62e399;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_18 = &LAB_0062e3f9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004173d8(local_8,&local_c);
  iVar2 = FUN_00415924(local_c,L".gmbck");
  if (iVar2 == 0) {
    FUN_0062e424(param_1,local_8);
  }
  else {
    FUN_007026a4(*(undefined4 *)(param_1 + 4),local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0062e400;
  puStack_18 = (undefined1 *)0x62e3f8;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
