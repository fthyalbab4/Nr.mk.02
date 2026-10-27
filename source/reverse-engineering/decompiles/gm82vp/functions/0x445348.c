// rea decompile_all
// name: FUN_00445348
// address: 0x445348
// body: available
// range: 0x445348-0x4453bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445348(void)

{
  int iVar1;
  uint extraout_EDX;

  iVar1 = FUN_004065b8();
  if (((*(int *)(iVar1 + 8) != 0) && (*(char *)(iVar1 + 0x10) == '\0')) &&
     (*(char *)(iVar1 + 0x3c) == '\0')) {
    FUN_00445ea4(iVar1);
    if (*(char *)(iVar1 + 0xc) != '\0') {
      FUN_00445e7c(iVar1);
    }
    FUN_00445ec8(iVar1);
  }
  FUN_00445d18(iVar1);
  if ((*(HANDLE *)(iVar1 + 4) != (HANDLE)0x0) && (*(char *)(iVar1 + 0x3c) == '\0')) {
    CloseHandle(*(HANDLE *)(iVar1 + 4));
  }
  FUN_00405fcc(iVar1,extraout_EDX & 0xfffffffc);
  FUN_00405fdc(*(undefined4 *)(iVar1 + 0x38));
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(iVar1);
  }
  return;
}
