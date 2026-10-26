// rea decompile_all
// name: FUN_006cc6e4
// address: 0x6cc6e4
// body: available
// range: 0x6cc6e4-0x6cc76a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006cc6e4(void)

{
  int iVar1;
  undefined4 uVar2;
  float10 in_ST0;

  iVar1 = FUN_00409a18(DAT_0077f420);
  if (iVar1 == DAT_0077f428) {
    FUN_00409be0(&DAT_0077f424,&DAT_006cc4a8,1,DAT_0077f428 + 5);
    FUN_00409be0(&DAT_0077f420,&DAT_006cc47c,1,DAT_0077f428 + 5);
  }
  DAT_0077f428 = DAT_0077f428 + 1;
  FUN_004199b0();
  *(double *)(DAT_0077f424 + -8 + DAT_0077f428 * 8) = (double)in_ST0;
  uVar2 = FUN_006ca800(&DAT_006ca360,1);
  *(undefined4 *)(DAT_0077f420 + -4 + DAT_0077f428 * 4) = uVar2;
  DAT_007900a0 = 1;
  return DAT_0077f428 + -1;
}
