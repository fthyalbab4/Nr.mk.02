// rea decompile_all
// name: FUN_00418170
// address: 0x418170
// body: available
// range: 0x418170-0x41825d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4181b8 to 0x418544 FUN_00418544 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418170(short *param_1,int param_2,short *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  short *psVar4;
  short *psVar5;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  byte bVar11;

  bVar11 = 0;
  psVar3 = param_3 + param_6;
  psVar9 = param_1;
LAB_0041819c:
  if (param_2 != 0) {
    do {
      if (param_3 == psVar3) break;
      psVar5 = param_3 + (uint)bVar11 * -2 + 1;
      sVar1 = *param_3;
      param_3 = psVar5;
      if (sVar1 == 0x25) {
        if (psVar5 == psVar3) break;
        param_3 = psVar5 + (uint)bVar11 * -2 + 1;
        sVar1 = *psVar5;
        if (sVar1 != 0x25) goto code_r0x004181c9;
      }
      psVar5 = psVar9 + (uint)bVar11 * -2 + 1;
      *psVar9 = sVar1;
      param_2 = param_2 + -1;
      psVar9 = psVar5;
      if (param_2 == 0) break;
    } while( true );
  }
LAB_004181b1:
  FUN_00418544((uint)((int)psVar9 - (int)param_1) >> 1);
  return;
code_r0x004181c9:
  psVar5 = param_3 + -2;
  while( true ) {
    psVar7 = param_3;
    sVar2 = sVar1;
    if (sVar1 == 0x2d) {
      if (param_3 == psVar3) goto LAB_004181b1;
      psVar7 = param_3 + (uint)bVar11 * -2 + 1;
      sVar2 = *param_3;
    }
    sVar2 = FUN_0041825e(sVar2);
    psVar3 = extraout_ECX;
    if (sVar2 != 0x3a) break;
    if (psVar7 == extraout_ECX) goto LAB_004181b1;
    param_3 = psVar7 + (uint)bVar11 * -2 + 1;
    sVar1 = *psVar7;
  }
  psVar6 = extraout_EDX;
  param_3 = psVar7;
  if (sVar2 == 0x2e) {
    if (psVar7 == extraout_ECX) goto LAB_004181b1;
    param_3 = psVar7 + (uint)bVar11 * -2 + 1;
    FUN_0041825e(*psVar7);
    psVar3 = extraout_ECX_00;
    psVar6 = extraout_EDX_00;
  }
  FUN_004182ad();
  psVar7 = (short *)((int)psVar5 - (int)extraout_ECX_01);
  if (psVar5 < extraout_ECX_01) {
    psVar7 = (short *)0x0;
  }
  psVar5 = extraout_ECX_01;
  psVar8 = param_3;
  if (sVar1 == 0x2d) {
    bVar10 = psVar6 < extraout_ECX_01;
    psVar6 = (short *)((int)psVar6 - (int)extraout_ECX_01);
    psVar4 = extraout_ECX_01;
    if (bVar10) {
      psVar4 = (short *)((int)extraout_ECX_01 + (int)psVar6);
      psVar6 = (short *)0x0;
    }
    for (; psVar5 = (short *)0x0, psVar4 != (short *)0x0; psVar4 = (short *)((int)psVar4 + -1)) {
      *psVar9 = *psVar8;
      psVar8 = psVar8 + (uint)bVar11 * -2 + 1;
      psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  psVar4 = (short *)((int)psVar6 - (int)psVar7);
  if (psVar6 < psVar7) {
    psVar7 = (short *)((int)psVar7 + (int)psVar4);
    psVar4 = (short *)0x0;
  }
  for (; psVar7 != (short *)0x0; psVar7 = (short *)((int)psVar7 + -1)) {
    *psVar9 = 0x20;
    psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
  }
  param_2 = (int)psVar4 - (int)psVar5;
  if (psVar4 < psVar5) {
    psVar5 = (short *)((int)psVar5 + param_2);
    param_2 = 0;
  }
  for (; psVar5 != (short *)0x0; psVar5 = (short *)((int)psVar5 + -1)) {
    *psVar9 = *psVar8;
    psVar8 = psVar8 + (uint)bVar11 * -2 + 1;
    psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
  }
  goto LAB_0041819c;
}
