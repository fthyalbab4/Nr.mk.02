// rea decompile_all
// name: FUN_0048ee88
// address: 0x48ee88
// body: available
// range: 0x48ee88-0x48f014 inclusive
// range: 0x48f01c-0x48f022 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48ef49 (push 0x48f015 followed by fs-segment stack chaining); handler 0x48f015 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ee88(int param_1)

{
  longlong lVar1;
  char cVar2;
  HDC hdc;
  HGDIOBJ pvVar3;
  int *piVar4;
  int iVar5;
  HWND hWnd;
  int y;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int cx;
  int cy;
  UINT uFlags;
  undefined4 uStack_78;
  tagTEXTMETRICW local_60;
  int local_24;
  int local_20;
  HDWP local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if ((*(int *)(*(int *)(param_1 + 0x278) + 8) != 0) && (*(char *)(param_1 + 0x288) == '\0')) {
    hdc = GetDC((HWND)0x0);
    pvVar3 = (HGDIOBJ)FUN_0045b10c(*(undefined4 *)(param_1 + 100));
    uStack_78 = 0x48eec8;
    pvVar3 = SelectObject(hdc,pvVar3);
    uStack_78 = 0x48eed4;
    GetTextMetricsW(hdc,&local_60);
    uStack_78 = 0x48eedb;
    SelectObject(hdc,pvVar3);
    uStack_78 = 0x48eee3;
    ReleaseDC((HWND)0x0,hdc);
    iVar5 = *(int *)(*(int *)(param_1 + 0x278) + 8);
    local_c = *(int *)(param_1 + 0x284);
    local_8 = (iVar5 + local_c + -1) / local_c;
    local_c = (*(int *)(param_1 + 0x48) + -10) / local_c;
    local_18 = (*(int *)(param_1 + 0x4c) - local_60.tmHeight) + -5;
    local_10 = local_18 / local_8;
    local_14 = local_18 % local_8 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((local_18 % local_8 & 1U) != 0);
    }
    local_14 = local_14 + local_60.tmHeight + 1;
    local_1c = BeginDeferWindowPos(iVar5);
    uStack_78 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_78;
    iVar5 = *(int *)(*(int *)(param_1 + 0x278) + 8);
    if (-1 < iVar5 + -1) {
      local_18 = 0;
      local_24 = iVar5;
      do {
        piVar4 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 0x278),local_18);
        (**(code **)(*piVar4 + 0x80))(piVar4,*(undefined1 *)(param_1 + 0x61));
        lVar1 = (longlong)(local_18 / local_8) * (longlong)local_c;
        local_20 = (int)lVar1 + 8;
        cVar2 = FUN_00405d08(piVar4,(int)((ulonglong)lVar1 >> 0x20));
        if (cVar2 != '\0') {
          iVar5 = FUN_004edf8c(param_1);
          local_20 = (iVar5 - local_20) - local_c;
        }
        uFlags = 0x14;
        y = (local_18 % local_8) * local_10 + local_14;
        hWndInsertAfter = (HWND)0x0;
        iVar5 = local_20;
        cx = local_c;
        cy = local_10;
        hWnd = (HWND)FUN_004f76a8(piVar4);
        local_1c = DeferWindowPos(local_1c,hWnd,hWndInsertAfter,iVar5,y,cx,cy,uFlags);
        FUN_004ee5c0(piVar4,1);
        local_18 = local_18 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    *in_FS_OFFSET = uStack_78;
    uStack_78 = 0x48f014;
    EndDeferWindowPos(local_1c);
    return;
  }
  return;
}
