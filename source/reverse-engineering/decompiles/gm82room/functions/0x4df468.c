// rea decompile_all
// name: FUN_004df468
// address: 0x4df468
// body: available
// range: 0x4df468-0x4df4db inclusive
// range: 0x4df4f5-0x4df519 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4df4a4 (push 0x4df51a followed by fs-segment stack chaining); handler 0x4df51a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4df4b9 (push 0x4df4dc followed by fs-segment stack chaining); handler 0x4df4dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004df468(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  undefined4 *in_FS_OFFSET;
  code *lpfn;
  LPARAM lParam;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  uVar2 = DAT_00681ac4;
  uVar1 = DAT_00681ab4;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_00681ac4 = 0;
  puStack_24 = &LAB_004df51a;
  local_28 = *in_FS_OFFSET;
  DAT_00681ab4 = param_1;
  *in_FS_OFFSET = &local_28;
  PTR_FUN_00681ac0._0_1_ = 1;
  puStack_30 = &LAB_004df4dc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = FUN_004df418;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  PTR_FUN_00681ac0._0_1_ = 0;
  DAT_00681ac4 = uVar2;
  DAT_00681ab4 = uVar1;
  return;
}
