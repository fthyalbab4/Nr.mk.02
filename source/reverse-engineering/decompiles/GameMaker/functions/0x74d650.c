// rea decompile_all
// name: FUN_0074d650
// address: 0x74d650
// body: available
// range: 0x74d650-0x74d6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074d650(int param_1,int param_2)

{
  char cVar1;

  FUN_00405d08(param_1);
  if (param_2 != 0) {
    cVar1 = FUN_0074fae0(param_2);
    *(char *)(param_1 + 0x65) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 100) = 3;
    }
    else if (cVar1 == '\x01') {
      FUN_0074d410();
    }
    else if (cVar1 == '\x02') {
      FUN_0074d530();
    }
  }
  return;
}
