// rea decompile_all
// name: FUN_004f2eb0
// address: 0x4f2eb0
// body: available
// range: 0x4f2eb0-0x4f2f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2eb0(int param_1,HPALETTE param_2)

{
  UINT UVar1;
  BYTE *pBVar2;
  int iVar3;
  undefined1 auStack_410 [4];
  tagPALETTEENTRY local_40c [256];

  FUN_00404f38(auStack_410,0x404,0);
  UVar1 = GetPaletteEntries(param_2,0,0x100,local_40c);
  *(UINT *)(param_1 + 0x41) = UVar1;
  if (-1 < (int)(UVar1 - 1)) {
    iVar3 = 0;
    pBVar2 = &local_40c[0].peBlue;
    do {
      *(BYTE *)(param_1 + 0x49 + iVar3 * 4) = *pBVar2;
      *(BYTE *)(param_1 + 0x4b + iVar3 * 4) = ((tagPALETTEENTRY *)(pBVar2 + -2))->peRed;
      *(BYTE *)(param_1 + 0x4a + iVar3 * 4) = pBVar2[-1];
      iVar3 = iVar3 + 1;
      pBVar2 = pBVar2 + 4;
      UVar1 = UVar1 - 1;
    } while (UVar1 != 0);
  }
  return;
}
