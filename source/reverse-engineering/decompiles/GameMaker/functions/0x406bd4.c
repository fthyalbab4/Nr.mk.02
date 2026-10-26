// rea decompile_all
// name: FUN_00406bd4
// address: 0x406bd4
// body: available
// range: 0x406bd4-0x406c52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406bd4(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  HANDLE pvVar1;
  char *lpBuffer;
  undefined *lpBuffer_00;
  DWORD DVar2;
  DWORD *lpNumberOfBytesWritten;
  DWORD *lpNumberOfBytesWritten_00;
  LPOVERLAPPED p_Var3;
  DWORD local_4;

  local_4 = param_3;
  if (DAT_00783054 != '\0') {
    if ((DAT_00783330 == -0x284e) && (DAT_00783338 != 0)) {
      (*DAT_00783348)(&DAT_0078332c);
    }
    lpNumberOfBytesWritten = &local_4;
    lpNumberOfBytesWritten_00 = &local_4;
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 0x1d;
    lpBuffer = s_Runtime_error_at_00000000_007737c0;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer,DVar2,lpNumberOfBytesWritten,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 2;
    lpBuffer_00 = &DAT_00406c60;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer_00,DVar2,lpNumberOfBytesWritten_00,p_Var3);
    return;
  }
  if (DAT_00773030 == '\0') {
    MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_007737c0,s_Error_007737b8,0);
  }
  return;
}
