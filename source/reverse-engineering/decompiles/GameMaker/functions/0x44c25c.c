// rea decompile_all
// name: FUN_0044c25c
// address: 0x44c25c
// body: available
// range: 0x44c25c-0x44c60d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44c27a (push 0x44c60e followed by fs-segment stack chaining); handler 0x44c60e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c25c(void)

{
  int *in_FS_OFFSET;
  HMODULE pHStackY_190;
  HMODULE in_stack_fffffe78;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x44c26f;
  (**(code **)*DAT_00788094)();
  puStack_14 = &LAB_0044c60e;
  iStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_18;
  DAT_00788090 = DAT_00788090 + 1;
  puStack_10 = &stack0xfffffffc;
  if (DAT_0078808c == (HMODULE)0x0) {
    puStack_10 = &stack0xfffffffc;
    DAT_0078808c = LoadLibraryW(L"uxtheme.dll");
    if (DAT_0078808c != (HMODULE)0x0) {
      DAT_00787fcc = FUN_0040dcb4();
      DAT_00787fd0 = FUN_0040dcb4();
      DAT_00787fd4 = FUN_0040dcb4();
      DAT_00787fd8 = FUN_0040dcb4();
      DAT_00787fdc = FUN_0040dcb4();
      _DAT_00787fe0 = FUN_0040dcb4();
      DAT_00787fe4 = FUN_0040dcb4();
      _DAT_00787fe8 = FUN_0040dcb4();
      _DAT_00787fec = FUN_0040dcb4();
      _DAT_00787ff0 = FUN_0040dcb4();
      _DAT_00787ff4 = FUN_0040dcb4();
      DAT_00787ff8 = FUN_0040dcb4();
      DAT_00787ffc = FUN_0040dcb4();
      _DAT_00788000 = FUN_0040dcb4();
      DAT_00788004 = FUN_0040dcb4();
      DAT_00788008 = FUN_0040dcb4();
      _DAT_0078800c = FUN_0040dcb4();
      _DAT_00788010 = FUN_0040dcb4();
      _DAT_00788014 = FUN_0040dcb4();
      _DAT_00788018 = FUN_0040dcb4();
      _DAT_0078801c = FUN_0040dcb4();
      _DAT_00788020 = FUN_0040dcb4();
      _DAT_00788024 = FUN_0040dcb4();
      _DAT_00788028 = FUN_0040dcb4();
      DAT_0078802c = FUN_0040dcb4();
      _DAT_00788030 = FUN_0040dcb4();
      _DAT_00788034 = FUN_0040dcb4();
      DAT_00788038 = FUN_0040dcb4();
      _DAT_0078803c = FUN_0040dcb4();
      DAT_00788040 = FUN_0040dcb4();
      _DAT_00788044 = FUN_0040dcb4();
      DAT_00788048 = FUN_0040dcb4();
      _DAT_0078804c = FUN_0040dcb4();
      _DAT_00788050 = FUN_0040dcb4();
      _DAT_00788054 = FUN_0040dcb4();
      _DAT_00788058 = FUN_0040dcb4();
      DAT_0078805c = FUN_0040dcb4();
      DAT_00788060 = FUN_0040dcb4();
      _DAT_00788064 = FUN_0040dcb4();
      _DAT_00788068 = FUN_0040dcb4();
      _DAT_0078806c = FUN_0040dcb4();
      _DAT_00788070 = FUN_0040dcb4();
      _DAT_00788074 = FUN_0040dcb4();
      _DAT_00788078 = FUN_0040dcb4();
      _DAT_0078807c = FUN_0040dcb4();
      in_stack_fffffe78 = DAT_0078808c;
      DAT_00788080 = FUN_0040dcb4();
      pHStackY_190 = DAT_0078808c;
      _DAT_00788084 = FUN_0040dcb4();
    }
  }
  *in_FS_OFFSET = (int)pHStackY_190;
  (**(code **)(*DAT_00788094 + 4))(DAT_00788094,*DAT_00788094,in_stack_fffffe78,&LAB_0044c615);
  return;
}
