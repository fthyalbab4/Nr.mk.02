// rea decompile_all
// name: FUN_005138a4
// address: 0x5138a4
// body: available
// range: 0x5138a4-0x5138f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005138a4(int param_1,int param_2)

{
  char cVar1;

  cVar1 = FUN_00405c98(param_2,&PTR_FUN_0050b578);
  if (cVar1 == '\0') {
    FUN_0043c550(param_1,param_2);
  }
  else {
    FUN_00514184(param_1,*(undefined1 *)(param_2 + 0x1c));
    FUN_00514160(param_1,*(undefined4 *)(param_2 + 0x10));
    FUN_00514018(param_1,*(undefined4 *)(param_2 + 0xc));
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  }
  return;
}
