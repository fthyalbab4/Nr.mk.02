// rea decompile_all
// name: FUN_006b7f3c
// address: 0x6b7f3c
// body: available
// range: 0x6b7f3c-0x6b7fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b7f5a (push 0x6b7fc0 followed by fs-segment stack chaining); handler 0x6b7fc0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7f3c(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006b7fc0;
  puStack_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  local_8 = param_1;
  FUN_00407eb8(param_2,0);
  iVar2 = FUN_00409a18(*(undefined4 *)(local_8 + 0x2d8));
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_006b7d0c(local_8,iVar3,&local_c,*param_2);
      puStack_24 = &DAT_006b7fec;
      FUN_00408480(param_2,4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = puStack_24;
  puStack_1c = &LAB_006b7fc7;
  puStack_20 = (undefined1 *)0x6b7fbf;
  thunk_FUN_00406e5c(&local_c,puStack_24,puVar1);
  return;
}
