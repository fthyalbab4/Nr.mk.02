// rea decompile_all
// name: FUN_006440c0
// address: 0x6440c0
// body: available
// range: 0x6440c0-0x64412d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006440c0(int param_1,char param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;

  *(undefined4 *)(param_1 + 0x744) = param_5;
  *(undefined4 *)(param_1 + 0x748) = param_4;
  if (((DAT_0077f108 == 0) && (param_2 == '\0')) || ((DAT_0077f108 == 1 && (param_2 == '\x01')))) {
    piVar1 = *(int **)(param_1 + 0x768);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,DAT_0077f108,param_3,param_4,param_5);
    }
    DAT_0077f108 = -1;
  }
  FUN_00645298(param_1);
  return;
}
