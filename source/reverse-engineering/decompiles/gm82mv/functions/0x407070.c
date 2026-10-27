// rea decompile_all
// name: FUN_00407070
// address: 0x407070
// body: available
// range: 0x407070-0x4070ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407070(undefined4 param_1,undefined4 param_2,DWORD param_3)

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
  if (DAT_0068a054 != '\0') {
    if ((DAT_0068a330 == -0x284e) && (DAT_0068a338 != 0)) {
      (*DAT_0068a348)(&DAT_0068a32c);
    }
    lpNumberOfBytesWritten = &local_4;
    lpNumberOfBytesWritten_00 = &local_4;
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 0x1d;
    lpBuffer = s_Runtime_error_at_00000000_0067c7d0;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer,DVar2,lpNumberOfBytesWritten,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 2;
    lpBuffer_00 = &DAT_004070fc;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer_00,DVar2,lpNumberOfBytesWritten_00,p_Var3);
    return;
  }
  if ((char)PTR_FUN_0067c030 == '\0') {
    MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_0067c7d0,s___Error_0067c7c6 + 2,0);
  }
  return;
}
