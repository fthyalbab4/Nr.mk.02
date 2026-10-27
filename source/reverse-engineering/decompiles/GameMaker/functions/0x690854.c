// rea decompile_all
// name: FUN_00690854
// address: 0x690854
// body: available
// range: 0x690854-0x690962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x69086a (push 0x690963 followed by fs-segment stack chaining); handler 0x690963 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690854(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00690963;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x61c) != 0) {
    FUN_006902e4(param_1);
    FUN_00690d44(param_1);
    FUN_00691508(param_1,1);
    FUN_0068f9f8(param_1);
    cVar2 = FUN_0062ca9c(*(undefined4 *)(param_1 + 0x634));
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x634) = 0xffffffff;
    }
    FUN_0068a2bc(param_1);
    if (*(int *)(param_1 + 0x634) == -1) {
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x464),L"<undefined>");
    }
    else {
      FUN_0062cabc(*(int *)(param_1 + 0x634),&local_8);
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x464),local_8);
    }
    cVar2 = FUN_0064de18(*(undefined4 *)(param_1 + 0x640));
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
    }
    FUN_0068b8b0(param_1);
    FUN_0068b7d4(param_1);
    if (*(int *)(param_1 + 0x640) < 0) {
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x458),L"<undefined>");
      puVar1 = puStack_18;
    }
    else {
      FUN_0064de38(*(int *)(param_1 + 0x640),&local_c);
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x458),local_c);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0069096a;
  puStack_1c = (undefined1 *)0x690962;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
