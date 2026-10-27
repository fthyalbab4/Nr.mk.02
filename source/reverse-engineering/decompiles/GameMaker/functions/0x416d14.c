// rea decompile_all
// name: FUN_00416d14
// address: 0x416d14
// body: available
// range: 0x416d14-0x416d56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HANDLE FUN_00416d14(undefined4 param_1,uint param_2)

{
  HANDLE pvVar1;
  LPCWSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;

  pvVar1 = (HANDLE)0xffffffff;
  if ((param_2 & 0xf0) < 0x41) {
    pvVar1 = (HANDLE)0x0;
    dwFlagsAndAttributes = 0x80;
    dwCreationDisposition = 2;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    dwShareMode = *(DWORD *)(&DAT_00773c08 + ((param_2 & 0xf0) >> 4) * 4);
    dwDesiredAccess = 0xc0000000;
    lpFileName = (LPCWSTR)FUN_00407f44(param_1);
    pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                         dwCreationDisposition,dwFlagsAndAttributes,pvVar1);
  }
  return pvVar1;
}
