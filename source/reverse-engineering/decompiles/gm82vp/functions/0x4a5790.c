// rea decompile_all
// name: FUN_004a5790
// address: 0x4a5790
// body: available
// range: 0x4a5790-0x4a57c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a5790(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;

  cVar1 = FUN_004d796c(param_1);
  uVar3 = cVar1 == '\0';
  if (!(bool)uVar3) {
    iVar2 = FUN_0040621c(*(undefined4 *)(param_1 + 0x10),&PTR_FUN_004d6790);
    FUN_0040891c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x58),*(undefined4 *)(iVar2 + 0x7c));
    if ((bool)uVar3) {
      return 1;
    }
  }
  return 0;
}
