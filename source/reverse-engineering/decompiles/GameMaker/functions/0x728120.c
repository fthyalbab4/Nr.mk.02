// rea decompile_all
// name: FUN_00728120
// address: 0x728120
// body: available
// range: 0x728120-0x72817e inclusive
// range: 0x7281a0-0x728392 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00728120(int param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  HDC pHVar4;
  HPALETTE pHVar5;
  HBITMAP h;

  FUN_00404f08(param_1 + 0x21,0x428,0);
  FUN_00727d88(param_1);
  cVar1 = *(char *)(param_1 + 0x461);
  if (cVar1 == '\0') {
LAB_00728160:
    switch(*(undefined1 *)(param_1 + 0x460)) {
    case 1:
    case 4:
    case 8:
      FUN_007280d4(*(undefined1 *)(param_1 + 0x460),1);
      break;
    case 2:
      FUN_007280d4(4,1);
      break;
    case 0x10:
      FUN_007280d4(8,1);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if ((byte)(cVar1 - 3U) < 2) goto LAB_00728160;
      if (cVar1 != '\x06') goto switchD_00728178_caseD_0;
    }
    FUN_007280d4(0x18,0);
  }
switchD_00728178_caseD_0:
  *(uint *)(param_1 + 0x468) =
       ((uint)*(ushort *)(param_1 + 0x2f) * *(int *)(param_1 + 0x458) + 0x1f & 0xffffffe0) >> 3;
  if ((*(char *)(param_1 + 0x461) == '\x06') || (*(char *)(param_1 + 0x461) == '\x04')) {
    lVar2 = (longlong)*(int *)(param_1 + 0x458) * (longlong)*(int *)(param_1 + 0x45c);
    uVar3 = FUN_0040431c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    *(undefined4 *)(param_1 + 0x454) = uVar3;
    FUN_00404f08(uVar3,*(int *)(param_1 + 0x458) * *(int *)(param_1 + 0x45c),0);
  }
  if (*(char *)(param_1 + 0x460) == '\x10') {
    lVar2 = (longlong)*(int *)(param_1 + 0x468) * (longlong)*(int *)(param_1 + 0x45c);
    uVar3 = FUN_0040431c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    *(undefined4 *)(param_1 + 0x44c) = uVar3;
    FUN_00404f08(uVar3,*(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c),0);
  }
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)(param_1 + 0x18) = pHVar4;
  FUN_0045ceb4(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x128),pHVar4);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(char *)(param_1 + 0x461) == '\x03') {
      pHVar5 = CreateHalftonePalette(*(HDC *)(param_1 + 0x18));
      *(HPALETTE *)(param_1 + 0x1c) = pHVar5;
    }
    else {
      uVar3 = FUN_00727fdc(param_1,*(undefined1 *)(param_1 + 0x460));
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    ResizePalette(*(HPALETTE *)(param_1 + 0x1c),1 << ((byte)*(undefined2 *)(param_1 + 0x2f) & 0x1f))
    ;
    *(int *)(param_1 + 0x41) = 1 << ((byte)*(undefined2 *)(param_1 + 0x2f) & 0x1f);
    SelectPalette(*(HDC *)(param_1 + 0x18),*(HPALETTE *)(param_1 + 0x1c),0);
    RealizePalette(*(HDC *)(param_1 + 0x18));
    FUN_0072806c(param_1,*(undefined4 *)(param_1 + 0x1c));
  }
  h = CreateDIBSection(*(HDC *)(param_1 + 0x18),(BITMAPINFO *)(param_1 + 0x21),0,
                       (void **)(param_1 + 0x450),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x14) = h;
  SelectObject(*(HDC *)(param_1 + 0x18),h);
  FUN_00404f08(*(undefined4 *)(param_1 + 0x450),
               *(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c),0);
  return;
}
