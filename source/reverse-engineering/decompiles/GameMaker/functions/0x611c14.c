// rea decompile_all
// name: FUN_00611c14
// address: 0x611c14
// body: available
// range: 0x611c14-0x611c55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00611c14(undefined4 *param_1,undefined4 param_2,DWORD param_3)

{
  DWORD DVar1;
  LPWSTR lpBuffer;
  BOOL BVar2;
  DWORD *nSize;
  DWORD local_8;

  nSize = &local_8;
  local_8 = param_3;
  FUN_00408244(param_1,0x10);
  DVar1 = FUN_00408238(*param_1);
  if ((int)DVar1 < 0) {
    DVar1 = thunk_FUN_00404478();
  }
  local_8 = DVar1;
  lpBuffer = (LPWSTR)FUN_00407f44(*param_1);
  BVar2 = GetComputerNameW(lpBuffer,nSize);
  if (BVar2 != 0) {
    FUN_00408244(param_1,local_8);
  }
  return;
}
