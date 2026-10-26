// rea decompile_all
// name: FUN_00481a50
// address: 0x481a50
// body: available
// range: 0x481a50-0x481abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481a73 (push 0x481ac0 followed by fs-segment stack chaining); handler 0x481ac0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481a50(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  HANDLE hMem;
  LPVOID pvVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x481a68;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_00481ac0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  hMem = GetClipboardData(0xd);
  if (hMem != (HANDLE)0x0) {
    pvVar2 = GlobalLock(hMem);
    FUN_00417708(param_2,pvVar2,param_3 + -1);
    FUN_00417624();
    GlobalUnlock(hMem);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00481ac7;
  puStack_20 = (undefined1 *)0x481abf;
  (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
  return;
}
