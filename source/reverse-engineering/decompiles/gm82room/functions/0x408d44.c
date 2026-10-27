// rea decompile_all
// name: FUN_00408d44
// address: 0x408d44
// body: available
// range: 0x408d44-0x408d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00408d44(short *param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  bool bVar7;

  if (param_1 != (short *)0x0) {
    if (param_2 == (short *)0x0) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + -2) + -1;
    if (-1 < iVar4) {
      iVar2 = *(int *)(param_2 + -2) - iVar4;
      bVar7 = iVar2 == 0;
      psVar5 = param_2;
      if (!bVar7 && iVar4 <= *(int *)(param_2 + -2)) {
LAB_00408d67:
        do {
          if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            psVar1 = psVar5 + 1;
            bVar7 = *param_1 == *psVar5;
            psVar5 = psVar1;
            if (!bVar7) goto LAB_00408d67;
          }
          iVar3 = iVar4;
          psVar6 = psVar5;
          psVar1 = param_1;
          if (!bVar7) {
            return 0;
          }
          do {
            if (iVar3 == 0) break;
            bVar7 = psVar1[1] == *psVar6;
            iVar3 = iVar3 + -1;
            psVar6 = psVar6 + 1;
            psVar1 = psVar1 + 1;
          } while (bVar7);
          if (bVar7) {
            return (uint)((int)psVar5 - (int)param_2) >> 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}
