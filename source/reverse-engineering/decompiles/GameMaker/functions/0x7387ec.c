// rea decompile_all
// name: FUN_007387ec
// address: 0x7387ec
// body: available
// range: 0x7387ec-0x738841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007387ec(undefined4 param_1)

{
  LONG Exchange;
  LONG LVar1;
  int iVar2;

  if ((DAT_0077fa7c == 0) && (DAT_0077fa78 == '\0')) {
    Exchange = FUN_00738e80(&DAT_007383e8,1);
    LVar1 = InterlockedCompareExchange(&DAT_0077fa7c,Exchange,0);
    if (LVar1 != 0) {
      FUN_00405a7c(Exchange);
    }
  }
  iVar2 = DAT_0077fa7c;
  if (DAT_0077fa7c != 0) {
    iVar2 = DAT_0077fa7c + 8;
  }
  FUN_0040b158(param_1,iVar2);
  return;
}
