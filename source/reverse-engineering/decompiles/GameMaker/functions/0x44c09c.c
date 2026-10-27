// rea decompile_all
// name: FUN_0044c09c
// address: 0x44c09c
// body: available
// range: 0x44c09c-0x44c251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44c0b3 (push 0x44c252 followed by fs-segment stack chaining); handler 0x44c252 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c09c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = (undefined1 *)0x44c0a8;
  (**(code **)*DAT_00788094)();
  puStack_c = &LAB_0044c252;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  if (0 < DAT_00788090) {
    DAT_00788090 = DAT_00788090 + -1;
  }
  puStack_8 = &stack0xfffffffc;
  if ((DAT_0078808c != (HMODULE)0x0) && (puStack_8 = &stack0xfffffffc, DAT_00788090 == 0)) {
    puStack_8 = &stack0xfffffffc;
    FreeLibrary(DAT_0078808c);
    DAT_0078808c = (HMODULE)0x0;
    DAT_00787fcc = 0;
    DAT_00787fd0 = 0;
    DAT_00787fd4 = 0;
    DAT_00787fd8 = 0;
    DAT_00787fdc = 0;
    _DAT_00787fe0 = 0;
    DAT_00787fe4 = 0;
    _DAT_00787fe8 = 0;
    _DAT_00787fec = 0;
    _DAT_00787ff0 = 0;
    _DAT_00787ff4 = 0;
    DAT_00787ff8 = 0;
    DAT_00787ffc = 0;
    _DAT_00788000 = 0;
    DAT_00788004 = 0;
    DAT_00788008 = 0;
    _DAT_0078800c = 0;
    _DAT_00788010 = 0;
    _DAT_00788014 = 0;
    _DAT_00788018 = 0;
    _DAT_0078801c = 0;
    _DAT_00788020 = 0;
    _DAT_00788024 = 0;
    _DAT_00788028 = 0;
    DAT_0078802c = 0;
    _DAT_00788030 = 0;
    _DAT_00788034 = 0;
    DAT_00788038 = 0;
    _DAT_0078803c = 0;
    DAT_00788040 = 0;
    _DAT_00788044 = 0;
    DAT_00788048 = 0;
    _DAT_0078804c = 0;
    _DAT_00788050 = 0;
    _DAT_00788054 = 0;
    _DAT_00788058 = 0;
    DAT_0078805c = 0;
    DAT_00788060 = 0;
    _DAT_00788064 = 0;
    _DAT_00788068 = 0;
    _DAT_0078806c = 0;
    _DAT_00788070 = 0;
    _DAT_00788074 = 0;
    _DAT_00788078 = 0;
    _DAT_0078807c = 0;
    DAT_00788080 = 0;
    _DAT_00788084 = 0;
  }
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_0044c259;
  puStack_c = (undefined1 *)0x44c251;
  (**(code **)(*DAT_00788094 + 4))(DAT_00788094,*DAT_00788094,puVar1);
  return;
}
