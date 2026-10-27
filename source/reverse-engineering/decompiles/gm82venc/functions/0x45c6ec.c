// rea decompile_all
// name: FUN_0045c6ec
// address: 0x45c6ec
// body: available
// range: 0x45c6ec-0x45c748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c6ec(void)

{
  int iVar1;
  uint extraout_EDX;

  iVar1 = FUN_004065b8();
  FUN_004399c8(DAT_0068f15c,iVar1,1);
  FUN_0045d574(iVar1,0);
  FUN_00405fdc(*(undefined4 *)(iVar1 + 0x40));
  FUN_00405fdc(*(undefined4 *)(iVar1 + 0x44));
  FUN_00405fdc(*(undefined4 *)(iVar1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1c));
  FUN_00439bdc(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(iVar1);
  }
  return;
}
