// rea decompile_all
// name: FUN_004d345c
// address: 0x4d345c
// body: available
// range: 0x4d345c-0x4d34b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d345c(undefined4 param_1,LPSIZE param_2)

{
  int iVar1;
  HDC hdc;
  WCHAR *pWVar2;
  short *psVar3;
  LPSIZE lpsz;
  WCHAR local_70 [26];
  short local_3c [26];

  pWVar2 = local_70;
  iVar1 = 0;
  do {
    *pWVar2 = (short)iVar1 + 0x41;
    iVar1 = iVar1 + 1;
    pWVar2 = pWVar2 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0;
  psVar3 = local_3c;
  do {
    *psVar3 = (short)iVar1 + 0x61;
    iVar1 = iVar1 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0x34;
  pWVar2 = local_70;
  lpsz = param_2;
  hdc = (HDC)FUN_0045ce2c(param_1);
  GetTextExtentPointW(hdc,pWVar2,iVar1,lpsz);
  param_2->cx = param_2->cx / 0x34;
  return;
}
