// rea decompile_all
// name: FUN_00589ca0
// address: 0x589ca0
// body: available
// range: 0x589ca0-0x589d35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x589cb5 (push 0x589d36 followed by fs-segment stack chaining); handler 0x589d36 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589ca0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00589d36;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_0050bbe0(param_1);
  if (iVar2 == 500) {
    DAT_00686b24 = FUN_0050bbe0(param_1);
    FUN_00409dfc(&DAT_0084f014,&DAT_00589c78,1,DAT_00686b24);
    if (-1 < DAT_00686b24 + -1) {
      iVar3 = 0;
      iVar2 = DAT_00686b24;
      do {
        FUN_0050bc1c(param_1,&local_8);
        FUN_00408194(DAT_0084f014 + iVar3 * 4,local_8);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00589d3d;
  puStack_1c = (undefined1 *)0x589d35;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
