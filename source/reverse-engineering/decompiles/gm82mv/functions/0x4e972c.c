// rea decompile_all
// name: FUN_004e972c
// address: 0x4e972c
// body: available
// range: 0x4e972c-0x4e97a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e972c(undefined4 param_1,undefined4 param_2,HANDLE param_3)

{
  DWORD DVar1;
  HANDLE local_4;

  local_4 = param_3;
  if (DAT_0068f300 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_0068f300);
  }
  DAT_0068f300 = (HHOOK)0x0;
  local_4 = (HANDLE)InterlockedExchange(&DAT_0068f304,0);
  if (local_4 != (HANDLE)0x0) {
    SetEvent(DAT_0068f2fc);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_0068f2f8) {
      while (DVar1 = MsgWaitForMultipleObjects(1,&local_4,0,0xffffffff,0xff), DVar1 != 0) {
        FUN_004eb724(DAT_0068f2e8);
      }
    }
    CloseHandle(local_4);
  }
  return;
}
