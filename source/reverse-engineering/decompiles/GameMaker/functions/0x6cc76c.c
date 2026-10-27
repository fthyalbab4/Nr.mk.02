// rea decompile_all
// name: FUN_006cc76c
// address: 0x6cc76c
// body: available
// range: 0x6cc76c-0x6cc7f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006cc76c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = 0;
  if (((-1 < param_1) && (param_1 < DAT_0077f428)) && (*(int *)(DAT_0077f420 + param_1 * 4) != 0)) {
    FUN_00405a7c(*(undefined4 *)(DAT_0077f420 + param_1 * 4));
    if (param_1 <= DAT_0077f428 + -2) {
      iVar3 = ((DAT_0077f428 + -2) - param_1) + 1;
      do {
        iVar1 = DAT_0077f424;
        *(undefined4 *)(DAT_0077f424 + param_1 * 8) =
             *(undefined4 *)(DAT_0077f424 + 8 + param_1 * 8);
        *(undefined4 *)(iVar1 + 4 + param_1 * 8) = *(undefined4 *)(iVar1 + 0xc + param_1 * 8);
        *(undefined4 *)(DAT_0077f420 + param_1 * 4) =
             *(undefined4 *)(DAT_0077f420 + 4 + param_1 * 4);
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(DAT_0077f420 + -4 + DAT_0077f428 * 4) = 0;
    DAT_0077f428 = DAT_0077f428 + -1;
    DAT_007900a0 = 1;
    uVar2 = 1;
  }
  return uVar2;
}
