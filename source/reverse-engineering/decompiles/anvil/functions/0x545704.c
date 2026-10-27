// rea decompile_all
// name: FUN_00545704
// address: 0x545704
// body: available
// range: 0x545704-0x54576d inclusive
// range: 0x545775-0x5457a1 inclusive
// range: 0x5457ac-0x5457c2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54571c (push 0x5457a2 followed by fs-segment stack chaining); handler 0x5457a2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545740 (push 0x54576e followed by fs-segment stack chaining); handler 0x54576e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545704(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  PTR_FUN_006861dc._0_1_ = 1;
  puStack_18 = &LAB_005457a2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_006861d8 != (undefined4 *)0x0) {
    puStack_20 = (undefined1 *)0x545735;
    puStack_14 = &stack0xfffffffc;
    FUN_005467dc(DAT_00711844,0xffffffff);
    puStack_24 = &LAB_0054576e;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    *DAT_006861d8 = 0;
    puStack_20 = &stack0xfffffffc;
    FUN_0053af7c(&DAT_006861d8);
    puVar2 = puStack_20;
    *in_FS_OFFSET = uStack_28;
    puStack_20 = (undefined1 *)0x545775;
    puStack_24 = (undefined1 *)0x54576d;
    FUN_005469ec(DAT_00711844,uStack_28,puVar2);
    return;
  }
  puVar2 = &stack0xfffffffc;
  if ((DAT_006861d4 != 0) && (puVar2 = &stack0xfffffffc, (char)PTR_FUN_006861d0 != '\0')) {
    puStack_20 = (undefined1 *)0x545791;
    FUN_00405fdc(DAT_006861d4);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  DAT_006861d4 = 0;
  *in_FS_OFFSET = uStack_1c;
  uVar1 = DAT_00711844;
  DAT_00711844 = 0;
  puStack_14 = (undefined1 *)0x5457be;
  FUN_00405fdc(uVar1,0,puVar2);
  return;
}
