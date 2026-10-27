// rea decompile_all
// name: FUN_0044bd40
// address: 0x44bd40
// body: available
// range: 0x44bd40-0x44be20 inclusive
// range: 0x44be28-0x44be36 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44bd84 (push 0x44be21 followed by fs-segment stack chaining); handler 0x44be21 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_0044bd40(undefined4 param_1,LPCRITICAL_SECTION param_2,DWORD param_3)

{
  int iVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 local_18;
  HANDLE local_14;
  HANDLE local_10;
  undefined1 local_9;
  DWORD local_8;

  local_8 = param_3;
  pvVar2 = (HANDLE)GetCurrentThreadId();
  if (pvVar2 == param_2->OwningThread) {
    local_18 = 0;
    local_14 = param_2->OwningThread;
    local_10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    uVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd0;
    iVar1 = param_2->RecursionCount;
    FUN_0044bc4c(param_1,&local_18);
    param_2->RecursionCount = 1;
    InterlockedExchangeAdd(&param_2->LockCount,-(iVar1 + -1));
    LeaveCriticalSection(param_2);
    DVar3 = WaitForSingleObject(local_10,local_8);
    if (DVar3 == 0) {
      local_9 = 1;
    }
    else if (DVar3 == 0x102) {
      local_9 = 0;
      SetLastError(0x5b4);
    }
    else {
      local_9 = 0;
      SetLastError(0);
    }
    EnterCriticalSection(param_2);
    FUN_0044bcb4(param_1,&local_18);
    InterlockedExchangeAdd(&param_2->LockCount,iVar1 + -1);
    param_2->RecursionCount = iVar1;
    *in_FS_OFFSET = uVar5;
    BVar4 = CloseHandle(local_10);
    return BVar4;
  }
  return 0;
}
