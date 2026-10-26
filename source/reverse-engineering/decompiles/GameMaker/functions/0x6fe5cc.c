// rea decompile_all
// name: FUN_006fe5cc
// address: 0x6fe5cc
// body: available
// range: 0x6fe5cc-0x6fe660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fe5e5 (push 0x6fe661 followed by fs-segment stack chaining); handler 0x6fe661 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fe5cc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_006fe661;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0041666c(param_1,&local_c);
  FUN_0040839c(&local_8,L"ValueVal",local_c);
  iVar2 = FUN_0044959c(DAT_007901a0,local_8);
  if (*(int *)(&DAT_007901c0 + param_1 * 4) == 0) {
    FUN_004ee6a0(iVar2,param_2);
  }
  else if (*(int *)(&DAT_007901c0 + param_1 * 4) == 0xf) {
    FUN_007009f0(*(undefined4 *)(iVar2 + 100),param_2);
  }
  else {
    FUN_0041666c(*(undefined4 *)(&DAT_007901a8 + param_1 * 4),param_2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006fe668;
  puStack_20 = (undefined1 *)0x6fe660;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
