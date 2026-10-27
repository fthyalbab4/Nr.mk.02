// rea decompile_all
// name: FUN_004c2160
// address: 0x4c2160
// body: available
// range: 0x4c2160-0x4c226c inclusive
// range: 0x4c2274-0x4c2293 inclusive
// range: 0x4c229b-0x4c2376 inclusive
// range: 0x4c23b7-0x4c23bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c21de (push 0x4c2294 followed by fs-segment stack chaining); handler 0x4c2294 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c2207 (push 0x4c226d followed by fs-segment stack chaining); handler 0x4c226d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c22d1 (push 0x4c23b0 followed by fs-segment stack chaining); handler 0x4c23b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c22f8 (push 0x4c2377 followed by fs-segment stack chaining); handler 0x4c2377 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2160(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  HDC pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  tagPAINTSTRUCT *ptVar6;
  undefined1 *puVar7;
  tagPAINTSTRUCT local_58;
  HPAINTBUFFER local_18;
  HGDIOBJ local_14;
  HBITMAP local_10;
  HDC local_c;
  int *local_8;

  puVar7 = &stack0xfffffffc;
  local_8 = param_1;
  if (((char)param_1[0x98] == '\0') || (*(int *)(param_2 + 4) != 0)) {
    if (((*(byte *)((int)param_1 + 0x55) & 1) == 0) && (iVar2 = FUN_004c00dc(param_1), iVar2 == 0))
    {
      (**(code **)(*local_8 + -0x10))(local_8,param_2);
      return;
    }
    FUN_004c1974(local_8,param_2);
    return;
  }
  cVar1 = FUN_00449fc8();
  if (cVar1 == '\0') {
    ptVar6 = &local_58;
    pHVar3 = (HWND)FUN_004c45dc(local_8);
    pHVar4 = BeginPaint(pHVar3,ptVar6);
    local_10 = CreateCompatibleBitmap
                         (pHVar4,local_58.rcPaint.right - local_58.rcPaint.left,
                          local_58.rcPaint.bottom - local_58.rcPaint.top);
    *in_FS_OFFSET = &stack0xffffff94;
    local_c = CreateCompatibleDC(pHVar4);
    local_14 = SelectObject(local_c,local_10);
    uVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff88;
    SetWindowOrgEx(local_c,local_58.rcPaint.left,local_58.rcPaint.top,(LPPOINT)0x0);
    FUN_004bcb48(local_8,0x14,local_c,local_c);
    *(HDC *)(param_2 + 4) = local_c;
    FUN_004c2160(local_8,param_2);
    *(undefined4 *)(param_2 + 4) = 0;
    BitBlt(pHVar4,local_58.rcPaint.left,local_58.rcPaint.top,
           local_58.rcPaint.right - local_58.rcPaint.left,
           local_58.rcPaint.bottom - local_58.rcPaint.top,local_c,local_58.rcPaint.left,
           local_58.rcPaint.top,0xcc0020);
    *in_FS_OFFSET = uVar5;
    SelectObject(local_c,local_14);
    return;
  }
  ptVar6 = &local_58;
  pHVar3 = (HWND)FUN_004c45dc(local_8);
  pHVar4 = BeginPaint(pHVar3,ptVar6);
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff94;
  local_18 = BeginBufferedPaint(pHVar4,&local_58.rcPaint,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,
                                &local_c);
  if (local_18 == (HPAINTBUFFER)0x0) {
    *in_FS_OFFSET = uVar5;
    ptVar6 = &local_58;
    pHVar3 = (HWND)FUN_004c45dc(local_8,uVar5,puVar7);
    EndPaint(pHVar3,ptVar6);
    return;
  }
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff88;
  FUN_004bcb48(local_8,0x14,local_c,local_c);
  FUN_004bcb48(local_8,0x318,local_c,4);
  cVar1 = FUN_004061f8(local_8,&PTR_LAB_004d9848);
  if (cVar1 == '\0') {
    BufferedPaintSetAlpha(local_18,&local_58.rcPaint,0xff);
  }
  *in_FS_OFFSET = uVar5;
  EndBufferedPaint(local_18,-1);
  return;
}
