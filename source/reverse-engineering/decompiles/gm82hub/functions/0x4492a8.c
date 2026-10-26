// rea decompile_all
// name: FUN_004492a8
// address: 0x4492a8
// body: available
// range: 0x4492a8-0x44945d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4492bf (push 0x44945e followed by fs-segment stack chaining); handler 0x44945e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004492a8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = (undefined1 *)0x4492b4;
  (**(code **)*DAT_0068f094)();
  puStack_c = &LAB_0044945e;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  if (0 < DAT_0068f090) {
    DAT_0068f090 = DAT_0068f090 + -1;
  }
  puStack_8 = &stack0xfffffffc;
  if ((DAT_0068f08c != (HMODULE)0x0) && (puStack_8 = &stack0xfffffffc, DAT_0068f090 == 0)) {
    puStack_8 = &stack0xfffffffc;
    FreeLibrary(DAT_0068f08c);
    DAT_0068f08c = (HMODULE)0x0;
    DAT_0068efcc = 0;
    DAT_0068efd0 = 0;
    DAT_0068efd4 = 0;
    DAT_0068efd8 = 0;
    DAT_0068efdc = 0;
    _DAT_0068efe0 = 0;
    DAT_0068efe4 = 0;
    _DAT_0068efe8 = 0;
    _DAT_0068efec = 0;
    _DAT_0068eff0 = 0;
    _DAT_0068eff4 = 0;
    DAT_0068eff8 = 0;
    DAT_0068effc = 0;
    _DAT_0068f000 = 0;
    DAT_0068f004 = 0;
    DAT_0068f008 = 0;
    _DAT_0068f00c = 0;
    _DAT_0068f010 = 0;
    _DAT_0068f014 = 0;
    _DAT_0068f018 = 0;
    _DAT_0068f01c = 0;
    _DAT_0068f020 = 0;
    _DAT_0068f024 = 0;
    _DAT_0068f028 = 0;
    DAT_0068f02c = 0;
    _DAT_0068f030 = 0;
    _DAT_0068f034 = 0;
    DAT_0068f038 = 0;
    _DAT_0068f03c = 0;
    DAT_0068f040 = 0;
    _DAT_0068f044 = 0;
    DAT_0068f048 = 0;
    _DAT_0068f04c = 0;
    _DAT_0068f050 = 0;
    _DAT_0068f054 = 0;
    _DAT_0068f058 = 0;
    DAT_0068f05c = 0;
    DAT_0068f060 = 0;
    _DAT_0068f064 = 0;
    _DAT_0068f068 = 0;
    _DAT_0068f06c = 0;
    _DAT_0068f070 = 0;
    _DAT_0068f074 = 0;
    _DAT_0068f078 = 0;
    _DAT_0068f07c = 0;
    DAT_0068f080 = 0;
    _DAT_0068f084 = 0;
  }
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00449465;
  puStack_c = (undefined1 *)0x44945d;
  (**(code **)(*DAT_0068f094 + 4))(DAT_0068f094,*DAT_0068f094,puVar1);
  return;
}
