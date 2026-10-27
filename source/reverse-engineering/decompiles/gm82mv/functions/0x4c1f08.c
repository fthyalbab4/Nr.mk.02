// rea decompile_all
// name: FUN_004c1f08
// address: 0x4c1f08
// body: available
// range: 0x4c1f08-0x4c2141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1f39 (push 0x4c2142 followed by fs-segment stack chaining); handler 0x4c2142 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1f08(int param_1,HDC param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  UINT edge;
  UINT grfFlags;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  tagRECT local_20;
  int local_10;
  HDC local_c;
  int local_8;

  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
  local_c = param_2;
  local_8 = param_1;
  local_10 = SaveDC(param_2);
  uVar8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  FUN_004b9a30(local_c,param_3,param_4);
  IntersectClipRect(local_c,0,0,*(int *)(local_8 + 0x48),*(int *)(local_8 + 0x4c));
  grfFlags = 0;
  edge = 0;
  iVar6 = -0x14;
  pHVar2 = (HWND)FUN_004c45dc(local_8);
  uVar3 = GetWindowLongW(pHVar2,iVar6);
  if ((uVar3 & 0x200) == 0) {
    iVar6 = -0x10;
    pHVar2 = (HWND)FUN_004c45dc(local_8);
    uVar3 = GetWindowLongW(pHVar2,iVar6);
    if ((uVar3 & 0x800000) != 0) {
      edge = 3;
      grfFlags = 0xa00f;
    }
  }
  else {
    edge = 10;
    grfFlags = 0x200f;
  }
  if (edge == 10) {
    FUN_004d08e8();
    cVar1 = FUN_004d09f4();
    if (cVar1 != '\0') {
      if ((*(byte *)(local_8 + 0x1c) & 0x10) != 0) {
        cVar1 = FUN_004d087c(local_8);
        if (cVar1 != '\0') goto LAB_004c206b;
      }
      SetRect(&local_20,0,0,*(int *)(local_8 + 0x48),*(int *)(local_8 + 0x4c));
      if ((*(byte *)(local_8 + 0x52) & 2) == 0) {
        *(uint *)(local_8 + 0x50) = *(uint *)(local_8 + 0x50) | 0x20000;
        FUN_004c1e5c(local_c,&local_20);
        *(uint *)(local_8 + 0x50) = *(uint *)(local_8 + 0x50) & 0xfffdffff;
      }
      else {
        FUN_004c1e5c(local_c,&local_20);
      }
      FUN_004b9a30(local_c,local_20.left,local_20.top);
      IntersectClipRect(local_c,0,0,local_20.right - local_20.left,local_20.bottom - local_20.top);
      goto LAB_004c20c2;
    }
  }
LAB_004c206b:
  if (grfFlags != 0) {
    SetRect(&local_20,0,0,*(int *)(local_8 + 0x48),*(int *)(local_8 + 0x4c));
    DrawEdge(local_c,&local_20,edge,grfFlags);
    FUN_004b9a30(local_c,local_20.left,local_20.top);
    IntersectClipRect(local_c,0,0,local_20.right - local_20.left,local_20.bottom - local_20.top);
  }
LAB_004c20c2:
  FUN_004bcb48(local_8,0x14,local_c,0);
  FUN_004bcb48(local_8,0xf,local_c,0);
  if ((*(int *)(local_8 + 0x1e0) != 0) &&
     (iVar6 = *(int *)(*(int *)(local_8 + 0x1e0) + 8), -1 < iVar6 + -1)) {
    iVar5 = 0;
    do {
      uVar7 = 0x4c210e;
      iVar4 = FUN_00438ec4(*(undefined4 *)(local_8 + 0x1e0),iVar5);
      if (*(char *)(iVar4 + 0x59) != '\0') {
        uVar8 = *(undefined4 *)(iVar4 + 0x44);
        FUN_004c1f08(iVar4,local_c,*(undefined4 *)(iVar4 + 0x40),uVar7);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *in_FS_OFFSET = uVar8;
  RestoreDC(local_c,local_10);
  return;
}
