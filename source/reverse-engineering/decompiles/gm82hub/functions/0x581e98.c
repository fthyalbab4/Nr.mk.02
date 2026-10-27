// rea decompile_all
// name: FUN_00581e98
// address: 0x581e98
// body: available
// range: 0x581e98-0x581f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x581eaf (push 0x581f76 followed by fs-segment stack chaining); handler 0x581f76 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00581e98(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00581f76;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00581e5c();
  iVar2 = FUN_0050bbe0(param_1);
  if (iVar2 == 800) {
    DAT_00686af8 = FUN_0050bbe0(param_1);
    FUN_00409dfc(&DAT_0084efd8,&DAT_00581e08,1,DAT_00686af8);
    FUN_00409dfc(&DAT_0084efdc,&DAT_00581e34,1,DAT_00686af8);
    if (-1 < DAT_00686af8 + -1) {
      iVar3 = 0;
      iVar2 = DAT_00686af8;
      do {
        FUN_0050bc1c(param_1,&local_8);
        FUN_00408194(DAT_0084efd8 + iVar3 * 4,local_8);
        FUN_0050bc1c(param_1,&local_c);
        FUN_00408194(DAT_0084efdc + iVar3 * 4,local_c);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00581f7d;
  puStack_20 = (undefined1 *)0x581f75;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
