// rea decompile_all
// name: FUN_00410620
// address: 0x410620
// body: available
// range: 0x410620-0x410750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00410620(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int local_10;
  int local_c;

  if (((param_1 != 0) && (param_2 != 0)) && (0 < param_3)) {
    local_c = 0;
    local_10 = 0;
    if (*(short *)(param_1 + -10) != 2) {
      FUN_004083c0(&local_10,param_1);
      param_1 = local_10;
    }
    if (*(short *)(param_2 + -10) != 2) {
      FUN_004083c0(&local_c);
      param_2 = local_c;
    }
    iVar7 = *(int *)(param_1 + -4);
    iVar8 = *(int *)(param_2 + -4) - (param_3 + -1);
    iVar4 = (param_3 + -1) * 2;
    param_2 = param_2 + iVar4;
    if ((iVar7 <= iVar8) && (0 < iVar7)) {
      psVar9 = (short *)(iVar8 * 2 + param_2);
      iVar8 = (iVar7 + -1) * 2;
      psVar5 = (short *)(param_2 + iVar8);
      psVar3 = (short *)(param_1 + iVar8);
      iVar4 = iVar4 - (int)psVar5;
      iVar7 = (iVar7 + -1) * -2;
      sVar1 = *psVar3;
LAB_004106a4:
      do {
        if (sVar1 == *psVar5) goto LAB_004106f3;
        psVar6 = psVar5;
        if (sVar1 == psVar5[1]) goto LAB_004106f6;
LAB_004106af:
        psVar5 = psVar6 + 4;
        if (psVar5 < psVar9) {
          if (sVar1 != psVar6[2]) {
            if (sVar1 != psVar6[3]) goto LAB_004106a4;
            psVar5 = psVar6 + 5;
          }
          psVar5 = psVar5 + -2;
LAB_004106f3:
          psVar5 = psVar5 + -1;
LAB_004106f6:
          iVar8 = iVar7;
          if (iVar7 == 0) {
LAB_0041071a:
            if (psVar5 + 2 <= psVar9) {
              if (local_10 != 0 || local_c != 0) {
                thunk_FUN_004072fc(&local_10,2);
              }
              return (uint)(iVar4 + (int)(psVar5 + 2)) >> 1;
            }
            break;
          }
          while (psVar6 = psVar5, *(int *)((int)psVar3 + iVar8) == *(int *)((int)psVar5 + iVar8 + 2)
                ) {
            if (-5 < iVar8) goto LAB_0041071a;
            if (*(int *)((int)psVar3 + iVar8 + 4) != *(int *)((int)psVar5 + iVar8 + 6)) break;
            bVar2 = -9 < iVar8;
            iVar8 = iVar8 + 8;
            if (bVar2) goto LAB_0041071a;
          }
          goto LAB_004106af;
        }
        psVar5 = psVar6 + 2;
      } while (psVar5 < psVar9);
    }
    if (local_10 != 0 || local_c != 0) {
      thunk_FUN_004072fc(&local_10,2);
    }
  }
  return 0;
}
