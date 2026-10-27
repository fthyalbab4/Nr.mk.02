// rea decompile_all
// name: FUN_00548a9c
// address: 0x548a9c
// body: available
// range: 0x548a9c-0x548aed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00548a9c(void)

{
  int iVar1;
  uint extraout_EDX;
  int iVar2;
  int iVar3;

  iVar1 = FUN_00406058();
  iVar2 = *(int *)(*(int *)(iVar1 + 0x18) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0043b048(*(undefined4 *)(iVar1 + 0x18),iVar3);
      FUN_00405a7c();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00405a7c(*(undefined4 *)(iVar1 + 0x18));
  FUN_00548730(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406000(iVar1);
  }
  return;
}
