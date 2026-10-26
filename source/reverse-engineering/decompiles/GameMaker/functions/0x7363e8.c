// rea decompile_all
// name: FUN_007363e8
// address: 0x7363e8
// body: available
// range: 0x7363e8-0x736493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x736406 (push 0x736494 followed by fs-segment stack chaining); handler 0x736494 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007363e8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x7363fb;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00736494;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00407eb8(param_2,local_8);
  if (local_8 == 0) {
    bVar5 = true;
  }
  else {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    bVar5 = *(short *)(iVar2 + -2 + iVar4 * 2) != 0x5c;
  }
  if (bVar5) {
    FUN_0040839c(param_2,local_8,&DAT_007364ac);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0073649b;
  puStack_18 = (undefined1 *)0x736493;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
