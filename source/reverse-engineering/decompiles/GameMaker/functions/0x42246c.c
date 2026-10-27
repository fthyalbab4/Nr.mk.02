// rea decompile_all
// name: FUN_0042246c
// address: 0x42246c
// body: available
// range: 0x42246c-0x4224a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042246c(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,
                undefined2 *param_5)

{
  undefined1 *puVar1;
  int iVar2;

  puVar1 = param_2 + 1;
  iVar2 = param_4;
  if (-1 < param_4 + -1) {
    do {
      *param_5 = CONCAT11(*param_2,*puVar1);
      param_2 = param_2 + 2;
      puVar1 = puVar1 + 2;
      param_5 = param_5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_4;
}
