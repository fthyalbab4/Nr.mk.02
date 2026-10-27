// rea decompile_all
// name: FUN_004bab1c
// address: 0x4bab1c
// body: available
// range: 0x4bab1c-0x4baba3 inclusive
// range: 0x4babcc-0x4babce inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bab6f (push 0x4baba4 followed by fs-segment stack chaining); handler 0x4baba4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bab1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (*(int *)(*(int *)(param_4 + -4) + 0x2b8) != 0) {
    puStack_c = (undefined1 *)0x4bab44;
    local_8 = param_3;
    FUN_0043cc30(*(undefined4 *)(*(int *)(param_4 + -4) + 0x2ac));
    puStack_c = (undefined1 *)0x400;
    puStack_10 = (undefined1 *)0x4bab61;
    local_8 = FUN_0044077c(&PTR_FUN_00435480,1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x2b8));
    puStack_10 = &LAB_004baba4;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    FUN_004435d8(local_8);
    FUN_00441910(local_8,*(undefined4 *)(*(int *)(param_4 + -4) + 0x2ac));
    puVar1 = puStack_c;
    *in_FS_OFFSET = uStack_14;
    puStack_c = &DAT_004babab;
    puStack_10 = (undefined1 *)0x4baba3;
    FUN_00405a7c(local_8,uStack_14,puVar1);
    return;
  }
  return;
}
