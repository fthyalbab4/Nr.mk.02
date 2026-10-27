// rea decompile_all
// name: FUN_00417a18
// address: 0x417a18
// body: available
// range: 0x417a18-0x417a6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short * FUN_00417a18(short *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  bool bVar9;

  if ((param_1 != (short *)0x0) && (param_2 != (short *)0x0)) {
    uVar2 = 0xffffffff;
    psVar7 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    uVar3 = ~uVar2 - 1;
    if (uVar3 != 0) {
      uVar4 = 0xffffffff;
      psVar7 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      iVar5 = ~uVar4 - uVar3;
      bVar9 = iVar5 == 0;
      if (uVar3 <= ~uVar4 && !bVar9) {
        do {
          psVar7 = param_1;
          do {
            param_1 = psVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            param_1 = psVar7 + 1;
            bVar9 = *param_2 == *psVar7;
            psVar7 = param_1;
          } while (!bVar9);
          iVar6 = ~uVar2 - 2;
          psVar8 = param_1;
          psVar7 = param_2;
          if (!bVar9) {
            return (short *)0x0;
          }
          do {
            if (iVar6 == 0) break;
            bVar9 = psVar7[1] == *psVar8;
            iVar6 = iVar6 + -1;
            psVar8 = psVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (bVar9);
          if (bVar9) {
            return param_1 + -1;
          }
        } while( true );
      }
    }
  }
  return (short *)0x0;
}
