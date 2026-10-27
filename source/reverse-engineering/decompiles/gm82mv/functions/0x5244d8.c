// rea decompile_all
// name: FUN_005244d8
// address: 0x5244d8
// body: available
// range: 0x5244d8-0x524568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005244d8(int *param_1,HPALETTE param_2)

{
  BYTE *pBVar1;
  UINT UVar2;
  tagPALETTEENTRY *ptVar3;
  UINT UVar4;
  int local_410;
  tagPALETTEENTRY local_40c [256];

  FUN_00524320(param_1);
  UVar2 = GetPaletteEntries(param_2,0,0x100,local_40c);
  if (UVar2 != 0) {
    FUN_00524490(param_1,UVar2);
    if (-1 < (int)(UVar2 - 1)) {
      local_410 = 0;
      ptVar3 = local_40c;
      UVar4 = UVar2;
      do {
        pBVar1 = (BYTE *)(param_1[1] + local_410 * 3);
        *pBVar1 = ptVar3->peRed;
        pBVar1[1] = ptVar3->peGreen;
        pBVar1[2] = ptVar3->peBlue;
        local_410 = local_410 + 1;
        ptVar3 = ptVar3 + 1;
        UVar4 = UVar4 - 1;
      } while (UVar4 != 0);
    }
    param_1[2] = UVar2;
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}
