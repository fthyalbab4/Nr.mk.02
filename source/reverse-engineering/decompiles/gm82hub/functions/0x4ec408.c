// rea decompile_all
// name: FUN_004ec408
// address: 0x4ec408
// body: available
// range: 0x4ec408-0x4ec517 inclusive
// range: 0x4ec52d-0x4ec570 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec427 (push 0x4ec571 followed by fs-segment stack chaining); handler 0x4ec571 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec482 (push 0x4ec518 followed by fs-segment stack chaining); handler 0x4ec518 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec408(int param_1)

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
  puStack_28 = &LAB_004ec571;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4ec432;
  local_8 = param_1;
  uVar3 = FUN_004ec37c(param_1);
  if ((*(char *)(local_8 + 0x88) != '\0') && (*(int *)(local_8 + 0x48) == 0)) {
    puStack_30 = (undefined1 *)0x4ec451;
    FUN_004eca78(local_8);
  }
  puStack_30 = (undefined1 *)0x4ec45b;
  FUN_004e956c(uVar3,&local_14);
  puStack_30 = (undefined1 *)0x4ec466;
  FUN_004b7f30(local_14,&local_10);
  puStack_30 = (undefined1 *)0x4ec473;
  FUN_004ec660(DAT_0068f2e8,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_004ec518;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0x132) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0x130))(*(undefined4 *)(local_8 + 0x134),local_8,&local_9);
  }
  if (local_9 != '\0') {
    if (*(int *)(local_8 + 0xc0) < 1) {
      FUN_004ec318(local_8);
    }
    else if (DAT_0068f308 == 0) {
      if (DAT_0068f30c == (TIMERPROC)0x0) {
        DAT_0068f30c = (TIMERPROC)&LAB_004ec3a0;
      }
      DAT_0068f308 = SetTimer((HWND)0x0,0,*(UINT *)(local_8 + 0xc0),DAT_0068f30c);
      if (DAT_0068f308 == 0) {
        FUN_004ec318(local_8);
      }
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x4ec532;
  DVar4 = GetCurrentThreadId();
  if (DVar4 == *(DWORD *)PTR_DAT_00689680) {
    puStack_30 = (undefined1 *)0x4ec543;
    cVar2 = FUN_00444f9c(0);
    if (cVar2 != '\0') {
      local_9 = '\0';
    }
  }
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x4ec556;
    WaitMessage();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ec578;
  puStack_28 = (undefined1 *)0x4ec570;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  return;
}
