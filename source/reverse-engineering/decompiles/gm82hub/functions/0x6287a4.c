// rea decompile_all
// name: FUN_006287a4
// address: 0x6287a4
// body: available
// range: 0x6287a4-0x6287f2 inclusive
// range: 0x628819-0x628869 inclusive
// range: 0x6288a3-0x6288b0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6287ba (push 0x62886a followed by fs-segment stack chaining); handler 0x62886a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6287c8 (push 0x6287f3 followed by fs-segment stack chaining); handler 0x6287f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006287a4(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 local_5;

  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  local_5 = 0;
  puStack_1c = &LAB_0062886a;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puStack_28 = &LAB_006287f3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar2 = FUN_00627844();
  puVar1 = puStack_24;
  if (cVar2 == '\0') {
    *in_FS_OFFSET = uStack_2c;
    *in_FS_OFFSET = local_20;
  }
  else {
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x62881e;
    cVar2 = FUN_00628130(0,uStack_2c,puVar1);
    if (cVar2 == '\0') {
      *in_FS_OFFSET = local_20;
    }
    else {
      if (*PTR_DAT_00688de8 == '\0') {
        puStack_24 = (undefined1 *)0x628852;
        (**(code **)(**(int **)PTR_DAT_00688990 + -4))(*(int **)PTR_DAT_00688990,1);
        *(undefined4 *)PTR_DAT_00688990 = 0;
      }
      else {
        puStack_24 = (undefined1 *)0x628842;
        FUN_004e6d64(*(undefined4 *)PTR_DAT_00688990);
      }
      puStack_24 = (undefined1 *)0x628860;
      FUN_00607be0();
      *in_FS_OFFSET = local_20;
      local_5 = 1;
    }
  }
  return local_5;
}
