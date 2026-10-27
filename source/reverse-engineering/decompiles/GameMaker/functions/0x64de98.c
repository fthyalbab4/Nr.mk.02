// rea decompile_all
// name: FUN_0064de98
// address: 0x64de98
// body: available
// range: 0x64de98-0x64df15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64deb5 (push 0x64df16 followed by fs-segment stack chaining); handler 0x64df16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064de98(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x64deaa;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_14 = &LAB_0064df16;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (((-1 < param_1) && (puStack_10 = &stack0xfffffffc, param_1 < DAT_0077f1c0)) &&
     (puStack_10 = &stack0xfffffffc, *(int *)(DAT_0077f1ac + param_1 * 4) != 0)) {
    puStack_10 = &stack0xfffffffc;
    FUN_00407eb8(DAT_0077f1b4 + param_1 * 4,local_8);
    iVar1 = *(int *)(DAT_0077f1b0 + param_1 * 4);
    if (iVar1 != 0) {
      FUN_004ee6d8(*(undefined4 *)(iVar1 + 0x398),local_8);
    }
    DAT_0078a168 = 1;
  }
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0064df1d;
  puStack_14 = (undefined1 *)0x64df15;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar2);
  return;
}
