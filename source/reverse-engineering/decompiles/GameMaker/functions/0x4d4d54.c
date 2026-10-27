// rea decompile_all
// name: FUN_004d4d54
// address: 0x4d4d54
// body: available
// range: 0x4d4d54-0x4d4db4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4d54(void)

{
  LPCWSTR lpString;
  undefined4 uVar1;
  undefined1 local_50 [64];
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;

  DAT_007881c8 = RegisterWindowMessageW(L"commdlg_help");
  _DAT_007881cc = RegisterWindowMessageW(L"commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_00785c40;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  lpString = (LPCWSTR)FUN_00417cc4(local_50,L"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_00778648 = GlobalAddAtomW(lpString);
  return;
}
