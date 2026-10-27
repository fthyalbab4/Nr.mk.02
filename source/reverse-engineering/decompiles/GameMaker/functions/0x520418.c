// rea decompile_all
// name: FUN_00520418
// address: 0x520418
// body: available
// range: 0x520418-0x520527 inclusive
// range: 0x52053d-0x520580 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x520437 (push 0x520581 followed by fs-segment stack chaining); handler 0x520581 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x520492 (push 0x520528 followed by fs-segment stack chaining); handler 0x520528 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520418(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00520581;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x520442;
  local_8 = param_1;
  uVar3 = FUN_0052038c(param_1);
  if ((*(char *)(local_8 + 0x88) != '\0') && (*(int *)(local_8 + 0x48) == 0)) {
    puStack_30 = (undefined1 *)0x520461;
    FUN_00520a88(local_8);
  }
  puStack_30 = (undefined1 *)0x52046b;
  FUN_0051d57c(uVar3,&local_14);
  puStack_30 = (undefined1 *)0x520476;
  FUN_004eaf74(local_14,&local_10);
  puStack_30 = (undefined1 *)0x520483;
  FUN_00520670(DAT_007882ec,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_00520528;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0x132) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0x130))(*(undefined4 *)(local_8 + 0x134),local_8,&local_9);
  }
  if (local_9 != '\0') {
    if (*(int *)(local_8 + 0xc0) < 1) {
      FUN_00520328(local_8);
    }
    else if (DAT_0078830c == 0) {
      if (DAT_00788310 == (TIMERPROC)0x0) {
        DAT_00788310 = (TIMERPROC)&LAB_005203b0;
      }
      DAT_0078830c = SetTimer((HWND)0x0,0,*(UINT *)(local_8 + 0xc0),DAT_00788310);
      if (DAT_0078830c == 0) {
        FUN_00520328(local_8);
      }
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x520542;
  DVar4 = GetCurrentThreadId();
  if (DVar4 == *(DWORD *)PTR_DAT_0078296c) {
    puStack_30 = (undefined1 *)0x520553;
    cVar2 = FUN_00447d90(0);
    if (cVar2 != '\0') {
      local_9 = '\0';
    }
  }
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x520566;
    WaitMessage();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00520588;
  puStack_28 = (undefined1 *)0x520580;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
