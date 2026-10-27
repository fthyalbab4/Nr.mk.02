// rea decompile_all
// name: FUN_00407fd4
// address: 0x407fd4
// body: available
// range: 0x407fd4-0x408005 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00407fd4(short *param_1)

{
  short *psVar1;
  uint uVar2;

  uVar2 = 0;
  psVar1 = param_1;
  if (param_1 != (short *)0x0) {
    for (; *psVar1 != 0; psVar1 = psVar1 + 4) {
      if (psVar1[1] == 0) {
LAB_00407ffd:
        psVar1 = psVar1 + 1;
        break;
      }
      if (psVar1[2] == 0) {
LAB_00407ffa:
        psVar1 = psVar1 + 1;
        goto LAB_00407ffd;
      }
      if (psVar1[3] == 0) {
        psVar1 = psVar1 + 1;
        goto LAB_00407ffa;
      }
    }
    uVar2 = (uint)((int)psVar1 - (int)param_1) >> 1;
  }
  return uVar2;
}
