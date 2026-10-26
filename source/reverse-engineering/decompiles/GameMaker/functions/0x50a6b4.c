// rea decompile_all
// name: FUN_0050a6b4
// address: 0x50a6b4
// body: available
// range: 0x50a6b4-0x50a709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a6b4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_EDX;

  iVar2 = FUN_00406058();
  FUN_00405a7c(*(undefined4 *)(iVar2 + 0x38));
  while (0 < *(int *)(*(int *)(iVar2 + 0x34) + 8)) {
    FUN_0043b178(*(int *)(iVar2 + 0x34));
    FUN_00405a7c();
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + 0x34) = 0;
  FUN_00405a7c(uVar1);
  FUN_00448ed4(iVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406000(iVar2);
  }
  return;
}
