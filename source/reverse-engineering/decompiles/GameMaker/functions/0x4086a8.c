// rea decompile_all
// name: FUN_004086a8
// address: 0x4086a8
// body: available
// range: 0x4086a8-0x408768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4086c9 (push 0x408769 followed by fs-segment stack chaining); handler 0x408769 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004086a8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x4086be;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_00408769;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_18 = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 + -1;
    if (iVar4 < param_2 + -1) {
      iVar3 = iVar4;
    }
  }
  if (param_3 < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4 - iVar3;
    if (param_3 < iVar4 - iVar3) {
      iVar5 = param_3;
    }
  }
  if (local_8 == 0) {
    sVar2 = 2;
  }
  else {
    sVar2 = *(short *)(local_8 + -10);
  }
  if (sVar2 == 2) {
    FUN_00407ff4(param_4,iVar3 * 2 + local_8,iVar5);
  }
  else {
    FUN_00407fe4(param_4,local_8 + iVar3,iVar5);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00408770;
  puStack_1c = (undefined1 *)0x408768;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
