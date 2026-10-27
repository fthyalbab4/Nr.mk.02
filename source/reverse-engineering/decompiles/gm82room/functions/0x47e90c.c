// rea decompile_all
// name: FUN_0047e90c
// address: 0x47e90c
// body: available
// range: 0x47e90c-0x47e9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e90c(int param_1,HDC param_2)

{
  HWND pHVar1;
  HBRUSH hbr;
  LPRECT ptVar2;
  tagRECT *lpRect;
  UINT cPoints;
  tagRECT local_2c;
  tagRECT local_1c;

  lpRect = &local_2c;
  pHVar1 = (HWND)FUN_004c45dc(param_1);
  GetClientRect(pHVar1,lpRect);
  ptVar2 = &local_1c;
  pHVar1 = (HWND)FUN_004c45dc(param_1);
  GetWindowRect(pHVar1,ptVar2);
  cPoints = 2;
  ptVar2 = &local_1c;
  pHVar1 = (HWND)FUN_004c45dc(param_1);
  MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)ptVar2,cPoints);
  FUN_0040c4a8(&local_2c,-local_1c.left,-local_1c.top);
  ExcludeClipRect(param_2,local_2c.left,local_2c.top,local_2c.right,local_2c.bottom);
  FUN_0040c4a8(&local_1c,-local_1c.left,-local_1c.top);
  DrawEdge(param_2,&local_1c,
           *(uint *)(&DAT_00681350 + (uint)*(byte *)(param_1 + 0x271) * 4) |
           *(uint *)(&DAT_0068135c + (uint)*(byte *)(param_1 + 0x272) * 4),
           (uint)*(byte *)(param_1 + 0x270) |
           *(uint *)(&DAT_00681368 + (uint)*(byte *)(param_1 + 0x1e9) * 4) | 0x2000);
  IntersectClipRect(param_2,local_1c.left,local_1c.top,local_1c.right,local_1c.bottom);
  hbr = (HBRUSH)FUN_0045c344(*(undefined4 *)(param_1 + 0x1c0));
  FillRect(param_2,&local_1c,hbr);
  return;
}
