// rea decompile_all
// name: FUN_006732d4
// address: 0x6732d4
// body: available
// range: 0x6732d4-0x673316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006732d4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;

  cVar1 = FUN_0050ab04(param_1);
  if ((cVar1 != '\0') && (uVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x44) == 0, !(bool)uVar3)) {
    iVar2 = FUN_00405cbc(*(undefined4 *)(param_1 + 0x10),&PTR_FUN_00509914);
    FUN_00408640(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x44) + 0x80),
                 *(undefined4 *)(iVar2 + 0x7c));
    if ((bool)uVar3) {
      return 1;
    }
  }
  return 0;
}
