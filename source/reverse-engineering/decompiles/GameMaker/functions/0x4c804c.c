// rea decompile_all
// name: FUN_004c804c
// address: 0x4c804c
// body: available
// range: 0x4c804c-0x4c80b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c8069 (push 0x4c80b5 followed by fs-segment stack chaining); handler 0x4c80b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c804c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x4c805e;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  bVar3 = true;
  puStack_14 = &LAB_004c80b5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00408640(*(undefined4 *)(param_1 + 0x1c),local_8);
  if (!bVar3) {
    FUN_00407eb8(param_1 + 0x1c,local_8);
    iVar2 = FUN_004c8454(*(undefined4 *)(param_1 + 4));
    if ((*(byte *)(iVar2 + 0x1c) & 1) == 0) {
      FUN_004c8454(*(undefined4 *)(param_1 + 4));
      FUN_004be2a4();
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004c80bc;
  puStack_14 = (undefined1 *)0x4c80b4;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
