// rea decompile_all
// name: FUN_0075af38
// address: 0x75af38
// body: available
// range: 0x75af38-0x75b015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0075af38(undefined4 param_1,int param_2,char *param_3)

{
  BOOL BVar1;
  char *lp;

  lp = (char *)(param_2 + -6);
  do {
    if (lp <= param_3) {
      return 1;
    }
    BVar1 = IsBadReadPtr(lp,6);
    if (BVar1 != 0) {
      return 0;
    }
    if (*lp == -0x3e) {
      if (((lp[3] == -0x70) && (lp[4] == -0x70)) && (lp[5] == -0x70)) {
        return 0;
      }
      if (((lp[3] == -0x34) && (lp[4] == -0x34)) && (lp[5] == -0x34)) {
        return 0;
      }
    }
    if (*lp == -0x3d) {
      if (((lp[1] == -0x70) && (lp[2] == -0x70)) && (lp[3] == -0x70)) {
        return 0;
      }
      if (((lp[1] == -0x34) && (lp[2] == -0x34)) && (lp[3] == -0x34)) {
        return 0;
      }
    }
    if (*lp == -0x17) {
      if (((lp[5] == -0x70) && (lp[6] == -0x70)) && (lp[7] == -0x70)) {
        return 0;
      }
      if (((lp[5] == -0x34) && (lp[6] == -0x34)) && (lp[7] == -0x34)) {
        return 0;
      }
    }
    if (*lp == -0x15) {
      if (((lp[2] == -0x70) && (lp[3] == -0x70)) && (lp[4] == -0x70)) {
        return 0;
      }
      if (((lp[2] == -0x34) && (lp[3] == -0x34)) && (lp[4] == -0x34)) {
        return 0;
      }
    }
    lp = lp + -1;
  } while( true );
}
