// rea decompile_all
// name: FUN_004162d6
// address: 0x4162d6
// body: available
// range: 0x4162d6-0x41630b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004162d6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  int iVar5;
  byte *unaff_ESI;
  byte *pbVar6;
  char cVar4;

  pbVar6 = unaff_ESI;
  do {
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / 10;
    pbVar6 = pbVar6 + -1;
    cVar4 = (char)(uVar1 % 10);
    bVar3 = cVar4 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = cVar4 + 0x37;
    }
    *pbVar6 = bVar3;
  } while (param_1 != 0);
  iVar5 = param_2 - ((int)unaff_ESI - (int)pbVar6);
  if ((uint)((int)unaff_ESI - (int)pbVar6) <= param_2 && iVar5 != 0) {
    iVar2 = -iVar5;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (pbVar6 + iVar2)[iVar5] = 0x30;
    }
    pbVar6[iVar2] = 0x30;
  }
  return;
}
