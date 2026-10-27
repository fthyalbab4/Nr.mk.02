// rea decompile_all
// name: FUN_0045f47c
// address: 0x45f47c
// body: available
// range: 0x45f47c-0x45f4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045f47c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = FUN_0043b048(*(undefined4 *)(param_1 + 8),iVar3);
      if (uVar1 == (param_2 & 0xffff)) {
        uVar2 = FUN_0043b048(*(undefined4 *)(param_1 + 4),iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}
