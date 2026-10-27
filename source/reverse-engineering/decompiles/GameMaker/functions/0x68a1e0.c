// rea decompile_all
// name: FUN_0068a1e0
// address: 0x68a1e0
// body: available
// range: 0x68a1e0-0x68a288 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68a1f5 (push 0x68a289 followed by fs-segment stack chaining); handler 0x68a289 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a1e0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0068a289;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(param_1 + 0x634) = 0xffffffff;
  iVar3 = FUN_0062ca94();
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      cVar2 = FUN_0062ca9c(iVar4);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x634) = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x634) == -1) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x464),L"<undefined>");
  }
  else {
    FUN_0062cabc(*(int *)(param_1 + 0x634),&local_8);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x464),local_8);
  }
  *(undefined4 *)(param_1 + 0x638) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1658) = 0;
  FUN_0068a2bc(param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0068a290;
  puStack_1c = (undefined1 *)0x68a288;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
