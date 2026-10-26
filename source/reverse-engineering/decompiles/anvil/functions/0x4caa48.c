// rea decompile_all
// name: FUN_004caa48
// address: 0x4caa48
// body: available
// range: 0x4caa48-0x4caae5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004caa48(void)

{
  undefined4 uVar1;

  uVar1 = DAT_0068f2a0;
  DAT_0068f2a0 = 0;
  FUN_00405fdc(uVar1);
  FUN_00405fdc(*(undefined4 *)PTR_DAT_0068917c);
  *(undefined4 *)PTR_DAT_0068917c = 0;
  FUN_00405fdc(*(undefined4 *)PTR_DAT_00689620);
  *(undefined4 *)PTR_DAT_00689620 = 0;
  FUN_00405fdc(DAT_0068f244);
  DAT_0068f244 = 0;
  FUN_00405fdc(DAT_0068f29c);
  GlobalDeleteAtom(DAT_0068f25a);
  FUN_00408194(&DAT_0068f260,0);
  GlobalDeleteAtom(DAT_0068f258);
  FUN_00408194(&DAT_0068f25c,0);
  if (DAT_006819e8 != (HMODULE)0x0) {
    FreeLibrary(DAT_006819e8);
  }
  return;
}
