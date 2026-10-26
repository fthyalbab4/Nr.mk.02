// rea decompile_all
// name: FUN_00416e78
// address: 0x416e78
// body: available
// range: 0x416e78-0x416f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x416e99 (push 0x416f44 followed by fs-segment stack chaining); handler 0x416f44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416e78(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x416e8e;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_00416f44;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  uVar3 = FUN_00408220(param_1);
  iVar2 = local_8;
  for (; local_8 = iVar2, 0 < iVar4; iVar4 = iVar4 + -1) {
    if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,iVar2);
    }
    if (*(short *)(iVar2 + -2 + iVar4 * 2) != 0) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407488(&local_8,local_8);
      }
      iVar2 = thunk_FUN_004179d6(uVar3,*(undefined2 *)(iVar2 + -2 + iVar4 * 2));
      if (iVar2 != 0) break;
    }
    iVar2 = local_8;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00416f4b;
  puStack_20 = (undefined1 *)0x416f43;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
