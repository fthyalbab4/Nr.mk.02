// rea decompile_all
// name: FUN_0045b7cc
// address: 0x45b7cc
// body: available
// range: 0x45b7cc-0x45b99d inclusive
// range: 0x45b9a5-0x45b9cd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45b7ec (push 0x45b9ce followed by fs-segment stack chaining); handler 0x45b9ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45b821 (push 0x45b99e followed by fs-segment stack chaining); handler 0x45b99e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b7cc(int param_1)

{
  char cVar1;
  int iVar2;
  HFONT pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_78;
  LOGFONTW local_74;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_84 = &stack0xfffffffc;
  local_78 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_88 = &LAB_0045b9ce;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_10 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_10 + 8) != 0) {
    *in_FS_OFFSET = uStack_8c;
    puStack_84 = &LAB_0045b9d5;
    puStack_88 = (undefined1 *)0x45b9c0;
    thunk_FUN_004072d8(&local_78,uStack_8c,&stack0xfffffffc);
    puStack_88 = (undefined1 *)0x45b9cd;
    thunk_FUN_004072fc(&local_c,2);
    return;
  }
  local_14 = DAT_0068f150;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0068f150 + 8));
  uStack_98 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98;
  if (*(int *)(local_10 + 8) == 0) {
    local_74.lfHeight = *(LONG *)(local_10 + 0x14);
    local_74.lfWidth = 0;
    local_74.lfEscapement = *(int *)(local_10 + 0x18);
    if ((*(byte *)(local_10 + 0x1d) & 1) == 0) {
      local_74.lfWeight = 400;
    }
    else {
      local_74.lfWeight = 700;
    }
    local_74.lfItalic = (*(byte *)(local_10 + 0x1d) & 2) != 0;
    local_74.lfUnderline = (*(byte *)(local_10 + 0x1d) & 4) != 0;
    local_74.lfStrikeOut = (*(byte *)(local_10 + 0x1d) & 8) != 0;
    local_74.lfCharSet = *(BYTE *)(local_10 + 0x1e);
    if ((local_74.lfCharSet == '\x01') && (DAT_0067d212 != '\x01')) {
      local_74.lfCharSet = DAT_0067d212;
    }
    local_74.lfOrientation = local_74.lfEscapement;
    FUN_00408508(&local_78,local_10 + 0x1f);
    iVar2 = FUN_00415770(local_78,L"Default");
    if (iVar2 == 0) {
      FUN_0040b914(s_MS_Sans_Serif_0067d213,&local_8);
      FUN_004177c8(local_74.lfFaceName,local_8,0x1f);
    }
    else {
      FUN_0040b914(local_10 + 0x1f,&local_c);
      FUN_004177c8(local_74.lfFaceName,local_c,0x1f);
    }
    if (((*(int *)PTR_DAT_0068966c == 1) && (cVar1 = FUN_004660a8(), cVar1 == -0x80)) &&
       (cVar1 = FUN_0045b7a0(local_10 + 0x10), cVar1 != '\0')) {
      local_74.lfCharSet = 0x80;
    }
    local_74.lfQuality = '\0';
    if (local_74.lfOrientation == 0) {
      local_74.lfOutPrecision = '\0';
    }
    else {
      local_74.lfOutPrecision = '\a';
    }
    local_74.lfClipPrecision = '\0';
    cVar1 = FUN_0045bb98(param_1);
    if (cVar1 == '\x01') {
      local_74.lfPitchAndFamily = '\x02';
    }
    else if (cVar1 == '\x02') {
      local_74.lfPitchAndFamily = '\x01';
    }
    else {
      local_74.lfPitchAndFamily = '\0';
    }
    pHVar3 = CreateFontIndirectW(&local_74);
    *(HFONT *)(local_10 + 8) = pHVar3;
  }
  *in_FS_OFFSET = uStack_98;
  local_18 = DAT_0068f150;
  uStack_98 = 0x45b99d;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_0068f150 + 8));
  return;
}
