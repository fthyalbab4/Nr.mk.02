// rea decompile_all
// name: FUN_00531118
// address: 0x531118
// body: available
// range: 0x531118-0x531299 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53112f (push 0x53129a followed by fs-segment stack chaining); handler 0x53129a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531118(void)

{
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  HMODULE pHStackY_9c;
  HMODULE in_stack_ffffff6c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0053129a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0050d110(&local_8);
  FUN_004085b8(&local_8,L"\\D3DX8.dll");
  lpLibFileName = (LPCWSTR)FUN_00408220(local_8);
  DAT_006845d4 = LoadLibraryW(lpLibFileName);
  if (DAT_006845d4 != (HMODULE)0x0) {
    DAT_0068fdbc = FUN_0040deb0();
    DAT_0068fdc0 = FUN_0040deb0();
    DAT_0068fdc4 = FUN_0040deb0();
    DAT_0068fdc8 = FUN_0040deb0();
    DAT_0068fdcc = FUN_0040deb0();
    DAT_0068fdd0 = FUN_0040deb0();
    DAT_0068fdd4 = FUN_0040deb0();
    DAT_0068fdd8 = FUN_0040deb0();
    DAT_0068fddc = FUN_0040deb0();
    DAT_0068fde0 = FUN_0040deb0();
    DAT_0068fde4 = FUN_0040deb0();
    DAT_0068fdec = FUN_0040deb0();
    DAT_0068fdf0 = FUN_0040deb0();
    DAT_0068fdf4 = FUN_0040deb0();
    in_stack_ffffff6c = DAT_006845d4;
    _DAT_0068fdf8 = FUN_0040deb0();
    pHStackY_9c = DAT_006845d4;
    DAT_0068fde8 = FUN_0040deb0();
  }
  *in_FS_OFFSET = pHStackY_9c;
  thunk_FUN_004072d8(&local_8,pHStackY_9c,in_stack_ffffff6c,&LAB_005312a1);
  return;
}
