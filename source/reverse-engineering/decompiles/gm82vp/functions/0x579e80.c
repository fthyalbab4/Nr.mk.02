// rea decompile_all
// name: FUN_00579e80
// address: 0x579e80
// body: available
// range: 0x579e80-0x579ee5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00579e80(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((-1 < param_2) && (param_2 < DAT_00686ad0)) &&
     ((*(int *)(DAT_00686ac8 + param_2 * 4) != 0 || ((-1 < param_1 && (param_1 < DAT_00686ad0))))))
  {
    if (*(int *)(DAT_00686ac8 + param_1 * 4) == 0) {
      uVar1 = FUN_00624e6c(&LAB_00622954,CONCAT31((int3)((uint)DAT_00686ac8 >> 8),1));
      *(undefined4 *)(DAT_00686ac8 + param_1 * 4) = uVar1;
    }
    FUN_00624f68(*(undefined4 *)(DAT_00686ac8 + param_1 * 4),
                 *(undefined4 *)(DAT_00686ac8 + param_2 * 4));
    uVar1 = 1;
  }
  return uVar1;
}
