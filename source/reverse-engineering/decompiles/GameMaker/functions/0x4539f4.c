// rea decompile_all
// name: FUN_004539f4
// address: 0x4539f4
// body: available
// range: 0x4539f4-0x453a58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x453a12 (push 0x453a59 followed by fs-segment stack chaining); handler 0x453a59 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004539f4(int param_1)

{
  uint uVar1;
  HKEY hKey;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  uVar1 = *(uint *)(param_1 + 0x18);
  puStack_1c = &LAB_00453a59;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(uint *)(param_1 + 0x18) = uVar1 & 0x300 | 0x20009;
  hKey = (HKEY)FUN_00453678(param_1);
  if (hKey != (HKEY)0x0) {
    RegCloseKey(hKey);
  }
  *in_FS_OFFSET = uStack_20;
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}
