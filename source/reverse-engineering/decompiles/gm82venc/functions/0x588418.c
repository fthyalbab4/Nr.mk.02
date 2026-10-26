// rea decompile_all
// name: FUN_00588418
// address: 0x588418
// body: available
// range: 0x588418-0x58844b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00588418(int param_1,int *param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (*param_2 != -2) {
    if (*param_2 == 1000) {
      uVar1 = FUN_005880cc();
    }
    else {
      FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),param_2[0xc],L"This is not a program.");
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
