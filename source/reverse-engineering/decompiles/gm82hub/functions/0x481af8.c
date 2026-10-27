// rea decompile_all
// name: FUN_00481af8
// address: 0x481af8
// body: available
// range: 0x481af8-0x481b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481b21 (push 0x481b6c followed by fs-segment stack chaining); handler 0x481b6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481af8(int *param_1,undefined4 param_2)

{
  HANDLE hMem;
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  (**(code **)(*param_1 + 0x18))();
  hMem = GetClipboardData(0xd);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (hMem == (HANDLE)0x0) {
    FUN_00408194(param_2,0);
  }
  else {
    pvVar1 = GlobalLock(hMem);
    FUN_00408350(param_2,pvVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  if (hMem != (HANDLE)0x0) {
    uStack_1c = 0x481b63;
    GlobalUnlock(hMem);
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}
