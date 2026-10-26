// rea decompile_all
// name: FUN_0067e72c
// address: 0x67e72c
// body: available
// range: 0x67e72c-0x67e77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067e72c(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iStack_10;

  if (param_2 != 0) {
    iStack_10 = param_3;
    cVar1 = FUN_0067eec0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_2 + 8),&iStack_10);
    if (cVar1 != '\0') {
      uVar2 = FUN_0067eee0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_2 + 8));
      FUN_0067eb8c(uVar2,0);
      FUN_0067ee50(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_2 + 8),&iStack_10);
    }
    if (param_3 != 0) {
      FUN_0067edb0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_2 + 8),param_3);
    }
  }
  return;
}
