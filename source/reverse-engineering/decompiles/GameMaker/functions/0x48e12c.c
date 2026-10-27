// rea decompile_all
// name: FUN_0048e12c
// address: 0x48e12c
// body: available
// range: 0x48e12c-0x48e1d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e13f (push 0x48e1d7 followed by fs-segment stack chaining); handler 0x48e1d7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e12c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  UINT_PTR UVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0048e1d7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (*(HWND *)(param_1 + 0x38) != (HWND)0x0) {
    KillTimer(*(HWND *)(param_1 + 0x38),1);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  if (((*(int *)(param_1 + 0x34) == 0) || (*(char *)(param_1 + 0x48) == '\0')) ||
     (*(short *)(param_1 + 0x42) == 0)) {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_0044a6f8();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar2 = FUN_0044a644();
      *(undefined4 *)(param_1 + 0x38) = uVar2;
    }
    UVar3 = SetTimer(*(HWND *)(param_1 + 0x38),1,*(UINT *)(param_1 + 0x34),(TIMERPROC)0x0);
    if (UVar3 == 0) {
      FUN_0040b75c(PTR_PTR_007828d8,&local_8);
      FUN_0041beb8(&PTR_LAB_0042efc8,1,local_8);
      FUN_00406618();
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0048e1de;
  puStack_14 = (undefined1 *)0x48e1d6;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
