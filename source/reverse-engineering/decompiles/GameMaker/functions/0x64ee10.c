// rea decompile_all
// name: FUN_0064ee10
// address: 0x64ee10
// body: available
// range: 0x64ee10-0x64ee4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064ee10(void)

{
  int iVar1;
  int iVar2;

  if (-1 < DAT_0077f2ac + -1) {
    iVar2 = 0;
    iVar1 = DAT_0077f2ac;
    do {
      FUN_0064ed90(iVar2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00409be0(&DAT_0078a1ac,&DAT_0064e5c0,1,0);
  DAT_0077f2ac = 0;
  return;
}
