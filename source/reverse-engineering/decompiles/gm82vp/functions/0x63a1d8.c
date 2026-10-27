// rea decompile_all
// name: FUN_0063a1d8
// address: 0x63a1d8
// body: available
// range: 0x63a1d8-0x63a241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063a1d8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_stack_00000004;

  *in_stack_00000004 = 0;
  FUN_004048b8();
  cVar1 = FUN_00571240();
  if (cVar1 != '\0') {
    iVar2 = FUN_004048b8();
    iVar3 = FUN_00571644();
    if (iVar3 >> 0x1f != extraout_EDX || iVar3 != iVar2) {
      FUN_004048b8(extraout_EDX,iVar2);
      iVar2 = FUN_0057165c();
      *(double *)(in_stack_00000004 + 2) = (double)iVar2;
      return;
    }
  }
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0xbff00000;
  return;
}
