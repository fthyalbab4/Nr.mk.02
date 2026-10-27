// rea decompile_all
// name: FUN_005706b8
// address: 0x5706b8
// body: available
// range: 0x5706b8-0x57071d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005706b8(int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((-1 < param_2) && (param_2 < DAT_00686a44)) &&
     ((*(int *)(DAT_00686a3c + param_2 * 4) != 0 || ((-1 < param_1 && (param_1 < DAT_00686a44))))))
  {
    if (*(int *)(DAT_00686a3c + param_1 * 4) == 0) {
      uVar1 = FUN_0056fda8(&DAT_0056efc8,CONCAT31((int3)((uint)DAT_00686a3c >> 8),1));
      *(undefined4 *)(DAT_00686a3c + param_1 * 4) = uVar1;
    }
    FUN_0056fe10(*(undefined4 *)(DAT_00686a3c + param_1 * 4),
                 *(undefined4 *)(DAT_00686a3c + param_2 * 4));
    uVar1 = 1;
  }
  return uVar1;
}
