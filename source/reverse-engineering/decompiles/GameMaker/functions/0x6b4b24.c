// rea decompile_all
// name: FUN_006b4b24
// address: 0x6b4b24
// body: available
// range: 0x6b4b24-0x6b4bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4b24(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x280),0);
  FUN_006b5444(param_1);
  FUN_006b09f4(param_1);
  FUN_006b3624(param_1);
  FUN_006b386c(param_1);
  FUN_006b3ff8(param_1);
  FUN_006b2664(param_1);
  FUN_006b230c(param_1);
  iVar3 = *(int *)(param_1 + 0x2f4);
  iVar2 = iVar3 + *(int *)(param_1 + 0x2e4);
  if (iVar3 <= iVar2) {
    iVar2 = (iVar2 - iVar3) + 1;
    do {
      FUN_006b40b0(param_1,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x330) = 0;
  cVar1 = FUN_006b288c(param_1);
  if (cVar1 == '\0') {
    FUN_006b49f8(param_1);
  }
  FUN_0048e1f4(*(undefined4 *)(param_1 + 0x280),1000);
  FUN_0048e1e4(*(undefined4 *)(param_1 + 0x280),1);
  return;
}
