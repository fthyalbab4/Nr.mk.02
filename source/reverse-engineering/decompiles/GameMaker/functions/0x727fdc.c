// rea decompile_all
// name: FUN_00727fdc
// address: 0x727fdc
// body: available
// range: 0x727fdc-0x728069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00727fdc(int param_1,int param_2)

{
  LOGPALETTE *pLVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int nNumber;
  LOGPALETTE local_414 [128];

  if (param_2 == 0x10) {
    param_2 = 8;
  }
  FUN_00404f08(local_414,0x404,0);
  local_414[0].palVersion = 0x300;
  local_414[0].palNumEntries = 1 << ((byte)param_2 & 0x1f);
  uVar4 = (uint)local_414[0].palNumEntries;
  if (-1 < (int)(uVar4 - 1)) {
    nNumber = 0;
    pLVar1 = local_414;
    do {
      puVar3 = (undefined1 *)((int)pLVar1 + 4);
      iVar2 = MulDiv(nNumber,0xff,local_414[0].palNumEntries - 1);
      *puVar3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + iVar2);
      *(undefined1 *)((int)pLVar1 + 5) = *puVar3;
      *(undefined1 *)((int)pLVar1 + 6) = *puVar3;
      nNumber = nNumber + 1;
      uVar4 = uVar4 - 1;
      pLVar1 = (LOGPALETTE *)puVar3;
    } while (uVar4 != 0);
  }
  CreatePalette(local_414);
  return;
}
