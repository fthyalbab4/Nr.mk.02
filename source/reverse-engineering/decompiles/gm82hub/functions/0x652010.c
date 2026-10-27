// rea decompile_all
// name: FUN_00652010
// address: 0x652010
// body: available
// range: 0x652010-0x652048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00652010(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_004048b8();
  cVar1 = FUN_00571eb0();
  if (cVar1 != '\0') {
    FUN_004048b8();
    iVar2 = FUN_00571fac();
    uVar3 = FUN_004048b8();
    *(undefined4 *)(iVar2 + 4) = uVar3;
  }
  return;
}
