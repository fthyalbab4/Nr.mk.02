// rea decompile_all
// name: FUN_00726560
// address: 0x726560
// body: available
// range: 0x726560-0x7267b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00726560(HDC param_1,void *param_2,BITMAPINFOHEADER *param_3,COLORREF param_4,int *param_5,
                 BITMAPINFO *param_6)

{
  int x1;
  int y1;
  HDC hdc;
  HBITMAP pHVar1;
  HGDIOBJ pvVar2;
  int wSrc;
  int hSrc;
  int iVar3;
  HDC hdc_00;
  HDC hdc_01;
  HDC hdc_02;
  HBITMAP h;
  HBITMAP h_00;
  HGDIOBJ pvVar4;
  HGDIOBJ h_01;
  HGDIOBJ h_02;
  COLORREF color;
  uint uVar5;
  int iVar6;

  x1 = *param_5;
  y1 = param_5[1];
  iVar3 = param_5[2];
  iVar6 = param_5[3];
  hdc = CreateCompatibleDC(param_1);
  pHVar1 = CreateDIBitmap(param_1,param_3,4,param_2,param_6,0);
  pvVar2 = SelectObject(hdc,pHVar1);
  uVar5 = param_3->biWidth >> 0x1f;
  wSrc = (param_3->biWidth ^ uVar5) - uVar5;
  uVar5 = param_3->biHeight >> 0x1f;
  hSrc = (param_3->biHeight ^ uVar5) - uVar5;
  iVar3 = iVar3 - x1;
  iVar6 = iVar6 - y1;
  hdc_00 = CreateCompatibleDC(param_1);
  hdc_01 = CreateCompatibleDC(param_1);
  hdc_02 = CreateCompatibleDC(param_1);
  pHVar1 = CreateBitmap(iVar3,iVar6,1,1,(void *)0x0);
  h = CreateBitmap(iVar3,iVar6,1,1,(void *)0x0);
  h_00 = CreateCompatibleBitmap(param_1,iVar3,iVar6);
  pvVar4 = SelectObject(hdc_00,pHVar1);
  h_01 = SelectObject(hdc_01,h);
  h_02 = SelectObject(hdc_02,h_00);
  color = SetBkColor(hdc,param_4);
  StretchBlt(hdc_01,0,0,iVar3,iVar6,hdc,0,0,wSrc,hSrc,0xcc0020);
  SetBkColor(hdc,color);
  BitBlt(hdc_00,0,0,iVar3,iVar6,hdc_01,0,0,0x330008);
  BitBlt(hdc_02,0,0,iVar3,iVar6,param_1,x1,y1,0xcc0020);
  BitBlt(hdc_02,0,0,iVar3,iVar6,hdc_01,0,0,0x8800c6);
  StretchBlt(hdc,0,0,wSrc,hSrc,hdc_00,0,0,iVar3,iVar6,0x8800c6);
  StretchBlt(hdc_02,0,0,iVar3,iVar6,hdc,0,0,wSrc,hSrc,0xee0086);
  BitBlt(param_1,x1,y1,iVar3,iVar6,hdc_02,0,0,0xcc0020);
  pvVar4 = SelectObject(hdc_00,pvVar4);
  DeleteObject(pvVar4);
  pvVar4 = SelectObject(hdc_01,h_01);
  DeleteObject(pvVar4);
  pvVar4 = SelectObject(hdc_02,h_02);
  DeleteObject(pvVar4);
  pvVar2 = SelectObject(hdc,pvVar2);
  DeleteObject(pvVar2);
  DeleteDC(hdc_02);
  DeleteDC(hdc_00);
  DeleteDC(hdc_01);
  DeleteDC(hdc);
  return;
}
