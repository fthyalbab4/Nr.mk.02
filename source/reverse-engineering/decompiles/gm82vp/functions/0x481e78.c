// rea decompile_all
// name: FUN_00481e78
// address: 0x481e78
// body: available
// range: 0x481e78-0x481eec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481e97 (push 0x481eed followed by fs-segment stack chaining); handler 0x481eed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481e78(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int *local_8;

  puStack_1c = (undefined1 *)0x481e8c;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_00481eed;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00481620(local_8);
  local_14 = (HANDLE)0x0;
  (**(code **)(*param_2 + 0x68))(param_2,&local_e,&local_c);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)&local_14;
  puStack_20 = &LAB_00481ef4;
  iStack_24 = 0x481eec;
  (**(code **)(*local_8 + 0x14))(local_8,*local_8,puVar1);
  return;
}
