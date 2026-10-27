// rea decompile_all
// name: FUN_0068bc4c
// address: 0x68bc4c
// body: available
// range: 0x68bc4c-0x68bcd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68bc60 (push 0x68bcd2 followed by fs-segment stack chaining); handler 0x68bcd2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068bc4c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0068bcd2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_0071c7c4(6,0);
  if (-2 < iVar2) {
    *(int *)(param_1 + 0x640) = iVar2;
    FUN_0068b8b0(param_1);
    FUN_0068b7d4(param_1);
    if (*(int *)(param_1 + 0x640) < 0) {
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x458),L"<undefined>");
    }
    else {
      FUN_0064de38(*(int *)(param_1 + 0x640),&local_8);
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x458),local_8);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0068bcd9;
  puStack_18 = (undefined1 *)0x68bcd1;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
