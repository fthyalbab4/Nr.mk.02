// rea decompile_all
// name: FUN_004173d8
// address: 0x4173d8
// body: available
// range: 0x4173d8-0x41746a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4173f6 (push 0x41746b followed by fs-segment stack chaining); handler 0x41746b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004173d8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x4173eb;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_0041746b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_004171ac(&DAT_00417484,local_8);
  if (iVar2 < 1) {
    bVar4 = false;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    bVar4 = *(short *)(iVar3 + -2 + iVar2 * 2) == 0x2e;
  }
  if (bVar4) {
    FUN_004086a8(local_8,iVar2,0x7fffffff);
    uStack_20 = param_2;
  }
  else {
    uStack_20 = 0x417455;
    FUN_00407eb8(param_2,0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00417472;
  uStack_1c = 0x41746a;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
