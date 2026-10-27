// rea decompile_all
// name: FUN_0044a7d0
// address: 0x44a7d0
// body: available
// range: 0x44a7d0-0x44a895 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44a7df (push 0x44a896 followed by fs-segment stack chaining); handler 0x44a896 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a7d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;

  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_0044a896;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  _DAT_00787f68 = _DAT_00787f68 + 1;
  if (_DAT_00787f68 == 0) {
    FUN_0043a428(DAT_00785c40);
    (**(code **)(*DAT_00787f5c + 0x14))();
    FUN_0044a404();
    FUN_00440f9c(0,0);
    uVar1 = DAT_00787f78;
    DAT_00787f78 = 0;
    FUN_00405a7c(uVar1);
    iVar2 = FUN_0040bd38();
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = FUN_0040bd38();
    *(undefined4 *)(iVar2 + 0x10) = 0;
    FUN_00405a7c(uVar1);
    uVar1 = DAT_00787f70;
    DAT_00787f70 = 0;
    FUN_00405a7c(uVar1);
    FUN_0040b140(&DAT_00787f5c);
    FUN_0040afd8(&LAB_0044a47c);
    uVar1 = DAT_00787f74;
    DAT_00787f74 = 0;
    FUN_00405a7c(uVar1);
    FUN_0044a5c4();
    FUN_0040b140(&DAT_00787f5c);
  }
  *in_FS_OFFSET = uStack_14;
  return;
}
