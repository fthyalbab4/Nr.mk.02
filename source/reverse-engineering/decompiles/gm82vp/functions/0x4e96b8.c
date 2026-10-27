// rea decompile_all
// name: FUN_004e96b8
// address: 0x4e96b8
// body: available
// range: 0x4e96b8-0x4e972b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e96b8(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;

  if (*(char *)(DAT_0068f2e8 + 0xad) == '\0') {
    DStack_4 = param_3;
    if (DAT_0068f300 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_0068f300 = SetWindowsHookExW(3,(HOOKPROC)PTR_FUN_00681ba8,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_0068f2fc == (HANDLE)0x0) {
      DAT_0068f2fc = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    }
    if (DAT_0068f304 == (HANDLE)0x0) {
      DAT_0068f304 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,
                                  (LPTHREAD_START_ROUTINE)PTR_LAB_00681ba4,(LPVOID)0x0,0,&DStack_4);
    }
  }
  return;
}
