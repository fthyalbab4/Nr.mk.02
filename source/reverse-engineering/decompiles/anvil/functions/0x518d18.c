// rea decompile_all
// name: FUN_00518d18
// address: 0x518d18
// body: available
// range: 0x518d18-0x518d82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518d18(void)

{
  int iVar1;
  uint extraout_EDX;
  int iVar2;
  int iVar3;

  iVar1 = FUN_004065b8();
  iVar2 = *(int *)(iVar1 + 4);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_00409dfc(*(int *)(iVar1 + 0xc) + iVar3 * 4,&DAT_00517a60,1,0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00409dfc(iVar1 + 0xc,&DAT_00517a94,1,0);
  FUN_00405fcc(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(iVar1);
  }
  return;
}
