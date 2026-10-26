// rea decompile_all
// name: FUN_0056678c
// address: 0x56678c
// body: available
// range: 0x56678c-0x566850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5667ad (push 0x566851 followed by fs-segment stack chaining); handler 0x566851 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056678c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = (undefined1 *)0x5667a2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_00566851;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + -4);
  }
  iVar3 = FUN_00566728(local_8,uVar4);
  if (param_2 <= iVar3) {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    if (0 < iVar5) {
      iVar3 = 1;
      local_c = param_2;
      do {
        cVar2 = FUN_00565bb8(local_8,iVar3);
        if ((cVar2 != '\x03') && (local_c = local_c + -1, local_c < 0)) break;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00566858;
  puStack_20 = (undefined1 *)0x566850;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
