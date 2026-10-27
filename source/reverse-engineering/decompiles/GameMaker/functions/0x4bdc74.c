// rea decompile_all
// name: FUN_004bdc74
// address: 0x4bdc74
// body: available
// range: 0x4bdc74-0x4bdd14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bdc96 (push 0x4bdd32 followed by fs-segment stack chaining); handler 0x4bdd32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bdccb (push 0x4bdd15 followed by fs-segment stack chaining); handler 0x4bdd15 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdc74(int param_1,WPARAM param_2,undefined4 param_3,byte param_4,char param_5,
                 byte param_6)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  uint local_24;
  undefined4 local_20;
  undefined4 local_8;

  puStack_30 = (undefined1 *)0x4bdc8b;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_34 = &LAB_004bdd32;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_24 = *(uint *)(&DAT_00778578 + (uint)param_6 * 4) | 2 |
             *(uint *)(&DAT_00778580 + (uint)param_4 * 4);
  puStack_3c = (undefined1 *)0x4bdcbd;
  puStack_30 = &stack0xfffffffc;
  local_20 = FUN_00407f44(local_8);
  puStack_40 = &LAB_004bdd15;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  if (param_5 != '\0') {
    param_2 = param_2 - 1;
  }
  puStack_3c = &stack0xfffffffc;
  hWnd = (HWND)FUN_004f76a8(param_1);
  LVar1 = SendMessageW(hWnd,0x1053,param_2,(LPARAM)&local_24);
  if (LVar1 != -1) {
    FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),LVar1);
  }
  *in_FS_OFFSET = uStack_44;
  return;
}
