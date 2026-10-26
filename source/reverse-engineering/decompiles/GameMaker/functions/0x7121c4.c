// rea decompile_all
// name: FUN_007121c4
// address: 0x7121c4
// body: available
// range: 0x7121c4-0x712257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7121d7 (push 0x712258 followed by fs-segment stack chaining); handler 0x712258 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007121c4(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00712258;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_007132f8();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      FUN_00713280(iVar4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_00790a08 + 0x394) + 0x280) + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(DAT_00790a08 + 0x394) + 0x280);
      (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,&local_8);
      FUN_0071335c(local_8,0);
      FUN_0071325c();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0071225f;
  puStack_1c = (undefined1 *)0x712257;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
