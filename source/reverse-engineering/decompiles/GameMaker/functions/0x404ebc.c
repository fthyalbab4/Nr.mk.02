// rea decompile_all
// name: FUN_00404ebc
// address: 0x404ebc
// body: available
// range: 0x404ebc-0x404f04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00404ebc(undefined4 *param_1)

{
  DWORD DVar1;
  uint uVar2;

  uVar2 = 0xffffffff;
  if ((*(ushort *)(param_1 + 1) < 0xd7b1) || (0xd7b3 < *(ushort *)(param_1 + 1))) {
    FUN_004044a4(0x67);
  }
  else {
    DVar1 = GetFileSize((HANDLE)*param_1,(LPDWORD)0x0);
    if (DVar1 == 0xffffffff) {
      FUN_004044b4();
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = DVar1 / (uint)param_1[2];
    }
  }
  return uVar2;
}
