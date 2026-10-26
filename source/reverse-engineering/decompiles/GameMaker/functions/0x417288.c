// rea decompile_all
// name: FUN_00417288
// address: 0x417288
// body: available
// range: 0x417288-0x417337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4172b0 (push 0x417338 followed by fs-segment stack chaining); handler 0x417338 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417288(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_1c = (undefined1 *)0x4172a5;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_00417338;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_004171ac(&DAT_00417354,local_8);
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    bVar4 = *(short *)(iVar3 + -2 + iVar2 * 2) != 0x2e;
  }
  if (bVar4) {
    iVar2 = 0x7fffffff;
  }
  FUN_004086a8(local_8,1,iVar2 + -1);
  FUN_0040839c(local_c,local_10,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)&local_10;
  puStack_20 = &LAB_0041733f;
  iStack_24 = 0x41732f;
  thunk_FUN_00406e5c(&local_10,&local_10,puVar1);
  iStack_24 = 0x417337;
  thunk_FUN_00406e5c(&local_8);
  return;
}
