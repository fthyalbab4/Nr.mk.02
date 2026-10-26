// rea decompile_all
// name: FUN_0056651c
// address: 0x56651c
// body: available
// range: 0x56651c-0x566686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x566538 (push 0x566687 followed by fs-segment stack chaining); handler 0x566687 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056651c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x56652d;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00566687;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_14 = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (3 < iVar4) {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    cVar2 = FUN_00565bb8(local_8,iVar4 + -1);
    if (cVar2 == '\x06') {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      cVar2 = FUN_00565bb8(local_8,iVar4 + -2);
      if (cVar2 == '\x06') {
        bVar5 = true;
      }
      else {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        cVar2 = FUN_00565bb8(local_8,iVar4 + -3);
        bVar5 = cVar2 == '\x06';
      }
      if (bVar5) {
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          FUN_00407048(&local_8,local_8);
        }
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          FUN_00407048(&local_8,local_8);
        }
      }
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0056668e;
  puStack_18 = (undefined1 *)0x566686;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
