// rea decompile_all
// name: FUN_0054389c
// address: 0x54389c
// body: available
// range: 0x54389c-0x543911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054389c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    *(uint *)(param_1 + 0x30) =
         param_2 << ((byte)iVar1 & 0x1f) |
         *(uint *)(&DAT_0077b638 + iVar1 * 4) & *(uint *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  while (7 < *(int *)(param_1 + 0x34)) {
    FUN_00543548(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 8;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -8;
  }
  if (param_2 == *(short *)(param_1 + 0x48)) {
    while (0 < *(int *)(param_1 + 0x34)) {
      FUN_00543548(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x30));
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 8;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -8;
    }
  }
  return;
}
