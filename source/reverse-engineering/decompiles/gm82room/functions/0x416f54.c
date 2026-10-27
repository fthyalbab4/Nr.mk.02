// rea decompile_all
// name: FUN_00416f54
// address: 0x416f54
// body: available
// range: 0x416f54-0x417003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x416f7c (push 0x417004 followed by fs-segment stack chaining); handler 0x417004 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416f54(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_10 = 0;
  puStack_1c = (undefined1 *)0x416f71;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_00417004;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00416e78(&DAT_00417020,local_8);
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    bVar4 = *(short *)(iVar3 + -2 + iVar2 * 2) != 0x2e;
  }
  if (bVar4) {
    iVar2 = 0x7fffffff;
  }
  FUN_00408984(local_8,1,iVar2 + -1);
  FUN_00408678(local_c,local_10,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)&local_10;
  puStack_20 = &LAB_0041700b;
  iStack_24 = 0x416ffb;
  thunk_FUN_004072d8(&local_10,&local_10,puVar1);
  iStack_24 = 0x417003;
  thunk_FUN_004072d8(&local_8);
  return;
}
