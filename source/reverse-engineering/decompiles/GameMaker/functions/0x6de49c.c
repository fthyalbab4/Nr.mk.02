// rea decompile_all
// name: FUN_006de49c
// address: 0x6de49c
// body: available
// range: 0x6de49c-0x6de51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de49c(int param_1)

{
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x624),1);
  if (*(char *)(*(int *)(param_1 + 0x628) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x628),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x62c) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x62c),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x630) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x630),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x634) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x634),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x638) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x638),0);
  }
  if (*(char *)(*(int *)(param_1 + 0x63c) + 0x39) != '\0') {
    FUN_004dbce0(*(int *)(param_1 + 0x63c),0);
  }
  return;
}
