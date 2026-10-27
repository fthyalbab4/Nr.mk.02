// rea decompile_all
// name: FUN_00629634
// address: 0x629634
// body: available
// range: 0x629634-0x629699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629634(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_00409c34(DAT_006887d4);
  if (iVar2 < param_1) {
    FUN_00409dfc(&DAT_006887d4,&DAT_0062960c,1,param_1);
    if (iVar2 <= param_1 + -1) {
      iVar3 = ((param_1 + -1) - iVar2) + 1;
      do {
        *(undefined4 *)(DAT_006887d4 + iVar2 * 0x18) = 0;
        iVar1 = DAT_006887d4;
        *(undefined4 *)(DAT_006887d4 + 8 + iVar2 * 0x18) = 0;
        *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x18) = 0;
        FUN_004072d8(DAT_006887d4 + 0x10 + iVar2 * 0x18);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
