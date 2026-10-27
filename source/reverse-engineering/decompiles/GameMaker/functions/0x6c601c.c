// rea decompile_all
// name: FUN_006c601c
// address: 0x6c601c
// body: available
// range: 0x6c601c-0x6c60ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c6030 (push 0x6c60bb followed by fs-segment stack chaining); handler 0x6c60bb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c601c(int param_1)

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
  puStack_18 = &LAB_006c60bb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined1 *)(param_1 + 0x8188) = 1;
  iVar2 = FUN_0071c7c4(2,L"<same as sprite>");
  *(undefined1 *)(param_1 + 0x8188) = 0;
  if ((-2 < iVar2) && (iVar2 != *(int *)(*(int *)(param_1 + 0x45c) + 0x18))) {
    *(int *)(*(int *)(param_1 + 0x45c) + 0x18) = iVar2;
    if (iVar2 < 0) {
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x428),L"<same as sprite>");
    }
    else {
      FUN_006f5920(iVar2,&local_8);
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x428),local_8);
    }
    FUN_0062cd2c(*(undefined4 *)(param_1 + 0x46c));
    *(undefined1 *)(param_1 + 0x468) = 1;
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006c60c2;
  puStack_18 = (undefined1 *)0x6c60ba;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
