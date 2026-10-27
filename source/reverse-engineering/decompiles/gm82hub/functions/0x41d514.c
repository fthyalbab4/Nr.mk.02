// rea decompile_all
// name: FUN_0041d514
// address: 0x41d514
// body: available
// range: 0x41d514-0x41d613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d533 (push 0x41d614 followed by fs-segment stack chaining); handler 0x41d614 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d514(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int *piStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 local_10 [4];
  int local_c;
  int local_8;

  puStack_18 = (undefined1 *)0x41d528;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_0041d614;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  local_c = 0;
  puStack_18 = &stack0xfffffffc;
  if (0 < param_2) {
    iVar2 = local_8;
    puStack_18 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_18 = &stack0xfffffffc;
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 < param_2) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407488(&local_8,local_8);
      }
      param_2 = 0;
      if (iVar2 != 0) {
        param_2 = *(int *)(iVar2 + -4);
      }
    }
    piStack_24 = &local_c;
    FUN_0041d30c(local_8,param_2,local_10);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 * 2 < local_c) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407488(&local_8,local_8);
      }
      local_c = 0;
      if (iVar2 != 0) {
        local_c = *(int *)(iVar2 + -4);
      }
      local_c = local_c * 2;
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)piStack_24;
  puStack_1c = &LAB_0041d61b;
  iStack_20 = 0x41d613;
  thunk_FUN_004072d8(&local_8,piStack_24,puVar1);
  return;
}
