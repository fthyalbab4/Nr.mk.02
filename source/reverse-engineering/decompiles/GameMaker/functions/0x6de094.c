// rea decompile_all
// name: FUN_006de094
// address: 0x6de094
// body: available
// range: 0x6de094-0x6de127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6de0b4 (push 0x6de128 followed by fs-segment stack chaining); handler 0x6de128 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de094(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined *puVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_1c = (undefined1 *)0x6de0a9;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_006de128;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_10);
  FUN_0041735c(local_10,&local_c);
  pwVar3 = L"Tutorials\\";
  puVar1 = &DAT_006de168;
  uVar2 = local_8;
  uVar4 = local_c;
  FUN_00408480(&DAT_00790108,4);
  FUN_0040839c(&local_14,DAT_00790108,L"page01.html",puVar1,uVar2,pwVar3,uVar4);
  FUN_00416e40(local_14);
  *in_FS_OFFSET = puVar1;
  thunk_FUN_00406e80(&local_14,4,pwVar3,&LAB_006de12f);
  return;
}
