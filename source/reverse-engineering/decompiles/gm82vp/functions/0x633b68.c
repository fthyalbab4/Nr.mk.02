// rea decompile_all
// name: FUN_00633b68
// address: 0x633b68
// body: available
// range: 0x633b68-0x633bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00633b68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_stack_00000004;

  *in_stack_00000004 = 0;
  iVar1 = FUN_004102e4();
  iVar2 = FUN_004102e4();
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
    iVar2 = iVar1;
  }
  iVar2 = FUN_004047b8((iVar2 - iVar3) + 1);
  *(double *)(in_stack_00000004 + 2) = (double)(iVar3 + iVar2);
  return;
}
