// rea decompile_all
// name: FUN_004479dc
// address: 0x4479dc
// body: available
// range: 0x4479dc-0x447aa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4479eb (push 0x447aa2 followed by fs-segment stack chaining); handler 0x447aa2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004479dc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;

  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_00447aa2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  _DAT_0068ef68 = _DAT_0068ef68 + 1;
  if (_DAT_0068ef68 == 0) {
    FUN_004382a4(DAT_0068cc40);
    (**(code **)(*DAT_0068ef5c + 0x14))();
    FUN_00447610();
    FUN_0043e0dc(0,0);
    uVar1 = DAT_0068ef78;
    DAT_0068ef78 = 0;
    FUN_00405fdc(uVar1);
    iVar2 = FUN_0040bfac();
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = FUN_0040bfac();
    *(undefined4 *)(iVar2 + 0x10) = 0;
    FUN_00405fdc(uVar1);
    uVar1 = DAT_0068ef70;
    DAT_0068ef70 = 0;
    FUN_00405fdc(uVar1);
    FUN_0040b268(&DAT_0068ef5c);
    FUN_0040b100(&LAB_00447688);
    uVar1 = DAT_0068ef74;
    DAT_0068ef74 = 0;
    FUN_00405fdc(uVar1);
    FUN_004477d0();
    FUN_0040b268(&DAT_0068ef5c);
  }
  *in_FS_OFFSET = uStack_14;
  return;
}
