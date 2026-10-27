// rea decompile_all
// name: FUN_00449468
// address: 0x449468
// body: available
// range: 0x449468-0x449819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x449486 (push 0x44981a followed by fs-segment stack chaining); handler 0x44981a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449468(void)

{
  int *in_FS_OFFSET;
  HMODULE pHStackY_190;
  HMODULE in_stack_fffffe78;
  int iStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x44947b;
  (**(code **)*DAT_0068f094)();
  puStack_14 = &LAB_0044981a;
  iStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_18;
  DAT_0068f090 = DAT_0068f090 + 1;
  puStack_10 = &stack0xfffffffc;
  if (DAT_0068f08c == (HMODULE)0x0) {
    puStack_10 = &stack0xfffffffc;
    DAT_0068f08c = LoadLibraryW(L"uxtheme.dll");
    if (DAT_0068f08c != (HMODULE)0x0) {
      DAT_0068efcc = FUN_0040deb0();
      DAT_0068efd0 = FUN_0040deb0();
      DAT_0068efd4 = FUN_0040deb0();
      DAT_0068efd8 = FUN_0040deb0();
      DAT_0068efdc = FUN_0040deb0();
      _DAT_0068efe0 = FUN_0040deb0();
      DAT_0068efe4 = FUN_0040deb0();
      _DAT_0068efe8 = FUN_0040deb0();
      _DAT_0068efec = FUN_0040deb0();
      _DAT_0068eff0 = FUN_0040deb0();
      _DAT_0068eff4 = FUN_0040deb0();
      DAT_0068eff8 = FUN_0040deb0();
      DAT_0068effc = FUN_0040deb0();
      _DAT_0068f000 = FUN_0040deb0();
      DAT_0068f004 = FUN_0040deb0();
      DAT_0068f008 = FUN_0040deb0();
      _DAT_0068f00c = FUN_0040deb0();
      _DAT_0068f010 = FUN_0040deb0();
      _DAT_0068f014 = FUN_0040deb0();
      _DAT_0068f018 = FUN_0040deb0();
      _DAT_0068f01c = FUN_0040deb0();
      _DAT_0068f020 = FUN_0040deb0();
      _DAT_0068f024 = FUN_0040deb0();
      _DAT_0068f028 = FUN_0040deb0();
      DAT_0068f02c = FUN_0040deb0();
      _DAT_0068f030 = FUN_0040deb0();
      _DAT_0068f034 = FUN_0040deb0();
      DAT_0068f038 = FUN_0040deb0();
      _DAT_0068f03c = FUN_0040deb0();
      DAT_0068f040 = FUN_0040deb0();
      _DAT_0068f044 = FUN_0040deb0();
      DAT_0068f048 = FUN_0040deb0();
      _DAT_0068f04c = FUN_0040deb0();
      _DAT_0068f050 = FUN_0040deb0();
      _DAT_0068f054 = FUN_0040deb0();
      _DAT_0068f058 = FUN_0040deb0();
      DAT_0068f05c = FUN_0040deb0();
      DAT_0068f060 = FUN_0040deb0();
      _DAT_0068f064 = FUN_0040deb0();
      _DAT_0068f068 = FUN_0040deb0();
      _DAT_0068f06c = FUN_0040deb0();
      _DAT_0068f070 = FUN_0040deb0();
      _DAT_0068f074 = FUN_0040deb0();
      _DAT_0068f078 = FUN_0040deb0();
      _DAT_0068f07c = FUN_0040deb0();
      in_stack_fffffe78 = DAT_0068f08c;
      DAT_0068f080 = FUN_0040deb0();
      pHStackY_190 = DAT_0068f08c;
      _DAT_0068f084 = FUN_0040deb0();
    }
  }
  *in_FS_OFFSET = (int)pHStackY_190;
  (**(code **)(*DAT_0068f094 + 4))(DAT_0068f094,*DAT_0068f094,in_stack_fffffe78,&LAB_00449821);
  return;
}
