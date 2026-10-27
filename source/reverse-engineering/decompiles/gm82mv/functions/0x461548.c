// rea decompile_all
// name: FUN_00461548
// address: 0x461548
// body: available
// range: 0x461548-0x461662 inclusive
// range: 0x46168a-0x46168f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4615db (push 0x461683 followed by fs-segment stack chaining); handler 0x461683 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46160a (push 0x461663 followed by fs-segment stack chaining); handler 0x461663 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461548(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_26 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  undefined2 local_12;
  LPBYTE local_10;
  HDC local_c;
  UINT local_8;

  puVar5 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_00404f38(local_26,0x16,0);
  iVar1 = *(int *)(param_1 + 0x28);
  local_26[0] = 0x9ac6cdd7;
  local_18 = *(ushort *)(iVar1 + 0x18);
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  iVar2 = MulDiv(*(int *)(iVar1 + 0xc),(uint)local_18,0x9ec);
  local_1c = (undefined2)iVar2;
  iVar2 = MulDiv(*(int *)(iVar1 + 0x10),(uint)local_18,0x9ec);
  local_1a = (undefined2)iVar2;
  local_12 = FUN_0045e618(local_26);
  local_c = GetDC((HWND)0x0);
  *in_FS_OFFSET = &stack0xffffffc4;
  local_8 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),0,(LPBYTE)0x0,8,local_c);
  local_10 = (LPBYTE)FUN_00404324(local_8);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  UVar3 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),local_8,local_10,8,local_c);
  if (UVar3 < local_8) {
    FUN_0045d81c();
  }
  FUN_0043cac0(param_2,local_26,0x16);
  FUN_0043cac0(param_2,local_10,local_8);
  *in_FS_OFFSET = uVar4;
  FUN_00404340(local_10,local_8,puVar5);
  return;
}
