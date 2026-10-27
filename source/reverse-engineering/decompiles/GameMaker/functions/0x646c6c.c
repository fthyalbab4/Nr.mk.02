// rea decompile_all
// name: FUN_00646c6c
// address: 0x646c6c
// body: available
// range: 0x646c6c-0x646ca5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00646c6c(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = *(undefined4 *)(param_1 + 0x768);
  cVar1 = FUN_00405c98(uVar2,&PTR_FUN_0063b4cc);
  if (cVar1 != '\0') {
    cVar1 = FUN_0063d560(uVar2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00646c98;
    }
  }
  uVar2 = 0;
LAB_00646c98:
  FUN_0050aef0(*(undefined4 *)(param_1 + 0x60c),uVar2);
  return;
}
