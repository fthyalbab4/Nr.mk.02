// rea decompile_all
// name: FUN_00741044
// address: 0x741044
// body: available
// range: 0x741044-0x741108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x741065 (push 0x741109 followed by fs-segment stack chaining); handler 0x741109 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00741044(int param_1,short param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x74105a;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_00741109;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (0 < param_3) {
    iVar2 = local_8;
    puStack_18 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_18 = &stack0xfffffffc;
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4);
    }
    if (param_3 <= iVar4) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407048(&local_8,local_8);
      }
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + -4);
      }
      if (param_3 - iVar4 == 0 || param_3 < iVar4) {
        iVar2 = (param_3 - iVar4) + -1;
        do {
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar3 = FUN_00407048(&local_8,local_8);
          }
          if (param_2 == *(short *)(iVar3 + -2 + iVar4 * 2)) break;
          iVar4 = iVar4 + -1;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00741110;
  puStack_1c = (undefined1 *)0x741108;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
