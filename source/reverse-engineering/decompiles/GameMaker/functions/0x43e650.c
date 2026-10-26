// rea decompile_all
// name: FUN_0043e650
// address: 0x43e650
// body: available
// range: 0x43e650-0x43e6c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43e66f (push 0x43e6c6 followed by fs-segment stack chaining); handler 0x43e6c6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e650(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0043e6c6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  FUN_00444e68(param_2);
  iVar2 = (**(code **)(*local_8 + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,iVar3,&local_10);
      FUN_004467a8(local_c,local_10);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00444e70(local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043e6cd;
  puStack_24 = (undefined1 *)0x43e6c5;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
