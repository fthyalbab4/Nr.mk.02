// rea decompile_all
// name: FUN_00564f80
// address: 0x564f80
// body: available
// range: 0x564f80-0x565060 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x564f9c (push 0x565061 followed by fs-segment stack chaining); handler 0x565061 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564f80(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  double local_14;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_24 = &LAB_00565061;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00407eb8(param_1 + 4,0);
  uVar2 = FUN_004047b0(999);
  FUN_0041666c(uVar2,&local_18);
  FUN_0040839c(param_1 + 8,L"temp",local_18);
  FUN_00407eb8(param_1 + 0xc,&DAT_00565094);
  FUN_00407eb8(param_1 + 0x10,0);
  FUN_00419950();
  local_14 = (double)in_ST0;
  FUN_0041a670(&local_8,*(undefined4 *)PTR_DAT_00781c34);
  FUN_00407eb8(param_1 + 0x14,local_8);
  FUN_00407eb8(param_1 + 0x18,L"Free to use, also for commercial games.");
  FUN_00407eb8(param_1 + 0x1c,0);
  FUN_00407eb8(param_1 + 0x20,0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00564e38(param_1,0);
  FUN_00564e9c(param_1,0);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00565068;
  puStack_24 = (undefined1 *)0x565058;
  thunk_FUN_00406e5c(&local_18,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x565060;
  thunk_FUN_00406e5c(&local_8);
  return;
}
